print "********************************************";
print "*                                          *";
print "*             TOSSIM Script                *";
print "*                                          *";
print "********************************************";

import sys;
import time;

from TOSSIM import *;

t = Tossim([]);


topofile="topology.txt";
modelfile="meyer-heavy.txt";


print "Initializing mac....";
mac = t.mac();
print "Initializing radio channels....";
radio=t.radio();
print "    using topology file:",topofile;
print "    using noise file:",modelfile;
print "Initializing simulator....";
t.init();


simulation_outfile = "simulation.txt";
#print "Saving sensors simulation output to:", simulation_outfile;
simulation_out = open(simulation_outfile, "w");

# -------> SE VUOI FAR STAMPARE L'OUTPUT IN simulation.txt TOGLI L'ASTERISCO AL PRIMO out E METTILO AL SECONDO <-----------
#out = open(simulation_outfile, "w");
out = sys.stdout;

#Add debug channel
print "Activate debug message on channel main"
t.addChannel("main",out);

for i in range(0,5) :

    print "Creo nodo " + str(i) + "..."
    node1 =t.getNode(i);
    time1 = 0*t.ticksPerSecond();
    node1.bootAtTime(time1);


print "Creating radio channels..."
f = open(topofile, "r");
lines = f.readlines()
for line in lines:
  s = line.split()
  if (len(s) > 0):
    print ">>>Creando canale radio dal nodo ", s[0], " al nodo ", s[1], " con gain ", s[2], " dBm"
    radio.add(int(s[0]), int(s[1]), float(s[2]))


#Creazione del modello di canale
print "Initializing Closest Pattern Matching (CPM)...";
noise = open(modelfile, "r")
lines = noise.readlines()
compl = 0;
mid_compl = 0;

print "Reading noise model data file:", modelfile;
print "Loading:",
for line in lines:
    str = line.strip()
    if (str != "") and ( compl < 10000 ):
        val = int(str)
        mid_compl = mid_compl + 1;
        if ( mid_compl > 5000 ):
            compl = compl + mid_compl;
            mid_compl = 0;
            sys.stdout.write ("#")
            sys.stdout.flush()
        for i in range(0, 5):
            t.getNode(i).addNoiseTraceReading(val)
print "Done!";

for i in range(0, 5):
    print ">>>Creating noise model for node:",i;
    t.getNode(i).createNoiseModel()

print "Inizio simulazione con TOSSIM! \n\n\n";

for i in range(0, 100000):
	t.runNextEvent()

	
print "\n\n\nSimulazione finita!";

