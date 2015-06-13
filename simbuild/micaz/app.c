#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 37 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__ 
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__ 
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__ 
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__ 
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__ 
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__ 
typedef unsigned long long int uint_fast64_t;
#line 126
typedef int intptr_t;


typedef unsigned int uintptr_t;








__extension__ 
typedef long long int intmax_t;
__extension__ 
typedef unsigned long long int uintmax_t;
# 35 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 292
#line 288
typedef struct __nesc_unnamed4242 {

  long long int quot;
  long long int rem;
} imaxdiv_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 44 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, 
const void *__restrict __src, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 65
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 128
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 143
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 40 "/usr/include/xlocale.h" 3
#line 28
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 262 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 399
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 67 "/usr/include/i386-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4243 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4244 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 72 "/usr/include/stdlib.h" 3
#line 68
typedef union __nesc_unnamed4245 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 102
#line 98
typedef struct __nesc_unnamed4246 {

  int quot;
  int rem;
} div_t;







#line 106
typedef struct __nesc_unnamed4247 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 118
typedef struct __nesc_unnamed4248 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 158
__extension__ 
#line 195
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 31 "/usr/include/i386-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ 
#line 47
typedef signed long long int __int64_t;
__extension__ 
#line 48
typedef unsigned long long int __uint64_t;







__extension__ 
#line 56
typedef long long int __quad_t;
__extension__ 
#line 57
typedef unsigned long long int __u_quad_t;
#line 134
__extension__ 
#line 134
typedef __u_quad_t __dev_t;
__extension__ 
#line 135
typedef unsigned int __uid_t;
__extension__ 
#line 136
typedef unsigned int __gid_t;
__extension__ 
#line 137
typedef unsigned long int __ino_t;
__extension__ 
#line 138
typedef __u_quad_t __ino64_t;
__extension__ 
#line 139
typedef unsigned int __mode_t;
__extension__ 
#line 140
typedef unsigned int __nlink_t;
__extension__ 
#line 141
typedef long int __off_t;
__extension__ 
#line 142
typedef __quad_t __off64_t;
__extension__ 
#line 143
typedef int __pid_t;
__extension__ 
#line 144
typedef struct __nesc_unnamed4249 {
#line 144
  int __val[2];
} 
#line 144
__fsid_t;
__extension__ 
#line 145
typedef long int __clock_t;
__extension__ 
#line 146
typedef unsigned long int __rlim_t;
__extension__ 
#line 147
typedef __u_quad_t __rlim64_t;
__extension__ 
#line 148
typedef unsigned int __id_t;
__extension__ 
#line 149
typedef long int __time_t;
__extension__ 
#line 150
typedef unsigned int __useconds_t;
__extension__ 
#line 151
typedef long int __suseconds_t;

__extension__ 
#line 153
typedef int __daddr_t;
__extension__ 
#line 154
typedef long int __swblk_t;
__extension__ 
#line 155
typedef int __key_t;


__extension__ 
#line 158
typedef int __clockid_t;


__extension__ 
#line 161
typedef void *__timer_t;


__extension__ 
#line 164
typedef long int __blksize_t;




__extension__ 
#line 169
typedef long int __blkcnt_t;
__extension__ 
#line 170
typedef __quad_t __blkcnt64_t;


__extension__ 
#line 173
typedef unsigned long int __fsblkcnt_t;
__extension__ 
#line 174
typedef __u_quad_t __fsblkcnt64_t;


__extension__ 
#line 177
typedef unsigned long int __fsfilcnt_t;
__extension__ 
#line 178
typedef __u_quad_t __fsfilcnt64_t;

__extension__ 
#line 180
typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ 
#line 189
typedef int __intptr_t;


__extension__ 
#line 192
typedef unsigned int __socklen_t;
# 34 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 61
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 99
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 60 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 76
typedef __time_t time_t;
#line 92
typedef __clockid_t clockid_t;
#line 104
typedef __timer_t timer_t;
# 151 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 201
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 24 "/usr/include/i386-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 29
typedef struct __nesc_unnamed4250 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 38 "/usr/include/i386-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  long int tv_nsec;
};
# 31 "/usr/include/i386-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 49 "/usr/include/i386-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 76
#line 65
typedef struct __nesc_unnamed4251 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 32 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 229 "/usr/include/i386-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 36 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;






#line 39
typedef union __nesc_unnamed4252 {

  char __size[36];
  long int __align;
} pthread_attr_t;





#line 46
typedef struct __pthread_internal_slist {

  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#line 73
#line 54
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union  {

      int __spins;
      __pthread_slist_t __list;
    } ;
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;





#line 75
typedef union __nesc_unnamed4254 {

  char __size[4];
  long int __align;
} pthread_mutexattr_t;
#line 99
#line 84
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 101
typedef union __nesc_unnamed4257 {

  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 139
#line 119
typedef union __nesc_unnamed4258 {

  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;





#line 141
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 156
typedef union __nesc_unnamed4261 {

  char __size[20];
  long int __align;
} pthread_barrier_t;





#line 162
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 349 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 418
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  unsigned long long int __a;
};
#line 471
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 488
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 742
typedef int (*__compar_fn_t)(const void *arg_0x4038be48, const void *arg_0x4038a010);
#line 776
__extension__ 
#line 793
__extension__ 
# 36 "/usr/include/i386-linux-gnu/bits/mathdef.h" 3
typedef long double float_t;

typedef long double double_t;
# 110 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 155
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 186
extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 252
extern double erfc(double arg_0x403d3588) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 203 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN, 

  FP_INFINITE, 

  FP_ZERO, 

  FP_SUBNORMAL, 

  FP_NORMAL
};
#line 303
#line 296
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 321
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 48 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 65
typedef struct _IO_FILE __FILE;
# 95 "/usr/include/wchar.h" 3
#line 83
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 26 "/usr/include/_G_config.h" 3
#line 22
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 27
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
#line 53
typedef int _G_int16_t __attribute((__mode__(__HI__))) ;
typedef int _G_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int _G_uint16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int _G_uint32_t __attribute((__mode__(__SI__))) ;
# 40 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 172 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 172
struct _IO_FILE;









typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 208
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 273
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;








  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 366
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 80 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 111
typedef _G_fpos_t fpos_t;
#line 169
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 243
extern int fflush(FILE *__stream);
#line 307
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 357
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 387
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 855
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 65 "/home/user/tinyos-main/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/home/user/tinyos-main/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/home/user/tinyos-main/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/home/user/tinyos-main/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 65 "/home/user/tinyos-main/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/home/user/tinyos-main/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 98
struct __nesc_attr_atleastonce {
};
#line 99
struct __nesc_attr_exactlyonce {
};
# 9 "/home/user/tinyos-main/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x40524490), 
int (*key_eq_fn)(void *arg_0x405248a8, void *arg_0x40524a10));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/home/user/tinyos-main/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 194U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/home/user/tinyos-main/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/home/user/tinyos-main/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 114
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 130
static inline void expand_heap(heap_t *heap);
#line 144
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 158
static void swap(node_t *first, node_t *second);
#line 171
static void down_heap(heap_t *heap, int findex);
#line 197
static void up_heap(heap_t *heap, int findex);
# 44 "/home/user/tinyos-main/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 57 "/usr/include/i386-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 93
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 51 "/home/user/tinyos-main/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 83
#line 73
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/home/user/tinyos-main/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/home/user/tinyos-main/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/home/user/tinyos-main/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/home/user/tinyos-main/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/home/user/tinyos-main/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/home/user/tinyos-main/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 233 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/home/user/tinyos-main/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x40643bc4, int arg_0x40643d10);
static double RandomUniform(void );
# 51 "/home/user/tinyos-main/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 84
void sim_noise_create_model(uint16_t node_id)   ;
#line 97
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 113
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 192
void sim_noise_dist(uint16_t node_id)   ;
#line 245
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 283
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id)   ;
#line 364
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 419
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/home/user/tinyos-main/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);
# 6 "/home/user/tinyos-main/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/home/user/tinyos-main/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 14
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;





#line 18
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) tossim_metadata_t;
# 83 "/home/user/tinyos-main/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 53 "/home/user/tinyos-main/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/home/user/tinyos-main/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/home/user/tinyos-main/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;
# 51 "/home/user/tinyos-main/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 6 "BSN.h"
#line 4
typedef nx_struct my_msg {
  nx_uint16_t type;
} __attribute__((packed)) my_msg_t;










enum __nesc_unnamed4280 {
  AM_RADIO_BSN_MSG = 6
};
# 25 "/home/user/tinyos-main/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4281 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4282 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/home/user/tinyos-main/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4283 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/home/user/tinyos-main/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4284 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4285 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4286 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4287 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4288 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4289 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4290 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4291 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4292 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4293 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4294 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/home/user/tinyos-main/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4295 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/home/user/tinyos-main/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 41 "/home/user/tinyos-main/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4296 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4297 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4298 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4299 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 52 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4300 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4301 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4302 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4303 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4304 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4305 {

  uint8_t flat;
  struct __nesc_unnamed4306 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4307 {

  uint8_t flat;
  struct __nesc_unnamed4308 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4309 {

  uint8_t flat;
  struct __nesc_unnamed4310 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4311 {

  uint8_t flat;
  struct __nesc_unnamed4312 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4313 {

  uint8_t flat;
  struct __nesc_unnamed4314 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4315 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4316 {

  uint8_t flat;
  struct __nesc_unnamed4317 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4318 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4319 {

  uint8_t flat;
  struct __nesc_unnamed4320 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4321 {

  uint8_t flat;
  struct __nesc_unnamed4322 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4323 {

  uint8_t flat;
  struct __nesc_unnamed4324 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4325 {

  uint8_t flat;
  struct __nesc_unnamed4326 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 3 "ACC_DATA/ACC_DATA_1.h"
uint16_t DATA1[2400] = { 352, 1202, 1480, 565, 209, 857, 284, 225, 2345, 1815, 885, 1989, 475, 41, 468, 134, 81, 976, 923, 929, 440, 791, 470, 1068, 320, 678, 476, 199, 193, 516, 582, 752, 700, 531, 1930, 943, 213, 495, 898, 1122, 67, 158, 209, 205, 567, 20, 108, 411, 716, 727, 566, 51, 796, 730, 4, 1004, 504, 243, 148, 732, 714, 21, 362, 721, 1012, 56, 978, 486, 696, 1540, 403, 490, 126, 582, 501, 919, 932, 320, 116, 128, 930, 191, 130, 1040, 527, 457, 547, 160, 141, 764, 752, 69, 473, 1694, 437, 123, 54, 1267, 288, 1176, 551, 582, 66, 357, 199, 393, 321, 485, 1122, 127, 1401, 550, 888, 703, 630, 81, 942, 1285, 130, 792, 1906, 541, 904, 693, 307, 179, 720, 182, 460, 1345, 232, 540, 1034, 333, 185, 22, 874, 739, 229, 196, 15, 172, 1147, 187, 545, 642, 758, 350, 1312, 632, 341, 13, 23, 523, 668, 87, 468, 886, 147, 386, 193, 556, 734, 1655, 1085, 202, 824, 567, 116, 519, 873, 1527, 950, 219, 256, 296, 85, 120, 312, 565, 892, 298, 556, 219, 362, 681, 732, 826, 433, 44, 128, 143, 199, 15, 34, 541, 1001, 306, 137, 410, 120, 675, 622, 201, 89, 338, 171, 617, 106, 96, 349, 1102, 574, 317, 467, 770, 126, 180, 1003, 163, 697, 1051, 809, 150, 987, 291, 102, 181, 171, 291, 257, 820, 621, 486, 333, 210, 8, 1985, 300, 814, 699, 612, 230, 19, 120, 1026, 55, 1051, 64, 27, 481, 20, 152, 279, 244, 155, 1326, 1480, 1461, 221, 655, 1091, 387, 182, 277, 1095, 309, 795, 43, 428, 214, 710, 659, 427, 168, 619, 866, 606, 0, 36, 597, 390, 230, 819, 609, 157, 452, 427, 781, 1056, 16, 1277, 669, 565, 1, 46, 1629, 381, 1437, 1520, 52, 622, 270, 444, 562, 453, 294, 66, 541, 351, 588, 86, 96, 660, 1392, 331, 833, 251, 425, 541, 665, 309, 90, 191, 198, 262, 609, 116, 1397, 751, 412, 789, 166, 936, 14, 367, 1427, 746, 1636, 289, 916, 167, 108, 490, 179, 1033, 315, 215, 436, 56, 577, 212, 514, 1183, 1218, 396, 68, 369, 74, 593, 307, 82, 969, 564, 514, 202, 153, 693, 186, 57, 963, 126, 539, 62, 220, 593, 189, 229, 1203, 679, 1589, 629, 207, 281, 679, 1231, 616, 516, 574, 210, 366, 204, 374, 672, 596, 138, 1113, 398, 77, 458, 4157, 10191, 10907, 13865, 9282, 4798, 264, 6458, 9861, 7218, 6429, 4830, 1314, 2554, 4062, 5109, 3858, 2307, 3452, 3266, 5447, 5974, 5291, 4273, 1198, 1508, 3457, 5399, 2857, 1309, 1872, 3669, 4338, 3348, 182, 2330, 6170, 5547, 1065, 808, 6067, 10767, 11728, 12862, 9253, 3967, 1303, 5065, 8783, 8622, 8545, 5357, 2127, 2362, 3978, 4569, 4283, 4433, 2347, 5736, 6281, 5439, 5018, 1800, 157, 1874, 5768, 3834, 2916, 601, 1388, 3682, 5382, 3637, 93, 1195, 4464, 3678, 3195, 465, 3492, 11266, 11665, 12149, 10738, 3740, 1829, 5722, 9066, 9951, 6399, 4376, 933, 1179, 4686, 5232, 4326, 2126, 4675, 6253, 7054, 6504, 4887, 4282, 178, 705, 4653, 3427, 6368, 3590, 762, 3915, 5097, 1986, 792, 1491, 3814, 3867, 1479, 1310, 4645, 7883, 12606, 11973, 8356, 4059, 925, 5668, 10143, 10600, 8377, 3728, 848, 969, 4807, 4999, 4704, 6252, 3372, 5736, 6066, 4647, 5820, 3820, 3406, 620, 3879, 4445, 4970, 2845, 386, 2261, 6037, 3141, 878, 2286, 4198, 5308, 1487, 2883, 4768, 9395, 14197, 13124, 8710, 5671, 2832, 3381, 8361, 10024, 7377, 4024, 394, 3450, 4257, 3880, 3404, 5413, 5343, 5659, 7013, 6557, 4587, 2405, 832, 1966, 1970, 3244, 3787, 2290, 183, 3228, 4863, 4375, 2523, 1313, 3957, 3283, 1837, 133, 5265, 10319, 11411, 12272, 10519, 5323, 657, 4514, 9527, 8193, 5302, 4544, 590, 3715, 2145, 4913, 3981, 3721, 4188, 5826, 6034, 5484, 5343, 4462, 1774, 3435, 3300, 4383, 3072, 1309, 1418, 2443, 4203, 4594, 567, 2740, 4667, 5977, 5023, 1124, 3990, 8934, 12606, 12764, 7980, 4138, 336, 5361, 8253, 8065, 9311, 4382, 1743, 3682, 4266, 3261, 2866, 2388, 5667, 2947, 7793, 4403, 5093, 2305, 1169, 1668, 4812, 5475, 3420, 1111, 2082, 3705, 3042, 3408, 2679, 542, 2689, 4031, 3888, 1920, 4464, 8387, 13214, 12695, 9585, 4561, 595, 5659, 8180, 7905, 7193, 2551, 258, 3443, 3041, 4563, 5361, 4684, 5479, 4304, 7375, 7032, 5869, 2510, 1625, 1174, 3272, 5496, 5469, 1816, 1272, 3967, 4114, 3326, 156, 2551, 3470, 3776, 2120, 146, 6459, 11311, 13171, 12330, 9619, 3615, 1823, 5966, 8336, 9232, 7666, 4406, 1490, 937, 1111, 4129, 3789, 4556, 4462, 4612, 5371, 7662, 5258, 3294, 174, 2134, 3209, 4307, 5041, 3014, 2051, 5914, 5425, 3201, 903, 1957, 3623, 4274, 4865, 1074, 6576, 10243, 12907, 12991, 10795, 5894, 1121, 5066, 8567, 10635, 7353, 2913, 552, 1994, 2756, 1987, 4373, 4495, 5897, 5298, 5943, 6940, 6377, 4908, 518, 1108, 3322, 4804, 2637, 2816, 144, 3959, 2292, 3025, 2179, 1903, 2720, 5145, 2197, 2832, 7822, 8800, 14755, 13606, 10782, 2955, 1539, 7443, 9244, 10611, 7275, 4220, 1810, 862, 2824, 4533, 4819, 3582, 4078, 4885, 4483, 5849, 6385, 2530, 1852, 2549, 3735, 5495, 4217, 809, 999, 2289, 4099, 3792, 2198, 2289, 3956, 4129, 3836, 545, 8546, 9487, 14059, 12160, 8259, 3056, 723, 6314, 8619, 9508, 6620, 4506, 924, 3445, 2273, 4282, 4630, 3495, 5070, 4163, 6015, 6213, 5487, 3014, 932, 2896, 4532, 5469, 1818, 1130, 1494, 3746, 7441, 4447, 1765, 3316, 5178, 6801, 664, 908, 7042, 10335, 11754, 12426, 9222, 4075, 843, 6205, 8357, 8300, 7145, 2902, 255, 1879, 2956, 3103, 2375, 2664, 6461, 2697, 7931, 331, 67, 784, 79, 679, 562, 111, 126, 567, 118, 830, 165, 134, 1443, 508, 913, 253, 344, 998, 1179, 77, 210, 536, 321, 502, 510, 970, 354, 60, 498, 455, 840, 531, 811, 141, 1318, 17, 202, 615, 1097, 82, 347, 624, 560, 255, 758, 26, 295, 72, 164, 124, 677, 212, 502, 1143, 761, 1558, 1000, 110, 197, 458, 546, 455, 303, 579, 286, 588, 331, 263, 337, 522, 440, 778, 518, 189, 2, 240, 2311, 74, 1020, 1255, 400, 425, 1715, 361, 193, 510, 698, 1159, 277, 690, 425, 208, 1159, 990, 107, 185, 755, 751, 442, 439, 262, 440, 377, 510, 697, 362, 277, 237, 231, 177, 1681, 305, 1215, 681, 597, 157, 119, 160, 63, 544, 231, 115, 315, 548, 1664, 867, 84, 945, 854, 924, 1090, 1274, 711, 149, 720, 96, 1504, 1804, 91, 1250, 239, 556, 501, 739, 51, 1381, 469, 184, 764, 795, 318, 672, 571, 250, 281, 196, 590, 416, 44, 123, 191, 647, 258, 127, 183, 34, 508, 516, 923, 350, 1263, 116, 160, 588, 519, 625, 232, 1047, 346, 560, 879, 1638, 110, 231, 470, 855, 659, 518, 76, 362, 630, 1071, 499, 782, 1070, 1004, 876, 966, 27, 403, 861, 954, 1142, 135, 782, 526, 829, 98, 1072, 11, 543, 143, 1251, 352, 198, 1189, 600, 37, 858, 685, 228, 926, 985, 479, 322, 384, 488, 543, 377, 185, 747, 279, 417, 520, 589, 102, 1047, 74, 202, 299, 180, 290, 88, 12, 302, 893, 296, 1080, 1329, 294, 155, 547, 836, 404, 402, 190, 259, 571, 326, 70, 451, 217, 1550, 316, 424, 678, 878, 635, 137, 405, 336, 7, 29, 1933, 413, 31, 1758, 751, 362, 705, 675, 215, 427, 183, 161, 965, 1491, 1070, 272, 429, 194, 981, 593, 265, 476, 568, 276, 618, 879, 648, 1191, 245, 951, 405, 612, 692, 105, 188, 415, 956, 381, 1199, 294, 622, 470, 1499, 109, 1413, 1107, 840, 382, 146, 511, 252, 456, 74, 25, 58, 518, 933, 4, 450, 560, 705, 60, 166, 783, 397, 354, 947, 634, 132, 228, 845, 879, 381, 574, 915, 210, 1064, 696, 140, 575, 127, 272, 235, 24, 239, 1161, 145, 1789, 194, 370, 1037, 1789, 199, 518, 526, 865, 179, 178, 976, 942, 18, 605, 211, 433, 1255, 103, 197, 328, 470, 876, 1393, 35, 107, 415, 1056, 49, 310, 1431, 531, 469, 659, 284, 341, 716, 148, 265, 346, 660, 714, 1170, 199, 6, 332, 789, 342, 260, 316, 152, 402, 1103, 372, 790, 284, 60, 160, 144, 577, 210, 514, 239, 77, 114, 141, 100, 22, 300, 840, 406, 188, 392, 161, 1167, 1538, 1123, 155, 406, 472, 27, 432, 413, 400, 513, 1597, 198, 38, 376, 128, 33, 1151, 169, 491, 374, 324, 650, 706, 509, 1481, 370, 591, 259, 3, 286, 741, 101, 497, 118, 136, 588, 270, 359, 97, 237, 40, 142, 916, 117, 608, 72, 1030, 367, 275, 101, 180, 158, 495, 191, 300, 1150, 610, 541, 534, 350, 159, 66, 1065, 992, 673, 497, 1362, 1456, 294, 0, 496, 265, 520, 563, 44, 1074, 1589, 186, 751, 119, 36, 451, 913, 934, 586, 25, 238, 98, 1274, 999, 358, 1317, 928, 8, 615, 1140, 11, 144, 685, 623, 521, 47, 507, 507, 174, 154, 1230, 399, 72, 182, 57, 114, 297, 396, 522, 236, 1235, 201, 664, 156, 317, 215, 312, 85, 390, 291, 867, 563, 926, 338, 711, 463, 198, 787, 13, 223, 631, 730, 1039, 257, 973, 226, 868, 377, 485, 777, 1353, 370, 1311, 1457, 323, 30, 305, 50, 602, 1258, 24, 803, 1247, 1556, 153, 265, 781, 1104, 271, 329, 54, 103, 346, 474, 557, 522, 475, 1105, 253, 331, 267, 703, 634, 177, 416, 413, 52, 902, 923, 93, 845, 324, 409, 612, 183, 131, 90, 579, 54, 396, 242, 549, 185, 2340, 2233, 752, 516, 838, 383, 406, 351, 317, 71, 223, 607, 3, 747, 280, 119, 431, 383, 1059, 12, 279, 1333, 871, 210, 541, 150, 172, 588, 1414, 62, 623, 768, 1137, 244, 782, 625, 927, 22, 171, 343, 444, 442, 445, 205, 249, 1476, 766, 788, 433, 215, 988, 583, 629, 323, 289, 134, 641, 1031, 243, 145, 351, 172, 718, 360, 1425, 95, 438, 556, 37, 191, 403, 9, 270, 614, 547, 717, 210, 10, 763, 324, 797, 1043, 345, 174, 258, 1426, 784, 239, 1581, 485, 203, 355, 80, 631, 166, 1240, 800, 247, 34, 1281, 371, 51, 53, 521, 684, 526, 307, 31, 232, 824, 679, 280, 51, 1174, 522, 290, 412, 1005, 1791, 110, 314, 926, 639, 190, 764, 596, 158, 429, 836, 361, 57, 228, 651, 281, 658, 415, 685, 331, 218, 1072, 1250, 26, 457, 111, 1012, 1017, 568, 95, 253, 863, 522, 89, 274, 537, 560, 234, 1801, 992, 284, 151, 542, 545, 326, 1518, 520, 355, 366, 1295, 357, 90, 406, 4, 726, 122, 735, 162, 1023, 784, 159, 659, 1258, 410, 493, 140, 505, 5, 61, 613, 435, 230, 1062, 33, 533, 287, 563, 128, 583, 45, 1630, 1092, 273, 55, 58, 954, 144, 75, 45, 492, 452, 295, 1026, 52, 617, 428, 185, 737, 648, 993, 1460, 99, 762, 119, 153, 686, 1038, 163, 848, 237, 172, 709, 644, 73, 849, 1167, 43, 168, 265, 231, 529, 168, 469, 687, 116, 100, 822, 769, 958, 815, 102, 1058, 1472, 484, 1355, 757, 70, 1123, 301, 715, 107, 44, 656, 364, 886, 239, 296, 513, 811, 706, 23, 330, 802, 78, 629, 223, 114, 404, 566, 929, 131, 128, 99, 585, 239, 541, 181, 301, 143, 522, 995, 704, 2013, 342, 649, 166, 661, 33, 289, 556, 158, 395, 994, 45, 513, 931, 439, 448, 578, 986, 284, 530, 379, 500, 775, 383, 380, 368, 1020, 721, 115, 658, 990, 745, 421, 8, 599, 726, 538, 536, 83, 173, 2070, 804, 1521, 272, 139, 402, 346, 814, 103, 900, 571, 1028, 1209, 189, 623, 597, 106, 320, 146, 178, 766, 802, 1376, 256, 435, 460, 329, 354, 649, 648, 451, 562, 32, 436, 952, 904, 62, 280, 335, 430, 82, 348, 69, 739, 487, 749, 599, 118, 644, 252, 213, 850, 720, 428, 331, 312, 1344, 294, 1017, 609, 591, 91, 248, 94, 1052, 884, 294, 110, 734, 263, 484, 590, 1003, 331, 566, 247, 516, 195, 107, 398, 1071, 409, 885, 762, 619, 440, 378, 1367, 155, 510, 721, 561, 5, 614, 447, 170, 150, 344, 739, 361, 1216, 182, 699, 1376, 418, 243, 245, 456, 575, 677, 275, 394, 442, 718, 175, 122, 623, 518, 321, 1949, 408, 1258, 630, 366, 70, 141, 310, 895, 1073, 1326, 510, 360, 83, 196, 194, 787, 714, 235, 85, 481, 79, 745, 450, 309, 189, 912, 882, 0, 35, 1535, 818, 1841, 152, 188, 304, 252, 249, 67, 1060, 555, 377, 50, 87, 943, 1331, 641, 420, 341, 249, 1306, 1072, 366, 369, 222, 500, 739, 93, 1264, 440, 72, 243, 719, 261, 56, 1555, 311, 620, 536, 1041, 345, 1616, 559, 335, 169, 1286, 922, 326, 54, 1015, 1221, 88, 1013, 284, 67, 374, 323, 464, 883, 1150, 238, 411, 288, 985, 136, 986, 1186, 77, 804, 324, 595, 756, 824, 952, 1361, 116, 427, 103, 557, 183, 391, 160, 78, 845, 38, 341, 838, 37, 137, 126, 650, 378, 856, 478, 567, 62, 906, 854, 82, 391, 997, 440, 15, 772, 219, 1199, 282, 114, 1069, 891, 636, 94, 54, 470, 782, 702, 864, 793, 704, 441, 483, 701, 219, 270, 101, 363, 769, 660, 74, 478, 645, 34, 575, 665, 55, 1215, 719, 143, 521, 304, 401, 1471, 47, 567, 272, 731, 449, 680, 1194, 347, 1067, 1060, 173, 739, 366, 530, 761, 388, 159, 158, 538, 651, 227, 171, 121, 67, 581, 486, 912, 1621, 330, 539, 132, 660, 402, 432, 546, 248, 731, 437, 521, 680, 13, 406, 1182, 35, 117, 1162, 1644, 299, 1593, 309, 367, 804, 520, 1383, 524, 372, 1, 409, 83, 446, 844, 143, 1027, 513, 204, 429, 352, 215, 691, 1297, 1224, 1201, 556, 266, 460, 982, 90, 1040, 668, 908, 626, 394, 768, 378, 548, 559, 313, 198, 272, 28, 622, 355, 538, 702, 704, 570, 643, 1153, 97, 165, 400, 499, 167, 100, 365, 444, 557, 308, 157, 604, 594, 95, 915, 124, 553, 1274, 162, 289, 527, 188, 306, 3, 214, 789, 920, 135, 1305, 19, 1265, 617, 5, 222, 346, 693, 10, 1058, 535, 1309, 490, 131, 244, 555, 876, 1059, 322, 635, 311, 437, 314, 682, 538, 66, 710, 1215, 1179, 576, 424, 688, 867, 339, 16, 106, 397, 178, 235, 231, 87, 1752, 5, 465, 303, 346, 227, 370, 525, 1214, 35, 286, 184, 55, 478, 590, 869, 999, 329, 201, 615, 811, 22, 81, 180, 494, 999, 172, 1134, 664, 608, 815, 386, 977, 528, 729, 627, 893, 446, 287, 94, 224, 1349, 245, 125, 615, 533, 382, 1120, 256, 452, 294, 468, 862, 411, 872, 86, 1197, 351, 454, 451, 208, 107, 760, 84, 681, 77, 425, 25, 131, 578, 37, 551, 101, 779, 272, 432 };
uint16_t DATA2[2400] = { 1290, 133, 475, 968, 1940, 201, 416, 418, 1909, 1733, 639, 2053, 1385, 770, 396, 288, 1151, 3750, 702, 448, 784, 549, 904, 880, 198, 1299, 1097, 622, 1641, 1170, 1173, 411, 874, 1085, 9, 309, 856, 2575, 1159, 111, 753, 655, 635, 313, 1020, 1211, 771, 1806, 2426, 2487, 2331, 1209, 2619, 468, 441, 328, 375, 899, 1066, 1040, 501, 1797, 14, 268, 539, 870, 296, 279, 58, 601, 579, 1383, 204, 169, 668, 39, 599, 782, 149, 1058, 118, 8, 120, 1207, 1215, 1260, 2339, 262, 1233, 458, 2437, 1215, 1608, 429, 1169, 378, 2969, 63, 2034, 582, 1195, 65, 1413, 404, 393, 258, 192, 135, 3669, 515, 1298, 1701, 1995, 814, 1976, 2201, 1034, 858, 1632, 1694, 805, 317, 720, 613, 251, 301, 759, 630, 507, 553, 1426, 2948, 2365, 828, 1725, 2034, 1925, 232, 4543, 281, 637, 434, 1662, 1429, 1241, 575, 450, 77, 3323, 575, 573, 1098, 1714, 1041, 259, 851, 1090, 1174, 2377, 2053, 1110, 144, 1522, 521, 333, 1583, 1355, 1698, 3628, 649, 614, 862, 2250, 1927, 910, 669, 149, 301, 1916, 3778, 62, 606, 756, 1109, 2382, 684, 212, 1392, 590, 358, 133, 1873, 1002, 538, 1035, 212, 2592, 1042, 1360, 3094, 1541, 521, 2558, 1186, 894, 2645, 596, 55, 601, 346, 383, 507, 726, 1237, 78, 753, 1890, 309, 1339, 183, 107, 1649, 1925, 43, 2218, 624, 483, 2873, 2013, 1189, 527, 706, 151, 2388, 2650, 835, 247, 194, 2338, 693, 956, 1232, 340, 1591, 2129, 490, 329, 1213, 129, 2208, 361, 463, 1573, 218, 1017, 1811, 1479, 3231, 2042, 2709, 95, 995, 107, 208, 9, 1395, 2155, 2073, 384, 1557, 1410, 1700, 160, 971, 1102, 458, 39, 2559, 602, 523, 295, 367, 1713, 373, 1038, 315, 124, 1040, 1258, 1425, 848, 829, 2495, 1520, 455, 2222, 1205, 28, 392, 2256, 240, 340, 1776, 1517, 999, 328, 2161, 239, 807, 494, 915, 399, 1443, 585, 612, 1882, 1281, 794, 149, 1002, 878, 493, 1005, 1997, 756, 558, 56, 1628, 662, 427, 1457, 614, 423, 131, 395, 31, 29, 11, 1218, 119, 3462, 637, 257, 1258, 1809, 1234, 997, 312, 273, 32, 37, 184, 311, 880, 1370, 1266, 288, 1854, 1211, 779, 1863, 1845, 1349, 271, 1758, 1747, 1684, 2121, 867, 298, 296, 1266, 125, 336, 3028, 249, 227, 18, 803, 2716, 835, 98, 1472, 43, 128, 730, 807, 2103, 1007, 114, 2234, 31, 380, 1861, 623, 1897, 1295, 1244, 460, 1143, 522, 336, 288, 2243, 1580, 2324, 95, 2256, 920, 1318, 1450, 2347, 2834, 1074, 49, 2573, 708, 2251, 1075, 73, 463, 2219, 932, 829, 515, 1151, 195, 2008, 697, 996, 456, 915, 2647, 2351, 864, 1011, 1075, 23, 858, 1648, 1215, 223, 618, 150, 484, 811, 1049, 559, 619, 362, 1290, 1302, 876, 85, 813, 294, 611, 435, 1212, 1897, 781, 2691, 2004, 30, 125, 2116, 657, 424, 726, 842, 239, 2657, 1341, 4576, 144, 2033, 465, 1833, 673, 2513, 1020, 323, 1184, 650, 491, 3107, 806, 366, 1073, 2684, 424, 1285, 1546, 1173, 187, 778, 326, 1481, 87, 836, 1074, 1269, 40, 1771, 1424, 315, 1371, 811, 1711, 1341, 2773, 894, 11, 438, 717, 2164, 1170, 665, 432, 221, 3325, 3006, 1728, 621, 1294, 2717, 1631, 413, 1834, 1153, 1209, 3033, 771, 406, 1354, 1446, 448, 2967, 1184, 3893, 15, 2621, 1164, 550, 910, 213, 133, 23, 1259, 1537, 479, 607, 256, 88, 684, 167, 2770, 709, 859, 1140, 313, 2066, 2393, 268, 1525, 158, 1892, 763, 238, 55, 474, 1119, 1061, 1923, 136, 1079, 557, 2431, 1125, 402, 1457, 416, 1098, 3180, 460, 1811, 1128, 271, 272, 446, 653, 1863, 355, 576, 663, 242, 527, 707, 962, 352, 1141, 434, 1767, 2029, 808, 916, 1866, 144, 135, 423, 1100, 2176, 3948, 1967, 471, 151, 470, 16, 748, 1224, 1492, 2565, 2311, 424, 1144, 155, 1970, 1208, 214, 1068, 529, 991, 2863, 123, 386, 662, 2526, 683, 2693, 354, 360, 1108, 3632, 1203, 681, 1695, 11, 306, 556, 1926, 1581, 259, 927, 1594, 481, 1661, 814, 2353, 1387, 199, 539, 92, 2534, 1073, 1654, 1530, 748, 516, 1334, 328, 330, 1011, 1205, 1117, 861, 988, 1754, 855, 1897, 1691, 2894, 1882, 81, 1544, 1292, 1597, 566, 1094, 236, 1529, 73, 2753, 1619, 4, 602, 2757, 490, 321, 444, 1413, 957, 1201, 2343, 1075, 258, 1167, 1194, 16, 95, 1231, 885, 1030, 2795, 288, 1267, 459, 1182, 2780, 1637, 1472, 1088, 160, 842, 103, 1610, 696, 375, 298, 884, 1359, 196, 416, 1224, 948, 640, 4281, 42, 447, 109, 808, 688, 1321, 2397, 112, 90, 739, 621, 2233, 70, 1155, 1646, 204, 72, 1833, 2327, 432, 1387, 843, 339, 1169, 1097, 725, 1912, 1121, 1300, 15, 822, 2, 1070, 151, 271, 583, 1469, 571, 22, 476, 827, 656, 1137, 1363, 1659, 316, 2266, 640, 1390, 705, 2330, 1022, 987, 1354, 1525, 760, 547, 2160, 751, 864, 1678, 66, 719, 2331, 840, 1241, 464, 759, 74, 1171, 1471, 1017, 1262, 1653, 141, 756, 689, 1510, 1125, 1239, 1974, 387, 1578, 16, 1035, 1840, 2021, 2326, 270, 454, 1519, 440, 435, 1850, 179, 757, 319, 1924, 1482, 14, 163, 2332, 314, 1125, 1151, 999, 1131, 850, 1387, 830, 1334, 225, 62, 2214, 1884, 2950, 467, 1114, 393, 831, 2129, 1627, 728, 922, 601, 896, 329, 234, 665, 406, 517, 354, 116, 11, 3318, 1603, 1405, 323, 66, 957, 429, 987, 1512, 535, 1688, 110, 215, 895, 1424, 390, 188, 1824, 402, 704, 300, 703, 1886, 670, 2106, 264, 1499, 869, 215, 2340, 770, 340, 1143, 1033, 451, 849, 2692, 1047, 1404, 269, 727, 384, 1547, 495, 1300, 791, 1039, 1220, 1770, 1048, 786, 1442, 1861, 267, 23, 132, 1149, 918, 855, 234, 2197, 426, 133, 756, 81, 951, 1609, 250, 963, 1033, 2576, 2563, 2129, 196, 2580, 2210, 114, 403, 442, 1399, 436, 96, 1373, 2699, 35, 315, 1361, 665, 1944, 140, 321, 191, 1465, 782, 891, 1252, 171, 851, 784, 252, 2596, 476, 923, 986, 22, 579, 2230, 40, 267, 1373, 964, 1778, 955, 796, 1086, 3785, 1205, 532, 2512, 3219, 119, 32, 262, 1361, 694, 2906, 141, 575, 54, 478, 1001, 720, 491, 2175, 407, 813, 1343, 662, 53, 334, 718, 2198, 1537, 248, 113, 1983, 2350, 1445, 427, 764, 985, 1132, 1404, 466, 1253, 209, 321, 1474, 308, 1492, 1104, 624, 116, 541, 714, 31, 1049, 671, 1949, 680, 909, 757, 1907, 1357, 1372, 886, 716, 983, 957, 1092, 1571, 811, 1091, 1272, 594, 1707, 21, 1456, 327, 650, 212, 1588, 208, 384, 3234, 1502, 1224, 1468, 1211, 13, 379, 1140, 521, 705, 2320, 2498, 1411, 1566, 385, 50, 1211, 2914, 1706, 1191, 102, 1, 140, 410, 1599, 1192, 267, 1297, 492, 815, 158, 416, 786, 1774, 259, 758, 991, 159, 1961, 2158, 253, 1691, 524, 1016, 1209, 2024, 1323, 1123, 426, 1642, 289, 1068, 1493, 540, 604, 1742, 115, 466, 974, 94, 467, 566, 1021, 1070, 1505, 1422, 178, 859, 1695, 2525, 306, 714, 1354, 494, 143, 892, 2314, 1263, 846, 593, 805, 1029, 1085, 875, 164, 1247, 1169, 170, 1328, 331, 686, 1916, 2446, 2817, 2143, 1604, 426, 562, 15, 959, 1138, 1217, 914, 59, 251, 824, 1123, 509, 1348, 314, 592, 1284, 1486, 29, 1363, 1614, 734, 405, 482, 479, 1229, 1277, 2777, 61, 1267, 618, 2274, 1019, 2207, 232, 163, 545, 1153, 742, 493, 363, 459, 382, 244, 756, 445, 882, 704, 1363, 1307, 34, 861, 888, 670, 585, 1988, 1229, 210, 149, 2539, 224, 395, 427, 1212, 282, 480, 422, 3524, 1148, 1149, 1596, 2117, 2412, 1073, 1300, 700, 2001, 2651, 724, 2386, 449, 235, 1336, 49, 180, 1994, 25, 214, 945, 538, 1589, 752, 138, 793, 553, 476, 1146, 1221, 786, 749, 898, 1323, 1299, 44, 590, 145, 1622, 1570, 740, 1367, 1109, 649, 271, 204, 361, 3202, 560, 405, 3213, 1917, 833, 505, 1235, 883, 2522, 147, 680, 701, 75, 1397, 2124, 160, 1623, 320, 1833, 125, 508, 1267, 1978, 529, 553, 2194, 901, 1346, 646, 455, 1087, 204, 110, 491, 3478, 436, 185, 2068, 117, 882, 1221, 469, 265, 1149, 1059, 2101, 3096, 920, 2165, 308, 199, 204, 1361, 433, 624, 2740, 228, 25, 1127, 30, 789, 1140, 748, 1710, 56, 1174, 2995, 88, 1959, 1406, 2390, 1584, 86, 428, 1506, 1714, 847, 1821, 1757, 1480, 2, 498, 1181, 258, 402, 219, 2344, 818, 197, 1091, 1243, 2587, 514, 887, 21, 675, 583, 1495, 587, 413, 1239, 562, 1736, 144, 2169, 1456, 2763, 721, 124, 50, 2468, 73, 805, 769, 1582, 715, 329, 515, 815, 1560, 2462, 556, 1019, 936, 2077, 1164, 2806, 907, 130, 1881, 1617, 993, 968, 1461, 2236, 867, 2267, 2802, 79, 1816, 1596, 1960, 49, 1052, 1276, 2046, 2079, 1122, 1867, 52, 1809, 1616, 2283, 2623, 1095, 449, 626, 1165, 1656, 502, 156, 547, 1328, 1140, 1042, 902, 2078, 1639, 152, 1746, 3071, 1214, 1481, 720, 372, 279, 2887, 1640, 2654, 51, 1309, 993, 781, 2783, 1719, 917, 1336, 70, 311, 82, 1666, 290, 2181, 56, 175, 1040, 559, 275, 2082, 1463, 809, 712, 1924, 157, 694, 1540, 1308, 1565, 2299, 585, 1282, 2348, 171, 1540, 118, 553, 2164, 810, 781, 811, 692, 1762, 1618, 1512, 143, 687, 2505, 93, 736, 752, 487, 251, 1631, 1526, 2143, 900, 1507, 1455, 1550, 2238, 551, 2149, 345, 1918, 1017, 1218, 2350, 1551, 146, 861, 2464, 1174, 1745, 819, 1018, 1736, 1966, 2887, 423, 552, 1076, 1267, 799, 1358, 37, 3696, 2728, 59, 1465, 2162, 890, 648, 771, 31, 2872, 1836, 629, 272, 422, 8, 369, 329, 2220, 765, 307, 339, 791, 2911, 2168, 892, 178, 50, 908, 167, 892, 559, 2105, 1188, 327, 2483, 1458, 946, 2297, 5, 1304, 628, 680, 386, 210, 1342, 21, 633, 832, 1788, 785, 271, 2804, 850, 555, 154, 1417, 1148, 2918, 2551, 1716, 1711, 1290, 1640, 236, 974, 306, 2754, 1149, 2554, 610, 854, 799, 929, 367, 1923, 906, 1138, 672, 1025, 558, 1326, 329, 726, 995, 175, 357, 711, 1524, 358, 209, 245, 286, 61, 879, 826, 155, 317, 493, 368, 2326, 601, 605, 2, 463, 568, 2234, 1436, 833, 1425, 1936, 505, 892, 1091, 701, 1007, 2300, 2234, 615, 71, 982, 939, 7, 1573, 1355, 1111, 568, 1163, 159, 527, 1437, 572, 533, 837, 531, 3138, 65, 266, 259, 1987, 2270, 1458, 943, 358, 888, 1227, 558, 98, 1833, 252, 761, 836, 742, 21, 816, 699, 510, 1667, 357, 416, 1964, 2037, 464, 569, 133, 2659, 481, 3098, 957, 1834, 1723, 529, 451, 1285, 2434, 406, 641, 911, 236, 1647, 2504, 36, 560, 424, 2161, 184, 653, 561, 198, 3789, 963, 991, 158, 676, 447, 1416, 914, 764, 244, 771, 28, 105, 1095, 1283, 309, 742, 287, 1059, 1982, 566, 711, 890, 11, 2506, 1283, 637, 102, 34, 292, 629, 1081, 79, 1057, 2245, 1196, 1951, 35, 2511, 1205, 2370, 1658, 765, 152, 188, 1409, 2231, 513, 167, 2950, 14, 591, 780, 964, 107, 1128, 2436, 1684, 572, 1430, 1576, 3031, 1421, 1788, 107, 613, 559, 1166, 852, 2367, 1343, 1082, 310, 1286, 1009, 1620, 66, 509, 409, 290, 390, 2225, 785, 686, 2249, 1161, 2840, 553, 386, 477, 849, 398, 297, 1142, 1476, 1300, 900, 696, 952, 910, 517, 828, 929, 38, 721, 951, 1, 246, 1627, 619, 1435, 816, 1323, 124, 151, 823, 508, 4029, 128, 60, 1125, 2049, 1479, 1111, 744, 363, 88, 940, 547, 1474, 895, 1830, 1820, 25, 1770, 150, 710, 1006, 1681, 622, 817, 456, 994, 966, 1902, 1993, 3208, 1691, 2601, 1760, 3659, 789, 53, 1351, 1705, 1727, 365, 2650, 533, 118, 449, 855, 453, 452, 40, 175, 821, 1457, 1576, 95, 1346, 1537, 329, 347, 1066, 173, 1553, 446, 2087, 3216, 273, 1287, 2007, 1799, 802, 1267, 284, 414, 1816, 457, 1580, 1622, 3303, 497, 623, 2196, 968, 2380, 114, 656, 476, 460, 1786, 2258, 264, 718, 527, 1094, 1374, 295, 632, 2164, 208, 1474, 146, 589, 2753, 52, 749, 1574, 667, 1140, 211, 862, 926, 2019, 29, 1382, 913, 209, 231, 2137, 385, 1006, 447, 830, 517, 1073, 1785, 396, 2096, 514, 289, 778, 2687, 1, 2220, 435, 1507, 1298, 477, 551, 1289, 361, 2733, 576, 933, 1345, 1684, 1312, 1407, 2483, 2011, 230, 624, 367, 921, 1584, 324, 1983, 950, 610, 507, 868, 1140, 245, 2427, 8, 2446, 3185, 474, 372, 2536, 343, 2332, 2481, 813, 1561, 1125, 1068, 206, 749, 132, 782, 933, 178, 1241, 1110, 383, 2863, 1539, 2052, 430, 636, 3099, 5, 1399, 594, 601, 1339, 602, 6, 1554, 293, 105, 434, 504, 1387, 697, 62, 1355, 791, 327, 579, 35, 973, 112, 1683, 444, 3024, 2192, 1137, 574, 1083, 511, 1221, 1580, 1339, 250, 36, 728, 1303, 1667, 875, 1194, 1380, 560, 903, 1571, 324, 1107, 1114, 3023, 2229, 1098, 554, 1104, 1260, 1164, 2467, 1472, 758, 538, 1314, 643, 1652, 2628, 399, 476, 76, 1399, 887, 331, 2504, 1200, 1232, 2285, 1854, 635, 692, 1542, 989, 2, 1644, 717, 964, 991, 2588, 432, 2109, 1243, 33, 466, 677, 1163, 835, 145, 407, 758, 623, 945, 1796, 1455, 195, 309, 2082, 337, 91, 136, 572, 1214, 2055, 1630, 302, 440, 533, 815, 15, 773, 90, 2110, 245, 958, 1805, 1144, 689, 966, 1849, 41, 243, 458, 825, 1427, 3084, 3261, 259, 1239, 1043, 118, 224, 786, 926, 1592, 293, 485, 716, 1466, 118, 578, 1540, 390, 255, 119, 293, 1663, 632, 1889, 399, 1846, 1706, 112, 628, 345, 2080, 529, 1510, 1511, 689, 563, 166, 2772, 1303, 2077, 407, 1271, 772, 434, 1701, 1405, 552, 1864, 409, 1197, 1467, 316, 1472, 850, 115, 2143, 1028, 1455, 1224, 31, 1443, 1171, 454, 321, 461, 300, 740, 958, 419, 951, 1756, 1676, 2116, 747, 3, 1255, 967, 447, 1165, 1546, 1811, 1521, 24, 529, 1284, 430, 715, 901, 488, 1862, 440, 2590, 502, 1035, 126, 495, 1088, 188, 53, 1328, 1700, 285, 1129, 957, 2078, 869, 1006, 705, 86, 2079, 1412, 911, 2160, 386, 924, 1509, 2437, 3108, 500, 911, 1311, 1488, 201, 177, 1083, 2581, 162, 343, 2321, 208, 825, 1672, 393, 258, 685, 2062, 1008, 759, 435, 1480, 325, 730, 843, 969, 1734, 887, 463, 2094, 1837, 469, 470, 1212, 479, 1005, 21, 939, 1137, 1980, 1126, 653, 1013, 758, 258, 54, 1980, 635, 580, 974, 1625, 2314, 539, 512, 935, 870, 633, 1145, 90, 557, 168, 2533, 710, 1161, 50, 41, 2494, 1338, 203, 569, 49, 143, 2401, 1451, 736, 344, 2430, 337, 1456, 986, 942, 1688, 3003, 193, 380, 245, 397, 3029, 152, 220, 480, 284, 1620, 108, 39, 867, 730, 132, 168, 509, 2143, 1778, 1569, 2302, 1292, 3370, 261, 575, 2649, 522, 2021, 541, 591, 1721, 1539, 758, 472, 2703, 875, 631, 1054 };
uint16_t DATA3[2400] = { 3, 290, 329, 331, 1327, 853, 460, 802, 374, 331, 289, 307, 334, 155, 281, 730, 239, 1198, 572, 799, 642, 1198, 214, 226, 1114, 974, 231, 679, 889, 602, 396, 403, 21, 689, 724, 485, 1102, 193, 92, 716, 235, 913, 228, 472, 1165, 569, 112, 1338, 691, 11, 314, 1575, 918, 871, 121, 698, 1006, 189, 45, 189, 528, 1197, 703, 1229, 85, 624, 962, 602, 565, 704, 728, 507, 354, 243, 820, 827, 268, 538, 52, 378, 1139, 279, 718, 1024, 287, 209, 381, 1028, 621, 860, 272, 98, 197, 771, 100, 169, 559, 382, 1369, 770, 483, 293, 837, 352, 308, 776, 47, 1050, 323, 883, 104, 367, 235, 269, 36, 250, 676, 538, 671, 397, 1154, 97, 360, 84, 161, 181, 209, 715, 225, 233, 405, 1218, 375, 929, 232, 670, 394, 391, 1254, 572, 592, 596, 424, 424, 786, 17, 1122, 84, 471, 2, 717, 214, 21, 988, 198, 59, 346, 222, 439, 435, 1711, 420, 611, 379, 595, 736, 377, 22, 573, 125, 770, 130, 48, 401, 793, 1208, 301, 509, 322, 361, 12, 108, 776, 699, 2, 348, 782, 207, 1516, 686, 147, 720, 803, 347, 2452, 274, 815, 72, 214, 887, 280, 380, 607, 4, 416, 563, 315, 976, 412, 389, 412, 233, 855, 240, 506, 823, 84, 622, 82, 1376, 171, 357, 66, 480, 999, 229, 153, 429, 554, 528, 322, 659, 1764, 243, 428, 278, 806, 444, 601, 315, 988, 498, 695, 130, 170, 364, 669, 125, 285, 966, 258, 553, 330, 878, 395, 288, 1030, 742, 226, 343, 684, 826, 725, 40, 807, 357, 917, 797, 1536, 1717, 217, 222, 933, 342, 932, 39, 630, 1071, 190, 268, 863, 182, 468, 144, 148, 477, 750, 248, 10, 587, 231, 94, 171, 598, 1511, 556, 421, 3, 85, 381, 362, 978, 281, 460, 258, 544, 821, 920, 184, 1281, 131, 321, 94, 151, 1550, 512, 104, 442, 468, 167, 214, 486, 659, 78, 131, 1031, 353, 22, 879, 964, 387, 459, 158, 570, 119, 149, 1143, 1191, 696, 710, 767, 836, 617, 1048, 2075, 209, 434, 5, 45, 1357, 469, 347, 23, 1090, 322, 98, 53, 1100, 167, 1002, 1044, 288, 881, 249, 386, 311, 121, 750, 80, 362, 431, 948, 77, 413, 246, 665, 1239, 940, 181, 197, 498, 249, 867, 63, 722, 174, 122, 276, 831, 599, 282, 882, 599, 218, 716, 254, 80, 432, 409, 148, 361, 880, 483, 603, 678, 225, 202, 849, 171, 264, 542, 339, 262, 555, 31, 323, 220, 440, 276, 946, 239, 589, 635, 37, 55, 571, 1182, 22, 45, 240, 580, 924, 1729, 357, 706, 291, 1559, 420, 859, 95, 69, 447, 79, 500, 998, 384, 894, 474, 68, 1214, 240, 605, 885, 34, 150, 516, 343, 43, 142, 210, 422, 1599, 109, 687, 125, 379, 390, 113, 383, 750, 308, 902, 27, 39, 205, 949, 1566, 1099, 830, 1241, 134, 887, 1422, 124, 299, 313, 168, 523, 112, 1335, 223, 469, 357, 154, 303, 1372, 98, 1202, 121, 501, 773, 493, 317, 508, 37, 25, 669, 713, 309, 1178, 1504, 1063, 655, 293, 508, 56, 242, 908, 557, 491, 525, 288, 516, 333, 455, 223, 126, 639, 1403, 962, 1038, 347, 817, 1318, 793, 1430, 741, 888, 312, 1757, 256, 658, 96, 183, 513, 105, 972, 557, 701, 110, 993, 1414, 1151, 227, 429, 709, 68, 309, 34, 504, 613, 100, 1114, 251, 648, 1144, 256, 886, 144, 295, 183, 1051, 597, 126, 47, 125, 420, 871, 127, 508, 497, 50, 609, 278, 571, 148, 369, 536, 116, 68, 593, 521, 353, 342, 204, 541, 229, 76, 809, 354, 1339, 845, 191, 141, 1803, 927, 160, 26, 900, 707, 488, 1011, 451, 2327, 634, 204, 534, 186, 43, 359, 45, 336, 749, 586, 375, 472, 556, 1031, 692, 879, 163, 525, 445, 1131, 332, 609, 1012, 374, 101, 363, 837, 419, 987, 618, 27, 201, 699, 212, 613, 928, 238, 1254, 210, 1114, 518, 909, 120, 595, 804, 335, 536, 827, 962, 181, 217, 517, 37, 137, 1128, 508, 68, 281, 836, 1200, 119, 75, 473, 73, 1089, 688, 230, 930, 477, 790, 562, 933, 540, 495, 666, 432, 69, 1202, 1479, 290, 20, 681, 398, 153, 137, 514, 1489, 103, 785, 149, 1618, 22, 989, 728, 836, 1097, 183, 191, 406, 81, 709, 798, 473, 668, 380, 623, 814, 177, 186, 550, 181, 212, 613, 779, 1268, 572, 663, 31, 54, 60, 418, 148, 201, 884, 758, 135, 699, 276, 713, 520, 1771, 323, 1027, 327, 519, 61, 249, 456, 1518, 176, 942, 353, 282, 426, 591, 618, 1103, 1586, 104, 216, 836, 78, 625, 158, 445, 635, 50, 392, 155, 1505, 920, 22, 210, 249, 1175, 598, 431, 940, 556, 650, 469, 305, 998, 1020, 67, 153, 529, 528, 163, 722, 241, 721, 173, 125, 1146, 513, 415, 1325, 271, 416, 209, 228, 2, 405, 1526, 581, 160, 1293, 163, 171, 519, 661, 256, 385, 319, 448, 306, 728, 342, 476, 1478, 1161, 17, 215, 622, 352, 825, 448, 1025, 479, 560, 222, 440, 552, 1252, 218, 100, 188, 1135, 748, 308, 230, 761, 738, 44, 93, 72, 360, 1200, 86, 1026, 108, 136, 130, 908, 240, 793, 165, 395, 1048, 1344, 543, 106, 49, 369, 153, 169, 406, 353, 404, 322, 721, 238, 96, 746, 206, 201, 145, 573, 323, 316, 170, 139, 1335, 572, 878, 141, 588, 39, 350, 170, 628, 830, 630, 369, 845, 263, 346, 1647, 16, 1373, 123, 422, 660, 1187, 321, 198, 645, 166, 516, 389, 323, 371, 28, 1282, 834, 180, 607, 473, 289, 716, 111, 855, 610, 222, 348, 496, 1725, 498, 1229, 327, 902, 39, 806, 572, 526, 722, 315, 60, 874, 120, 1066, 460, 498, 1120, 318, 64, 703, 477, 1605, 1174, 546, 573, 1049, 444, 610, 721, 400, 836, 273, 449, 172, 152, 974, 380, 239, 393, 558, 520, 71, 1018, 1423, 224, 178, 233, 856, 800, 165, 94, 885, 104, 1129, 11, 765, 795, 173, 1110, 719, 38, 126, 840, 264, 2439, 1090, 543, 846, 101, 100, 454, 766, 516, 226, 437, 587, 36, 914, 205, 544, 533, 1275, 267, 300, 295, 113, 207, 9, 398, 476, 491, 870, 275, 668, 225, 258, 290, 502, 1361, 69, 22, 179, 46, 209, 684, 323, 944, 121, 488, 37, 669, 1169, 921, 75, 284, 357, 111, 386, 1184, 796, 397, 179, 771, 390, 244, 594, 152, 56, 400, 551, 1067, 312, 201, 154, 678, 217, 336, 349, 201, 584, 959, 869, 479, 156, 307, 468, 929, 699, 1070, 639, 458, 41, 523, 96, 771, 45, 1131, 950, 187, 573, 241, 827, 1153, 258, 1189, 589, 359, 1095, 370, 200, 411, 912, 180, 110, 1424, 857, 285, 1149, 1296, 101, 966, 607, 172, 944, 310, 67, 279, 133, 467, 164, 125, 1455, 1257, 699, 52, 133, 479, 860, 743, 116, 2179, 239, 644, 41, 1130, 1232, 697, 48, 1259, 421, 243, 95, 161, 1239, 302, 145, 299, 270, 113, 406, 58, 499, 1083, 570, 217, 52, 1102, 661, 848, 1746, 1398, 479, 551, 11, 652, 26, 265, 749, 785, 784, 64, 403, 799, 375, 84, 1054, 627, 1318, 13, 292, 950, 723, 574, 600, 600, 704, 89, 291, 54, 679, 104, 203, 1517, 438, 699, 419, 499, 277, 322, 431, 941, 1006, 1149, 841, 61, 1036, 160, 669, 739, 1463, 507, 656, 746, 16, 894, 810, 101, 521, 381, 326, 614, 757, 308, 658, 563, 219, 1084, 457, 735, 528, 284, 270, 970, 873, 100, 1099, 6, 1165, 1108, 191, 606, 473, 401, 547, 664, 327, 27, 95, 198, 484, 361, 698, 1249, 109, 130, 145, 1162, 808, 1221, 144, 595, 387, 151, 1145, 46, 607, 693, 146, 475, 530, 591, 44, 485, 260, 613, 1479, 670, 113, 228, 753, 419, 396, 187, 456, 70, 738, 506, 269, 254, 1077, 194, 1140, 785, 418, 666, 740, 365, 492, 1078, 1194, 654, 389, 184, 634, 44, 92, 573, 6, 721, 584, 313, 91, 1050, 247, 266, 356, 789, 380, 42, 284, 391, 1103, 27, 618, 149, 378, 113, 383, 323, 1095, 260, 92, 780, 127, 947, 189, 806, 42, 100, 318, 1070, 897, 927, 387, 511, 431, 86, 736, 157, 749, 721, 137, 961, 397, 807, 749, 672, 465, 67, 259, 346, 1654, 417, 154, 454, 173, 1952, 197, 515, 685, 208, 341, 156, 604, 1287, 597, 1376, 141, 524, 531, 77, 90, 269, 542, 237, 671, 452, 497, 387, 233, 223, 149, 655, 214, 391, 85, 944, 536, 193, 755, 564, 37, 796, 610, 948, 613, 241, 157, 382, 674, 238, 508, 495, 1545, 496, 978, 194, 437, 618, 536, 322, 18, 226, 141, 1330, 1052, 561, 778, 387, 325, 58, 677, 66, 1093, 262, 411, 735, 604, 812, 940, 618, 590, 290, 1077, 332, 508, 520, 208, 768, 3, 276, 1039, 449, 85, 712, 1461, 339, 556, 533, 818, 444, 48, 1286, 1048, 37, 394, 515, 287, 118, 347, 1634, 1296, 39, 927, 407, 230, 95, 500, 796, 409, 111, 215, 674, 258, 1012, 481, 636, 229, 111, 556, 701, 192, 712, 630, 1045, 480, 111, 905, 609, 229, 177, 335, 1613, 402, 259, 750, 1463, 551, 402, 768, 628, 625, 461, 367, 680, 117, 308, 629, 292, 1062, 103, 129, 545, 418, 687, 163, 344, 140, 1571, 506, 266, 363, 887, 28, 110, 839, 74, 462, 85, 1196, 966, 492, 284, 378, 547, 412, 168, 368, 805, 363, 446, 453, 145, 358, 301, 1387, 71, 603, 867, 65, 266, 886, 308, 1067, 447, 1274, 485, 212, 891, 191, 1454, 95, 52, 368, 108, 769, 871, 1612, 886, 162, 189, 572, 610, 50, 646, 607, 1397, 214, 146, 1792, 202, 96, 25, 424, 844, 269, 1442, 609, 2, 759, 763, 515, 105, 31, 969, 379, 2, 90, 1009, 324, 176, 373, 65, 647, 241, 1063, 455, 693, 455, 177, 141, 182, 278, 328, 1392, 669, 366, 187, 635, 709, 823, 486, 80, 235, 790, 292, 349, 1765, 363, 771, 33, 1181, 62, 652, 11, 1125, 824, 776, 185, 599, 316, 245, 567, 36, 610, 500, 810, 458, 560, 180, 146, 1143, 506, 458, 830, 769, 681, 1027, 164, 633, 109, 30, 1120, 243, 430, 545, 574, 91, 1469, 109, 301, 358, 853, 270, 354, 896, 463, 398, 603, 589, 21, 928, 1102, 25, 1090, 545, 687, 1176, 318, 415, 722, 470, 1442, 584, 416, 245, 342, 467, 766, 223, 665, 61, 1007, 378, 375, 96, 607, 834, 647, 467, 874, 658, 399, 24, 167, 457, 283, 1018, 227, 502, 323, 986, 426, 695, 757, 209, 1444, 176, 418, 13, 283, 1042, 164, 500, 4, 236, 17, 1369, 814, 224, 361, 429, 188, 930, 733, 49, 710, 10, 421, 1062, 229, 710, 1468, 154, 821, 675, 389, 714, 137, 340, 1181, 56, 249, 228, 332, 801, 14, 580, 126, 452, 1284, 296, 349, 300, 59, 1824, 119, 391, 657, 606, 997, 419, 294, 166, 69, 367, 284, 309, 552, 246, 735, 541, 140, 472, 651, 512, 181, 48, 178, 440, 1181, 587, 19, 490, 55, 654, 57, 617, 57, 782, 326, 287, 216, 918, 342, 659, 746, 100, 638, 642, 604, 539, 4, 245, 364, 82, 549, 844, 497, 669, 1110, 566, 288, 817, 431, 87, 664, 334, 829, 103, 589, 733, 814, 261, 222, 514, 494, 698, 975, 1394, 179, 494, 8, 32, 333, 1288, 302, 457, 794, 223, 949, 291, 975, 309, 95, 418, 467, 457, 948, 1000, 882, 540, 270, 1013, 1210, 506, 27, 283, 79, 133, 127, 712, 1801, 4, 164, 307, 94, 350, 187, 12, 1081, 730, 245, 112, 699, 774, 402, 88, 902, 358, 764, 1454, 91, 149, 363, 599, 131, 98, 473, 787, 34, 349, 300, 1192, 333, 276, 221, 298, 309, 4, 1122, 157, 553, 270, 775, 512, 768, 140, 99, 1189, 620, 70, 37, 664, 179, 282, 470, 349, 355, 139, 1026, 352, 1907, 323, 141, 268, 1192, 89, 2018, 605, 954, 140, 704, 338, 291, 1066, 349, 777, 281, 384, 928, 77, 995, 52, 470, 325, 405, 222, 252, 214, 84, 88, 84, 954, 12, 780, 84, 764, 893, 538, 353, 1353, 747, 559, 1358, 830, 460, 215, 860, 429, 343, 108, 359, 58, 899, 1200, 630, 309, 364, 670, 344, 461, 805, 687, 224, 373, 10, 654, 1048, 101, 469, 475, 56, 1080, 121, 264, 69, 404, 451, 1020, 682, 163, 892, 417, 264, 50, 906, 433, 940, 415, 438, 1147, 56, 172, 1032, 302, 979, 97, 511, 844, 3, 551, 831, 1460, 100, 185, 1283, 981, 409, 256, 132, 225, 57, 86, 697, 87, 975, 71, 120, 182, 213, 580, 1045, 954, 406, 281, 227, 233, 380, 1362, 707, 554, 1199, 88, 521, 243, 714, 152, 160, 664, 385, 207, 935, 599, 305, 194, 234, 370, 472, 333, 259, 120, 286, 300, 191, 1293, 222, 707, 73, 470, 9, 822, 1115, 523, 1047, 962, 705, 166, 1593, 302, 1175, 725, 260, 768, 369, 239, 427, 922, 1768, 625, 940, 433, 706, 1312, 1145, 314, 621, 821, 964, 260, 431, 677, 361, 501, 1003, 92, 348, 395, 750, 786, 319, 274, 313, 770, 763, 589, 1276, 542, 951, 166, 240, 134, 255, 287, 118, 1497, 694, 1623, 624, 21, 326, 187, 30, 213, 863, 1396, 129, 1523, 583, 169, 858, 561, 591, 495, 574, 99, 289, 542, 504, 1020, 1016, 191, 992, 476, 705, 1015, 107, 214, 945, 629, 228, 68, 433, 758, 603, 636, 299, 79, 8, 580, 622, 293, 1022, 227, 726, 898, 703, 994, 235, 1058, 540, 101, 952, 344, 835, 511, 133, 184, 1209, 165, 423, 807, 575, 214, 344, 309, 180, 441, 376, 460, 165, 231, 939, 727, 140, 1131, 83, 514, 699, 134, 805, 1085, 1, 974, 104, 573, 68, 1142, 541, 407, 903, 146, 1340, 292, 232, 147, 584, 111, 247, 1021, 337, 108, 172, 341, 449, 392, 233, 438, 82, 603, 156, 706, 1427, 75, 92, 229, 248, 222, 363, 167, 752, 59, 707, 68, 284, 177, 1089, 289, 279, 1068, 196, 351, 874, 429, 122, 570, 522, 157, 762, 334, 1465, 107, 264, 1089, 615, 247, 21, 398, 714, 634, 200, 124, 1098, 1130, 1135, 13, 297, 437, 696, 1318, 388, 55, 12, 266, 204, 1246, 101, 335, 1423, 975, 512, 96, 237, 1645, 1152, 1133, 184, 570, 681, 624, 280, 307, 133, 1049, 502, 168, 434, 100, 258, 724, 67, 1130, 547, 358, 1209, 400, 429, 223, 553, 478, 850, 540, 775, 392, 39, 1021, 327, 132, 453, 131, 303, 248, 116, 1062, 1325, 23, 507, 60, 378, 471, 1294, 1016, 19, 424, 867, 1213, 609, 329 };
uint16_t DATA4[2400] = { 154, 144, 329, 777, 156, 154, 40, 449, 313, 241, 62, 27, 24, 58, 253, 118, 521, 375, 105, 262, 218, 541, 382, 25, 42, 32, 233, 121, 294, 22, 167, 215, 337, 175, 244, 124, 309, 385, 352, 358, 533, 422, 387, 170, 38, 78, 61, 289, 212, 200, 1013, 521, 356, 314, 8, 570, 63, 250, 220, 526, 400, 149, 181, 93, 167, 154, 146, 477, 44, 518, 719, 80, 157, 130, 46, 12, 334, 8, 719, 306, 129, 91, 91, 415, 551, 146, 271, 175, 410, 370, 34, 477, 422, 120, 171, 193, 514, 433, 148, 328, 143, 428, 18, 221, 225, 228, 105, 340, 223, 434, 113, 149, 160, 506, 157, 184, 66, 165, 331, 674, 127, 174, 316, 22, 535, 134, 104, 156, 345, 396, 868, 62, 82, 499, 85, 30, 220, 203, 332, 75, 582, 166, 340, 510, 19, 157, 77, 174, 247, 223, 68, 87, 181, 495, 236, 378, 205, 227, 419, 418, 567, 22, 303, 350, 314, 503, 96, 252, 433, 183, 3, 238, 95, 209, 690, 256, 224, 353, 80, 304, 106, 476, 491, 191, 7, 197, 421, 48, 169, 10, 437, 174, 282, 60, 80, 375, 64, 371, 144, 326, 68, 801, 143, 66, 375, 333, 411, 131, 273, 175, 567, 391, 225, 599, 92, 264, 58, 2, 666, 504, 497, 266, 709, 269, 428, 487, 11, 196, 306, 208, 263, 250, 353, 122, 389, 377, 19, 648, 300, 484, 217, 376, 79, 733, 412, 179, 286, 440, 63, 35, 88, 53, 76, 250, 305, 199, 185, 308, 449, 450, 225, 119, 203, 398, 87, 238, 949, 110, 147, 100, 366, 131, 137, 217, 7, 224, 710, 461, 177, 258, 229, 179, 337, 65, 125, 20, 147, 61, 338, 512, 774, 89, 404, 375, 14, 427, 309, 137, 271, 313, 181, 261, 713, 92, 429, 314, 69, 443, 37, 179, 509, 400, 251, 116, 134, 126, 861, 118, 354, 155, 10, 502, 33, 74, 172, 205, 442, 25, 164, 118, 216, 307, 279, 219, 202, 93, 115, 333, 222, 57, 53, 730, 472, 147, 611, 129, 44, 655, 427, 465, 4, 129, 246, 240, 42, 182, 84, 610, 477, 563, 602, 274, 188, 364, 283, 60, 267, 505, 374, 158, 10, 692, 112, 9, 236, 79, 395, 241, 3, 29, 250, 64, 180, 396, 213, 258, 67, 30, 29, 39, 69, 470, 380, 122, 242, 190, 235, 40, 68, 185, 472, 262, 146, 8, 192, 27, 7, 117, 180, 189, 115, 199, 116, 499, 376, 341, 637, 217, 72, 357, 445, 152, 241, 176, 238, 149, 321, 98, 181, 62, 267, 135, 161, 279, 723, 154, 570, 182, 471, 61, 266, 27, 134, 228, 282, 42, 94, 42, 94, 139, 485, 111, 310, 365, 101, 283, 565, 111, 197, 364, 104, 12, 47, 242, 344, 151, 364, 159, 477, 97, 1017, 60, 413, 104, 213, 147, 480, 243, 37, 169, 170, 59, 130, 4, 230, 204, 468, 179, 403, 31, 746, 39, 347, 143, 463, 5, 176, 601, 864, 95, 349, 175, 127, 105, 827, 330, 139, 217, 238, 150, 166, 388, 256, 26, 109, 113, 39, 235, 75, 15, 349, 13, 300, 134, 131, 208, 1091, 235, 67, 141, 502, 60, 107, 119, 15, 34, 99, 280, 236, 300, 229, 8, 107, 230, 710, 16, 205, 375, 597, 97, 52, 15, 36, 637, 379, 66, 145, 648, 144, 478, 94, 95, 477, 99, 340, 412, 443, 197, 31, 367, 184, 27, 276, 20, 177, 237, 75, 89, 435, 510, 611, 359, 213, 430, 199, 156, 102, 71, 443, 114, 625, 518, 211, 228, 219, 214, 500, 502, 264, 39, 348, 153, 959, 356, 261, 68, 613, 114, 588, 814, 352, 478, 72, 15, 248, 594, 310, 90, 182, 281, 16, 854, 80, 252, 177, 510, 369, 178, 16, 15, 282, 682, 316, 110, 99, 308, 23, 483, 405, 196, 510, 392, 331, 343, 8, 623, 39, 3, 73, 421, 345, 61, 164, 123, 119, 223, 332, 539, 340, 353, 330, 41, 232, 66, 47, 1, 46, 44, 146, 404, 474, 179, 23, 466, 121, 99, 19, 326, 33, 180, 33, 73, 648, 458, 330, 347, 811, 543, 19, 306, 194, 136, 385, 156, 559, 223, 112, 64, 72, 112, 183, 187, 352, 359, 31, 149, 339, 379, 372, 58, 226, 285, 246, 175, 103, 183, 227, 342, 569, 47, 121, 558, 31, 350, 498, 14, 189, 232, 368, 370, 424, 158, 449, 284, 202, 39, 433, 2, 68, 166, 299, 30, 563, 181, 35, 58, 301, 119, 69, 779, 726, 451, 397, 281, 112, 393, 154, 165, 626, 328, 612, 345, 263, 24, 640, 819, 395, 232, 148, 123, 70, 108, 686, 466, 316, 215, 352, 65, 95, 179, 392, 788, 136, 276, 280, 86, 472, 172, 205, 161, 128, 318, 20, 41, 189, 100, 158, 102, 282, 400, 212, 95, 328, 193, 510, 446, 623, 58, 710, 232, 729, 112, 738, 54, 160, 221, 123, 269, 123, 288, 327, 23, 95, 255, 29, 483, 537, 476, 263, 276, 16, 409, 323, 158, 446, 9, 114, 401, 240, 518, 83, 152, 234, 333, 58, 7, 479, 36, 252, 138, 320, 620, 238, 89, 738, 850, 555, 293, 530, 209, 148, 58, 267, 288, 821, 155, 383, 760, 327, 231, 297, 58, 22, 2, 439, 421, 549, 248, 294, 568, 156, 83, 427, 95, 144, 165, 200, 116, 142, 54, 167, 538, 202, 206, 58, 381, 131, 304, 241, 280, 594, 282, 186, 2, 197, 385, 371, 577, 377, 121, 486, 128, 428, 189, 156, 204, 614, 101, 13, 250, 180, 255, 171, 341, 194, 96, 77, 287, 274, 221, 301, 231, 210, 498, 572, 1025, 179, 319, 72, 129, 275, 124, 485, 78, 177, 124, 300, 565, 449, 577, 425, 168, 22, 226, 73, 90, 206, 104, 79, 464, 203, 195, 91, 464, 585, 104, 507, 4, 65, 317, 756, 313, 185, 2, 225, 4, 799, 330, 183, 157, 436, 168, 66, 342, 66, 309, 294, 405, 78, 277, 139, 106, 180, 721, 414, 136, 107, 277, 398, 362, 261, 91, 47, 256, 281, 205, 565, 478, 295, 154, 457, 136, 21, 39, 20, 272, 362, 164, 311, 643, 418, 903, 196, 486, 171, 335, 195, 233, 116, 52, 228, 165, 183, 229, 270, 217, 97, 346, 541, 197, 41, 504, 168, 528, 154, 48, 337, 19, 289, 339, 252, 76, 92, 534, 707, 115, 220, 15, 433, 257, 20, 447, 293, 413, 579, 75, 468, 180, 2, 84, 297, 490, 684, 198, 630, 129, 593, 165, 90, 54, 125, 412, 277, 405, 171, 136, 124, 352, 413, 172, 237, 113, 81, 445, 545, 46, 415, 324, 474, 306, 200, 108, 62, 265, 219, 248, 61, 97, 108, 57, 190, 557, 16, 7, 132, 481, 410, 315, 37, 19, 376, 83, 268, 185, 45, 62, 482, 339, 157, 826, 5, 83, 28, 73, 179, 861, 637, 332, 224, 101, 123, 184, 456, 378, 87, 108, 403, 195, 54, 251, 267, 208, 258, 153, 293, 318, 496, 240, 667, 278, 153, 91, 117, 960, 459, 166, 218, 466, 16, 796, 101, 426, 192, 36, 344, 332, 378, 381, 496, 59, 391, 468, 283, 195, 504, 414, 135, 52, 75, 159, 446, 692, 562, 154, 220, 34, 44, 149, 102, 267, 244, 415, 178, 211, 726, 81, 196, 230, 121, 26, 40, 634, 15, 115, 456, 379, 560, 316, 183, 456, 54, 95, 264, 568, 770, 333, 193, 394, 295, 19, 421, 508, 494, 147, 668, 161, 139, 346, 310, 190, 209, 278, 47, 279, 165, 321, 565, 395, 337, 637, 25, 371, 401, 129, 226, 41, 63, 377, 78, 315, 161, 211, 181, 51, 401, 67, 2, 172, 39, 278, 623, 523, 505, 344, 251, 210, 209, 294, 39, 163, 609, 584, 72, 616, 623, 105, 428, 581, 174, 161, 375, 114, 448, 235, 172, 106, 70, 83, 689, 274, 219, 575, 808, 240, 627, 162, 231, 25, 33, 106, 429, 78, 137, 488, 47, 343, 938, 16, 32, 75, 39, 399, 454, 252, 332, 154, 63, 444, 33, 311, 1, 587, 272, 214, 280, 144, 126, 95, 467, 91, 116, 579, 377, 479, 178, 371, 118, 409, 141, 737, 181, 521, 200, 623, 219, 337, 277, 328, 408, 267, 167, 454, 644, 306, 430, 18, 123, 143, 306, 111, 64, 537, 642, 765, 215, 27, 168, 326, 139, 744, 584, 258, 123, 525, 161, 314, 397, 163, 387, 212, 162, 40, 588, 527, 176, 583, 102, 232, 61, 289, 589, 371, 357, 375, 784, 567, 203, 145, 542, 231, 96, 100, 394, 202, 6, 407, 60, 215, 667, 383, 92, 321, 514, 324, 151, 558, 336, 323, 212, 37, 519, 171, 315, 439, 217, 279, 556, 438, 204, 423, 762, 433, 225, 5, 245, 90, 263, 326, 492, 125, 94, 46, 125, 165, 46, 192, 91, 537, 21, 348, 125, 230, 457, 201, 198, 451, 77, 22, 17, 51, 93, 469, 180, 805, 6, 368, 150, 331, 284, 230, 309, 89, 119, 172, 182, 278, 161, 37, 195, 58, 258, 169, 87, 278, 83, 107, 62, 507, 42, 118, 92, 131, 434, 195, 183, 154, 174, 68, 76, 292, 32, 100, 227, 283, 180, 632, 20, 383, 365, 206, 325, 305, 412, 150, 51, 389, 231, 452, 85, 92, 41, 232, 7, 280, 374, 313, 412, 28, 38, 449, 155, 146, 49, 267, 148, 137, 301, 10, 241, 439, 534, 285, 68, 376, 27, 155, 141, 99, 4, 4, 237, 386, 98, 14, 352, 10, 492, 365, 236, 480, 176, 504, 41, 378, 563, 344, 221, 144, 123, 25, 83, 143, 55, 87, 121, 170, 167, 26, 331, 229, 39, 117, 67, 1, 206, 499, 198, 194, 469, 336, 167, 401, 27, 186, 281, 222, 256, 178, 191, 341, 258, 209, 449, 243, 173, 709, 192, 196, 583, 5, 124, 69, 68, 270, 37, 194, 360, 39, 295, 196, 1, 230, 354, 46, 107, 233, 3, 612, 425, 489, 348, 45, 19, 78, 307, 50, 169, 533, 379, 160, 727, 318, 76, 349, 558, 37, 37, 10, 74, 725, 443, 26, 521, 115, 350, 149, 199, 41, 23, 271, 231, 328, 100, 168, 602, 45, 164, 227, 76, 258, 56, 232, 30, 289, 281, 86, 420, 642, 493, 306, 4, 126, 396, 587, 163, 560, 79, 379, 146, 209, 22, 316, 569, 28, 91, 435, 111, 359, 383, 232, 218, 204, 544, 212, 444, 878, 91, 49, 106, 540, 170, 266, 104, 408, 533, 331, 764, 182, 67, 406, 44, 6, 309, 254, 12, 217, 321, 215, 155, 290, 409, 96, 98, 438, 141, 286, 168, 148, 403, 61, 71, 863, 154, 66, 36, 545, 112, 1, 171, 424, 153, 163, 76, 784, 237, 448, 414, 139, 80, 255, 518, 204, 717, 116, 25, 428, 65, 962, 73, 131, 528, 127, 3, 24, 105, 351, 99, 384, 36, 271, 170, 280, 385, 149, 166, 591, 332, 406, 87, 396, 344, 154, 93, 439, 125, 470, 262, 534, 42, 683, 212, 82, 62, 153, 174, 80, 638, 418, 2, 119, 415, 176, 264, 37, 299, 500, 227, 296, 23, 226, 403, 90, 362, 27, 257, 480, 130, 185, 124, 384, 15, 208, 109, 289, 137, 13, 23, 332, 44, 13, 198, 256, 70, 265, 454, 30, 70, 49, 772, 203, 102, 30, 130, 195, 72, 235, 4, 313, 255, 501, 612, 400, 868, 31, 130, 445, 636, 577, 347, 343, 89, 143, 284, 210, 170, 49, 213, 196, 31, 453, 247, 317, 177, 211, 30, 27, 437, 384, 62, 130, 244, 82, 54, 143, 384, 298, 426, 341, 483, 94, 474, 20, 52, 139, 149, 136, 19, 83, 70, 697, 77, 560, 106, 242, 229, 227, 140, 4, 575, 253, 10, 230, 213, 552, 455, 239, 67, 296, 543, 292, 31, 134, 221, 104, 76, 221, 272, 394, 622, 396, 94, 344, 294, 95, 149, 22, 148, 248, 508, 662, 447, 331, 379, 55, 59, 147, 257, 105, 76, 282, 28, 394, 8, 227, 25, 169, 59, 193, 137, 393, 111, 120, 372, 452, 277, 98, 290, 124, 125, 141, 221, 181, 14, 55, 202, 274, 118, 111, 131, 9, 228, 293, 23, 129, 96, 147, 575, 267, 613, 44, 222, 213, 129, 177, 41, 470, 839, 100, 355, 208, 198, 334, 212, 253, 91, 734, 88, 131, 432, 342, 993, 398, 468, 438, 219, 646, 299, 52, 152, 103, 154, 19, 587, 141, 69, 6, 314, 104, 274, 263, 233, 262, 595, 468, 406, 224, 173, 444, 280, 321, 136, 320, 94, 52, 361, 359, 344, 6, 122, 103, 309, 134, 83, 62, 50, 72, 244, 184, 344, 65, 113, 165, 271, 570, 258, 7, 257, 147, 51, 335, 134, 11, 53, 393, 659, 185, 25, 478, 9, 24, 9, 202, 5, 226, 563, 228, 40, 232, 604, 125, 344, 280, 222, 128, 186, 252, 38, 6, 11, 148, 390, 137, 406, 657, 13, 207, 142, 542, 62, 299, 522, 230, 551, 30, 352, 235, 161, 101, 183, 93, 418, 412, 45, 314, 172, 17, 47, 513, 103, 31, 211, 280, 431, 208, 52, 426, 62, 242, 671, 334, 396, 51, 441, 458, 46, 625, 284, 523, 760, 290, 177, 57, 7, 222, 480, 632, 141, 239, 223, 843, 428, 394, 225, 30, 234, 450, 51, 122, 246, 485, 286, 356, 18, 419, 323, 306, 628, 472, 70, 518, 493, 110, 127, 52, 191, 93, 144, 713, 509, 567, 179, 226, 122, 223, 339, 248, 197, 423, 446, 179, 166, 507, 31, 303, 401, 439, 25, 407, 209, 212, 319, 756, 38, 49, 129, 300, 4, 226, 249, 89, 290, 188, 140, 475, 319, 802, 262, 5, 404, 698, 630, 81, 343, 1110, 1053, 333, 210, 188, 584, 32, 58, 32, 543, 36, 525, 252, 265, 460, 260, 215, 229, 125, 149, 181, 237, 383, 26, 178, 4, 323, 196, 345, 398, 290, 45, 101, 112, 42, 104, 284, 290, 115, 411, 123, 400, 622, 386, 370, 409, 50, 156, 513, 209, 319, 30, 62, 171, 165, 467, 67, 79, 768, 431, 253, 361, 80, 576, 97, 289, 374, 143, 321, 257, 15, 19, 403, 598, 287, 160, 28, 220, 440, 186, 140, 328, 191, 53, 195, 66, 598, 82, 415, 389, 175, 223, 294, 536, 425, 264, 53, 775, 500, 593, 229, 207, 984, 266, 267, 52, 102, 267, 387, 478, 451, 358, 8, 9, 288, 44, 129, 456, 134, 134, 31, 107, 106, 429, 380, 424, 101, 142, 614, 368, 121, 178, 69, 282, 443, 215, 443, 29, 267, 250, 554, 26, 709, 298, 26, 130, 109 };
# 3 "ECG_DATA/ECG_DATA_1.h"
uint16_t DATA[12] = { 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 };
typedef uint16_t BSNNodeC$ACCRead$val_t;
typedef uint16_t BSNNodeC$ECGRead$val_t;
typedef TMilli BSNNodeC$Timer$precision_tag;
enum AMQueueP$__nesc_unnamed4327 {
  AMQueueP$NUM_CLIENTS = 1U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef uint16_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$val_t;
typedef TMilli /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerInit$precision_tag;
typedef TMilli /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerRead$precision_tag;
typedef uint16_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$val_t;
typedef TMilli /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerInit$precision_tag;
typedef TMilli /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerRead$precision_tag;
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP$Init$init(void );
#line 62
static error_t MotePlatformP$SubInit$default$init(void );
#line 62
static error_t MotePlatformP$PlatformInit$init(void );
# 44 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t MeasureClockC$Init$init(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(
# 49 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x40423ba0);
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$default$runTask(
# 49 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x40423ba0);
# 57 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP$Scheduler$init(void );







static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
# 44 "/home/user/tinyos-main/tos/lib/tossim/SimMote.nc"
static void SimMoteP$SimMote$setEuid(long long int euid);


static int SimMoteP$SimMote$getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP$SimMote$turnOff(void );
#line 48
static void SimMoteP$SimMote$turnOn(void );
#line 43
static long long int SimMoteP$SimMote$getEuid(void );


static bool SimMoteP$SimMote$isOn(void );
#line 45
static long long int SimMoteP$SimMote$getStartTime(void );
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC$AMSend$send(
# 47 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x4088cc80, 
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$default$receive(
# 49 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x40894d30, 
# 71 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/home/user/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC$Packet$payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


TossimActiveMessageC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );
#line 94
static void TossimActiveMessageC$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$default$receive(
# 48 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x408946d8, 
# 71 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 85 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 76
static void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC$Model$shouldAck(message_t *msg);
# 68 "/home/user/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC$AMPacket$address(void );









static am_addr_t TossimActiveMessageC$AMPacket$destination(
#line 74
message_t * amsg);
#line 103
static void TossimActiveMessageC$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t TossimActiveMessageC$AMPacket$type(
#line 143
message_t * amsg);
#line 162
static void TossimActiveMessageC$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool TossimActiveMessageC$AMPacket$isForMe(
#line 133
message_t * amsg);
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$stopDoneTask$runTask(void );
# 57 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC$Packet$send(int node, message_t *msg, uint8_t len);
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$sendDoneTask$runTask(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t TossimPacketModelC$Init$init(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC$startDoneTask$runTask(void );
# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC$Control$start(void );
#line 130
static error_t TossimPacketModelC$Control$stop(void );
# 59 "/home/user/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 85
static bool TossimPacketModelC$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 60 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$receive(message_t *msg);
#line 59
static void TossimPacketModelC$GainRadioModel$acked(message_t *msg);

static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
#line 48
static void CpmModelC$Model$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC$Model$clearChannel(void );
static void CpmModelC$Model$setPendingTransmission(void );
# 60 "/home/user/tinyos-main/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$amAddress(void );
# 50 "/home/user/tinyos-main/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void BSNNodeC$sendResponse$runTask(void );
# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static void BSNNodeC$AMControl$startDone(error_t error);
#line 138
static void BSNNodeC$AMControl$stopDone(error_t error);
# 60 "/home/user/tinyos-main/tos/interfaces/Boot.nc"
static void BSNNodeC$Boot$booted(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void BSNNodeC$storeResponse$runTask(void );
# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static void BSNNodeC$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 63 "/home/user/tinyos-main/tos/interfaces/Read.nc"
static void BSNNodeC$ACCRead$readDone(error_t result, BSNNodeC$ACCRead$val_t val);
# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static void BSNNodeC$ECGSplitControl$startDone(error_t error);
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



BSNNodeC$Receive$receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static void BSNNodeC$ACCSplitControl$startDone(error_t error);
# 63 "/home/user/tinyos-main/tos/interfaces/Read.nc"
static void BSNNodeC$ECGRead$readDone(error_t result, BSNNodeC$ECGRead$val_t val);
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void BSNNodeC$startMonitoring$runTask(void );
#line 75
static void BSNNodeC$evaluateSituation$runTask(void );
#line 75
static void BSNNodeC$startSession$runTask(void );
# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void BSNNodeC$Timer$fired(void );
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/user/tinyos-main/tos/interfaces/Send.nc"
static void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 48 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x409fb624, 
# 103 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/user/tinyos-main/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 46 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x409fec24, 
# 67 "/home/user/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 46 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x409fec24, 
# 96 "/home/user/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
# 109 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
# 64 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
#line 61
static HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 67
static void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size t);
# 44 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );
# 53 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t control);
# 48 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type t);










static void HplAtm128Timer0AsyncP$Compare$start(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );
# 78 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
# 136 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 48 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40b79cf8);
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 48 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40b79cf8, 
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$SplitControl$start(void );
# 55 "/home/user/tinyos-main/tos/interfaces/Read.nc"
static error_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$read(void );
# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerInit$fired(void );
#line 83
static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerRead$fired(void );
# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$SplitControl$start(void );
# 55 "/home/user/tinyos-main/tos/interfaces/Read.nc"
static error_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$read(void );
# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerInit$fired(void );
#line 83
static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerRead$fired(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t PlatformP$MoteInit$init(void );
#line 62
static error_t PlatformP$MeasureClock$init(void );
# 51 "/home/user/tinyos-main/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t MotePlatformP$SubInit$init(void );
# 44 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
static void MotePlatformP$SerialIdPin$makeInput(void );
#line 41
static void MotePlatformP$SerialIdPin$clr(void );
# 49 "/home/user/tinyos-main/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void );
#line 61
static inline error_t MotePlatformP$SubInit$default$init(void );
# 59 "/home/user/tinyos-main/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void );
# 21 "/home/user/tinyos-main/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t SimMainP$SoftwareInit$init(void );
# 60 "/home/user/tinyos-main/tos/interfaces/Boot.nc"
static void SimMainP$Boot$booted(void );
# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
static error_t SimMainP$PlatformInit$init(void );
# 57 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
static void SimMainP$Scheduler$init(void );







static bool SimMainP$Scheduler$runNextTask(void );
# 51 "/home/user/tinyos-main/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP$TaskBasic$runTask(
# 49 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x40423ba0);



enum SimSchedulerBasicP$__nesc_unnamed4328 {

  SimSchedulerBasicP$NUM_TASKS = 12U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void );







static void SimSchedulerBasicP$sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP$popTask(void );
#line 139
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void );
#line 180
static bool SimSchedulerBasicP$Scheduler$runNextTask(void );
#line 205
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 50 "/home/user/tinyos-main/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline long long int SimMoteP$SimMote$getEuid(void );


static inline void SimMoteP$SimMote$setEuid(long long int e);


static inline long long int SimMoteP$SimMote$getStartTime(void );


static inline bool SimMoteP$SimMote$isOn(void );



static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP$SimMote$turnOn(void );
#line 85
static inline void SimMoteP$SimMote$turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 57 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC$amAddress(void );
# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC$AMSend$sendDone(
# 47 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x4088cc80, 
# 103 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC$Snoop$receive(
# 49 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x40894d30, 
# 71 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



TossimActiveMessageC$Receive$receive(
# 48 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x408946d8, 
# 71 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len);
# 62 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC$buffer[1000];
message_t *TossimActiveMessageC$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg);







static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 103
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC$Model$receive(message_t *msg);
#line 127
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC$AMPacket$address(void );



static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg);




static inline void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg);




static inline void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg);



static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void );



static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len);
#line 212
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 236
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 254
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$stopDoneTask$postTask(void );
# 85 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC$Packet$receive(message_t *msg);
#line 76
static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC$Packet$shouldAck(message_t *msg);
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC$startDoneTask$postTask(void );
# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC$Control$startDone(error_t error);
#line 138
static void TossimPacketModelC$Control$stopDone(error_t error);
# 48 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC$GainRadioModel$clearChannel(void );
static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void );
# 96 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC$__nesc_unnamed4329 {
#line 96
  TossimPacketModelC$startDoneTask = 0U
};
#line 96
typedef int TossimPacketModelC$__nesc_sillytask_startDoneTask[TossimPacketModelC$startDoneTask];




enum TossimPacketModelC$__nesc_unnamed4330 {
#line 101
  TossimPacketModelC$stopDoneTask = 1U
};
#line 101
typedef int TossimPacketModelC$__nesc_sillytask_stopDoneTask[TossimPacketModelC$stopDoneTask];
#line 145
enum TossimPacketModelC$__nesc_unnamed4331 {
#line 145
  TossimPacketModelC$sendDoneTask = 2U
};
#line 145
typedef int TossimPacketModelC$__nesc_sillytask_sendDoneTask[TossimPacketModelC$sendDoneTask];
#line 70
bool TossimPacketModelC$initialized[1000];
bool TossimPacketModelC$running[1000];
uint8_t TossimPacketModelC$backoffCount[1000];
uint8_t TossimPacketModelC$neededFreeSamples[1000];
message_t *TossimPacketModelC$sending[1000];
bool TossimPacketModelC$transmitting[1000];
uint8_t TossimPacketModelC$sendingLength[1000];
int TossimPacketModelC$destNode[1000];
sim_event_t TossimPacketModelC$sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg);



static inline error_t TossimPacketModelC$Init$init(void );









static inline void TossimPacketModelC$startDoneTask$runTask(void );




static inline void TossimPacketModelC$stopDoneTask$runTask(void );




static error_t TossimPacketModelC$Control$start(void );








static inline error_t TossimPacketModelC$Control$stop(void );
#line 128
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg);
#line 140
static inline error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack);




static inline void TossimPacketModelC$sendDoneTask$runTask(void );
#line 159
static inline void TossimPacketModelC$start_csma(void );

static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len);
#line 183
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC$start_csma(void );
#line 211
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
#line 280
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg);





uint8_t TossimPacketModelC$error[1000];

static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg);










static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
# 60 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC$Model$receive(message_t *msg);
#line 59
static void CpmModelC$Model$acked(message_t *msg);

static bool CpmModelC$Model$shouldAck(message_t *msg);
# 58 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
bool CpmModelC$transmitting[1000];
sim_time_t CpmModelC$transmissionEndTime[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void );
#line 126
static double CpmModelC$noise_hash_generation(void );
#line 151
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 166
static inline int CpmModelC$shouldAckReceive(double snr);
#line 178
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 200
double CpmModelC$clearThreshold[1000];










static inline bool CpmModelC$Model$clearChannel(void );




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 248
static bool CpmModelC$shouldReceive(double SNR);
#line 260
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 274
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 428
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 459
static inline void CpmModelC$Model$setPendingTransmission(void );







static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 479
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void );



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 65 "/home/user/tinyos-main/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];









static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void );
#line 88
static inline am_addr_t ActiveMessageAddressC$amAddress(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t BSNNodeC$sendResponse$postTask(void );
# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t BSNNodeC$AMControl$start(void );
#line 130
static error_t BSNNodeC$AMControl$stop(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t BSNNodeC$storeResponse$postTask(void );
# 126 "/home/user/tinyos-main/tos/interfaces/Packet.nc"
static 
#line 123
void * 


BSNNodeC$Packet$getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static error_t BSNNodeC$AMSend$send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 55 "/home/user/tinyos-main/tos/interfaces/Read.nc"
static error_t BSNNodeC$ACCRead$read(void );
# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static error_t BSNNodeC$ECGSplitControl$start(void );
#line 104
static error_t BSNNodeC$ACCSplitControl$start(void );
# 55 "/home/user/tinyos-main/tos/interfaces/Read.nc"
static error_t BSNNodeC$ECGRead$read(void );
# 59 "/home/user/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
static error_t BSNNodeC$PacketAcknowledgements$requestAck(
#line 53
message_t * msg);
#line 85
static bool BSNNodeC$PacketAcknowledgements$wasAcked(
#line 80
message_t * msg);
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t BSNNodeC$startMonitoring$postTask(void );
#line 67
static error_t BSNNodeC$evaluateSituation$postTask(void );
#line 67
static error_t BSNNodeC$startSession$postTask(void );
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void BSNNodeC$Timer$startOneShot(uint32_t dt);
# 34 "BSNNodeC.nc"
enum BSNNodeC$__nesc_unnamed4332 {
#line 34
  BSNNodeC$startSession = 3U
};
#line 34
typedef int BSNNodeC$__nesc_sillytask_startSession[BSNNodeC$startSession];
enum BSNNodeC$__nesc_unnamed4333 {
#line 35
  BSNNodeC$sendResponse = 4U
};
#line 35
typedef int BSNNodeC$__nesc_sillytask_sendResponse[BSNNodeC$sendResponse];
enum BSNNodeC$__nesc_unnamed4334 {
#line 36
  BSNNodeC$storeResponse = 5U
};
#line 36
typedef int BSNNodeC$__nesc_sillytask_storeResponse[BSNNodeC$storeResponse];
enum BSNNodeC$__nesc_unnamed4335 {
#line 37
  BSNNodeC$startMonitoring = 6U
};
#line 37
typedef int BSNNodeC$__nesc_sillytask_startMonitoring[BSNNodeC$startMonitoring];
enum BSNNodeC$__nesc_unnamed4336 {
#line 38
  BSNNodeC$evaluateSituation = 7U
};
#line 38
typedef int BSNNodeC$__nesc_sillytask_evaluateSituation[BSNNodeC$evaluateSituation];
#line 26
message_t BSNNodeC$packet[1000];
uint16_t BSNNodeC$crisis[1000];
uint16_t BSNNodeC$movements[1000];
uint16_t BSNNodeC$responseCounter[1000];
uint16_t BSNNodeC$sampleCounter[1000];
uint16_t BSNNodeC$response[1000];
uint32_t BSNNodeC$accumulator[1000];









static inline void BSNNodeC$Boot$booted(void );
#line 57
static inline void BSNNodeC$AMControl$startDone(error_t err);
#line 69
static inline void BSNNodeC$ECGSplitControl$startDone(error_t err);









static inline void BSNNodeC$ACCSplitControl$startDone(error_t err);









static inline void BSNNodeC$AMControl$stopDone(error_t err);
#line 101
static inline message_t *BSNNodeC$Receive$receive(message_t *buf, void *payload, uint8_t len);
#line 124
static inline void BSNNodeC$Timer$fired(void );







static void BSNNodeC$AMSend$sendDone(message_t *buf, error_t err);
#line 161
static inline void BSNNodeC$ACCRead$readDone(error_t result, uint16_t data);






static inline void BSNNodeC$ECGRead$readDone(error_t result, uint16_t data);
#line 185
static inline void BSNNodeC$evaluateSituation$runTask(void );








static inline void BSNNodeC$sendResponse$runTask(void );






static inline void BSNNodeC$storeResponse$runTask(void );
#line 213
static inline void BSNNodeC$startSession$runTask(void );
#line 225
static inline void BSNNodeC$startMonitoring$runTask(void );
# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/user/tinyos-main/tos/interfaces/Send.nc"
static error_t /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/home/user/tinyos-main/tos/interfaces/AMPacket.nc"
static void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/home/user/tinyos-main/tos/system/AMQueueEntryP.nc"
static error_t /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 48 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
am_id_t arg_0x409fb624, 
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/user/tinyos-main/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 46 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
uint8_t arg_0x409fec24, 
# 96 "/home/user/tinyos-main/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/user/tinyos-main/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void );
# 78 "/home/user/tinyos-main/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(
#line 143
message_t * amsg);
# 126 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4337 {
#line 126
  AMQueueImplP$0$CancelTask = 8U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4338 {
#line 169
  AMQueueImplP$0$errorTask = 9U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4339 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1000][1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1000][1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void );
#line 90
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void );
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 53 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control);
# 78 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void );
# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void );
# 44 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void );
# 48 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void );
# 61 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void );
# 38 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4340 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void );
# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP$Timer0$overflow(void );
# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP$Compare$fired(void );
# 57 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void );







static inline void HplAtm128Timer0AsyncP$notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void );







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void );
#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP$Compare$start(void );









static uint8_t HplAtm128Timer0AsyncP$Compare$get(void );





static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void );







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void );







static inline void HplAtm128Timer0AsyncP$cancel_compare(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void );
# 109 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void );
# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void );
# 74 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4341 {
#line 74
  AlarmToTimerC$0$fired = 10U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void );
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void );
# 136 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 48 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x40b79cf8);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4342 {
#line 71
  VirtualizeTimerC$0$updateFromTimer = 11U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4343 {

  VirtualizeTimerC$0$NUM_TIMERS = 5U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4344 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 58 "/home/user/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void );
# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$SplitControl$startDone(error_t error);
# 63 "/home/user/tinyos-main/tos/interfaces/Read.nc"
static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$readDone(error_t result, /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$val_t val);
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerInit$startOneShot(uint32_t dt);
#line 73
static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerRead$startOneShot(uint32_t dt);
# 13 "ACCSensorP.nc"
uint16_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[1000][4];
uint16_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[1000];

static error_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$SplitControl$start(void );
#line 30
static error_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$read(void );
#line 64
static inline void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerInit$fired(void );



static inline void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerRead$fired(void );
# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$SplitControl$startDone(error_t error);
# 63 "/home/user/tinyos-main/tos/interfaces/Read.nc"
static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$readDone(error_t result, /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$val_t val);
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerInit$startOneShot(uint32_t dt);
#line 73
static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerRead$startOneShot(uint32_t dt);
# 13 "ECGSensorP.nc"
uint16_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[1000];
uint16_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$read_value[1000];

static inline error_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$SplitControl$start(void );










static inline error_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$read(void );
#line 39
static inline void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerInit$fired(void );



static inline void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerRead$fired(void );
# 78 "/home/user/tinyos-main/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 78
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 130
static inline void expand_heap(heap_t *heap)
#line 130
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 144
{
  int findex = heap->size;

#line 146
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 88
static inline int is_empty(heap_t *heap)
#line 88
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 92
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 96
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/home/user/tinyos-main/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 130 "/home/user/tinyos-main/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 130
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 134
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 140
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 64 "/home/user/tinyos-main/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP$SimMote$isOn(void )
#line 64
{
  return SimMoteP$isOn[sim_node()];
}

# 172 "/home/user/tinyos-main/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/home/user/tinyos-main/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/home/user/tinyos-main/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 284 "/home/user/tinyos-main/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 284
{
  dummy = 5;
}

# 50 "/home/user/tinyos-main/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 236 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$active_message_deliver_handle(sim_event_t *evt)
#line 236
{
  message_t *m = (message_t *)evt->data;

#line 238
  sim_log_debug(108U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC$Model$receive(m);
}

static inline sim_event_t *TossimActiveMessageC$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 242
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 244
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

#line 185
static inline uint8_t TossimActiveMessageC$Packet$maxPayloadLength(void )
#line 185
{
  return 28;
}

# 88 "/home/user/tinyos-main/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC$amAddress(void )
#line 88
{
  return ActiveMessageAddressC$ActiveMessageAddress$amAddress();
}

# 57 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
inline static am_addr_t TossimActiveMessageC$amAddress(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = ActiveMessageAddressC$amAddress();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 136
static inline am_addr_t TossimActiveMessageC$AMPacket$address(void )
#line 136
{
  return TossimActiveMessageC$amAddress();
}

#line 160
static inline bool TossimActiveMessageC$AMPacket$isForMe(message_t *amsg)
#line 160
{
  return TossimActiveMessageC$AMPacket$destination(amsg) == TossimActiveMessageC$AMPacket$address() || 
  TossimActiveMessageC$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t BSNNodeC$evaluateSituation$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BSNNodeC$evaluateSituation);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t BSNNodeC$startMonitoring$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BSNNodeC$startMonitoring);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 101 "BSNNodeC.nc"
static inline message_t *BSNNodeC$Receive$receive(message_t *buf, void *payload, uint8_t len)
#line 101
{

  my_msg_t *msg = (my_msg_t *)payload;
  uint16_t type = __nesc_ntoh_uint16(msg->type.nxdata);

  if (type == 0 && TOS_NODE_ID != 0) {
      BSNNodeC$startMonitoring$postTask();
      sim_log_debug(151U, "main", "%s - Nodo %hhu ricevuto messaggio START. \n", sim_time_string(), TOS_NODE_ID);
    }
  else {
#line 109
    if (type != 0 && TOS_NODE_ID == 0) {
        if (type == 3) {
            BSNNodeC$crisis[sim_node()]++;
          }
        else {
#line 112
          if (type == 2) {
              BSNNodeC$movements[sim_node()]++;
            }
          }
#line 115
        BSNNodeC$responseCounter[sim_node()]++;
        sim_log_debug(152U, "main", "%s - Nodo %hhu ricevuto %hhu responsi. \n", sim_time_string(), TOS_NODE_ID, BSNNodeC$responseCounter[sim_node()]);
        if (BSNNodeC$responseCounter[sim_node()] == 4) {
            BSNNodeC$evaluateSituation$postTask();
          }
      }
    }
#line 121
  return buf;
}

# 212 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Receive$receive(am_id_t arg_0x408946d8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x408946d8) {
#line 78
    case 6:
#line 78
      __nesc_result = BSNNodeC$Receive$receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = TossimActiveMessageC$Receive$default$receive(arg_0x408946d8, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 139 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP$sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 216 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 216
{
  return msg;
}

# 78 "/home/user/tinyos-main/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC$Snoop$receive(am_id_t arg_0x40894d30, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = TossimActiveMessageC$Snoop$default$receive(arg_0x40894d30, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 89 "/home/user/tinyos-main/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 85 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP$Scheduler$init(void )
{
  sim_log_debug(95U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 57 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
inline static void SimMainP$Scheduler$init(void ){
#line 57
  SimSchedulerBasicP$Scheduler$init();
#line 57
}
#line 57
# 120 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void )
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 125
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t BSNNodeC$AMControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TossimPacketModelC$Control$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t BSNNodeC$sendResponse$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BSNNodeC$sendResponse);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 57 "BSNNodeC.nc"
static inline void BSNNodeC$AMControl$startDone(error_t err)
#line 57
{
  if (err == SUCCESS) {
      sim_log_debug(148U, "main", "%s - Trasmettitore nodo %hhu acceso. \n", sim_time_string(), TOS_NODE_ID);
      if (TOS_NODE_ID != 0 && BSNNodeC$response[sim_node()] != 0) {
          BSNNodeC$sendResponse$postTask();
        }
    }
  else 
#line 63
    {
      sim_log_debug(149U, "main", "%s - Trasmettitore nodo %hhu accensione fallita, inizio nuovo tentativo. \n", sim_time_string(), TOS_NODE_ID);
      BSNNodeC$AMControl$start();
    }
}

# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$startDone(error_t error){
#line 113
  BSNNodeC$AMControl$startDone(error);
#line 113
}
#line 113
# 96 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$startDoneTask$runTask(void )
#line 96
{
  TossimPacketModelC$running[sim_node()] = TRUE;
  TossimPacketModelC$Control$startDone(SUCCESS);
}

# 89 "BSNNodeC.nc"
static inline void BSNNodeC$AMControl$stopDone(error_t err)
#line 89
{
  sim_log_debug(150U, "main", "%s - Trasmettitore nodo %hhu spento. \n", sim_time_string(), TOS_NODE_ID);
}

# 138 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC$Control$stopDone(error_t error){
#line 138
  BSNNodeC$AMControl$stopDone(error);
#line 138
}
#line 138
# 101 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$stopDoneTask$runTask(void )
#line 101
{
  TossimPacketModelC$running[sim_node()] = FALSE;
  TossimPacketModelC$Control$stopDone(SUCCESS);
}

# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC$AMSend$sendDone(am_id_t arg_0x4088cc80, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x4088cc80, msg, error);
#line 110
}
#line 110
# 103 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Model$sendDone(message_t *msg, error_t result)
#line 103
{
  TossimActiveMessageC$AMSend$sendDone(TossimActiveMessageC$AMPacket$type(msg), msg, result);
}

# 76 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$sendDone(message_t *msg, error_t error){
#line 76
  TossimActiveMessageC$Model$sendDone(msg, error);
#line 76
}
#line 76
# 82 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg)
#line 82
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 145
static inline void TossimPacketModelC$sendDoneTask$runTask(void )
#line 145
{
  message_t *msg = TossimPacketModelC$sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 148
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC$sending[sim_node()] = FALSE;
  TossimPacketModelC$Packet$sendDone(msg, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t BSNNodeC$AMSend$send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 59 "/home/user/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
inline static error_t BSNNodeC$PacketAcknowledgements$requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 189 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void *TossimActiveMessageC$Packet$getPayload(message_t *msg, uint8_t len)
#line 189
{
  if (len <= 28) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 126 "/home/user/tinyos-main/tos/interfaces/Packet.nc"
inline static void * BSNNodeC$Packet$getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC$Packet$getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 213 "BSNNodeC.nc"
static inline void BSNNodeC$startSession$runTask(void )
#line 213
{
  my_msg_t *messaggio = (my_msg_t *)BSNNodeC$Packet$getPayload(&BSNNodeC$packet[sim_node()], sizeof(my_msg_t ));

#line 215
  __nesc_hton_uint16(messaggio->type.nxdata, 0);
  BSNNodeC$responseCounter[sim_node()] = 0;
  BSNNodeC$crisis[sim_node()] = 0;
  BSNNodeC$movements[sim_node()] = 0;
  sim_log_debug(161U, "main", "%s - Tentativo inizio sessione di monitoraggio,\n", sim_time_string());
  BSNNodeC$PacketAcknowledgements$requestAck(&BSNNodeC$packet[sim_node()]);
  BSNNodeC$AMSend$send(AM_BROADCAST_ADDR, &BSNNodeC$packet[sim_node()], sizeof(my_msg_t ));
}

#line 194
static inline void BSNNodeC$sendResponse$runTask(void )
#line 194
{
  my_msg_t *msg = (my_msg_t *)BSNNodeC$Packet$getPayload(&BSNNodeC$packet[sim_node()], sizeof(my_msg_t ));

#line 196
  __nesc_hton_uint16(msg->type.nxdata, BSNNodeC$response[sim_node()]);
  BSNNodeC$PacketAcknowledgements$requestAck(&BSNNodeC$packet[sim_node()]);
  BSNNodeC$AMSend$send(AM_BROADCAST_ADDR, &BSNNodeC$packet[sim_node()], sizeof(my_msg_t ));
}

static inline void BSNNodeC$storeResponse$runTask(void )
#line 201
{
  float result = 0.0000007629 * BSNNodeC$accumulator[sim_node()];

#line 203
  if (result <= 0.5) {
      BSNNodeC$response[sim_node()] = 1;
    }
  else {
#line 205
    if (result >= 2) {
        BSNNodeC$response[sim_node()] = 3;
      }
    else 
#line 207
      {
        BSNNodeC$response[sim_node()] = 2;
      }
    }
#line 210
  BSNNodeC$AMControl$start();
}

# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void BSNNodeC$Timer$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, dt);
#line 73
}
#line 73
# 55 "/home/user/tinyos-main/tos/interfaces/Read.nc"
inline static error_t BSNNodeC$ACCRead$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$stopDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 115 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Control$stop(void )
#line 115
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(112U, "TossimPacketModelC", "TossimPacketModelC: Control.stop() called before initialization!\n");
      return FAIL;
    }
  TossimPacketModelC$running[sim_node()] = FALSE;
  sim_log_debug(113U, "TossimPacketModelC", "TossimPacketModelC: Control.stop() called.\n");
  TossimPacketModelC$stopDoneTask$postTask();
  return SUCCESS;
}

# 130 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t BSNNodeC$AMControl$stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = TossimPacketModelC$Control$stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 225 "BSNNodeC.nc"
static inline void BSNNodeC$startMonitoring$runTask(void )
#line 225
{
  BSNNodeC$response[sim_node()] = 0;
  BSNNodeC$sampleCounter[sim_node()] = 0;
  BSNNodeC$accumulator[sim_node()] = 0;
  BSNNodeC$AMControl$stop();
  BSNNodeC$ACCRead$read();
  BSNNodeC$sampleCounter[sim_node()]++;
  BSNNodeC$Timer$startOneShot(50);
}

# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t BSNNodeC$startSession$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BSNNodeC$startSession);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerRead$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(3U, dt);
#line 73
}
#line 73
# 27 "ECGSensorP.nc"
static inline error_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$read(void )
#line 27
{

  /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$read_value[sim_node()] = DATA[/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[sim_node()]];
  /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[sim_node()]++;
  if (/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[sim_node()] == 12) {
    /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[sim_node()] = 0;
    }
  /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerRead$startOneShot(2);
  return SUCCESS;
}

# 55 "/home/user/tinyos-main/tos/interfaces/Read.nc"
inline static error_t BSNNodeC$ECGRead$read(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$read();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 185 "BSNNodeC.nc"
static inline void BSNNodeC$evaluateSituation$runTask(void )
#line 185
{
  if (BSNNodeC$crisis[sim_node()] + BSNNodeC$movements[sim_node()] > 2) {
      BSNNodeC$ECGRead$read();
    }
  else 
#line 188
    {
      sim_log_debug(160U, "main", "%s - OUTPUT = NO_MOVEMENT\n", sim_time_string());
      BSNNodeC$startSession$postTask();
    }
}

# 169 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg, FAIL);
}

# 110 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t * msg, error_t error){
#line 110
  BSNNodeC$AMSend$sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/user/tinyos-main/tos/system/AMQueueEntryP.nc"
static inline void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 65
{
  /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 215 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/user/tinyos-main/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x409fec24, message_t * msg, error_t error){
#line 100
  switch (arg_0x409fec24) {
#line 100
    case 0U:
#line 100
      /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x409fec24, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 222 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 109 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 136 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 139 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 83
}
#line 83
# 226 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 129 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 73
}
#line 73
# 71 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 78 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 78
}
#line 78
# 100 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 221 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 75 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x40423ba0){
#line 75
  switch (arg_0x40423ba0) {
#line 75
    case TossimPacketModelC$startDoneTask:
#line 75
      TossimPacketModelC$startDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$stopDoneTask:
#line 75
      TossimPacketModelC$stopDoneTask$runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC$sendDoneTask:
#line 75
      TossimPacketModelC$sendDoneTask$runTask();
#line 75
      break;
#line 75
    case BSNNodeC$startSession:
#line 75
      BSNNodeC$startSession$runTask();
#line 75
      break;
#line 75
    case BSNNodeC$sendResponse:
#line 75
      BSNNodeC$sendResponse$runTask();
#line 75
      break;
#line 75
    case BSNNodeC$storeResponse:
#line 75
      BSNNodeC$storeResponse$runTask();
#line 75
      break;
#line 75
    case BSNNodeC$startMonitoring:
#line 75
      BSNNodeC$startMonitoring$runTask();
#line 75
      break;
#line 75
    case BSNNodeC$evaluateSituation:
#line 75
      BSNNodeC$evaluateSituation$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x40423ba0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 61 "/home/user/tinyos-main/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getStartTime(void )
#line 61
{
  return SimMoteP$startTime[sim_node()];
}

# 127 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4311 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 124 "BSNNodeC.nc"
static inline void BSNNodeC$Timer$fired(void )
#line 124
{
  BSNNodeC$sampleCounter[sim_node()]++;
  BSNNodeC$ACCRead$read();
  if (BSNNodeC$sampleCounter[sim_node()] < 200) {
      BSNNodeC$Timer$startOneShot(50);
    }
}

# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t BSNNodeC$storeResponse$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(BSNNodeC$storeResponse);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 161 "BSNNodeC.nc"
static inline void BSNNodeC$ACCRead$readDone(error_t result, uint16_t data)
#line 161
{
  BSNNodeC$accumulator[sim_node()] += data;
  if (BSNNodeC$sampleCounter[sim_node()] == 200) {
      BSNNodeC$storeResponse$postTask();
    }
}

# 63 "/home/user/tinyos-main/tos/interfaces/Read.nc"
inline static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$readDone(error_t result, /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$val_t val){
#line 63
  BSNNodeC$ACCRead$readDone(result, val);
#line 63
}
#line 63
# 68 "ACCSensorP.nc"
static inline void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerRead$fired(void )
#line 68
{
  /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$readDone(SUCCESS, /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[sim_node()]);
}

# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t BSNNodeC$ACCSplitControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$SplitControl$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 79 "BSNNodeC.nc"
static inline void BSNNodeC$ACCSplitControl$startDone(error_t err)
#line 79
{
  if (err != SUCCESS) {
      if (TOS_NODE_ID != 0) {
          BSNNodeC$ACCSplitControl$start();
        }
    }
}

# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$SplitControl$startDone(error_t error){
#line 113
  BSNNodeC$ACCSplitControl$startDone(error);
#line 113
}
#line 113
# 64 "ACCSensorP.nc"
static inline void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerInit$fired(void )
#line 64
{
  /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$SplitControl$startDone(SUCCESS);
}

# 168 "BSNNodeC.nc"
static inline void BSNNodeC$ECGRead$readDone(error_t result, uint16_t data)
#line 168
{
  if (data == 1 && BSNNodeC$crisis[sim_node()] > 1) {
      sim_log_debug(158U, "main", "%s OUTPUT = CRISIS !!!!!!!!!!!!!!!!!!\n", sim_time_string());
    }
  else 
#line 171
    {
      sim_log_debug(159U, "main", "%s OUTPUT = MOVEMENT\n", sim_time_string());
    }
  BSNNodeC$startSession$postTask();
}

# 63 "/home/user/tinyos-main/tos/interfaces/Read.nc"
inline static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$readDone(error_t result, /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$val_t val){
#line 63
  BSNNodeC$ECGRead$readDone(result, val);
#line 63
}
#line 63
# 43 "ECGSensorP.nc"
static inline void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerRead$fired(void )
#line 43
{
  /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$Read$readDone(SUCCESS, /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$read_value[sim_node()]);
}

# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerInit$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(4U, dt);
#line 73
}
#line 73
# 16 "ECGSensorP.nc"
static inline error_t /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$SplitControl$start(void )
#line 16
{
  /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[sim_node()] = 0;
  /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerInit$startOneShot(2);
  return SUCCESS;
}

# 104 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static error_t BSNNodeC$ECGSplitControl$start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$SplitControl$start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 69 "BSNNodeC.nc"
static inline void BSNNodeC$ECGSplitControl$startDone(error_t err)
#line 69
{
  if (err == SUCCESS) {
      if (TOS_NODE_ID == 0) {
          BSNNodeC$startSession$postTask();
        }
    }
  else 
#line 74
    {
      BSNNodeC$ECGSplitControl$start();
    }
}

# 113 "/home/user/tinyos-main/tos/interfaces/SplitControl.nc"
inline static void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$SplitControl$startDone(error_t error){
#line 113
  BSNNodeC$ECGSplitControl$startDone(error);
#line 113
}
#line 113
# 39 "ECGSensorP.nc"
static inline void /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerInit$fired(void )
#line 39
{
  /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$SplitControl$startDone(SUCCESS);
}

# 204 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 83 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x40b79cf8){
#line 83
  switch (arg_0x40b79cf8) {
#line 83
    case 0U:
#line 83
      BSNNodeC$Timer$fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerRead$fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerInit$fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerRead$fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$TimerInit$fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x40b79cf8);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 73 "/home/user/tinyos-main/tos/lib/timer/Timer.nc"
inline static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerInit$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, dt);
#line 73
}
#line 73
inline static void /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerRead$startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, dt);
#line 73
}
#line 73
# 54 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type t){
#line 54
  HplAtm128Timer0AsyncP$Compare$set(t);
#line 54
}
#line 54
# 61 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP$Timer0$get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 577 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void )
#line 577
{
  sim_log_debug(193U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP$notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(192U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(189U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(190U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 299
  sim_log_debug(182U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(172U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(173U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(174U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(175U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(176U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(177U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(178U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(179U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void )
#line 230
{
}

# 70 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP$Timer0$overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 70
}
#line 70
# 58 "/home/user/tinyos-main/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void )
{
}

# 82 "/home/user/tinyos-main/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 82
}
#line 82
# 85 "/home/user/tinyos-main/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP$Compare$get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 58 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP$Compare$fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 58
}
#line 58
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/user/tinyos-main/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 78 "/home/user/tinyos-main/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 78
}
#line 78
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 140 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$PacketAcknowledgements$wasAcked(message_t *ack)
#line 140
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(ack);

#line 142
  return __nesc_ntoh_uint8(meta->ack.nxdata);
}

# 85 "/home/user/tinyos-main/tos/interfaces/PacketAcknowledgements.nc"
inline static bool BSNNodeC$PacketAcknowledgements$wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = TossimPacketModelC$PacketAcknowledgements$wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 80 "/home/user/tinyos-main/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x409fb624, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = TossimActiveMessageC$AMSend$send(arg_0x409fb624, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 65 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC$getHeader(message_t *amsg)
#line 65
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 177
static inline uint8_t TossimActiveMessageC$Packet$payloadLength(message_t *msg)
#line 177
{
  return __nesc_ntoh_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata);
}

# 78 "/home/user/tinyos-main/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$Packet$payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 78 "/home/user/tinyos-main/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC$AMPacket$destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC$AMPacket$type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 65 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 1;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 483 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 483
{
  free(msg);
}

# 61 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC$Model$shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = TossimPacketModelC$GainRadioModel$shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC$Packet$receive(message_t *msg){
#line 85
  TossimActiveMessageC$Model$receive(msg);
#line 85
}
#line 85
# 288 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$receive(message_t *msg)
#line 288
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      TossimPacketModelC$Packet$receive(msg);
    }
}

# 60 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$receive(message_t *msg){
#line 60
  TossimPacketModelC$GainRadioModel$receive(msg);
#line 60
}
#line 60
# 260 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 260
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 263
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 296
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 296
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(128U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 311
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(129U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 317
  sim_log_debug(130U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(131U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 327
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);

      sim_log_debug_clear(132U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(133U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(134U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(135U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(136U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(137U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(138U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 467
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 467
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 469
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void )
#line 479
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 369
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 369
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 374
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(139U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 396
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(140U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 400
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(141U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
#line 404
        if (CpmModelC$transmitting[sim_node()] && rcv->start < CpmModelC$transmissionEndTime[sim_node()] && CpmModelC$transmissionEndTime[sim_node()] <= rcv->end) {
            sim_log_debug(142U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC$transmissionEndTime[sim_node()]);
            rcv->lost = 1;
          }
        else {
            CpmModelC$receiving[sim_node()] = 1;
          }
        }
      }
    }
#line 412
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(143U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 428
{
  int prevNode = sim_node();

#line 430
  sim_log_debug(144U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 436
{
  CpmModelC$receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 439
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  CpmModelC$transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(145U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 446
      CpmModelC$sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(146U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC$Model$putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 280 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt)
#line 280
{
  message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 282
  TossimPacketModelC$sending[sim_node()] = (void *)0;
  TossimPacketModelC$transmitting[sim_node()] = FALSE;
  sim_log_debug(120U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC$Packet$sendDone(rval, TossimPacketModelC$running[sim_node()] ? SUCCESS : EOFF);
}

#line 253
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt)
#line 253
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

  duration = 8 * TossimPacketModelC$sendingLength[sim_node()];
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC$send_transmit_done;

  sim_log_debug(118U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC$GainRadioModel$putOnAirTo(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(119U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 459 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$Model$setPendingTransmission(void )
#line 459
{
  CpmModelC$transmitting[sim_node()] = TRUE;
  sim_log_debug(147U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC$transmitting[sim_node()], sim_time_string());
}

# 57 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC$GainRadioModel$setPendingTransmission(void ){
#line 57
  CpmModelC$Model$setPendingTransmission();
#line 57
}
#line 57
# 211 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$Model$clearChannel(void )
#line 211
{
  sim_log_debug(126U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 56 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC$GainRadioModel$clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC$Model$clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 211 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt)
#line 211
{
  TossimPacketModelC$backoffCount[sim_node()]++;
  if (TossimPacketModelC$GainRadioModel$clearChannel()) {
      TossimPacketModelC$neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC$neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 221
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC$transmitting[sim_node()] = TRUE;
      TossimPacketModelC$GainRadioModel$setPendingTransmission();
      evt->handle = TossimPacketModelC$send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 229
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC$backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 233
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC$backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 243
        TossimPacketModelC$sending[sim_node()] = (void *)0;
        sim_log_debug(117U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC$Packet$sendDone(rval, EBUSY);
      }
    }
}

#line 187
static inline void TossimPacketModelC$start_csma(void )
#line 187
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 194
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(116U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC$sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC$sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC$sendEvent[sim_node()].force = 0;
  TossimPacketModelC$sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC$sendEvent[sim_node()].handle = TossimPacketModelC$send_backoff;
  TossimPacketModelC$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC$sendEvent[sim_node()]);
}

#line 161
static inline error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len)
#line 161
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(114U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC$running[sim_node()]) {
      sim_log_error(115U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC$sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC$sendingLength[sim_node()] = len;
  TossimPacketModelC$sending[sim_node()] = msg;
  TossimPacketModelC$destNode[sim_node()] = dest;
  TossimPacketModelC$backoffCount[sim_node()] = 0;
  TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC$start_csma();
  return SUCCESS;
}

# 57 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC$Model$send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = TossimPacketModelC$Packet$send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 90 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void )
#line 90
{
  sim_time_t ftime = sim_time();
  int hours;
#line 92
  int minutes;
#line 92
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

#line 230
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 230
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 239
  sim_log_debug(127U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 242
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 245
  return prr_hat;
}

# 127 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC$Model$shouldAck(message_t *msg)
#line 127
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(msg);

#line 129
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC$amAddress()) {
      sim_log_debug(107U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 87 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC$Packet$shouldAck(message_t *msg){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TossimActiveMessageC$Model$shouldAck(msg);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 296 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$GainRadioModel$acked(message_t *msg)
#line 296
{
  if (TossimPacketModelC$running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

#line 299
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC$sending[sim_node()]) {
          TossimPacketModelC$error[sim_node()] = 1;
          sim_log_debug(121U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC$sending[sim_node()]);
        }
    }
}

# 59 "/home/user/tinyos-main/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC$Model$acked(message_t *msg){
#line 59
  TossimPacketModelC$GainRadioModel$acked(msg);
#line 59
}
#line 59
# 151 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 151
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 157
  sim_log_debug(124U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 160
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 163
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 166
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 169
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 173
        prr = 0.0;
        }
    }
#line 175
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 178
{






  if (
#line 184
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 191
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

# 67 "/home/user/tinyos-main/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC$startDoneTask$postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 145 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 145
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 147
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/home/user/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC$AMPacket$setDestination(amsg, addr);
#line 103
}
#line 103
# 170 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$AMPacket$setType(message_t *amsg, am_id_t t)
#line 170
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 172
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 162 "/home/user/tinyos-main/tos/interfaces/AMPacket.nc"
inline static void /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC$AMPacket$setType(amsg, t);
#line 162
}
#line 162
# 181 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 181
{
  __nesc_hton_uint8(TossimActiveMessageC$getHeader(msg)->length.nxdata, len);
}

# 94 "/home/user/tinyos-main/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t * msg, uint8_t len){
#line 94
  TossimActiveMessageC$Packet$setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(162U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      sim_log_debug(163U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(164U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(165U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 75 "/home/user/tinyos-main/tos/interfaces/Send.nc"
inline static error_t /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 61 "/home/user/tinyos-main/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$SubInit$default$init(void )
#line 61
{
  return SUCCESS;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t MotePlatformP$SubInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$SubInit$default$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 59 "/home/user/tinyos-main/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void )
#line 59
{
#line 59
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 41 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 41
}
#line 41
# 62 "/home/user/tinyos-main/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void )
#line 62
{
#line 62
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 44 "/home/user/tinyos-main/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP$SerialIdPin$makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 44
}
#line 44
# 49 "/home/user/tinyos-main/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP$PlatformInit$init(void )
#line 49
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP$MoteInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP$PlatformInit$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 69 "/home/user/tinyos-main/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 21 "/home/user/tinyos-main/tos/platforms/mica/sim/MeasureClockC.nc"
static inline error_t MeasureClockC$Init$init(void )
#line 21
{
  return SUCCESS;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t PlatformP$MeasureClock$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/home/user/tinyos-main/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP$Init$init(void )
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  return ok;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t SimMainP$PlatformInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP$Init$init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/user/tinyos-main/tos/interfaces/Scheduler.nc"
inline static bool SimMainP$Scheduler$runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 86 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC$Init$init(void )
#line 86
{
  sim_log_debug(109U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC$initialized[sim_node()] = TRUE;



  TossimPacketModelC$sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 447 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Compare$start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void ){
#line 65
  HplAtm128Timer0AsyncP$Compare$start();
#line 65
}
#line 65
# 364 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(184U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(control);
#line 46
}
#line 46
# 561 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/home/user/tinyos-main/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 62 "/home/user/tinyos-main/tos/interfaces/Init.nc"
inline static error_t SimMainP$SoftwareInit$init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init();
#line 62
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC$Init$init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 42 "BSNNodeC.nc"
static inline void BSNNodeC$Boot$booted(void )
#line 42
{
  BSNNodeC$crisis[sim_node()] = 0;
  BSNNodeC$movements[sim_node()] = 0;
  BSNNodeC$responseCounter[sim_node()] = 0;
  BSNNodeC$response[sim_node()] = 0;
  BSNNodeC$sampleCounter[sim_node()] = 0;
  BSNNodeC$accumulator[sim_node()] = 0;
  BSNNodeC$AMControl$start();
  if (TOS_NODE_ID == 0) {
      BSNNodeC$ECGSplitControl$start();
    }
  else 
#line 52
    {
      BSNNodeC$ACCSplitControl$start();
    }
}

# 60 "/home/user/tinyos-main/tos/interfaces/Boot.nc"
inline static void SimMainP$Boot$booted(void ){
#line 60
  BSNNodeC$Boot$booted();
#line 60
}
#line 60
# 55 "/home/user/tinyos-main/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP$SimMote$getEuid(void )
#line 55
{
  return SimMoteP$euid[sim_node()];
}

#line 58
static inline void SimMoteP$SimMote$setEuid(long long int e)
#line 58
{
  SimMoteP$euid[sim_node()] = e;
}







static inline int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 68
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 85
static inline void SimMoteP$SimMote$turnOff(void )
#line 85
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 157
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 157
{
  char buf[128];

#line 159
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(103U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 46 "/home/user/tinyos-main/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/home/user/tinyos-main/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 121 "/home/user/tinyos-main/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 197 "/home/user/tinyos-main/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 197
{
  int parent_index;

#line 199
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 158
static void swap(node_t *first, node_t *second)
#line 158
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/home/user/tinyos-main/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 114 "/home/user/tinyos-main/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 114
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 117
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 171
static void down_heap(heap_t *heap, int findex)
#line 171
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 185
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 190
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/home/user/tinyos-main/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/home/user/tinyos-main/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/home/user/tinyos-main/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/home/user/tinyos-main/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/home/user/tinyos-main/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}









  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 134 "/home/user/tinyos-main/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 134
{
  bool result;
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/home/user/tinyos-main/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 156 "/home/user/tinyos-main/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/home/user/tinyos-main/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/home/user/tinyos-main/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 84 "/home/user/tinyos-main/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 84
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 419
  void makeNoiseModel(uint16_t node_id)
#line 419
{
  int i;

#line 421
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id);
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 113
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 116
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 144
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 150
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 169
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 245
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 248
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 192
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 201
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 215
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 235
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 97
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 97
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 102
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 123
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 126
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 288
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 298
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 350
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 357
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/home/user/tinyos-main/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 364 "/home/user/tinyos-main/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 364
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 388
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 394
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/home/user/tinyos-main/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/home/user/tinyos-main/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 254 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 254
{
  sim_event_t *evt = TossimActiveMessageC$allocate_deliver_event(node, msg, t);

#line 256
  sim_queue_insert(evt);
}

#line 109
static void TossimActiveMessageC$Model$receive(message_t *msg)
#line 109
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC$bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC$Packet$payloadLength(TossimActiveMessageC$bufferPointer[sim_node()]);
  payload = TossimActiveMessageC$Packet$getPayload(TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$Packet$maxPayloadLength());

  if (TossimActiveMessageC$AMPacket$isForMe(msg)) {
      sim_log_debug(105U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC$bufferPointer[sim_node()], TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Receive$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(106U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), len, TossimActiveMessageC$AMPacket$destination(TossimActiveMessageC$bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC$bufferPointer[sim_node()] = TossimActiveMessageC$Snoop$receive(TossimActiveMessageC$AMPacket$type(TossimActiveMessageC$bufferPointer[sim_node()]), TossimActiveMessageC$bufferPointer[sim_node()], payload, len);
    }
}

#line 140
static am_addr_t TossimActiveMessageC$AMPacket$destination(message_t *amsg)
#line 140
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 142
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 76 "/home/user/tinyos-main/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void )
#line 76
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 165 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC$AMPacket$type(message_t *amsg)
#line 165
{
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 167
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 205 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(98U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(99U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP$sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 110 "/home/user/tinyos-main/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 28;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 51 "/home/user/tinyos-main/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(94U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 180 "/home/user/tinyos-main/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP$Scheduler$runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(96U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 189
            FALSE;

            {
#line 189
              __nesc_atomic_end(__nesc_atomic); 
#line 189
              return __nesc_temp;
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 192
  sim_log_debug(97U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

# 161 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP$Timer0$get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(181U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

# 106 "/home/user/tinyos-main/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 106
{
  long long int result;
  int tmp = sim_node();

#line 109
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP$Compare$get(void )
#line 457
{
  sim_log_debug(187U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 73 "/home/user/tinyos-main/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

#line 159
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 16 "ACCSensorP.nc"
static error_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$SplitControl$start(void )
#line 16
{
  uint8_t idx = 0;

#line 18
  for (idx = 0; idx < 4; idx++) {
      /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][idx] = 0;
    }
  /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerInit$startOneShot(2);
  return SUCCESS;
}






static error_t /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$Read$read(void )
#line 30
{
  switch (TOS_NODE_ID) {
      case 1: 
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[sim_node()] = DATA1[/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][0]];
      /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][0]++;
      if (/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][0] == 2400) {
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][0] = 0;
        }
#line 37
      break;
      case 2: 
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[sim_node()] = DATA2[/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][1]];
      /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][1]++;
      if (/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][1] == 2400) {
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][1] = 0;
        }
#line 43
      break;
      case 3: 
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[sim_node()] = DATA3[/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][2]];
      /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][2]++;
      if (/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][2] == 2400) {
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][2] = 0;
        }
#line 49
      break;
      case 4: 
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[sim_node()] = DATA4[/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][3]];
      /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][3]++;
      if (/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][3] == 2400) {
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[sim_node()][3] = 0;
        }
#line 55
      break;
      default: 
        /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[sim_node()] = 0;
    }
  /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$TimerRead$startOneShot(2);
  return SUCCESS;
}

# 212 "/home/user/tinyos-main/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(167U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(168U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(169U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(170U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(171U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 463 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 463
{
  sim_log_debug(188U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP$schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 273
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 97 "/home/user/tinyos-main/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 100 "/home/user/tinyos-main/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(191U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 231
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(180U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 132 "BSNNodeC.nc"
static void BSNNodeC$AMSend$sendDone(message_t *buf, error_t err)
#line 132
{
  if (err == SUCCESS) {
      if (BSNNodeC$PacketAcknowledgements$wasAcked(buf)) {
          if (TOS_NODE_ID == 0) {
              sim_log_debug(153U, "main", "%s - Sessione di monitoraggio iniziata\n", sim_time_string(), TOS_NODE_ID);
            }
          else 
#line 137
            {
              switch (BSNNodeC$response[sim_node()]) {
                  case 1: 
                    sim_log_debug(154U, "main", "%s - Nodo %hhu NO_MOVEMENT inviato\n", sim_time_string(), TOS_NODE_ID);
                  break;
                  case 2: 
                    sim_log_debug(155U, "main", "%s - Nodo %hhu MOVEMENT inviato\n", sim_time_string(), TOS_NODE_ID);
                  break;
                  case 3: 
                    sim_log_debug(156U, "main", "%s - Nodo %hhu CRISIS inviato\n", sim_time_string(), TOS_NODE_ID);
                  break;
                }
            }
        }
    }
  else 
#line 151
    {
      if (TOS_NODE_ID == 0) {
          BSNNodeC$startSession$postTask();
        }
      else 
#line 154
        {
          BSNNodeC$sendResponse$postTask();
        }
      sim_log_debug(157U, "main", "%s - Nodo %hhu invio fallito, inizio nuovo tentativo.\n", sim_time_string(), TOS_NODE_ID);
    }
}

# 163 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 73 "/home/user/tinyos-main/tos/lib/tossim/TossimActiveMessageC.nc"
static error_t TossimActiveMessageC$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC$getHeader(amsg);

#line 78
  sim_log_debug(104U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC$AMPacket$address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC$Model$send((int )addr, amsg, len + sizeof(tossim_header_t ) + sizeof(tossim_footer_t ));
  return err;
}

# 274 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 274
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 277
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 126
static double CpmModelC$noise_hash_generation(void )
#line 126
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(122U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(123U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 189 "/home/user/tinyos-main/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(166U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg);
    }
}

# 248 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 248
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 251
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 255
        prr = 0.0;
        }
    }
#line 257
  return prr;
}

# 307 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg)
#line 307
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      return TossimPacketModelC$Packet$shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 216 "/home/user/tinyos-main/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 216
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 106 "/home/user/tinyos-main/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC$Control$start(void )
#line 106
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(110U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(111U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC$startDoneTask$postTask();
  return SUCCESS;
}

#line 128
static error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg)
#line 128
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 130
  __nesc_hton_uint8(meta->ack.nxdata, TRUE);
  return SUCCESS;
}

# 53 "/home/user/tinyos-main/tos/system/AMQueueEntryP.nc"
static error_t /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 6);
  return /*BSNNodeAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 90 "/home/user/tinyos-main/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 90
{
  long long int result;
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 99
{
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 115
{
  int result;
  int tmpID = sim_node();

#line 118
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(101U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 125
{
  int tmpID = sim_node();

#line 127
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(102U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 143
{
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 72
static void SimMoteP$SimMote$turnOn(void )
#line 72
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(100U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 150
  void sim_mote_turn_off(int mote)
#line 150
{
  int tmp = sim_node();

#line 152
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 166
{
  int tmp = sim_node();

#line 168
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC$buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC$bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC$bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC$initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$running[__nesc_mote];
    *size = sizeof(TossimPacketModelC$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC$backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC$neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC$destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$error[__nesc_mote];
    *size = sizeof(TossimPacketModelC$error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC$transmitting[__nesc_mote];
    *size = sizeof(CpmModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC$transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC$transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }

  /* Module BSNNodeC */
  if (!strcmp(varname, "BSNNodeC$packet"))
  {
    *addr = (uintptr_t)&BSNNodeC$packet[__nesc_mote];
    *size = sizeof(BSNNodeC$packet[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BSNNodeC$crisis"))
  {
    *addr = (uintptr_t)&BSNNodeC$crisis[__nesc_mote];
    *size = sizeof(BSNNodeC$crisis[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BSNNodeC$movements"))
  {
    *addr = (uintptr_t)&BSNNodeC$movements[__nesc_mote];
    *size = sizeof(BSNNodeC$movements[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BSNNodeC$responseCounter"))
  {
    *addr = (uintptr_t)&BSNNodeC$responseCounter[__nesc_mote];
    *size = sizeof(BSNNodeC$responseCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BSNNodeC$sampleCounter"))
  {
    *addr = (uintptr_t)&BSNNodeC$sampleCounter[__nesc_mote];
    *size = sizeof(BSNNodeC$sampleCounter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BSNNodeC$response"))
  {
    *addr = (uintptr_t)&BSNNodeC$response[__nesc_mote];
    *size = sizeof(BSNNodeC$response[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "BSNNodeC$accumulator"))
  {
    *addr = (uintptr_t)&BSNNodeC$accumulator[__nesc_mote];
    *size = sizeof(BSNNodeC$accumulator[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module ACCSensorP$0 */
  if (!strcmp(varname, "/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index"))
  {
    *addr = (uintptr_t)&/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[__nesc_mote];
    *size = sizeof(/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value"))
  {
    *addr = (uintptr_t)&/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[__nesc_mote];
    *size = sizeof(/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[__nesc_mote]);
    return 0;
  }

  /* Module ECGSensorP$0 */
  if (!strcmp(varname, "/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index"))
  {
    *addr = (uintptr_t)&/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[__nesc_mote];
    *size = sizeof(/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$read_value"))
  {
    *addr = (uintptr_t)&/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$read_value[__nesc_mote];
    *size = sizeof(/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$read_value[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset((void *)&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset((void *)&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset((void *)&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC$buffer[__nesc_mote], 0, sizeof TossimActiveMessageC$buffer[__nesc_mote]);
  TossimActiveMessageC$bufferPointer[__nesc_mote] = &TossimActiveMessageC$buffer[__nesc_mote];

  /* Module TossimPacketModelC */
  TossimPacketModelC$initialized[__nesc_mote] = FALSE;
  TossimPacketModelC$running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC$backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC$backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC$neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC$neededFreeSamples[__nesc_mote]);
  TossimPacketModelC$sending[__nesc_mote] = (void *)0;
  TossimPacketModelC$transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC$sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC$destNode[__nesc_mote], 0, sizeof TossimPacketModelC$destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC$sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC$sendEvent[__nesc_mote]);
  TossimPacketModelC$error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset((void *)&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC$transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC$transmissionEndTime[__nesc_mote]);
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);

  /* Module BSNNodeC */
  memset((void *)&BSNNodeC$packet[__nesc_mote], 0, sizeof BSNNodeC$packet[__nesc_mote]);
  memset((void *)&BSNNodeC$crisis[__nesc_mote], 0, sizeof BSNNodeC$crisis[__nesc_mote]);
  memset((void *)&BSNNodeC$movements[__nesc_mote], 0, sizeof BSNNodeC$movements[__nesc_mote]);
  memset((void *)&BSNNodeC$responseCounter[__nesc_mote], 0, sizeof BSNNodeC$responseCounter[__nesc_mote]);
  memset((void *)&BSNNodeC$sampleCounter[__nesc_mote], 0, sizeof BSNNodeC$sampleCounter[__nesc_mote]);
  memset((void *)&BSNNodeC$response[__nesc_mote], 0, sizeof BSNNodeC$response[__nesc_mote]);
  memset((void *)&BSNNodeC$accumulator[__nesc_mote], 0, sizeof BSNNodeC$accumulator[__nesc_mote]);

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote] = 1;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);

  /* Module Atm128AlarmAsyncP$0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module ACCSensorP$0 */
  memset((void *)&/*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[__nesc_mote], 0, sizeof /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$temp_index[__nesc_mote]);
  /*BSNNodeAppC.ACC.ACCSensorP*/ACCSensorP$0$read_value[__nesc_mote] = 0;

  /* Module ECGSensorP$0 */
  memset((void *)&/*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[__nesc_mote], 0, sizeof /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$temp_index[__nesc_mote]);
  /*BSNNodeAppC.ECG.ECGSensorP*/ECGSensorP$0$read_value[__nesc_mote] = 0;

}
