#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 150 "/usr/lib/gcc/msp430/4.6.3/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/i386-linux-gnu/ncc/deputy_nodeputy.h"
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
# 38 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/stdint.h" 3
typedef signed char int8_t;
typedef int int16_t;
typedef long int int32_t;
__extension__ 
#line 41
typedef long long int int64_t;

typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
__extension__ 
#line 46
typedef unsigned long long int uint64_t;





typedef signed char int_least8_t;
typedef int int_least16_t;
typedef long int int_least32_t;
__extension__ 
#line 55
typedef long long int int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
__extension__ 
#line 61
typedef unsigned long long int uint_least64_t;





typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef long int int_fast32_t;
__extension__ 
#line 70
typedef long long int int_fast64_t;


typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
__extension__ 
#line 76
typedef unsigned long long int uint_fast64_t;









typedef int16_t intptr_t;
typedef uint16_t uintptr_t;





__extension__ 
#line 93
typedef long long int intmax_t;
__extension__ 
#line 94
typedef unsigned long long int uintmax_t;
# 281 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;
static inline void __nesc_bfle_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x)  ;
#line 304
static __inline uint8_t __nesc_htonbf_leuint8(void *target, unsigned offset, uint8_t length, uint8_t value)  ;
#line 322
static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;








static __inline uint32_t __nesc_ntoh_leuint32(const void * source)  ;
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
# 48 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/types.h" 3
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;
typedef unsigned short ushort;
typedef unsigned int uint;

typedef uint8_t u_int8_t;
typedef uint16_t u_int16_t;
typedef uint32_t u_int32_t;
typedef uint64_t u_int64_t;

typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t *qaddr_t;

typedef char *caddr_t;
typedef const char *c_caddr_t;
typedef volatile char *v_caddr_t;
typedef u_int32_t fixpt_t;
typedef u_int32_t gid_t;
typedef u_int32_t in_addr_t;
typedef u_int16_t in_port_t;
typedef u_int32_t ino_t;
typedef long key_t;
typedef u_int16_t mode_t;
typedef u_int16_t nlink_t;
typedef quad_t rlim_t;
typedef int32_t segsz_t;
typedef int32_t swblk_t;
typedef int32_t ufs_daddr_t;
typedef int32_t ufs_time_t;
typedef u_int32_t uid_t;
# 42 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/string.h" 3
extern void *memcpy(void *arg_0x402d8e68, const void *arg_0x402dc030, size_t arg_0x402dc1c8);

extern void *memset(void *arg_0x402dce90, int arg_0x402db010, size_t arg_0x402db1a8);
#line 65
extern void *memset(void *arg_0x402e7d30, int arg_0x402e7e88, size_t arg_0x402ec030);
# 62 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/stdlib.h" 3
#line 59
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;






#line 66
typedef struct __nesc_unnamed4243 {
  long int quot;
  long int rem;
} ldiv_t;
# 122 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/config.h" 3
typedef long int __int32_t;
typedef unsigned long int __uint32_t;
# 12 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/_types.h" 3
typedef long _off_t;
typedef long _ssize_t;
# 19 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/sys/reent.h" 3
typedef unsigned long __ULong;
#line 31
struct _glue {

  struct _glue *_next;
  int _niobs;
  struct __sFILE *_iobs;
};

struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _atexit {
  struct _atexit *_next;
  int _ind;
  void (*_fns[32])(void );
};








struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;
#line 116
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;


  void *_cookie;

  int (*_read)(void *_cookie, char *_buf, int _n);
  int (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;

  struct _reent *_data;
};
#line 174
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};









struct _reent {


  int _errno;




  struct __sFILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void (*__cleanup)(struct _reent *arg_0x4030c3b8);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4244 {

    struct __nesc_unnamed4245 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
    } _reent;



    struct __nesc_unnamed4246 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int arg_0x4030fa70);




  struct _glue __sglue;
  struct __sFILE __sf[3];
};
#line 273
struct _reent;
# 18 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/math.h" 3
union __dmath {

  __uint32_t i[2];
  double d;
};




union __dmath;
#line 212
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 265
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 25 "/usr/src/tinyos/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4247 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/usr/src/tinyos/tos/types/TinyError.h"
enum __nesc_unnamed4248 {
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
# 47 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/intrinsics.h" 3
void __nop(void );



void __dint(void );



void __eint(void );


unsigned int __read_status_register(void );


typedef unsigned int __istate_t;
# 164 "/usr/lib/gcc/msp430/4.6.3/../../../../msp430/include/msp430f1611.h" 3
extern volatile unsigned char ME1 __asm ("__""ME1");
#line 183
extern volatile unsigned char ME2 __asm ("__""ME2");
#line 195
extern volatile unsigned int WDTCTL __asm ("__""WDTCTL");
#line 267
extern volatile unsigned char P1OUT __asm ("__""P1OUT");

extern volatile unsigned char P1DIR __asm ("__""P1DIR");

extern volatile unsigned char P1IFG __asm ("__""P1IFG");

extern volatile unsigned char P1IES __asm ("__""P1IES");

extern volatile unsigned char P1IE __asm ("__""P1IE");

extern volatile unsigned char P1SEL __asm ("__""P1SEL");




extern volatile unsigned char P2OUT __asm ("__""P2OUT");

extern volatile unsigned char P2DIR __asm ("__""P2DIR");

extern volatile unsigned char P2IFG __asm ("__""P2IFG");



extern volatile unsigned char P2IE __asm ("__""P2IE");

extern volatile unsigned char P2SEL __asm ("__""P2SEL");










extern volatile unsigned char P3OUT __asm ("__""P3OUT");

extern volatile unsigned char P3DIR __asm ("__""P3DIR");

extern volatile unsigned char P3SEL __asm ("__""P3SEL");




extern volatile unsigned char P4OUT __asm ("__""P4OUT");

extern volatile unsigned char P4DIR __asm ("__""P4DIR");

extern volatile unsigned char P4SEL __asm ("__""P4SEL");










extern volatile unsigned char P5OUT __asm ("__""P5OUT");

extern volatile unsigned char P5DIR __asm ("__""P5DIR");

extern volatile unsigned char P5SEL __asm ("__""P5SEL");




extern volatile unsigned char P6OUT __asm ("__""P6OUT");

extern volatile unsigned char P6DIR __asm ("__""P6DIR");

extern volatile unsigned char P6SEL __asm ("__""P6SEL");
#line 382
extern volatile unsigned char U0CTL __asm ("__""U0CTL");

extern volatile unsigned char U0TCTL __asm ("__""U0TCTL");



extern volatile unsigned char U0MCTL __asm ("__""U0MCTL");

extern volatile unsigned char U0BR0 __asm ("__""U0BR0");

extern volatile unsigned char U0BR1 __asm ("__""U0BR1");

extern const volatile unsigned char U0RXBUF __asm ("__""U0RXBUF");
#line 441
extern volatile unsigned char U1TCTL __asm ("__""U1TCTL");
#line 595
extern volatile unsigned int TACTL __asm ("__""TACTL");

extern volatile unsigned int TACCTL0 __asm ("__""TACCTL0");

extern volatile unsigned int TACCTL1 __asm ("__""TACCTL1");

extern volatile unsigned int TACCTL2 __asm ("__""TACCTL2");

extern volatile unsigned int TAR __asm ("__""TAR");
#line 720
extern volatile unsigned int TBCCTL0 __asm ("__""TBCCTL0");
#line 734
extern volatile unsigned int TBR __asm ("__""TBR");

extern volatile unsigned int TBCCR0 __asm ("__""TBCCR0");
#line 849
extern volatile unsigned char DCOCTL __asm ("__""DCOCTL");

extern volatile unsigned char BCSCTL1 __asm ("__""BCSCTL1");

extern volatile unsigned char BCSCTL2 __asm ("__""BCSCTL2");
#line 1021
extern volatile unsigned int ADC12CTL0 __asm ("__""ADC12CTL0");

extern volatile unsigned int ADC12CTL1 __asm ("__""ADC12CTL1");
# 343 "/usr/src/tinyos/tos/chips/msp430/msp430hardware.h"
static volatile uint8_t U0CTLnr __asm ("0x0070");
static volatile uint8_t I2CTCTLnr __asm ("0x0071");
static volatile uint8_t I2CDCTLnr __asm ("0x0072");
#line 378
typedef uint8_t mcu_power_t  ;
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;


enum __nesc_unnamed4249 {
  MSP430_POWER_ACTIVE = 0, 
  MSP430_POWER_LPM0 = 1, 
  MSP430_POWER_LPM1 = 2, 
  MSP430_POWER_LPM2 = 3, 
  MSP430_POWER_LPM3 = 4, 
  MSP430_POWER_LPM4 = 5
};

static inline void __nesc_disable_interrupt(void )  ;





static inline void __nesc_enable_interrupt(void )  ;




typedef bool __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts);






__nesc_atomic_t __nesc_atomic_start(void )   ;







void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)   ;
#line 433
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
#line 448
enum __nesc_unnamed4250 {
  MSP430_PORT_RESISTOR_INVALID, 
  MSP430_PORT_RESISTOR_OFF, 
  MSP430_PORT_RESISTOR_PULLDOWN, 
  MSP430_PORT_RESISTOR_PULLUP
};
# 8 "/usr/src/tinyos/tos/platforms/telosb/hardware.h"
enum __nesc_unnamed4251 {
  TOS_SLEEP_NONE = MSP430_POWER_ACTIVE
};
#line 36
static inline void TOSH_SET_SIMO0_PIN()  ;
#line 36
static inline void TOSH_CLR_SIMO0_PIN()  ;
#line 36
static inline void TOSH_MAKE_SIMO0_OUTPUT()  ;
static inline void TOSH_SET_UCLK0_PIN()  ;
#line 37
static inline void TOSH_CLR_UCLK0_PIN()  ;
#line 37
static inline void TOSH_MAKE_UCLK0_OUTPUT()  ;
#line 79
enum __nesc_unnamed4252 {

  TOSH_HUMIDITY_ADDR = 5, 
  TOSH_HUMIDTEMP_ADDR = 3, 
  TOSH_HUMIDITY_RESET = 0x1E
};



static inline void TOSH_SET_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_CLR_FLASH_CS_PIN()  ;
#line 88
static inline void TOSH_MAKE_FLASH_CS_OUTPUT()  ;
static inline void TOSH_SET_FLASH_HOLD_PIN()  ;
#line 89
static inline void TOSH_MAKE_FLASH_HOLD_OUTPUT()  ;
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.h"
enum __nesc_unnamed4253 {
  MSP430TIMER_CM_NONE = 0, 
  MSP430TIMER_CM_RISING = 1, 
  MSP430TIMER_CM_FALLING = 2, 
  MSP430TIMER_CM_BOTH = 3, 

  MSP430TIMER_STOP_MODE = 0, 
  MSP430TIMER_UP_MODE = 1, 
  MSP430TIMER_CONTINUOUS_MODE = 2, 
  MSP430TIMER_UPDOWN_MODE = 3, 

  MSP430TIMER_TACLK = 0, 
  MSP430TIMER_TBCLK = 0, 
  MSP430TIMER_ACLK = 1, 
  MSP430TIMER_SMCLK = 2, 
  MSP430TIMER_INCLK = 3, 

  MSP430TIMER_CLOCKDIV_1 = 0, 
  MSP430TIMER_CLOCKDIV_2 = 1, 
  MSP430TIMER_CLOCKDIV_4 = 2, 
  MSP430TIMER_CLOCKDIV_8 = 3
};
#line 75
#line 62
typedef struct __nesc_unnamed4254 {

  int ccifg : 1;
  int cov : 1;
  int out : 1;
  int cci : 1;
  int ccie : 1;
  int outmod : 3;
  int cap : 1;
  int clld : 2;
  int scs : 1;
  int ccis : 2;
  int cm : 2;
} msp430_compare_control_t;
#line 87
#line 77
typedef struct __nesc_unnamed4255 {

  int taifg : 1;
  int taie : 1;
  int taclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tassel : 2;
  int _unused1 : 6;
} msp430_timer_a_control_t;
#line 102
#line 89
typedef struct __nesc_unnamed4256 {

  int tbifg : 1;
  int tbie : 1;
  int tbclr : 1;
  int _unused0 : 1;
  int mc : 2;
  int id : 2;
  int tbssel : 2;
  int _unused1 : 1;
  int cntl : 2;
  int tbclgrp : 2;
  int _unused2 : 1;
} msp430_timer_b_control_t;
# 43 "/usr/src/tinyos/tos/types/Leds.h"
enum __nesc_unnamed4257 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 82 "/usr/src/tinyos/tos/lib/mac/tkn154/TKN154.h"
#line 43
typedef enum ieee154_status {

  IEEE154_SUCCESS = 0x00, 
  IEEE154_BEACON_LOSS = 0xE0, 
  IEEE154_CHANNEL_ACCESS_FAILURE = 0xE1, 
  IEEE154_COUNTER_ERROR = 0xDB, 
  IEEE154_DENIED = 0xE2, 
  IEEE154_DISABLE_TRX_FAILURE = 0xE3, 
  IEEE154_FRAME_TOO_LONG = 0xE5, 
  IEEE154_IMPROPER_KEY_TYPE = 0xDC, 
  IEEE154_IMPROPER_SECURITY_LEVEL = 0xDD, 
  IEEE154_INVALID_ADDRESS = 0xF5, 
  IEEE154_INVALID_GTS = 0xE6, 
  IEEE154_INVALID_HANDLE = 0xE7, 
  IEEE154_INVALID_INDEX = 0xF9, 
  IEEE154_INVALID_PARAMETER = 0xE8, 
  IEEE154_LIMIT_REACHED = 0xFA, 
  IEEE154_NO_ACK = 0xE9, 
  IEEE154_NO_BEACON = 0xEA, 
  IEEE154_NO_DATA = 0xEB, 
  IEEE154_NO_SHORT_ADDRESS = 0xEC, 
  IEEE154_ON_TIME_TOO_LONG = 0xF6, 
  IEEE154_OUT_OF_CAP = 0xED, 
  IEEE154_PAN_ID_CONFLICT = 0xEE, 
  IEEE154_PAST_TIME = 0xF7, 
  IEEE154_READ_ONLY = 0xFB, 
  IEEE154_REALIGNMENT = 0xEF, 
  IEEE154_SCAN_IN_PROGRESS = 0xFC, 
  IEEE154_SECURITY_ERROR = 0xE4, 
  IEEE154_SUPERFRAME_OVERLAP = 0xFD, 
  IEEE154_TRACKING_OFF = 0xF8, 
  IEEE154_TRANSACTION_EXPIRED = 0xF0, 
  IEEE154_TRANSACTION_OVERFLOW = 0xF1, 
  IEEE154_TX_ACTIVE = 0xF2, 
  IEEE154_UNAVAILABLE_KEY = 0xF3, 
  IEEE154_UNSUPPORTED_ATTRIBUTE = 0xF4, 
  IEEE154_UNSUPPORTED_LEGACY = 0xDE, 
  IEEE154_UNSUPPORTED_SECURITY = 0xDF, 
  IEEE154_PURGED = 0xDA
} ieee154_status_t;






#line 84
typedef enum ieee154_association_status {

  IEEE154_ASSOCIATION_SUCCESSFUL = 0x00, 
  IEEE154_PAN_AT_CAPACITY = 0x01, 
  IEEE154_ACCESS_DENIED = 0x02
} ieee154_association_status_t;





#line 91
typedef enum ieee154_disassociation_reason {

  IEEE154_COORDINATOR_WISHES_DEVICE_TO_LEAVE = 0x01, 
  IEEE154_DEVICE_WISHES_TO_LEAVE = 0x02
} ieee154_disassociation_reason_t;






#line 97
typedef union ieee154_address {


  uint16_t shortAddress;
  uint64_t extendedAddress;
} ieee154_address_t;








#line 104
typedef struct ieee154_security {


  uint8_t SecurityLevel;
  uint8_t KeyIdMode;
  uint8_t KeySource[8];
  uint8_t KeyIndex;
} ieee154_security_t;










#line 113
typedef nx_struct __nesc_unnamed4258 {
  unsigned char __nesc_filler0[1];
} __attribute__((packed)) 






ieee154_CapabilityInformation_t;










#line 124
typedef nx_struct __nesc_unnamed4259 {
  unsigned char __nesc_filler1[2];
} __attribute__((packed)) 






ieee154_SuperframeSpec_t;
#line 150
#line 135
typedef struct ieee154_PANDescriptor {
  uint8_t CoordAddrMode;
  uint16_t CoordPANId;
  ieee154_address_t CoordAddress;
  uint8_t LogicalChannel;
  uint8_t ChannelPage;
  ieee154_SuperframeSpec_t SuperframeSpec;
  bool GTSPermit;
  uint8_t LinkQuality;
  uint32_t TimeStamp;
  ieee154_status_t SecurityFailure;
  uint8_t SecurityLevel;
  uint8_t KeyIdMode;
  uint64_t KeySource;
  uint8_t KeyIndex;
} ieee154_PANDescriptor_t;

enum __nesc_unnamed4260 {

  BEACON_ENABLED_PAN, 
  NONBEACON_ENABLED_PAN, 


  TX_OPTIONS_ACK = 0x01, 
  TX_OPTIONS_GTS = 0x02, 
  TX_OPTIONS_INDIRECT = 0x04, 


  ADDR_MODE_NOT_PRESENT = 0x00, 
  ADDR_MODE_RESERVED = 0x01, 
  ADDR_MODE_SHORT_ADDRESS = 0x02, 
  ADDR_MODE_EXTENDED_ADDRESS = 0x03, 


  ENERGY_DETECTION_SCAN = 0x00, 
  ACTIVE_SCAN = 0x01, 
  PASSIVE_SCAN = 0x02, 
  ORPHAN_SCAN = 0x03, 


  FRAMETYPE_BEACON = 0x00, 
  FRAMETYPE_DATA = 0x01, 
  FRAMETYPE_ACK = 0x02, 
  FRAMETYPE_CMD = 0x03
};





typedef uint8_t ieee154_phyCurrentChannel_t;
typedef uint32_t ieee154_phyChannelsSupported_t;
typedef uint8_t ieee154_phyTransmitPower_t;
typedef uint8_t ieee154_phyCCAMode_t;
typedef uint8_t ieee154_phyCurrentPage_t;
typedef uint16_t ieee154_phyMaxFrameDuration_t;
typedef uint8_t ieee154_phySHRDuration_t;
typedef uint8_t ieee154_phySymbolsPerOctet_t;

typedef uint8_t ieee154_macAckWaitDuration_t;
typedef bool ieee154_macAssociatedPANCoord_t;
typedef bool ieee154_macAssociationPermit_t;
typedef bool ieee154_macAutoRequest_t;
typedef bool ieee154_macBattLifeExt_t;
typedef uint8_t ieee154_macBattLifeExtPeriods_t;
typedef uint8_t *ieee154_macBeaconPayload_t;
typedef uint8_t ieee154_macBeaconPayloadLength_t;
typedef uint8_t ieee154_macBeaconOrder_t;
typedef uint32_t ieee154_macBeaconTxTime_t;
typedef uint8_t ieee154_macBSN_t;
typedef uint64_t ieee154_macCoordExtendedAddress_t;
typedef uint16_t ieee154_macCoordShortAddress_t;
typedef uint8_t ieee154_macDSN_t;
typedef bool ieee154_macGTSPermit_t;
typedef uint8_t ieee154_macMaxBE_t;
typedef uint8_t ieee154_macMaxCSMABackoffs_t;
typedef uint32_t ieee154_macMaxFrameTotalWaitTime_t;
typedef uint8_t ieee154_macMaxFrameRetries_t;
typedef uint8_t ieee154_macMinBE_t;
typedef uint8_t ieee154_macMinLIFSPeriod_t;
typedef uint8_t ieee154_macMinSIFSPeriod_t;
typedef uint16_t ieee154_macPANId_t;
typedef bool ieee154_macPromiscuousMode_t;
typedef uint8_t ieee154_macResponseWaitTime_t;
typedef bool ieee154_macRxOnWhenIdle_t;
typedef bool ieee154_macSecurityEnabled_t;
typedef uint16_t ieee154_macShortAddress_t;
typedef uint8_t ieee154_macSuperframeOrder_t;
typedef uint16_t ieee154_macSyncSymbolOffset_t;
typedef bool ieee154_macTimestampSupported_t;
typedef uint16_t ieee154_macTransactionPersistenceTime_t;


typedef bool ieee154_macPanCoordinator_t;
#line 315
enum __nesc_unnamed4261 {

  IEEE154_aMaxPHYPacketSize = 127
};
# 6 "/usr/src/tinyos/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4262 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4263 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/usr/src/tinyos/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4264 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4265 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4266 {
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
# 42 "/usr/src/tinyos/tos/chips/cc2420_tkn154/TKN154_PHY.h"
enum __nesc_unnamed4267 {

  IEEE154_SUPPORTED_CHANNELS = 0x07FFF800, 
  IEEE154_SYMBOLS_PER_OCTET = 2, 
  IEEE154_TXPOWER_TOLERANCE = 0x80, 
  IEEE154_SHR_DURATION = 5 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_MAX_FRAME_DURATION = IEEE154_SHR_DURATION + (IEEE154_aMaxPHYPacketSize + 1) * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_PREAMBLE_LENGTH = 4 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_SYNC_SYMBOL_OFFSET = 1 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_MIN_LIFS_PERIOD = 40, 
  IEEE154_MIN_SIFS_PERIOD = 12, 
  IEEE154_ACK_WAIT_DURATION = 20 + 12 + IEEE154_SHR_DURATION + 6 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_TIMESTAMP_SUPPORTED = TRUE
};
# 4 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Timer62500hz.h"
typedef struct __nesc_unnamed4268 {
} 
#line 4
T62500hz;
# 45 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154_platform.h"
enum __nesc_unnamed4269 {


  IEEE154_RADIO_TX_DELAY = 400, 



  IEEE154_RADIO_RX_DELAY = 400, 




  BEACON_PAYLOAD_UPDATE_INTERVAL = 2500
};
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/TKN154_MAC.h"
enum __nesc_unnamed4270 {

  IEEE154_phyCurrentChannel = 0x00, 
  IEEE154_phyChannelsSupported = 0x01, 
  IEEE154_phyTransmitPower = 0x02, 
  IEEE154_phyCCAMode = 0x03, 
  IEEE154_phyCurrentPage = 0x04, 
  IEEE154_phyMaxFrameDuration = 0x05, 
  IEEE154_phySHRDuration = 0x06, 
  IEEE154_phySymbolsPerOctet = 0x07, 


  IEEE154_macAckWaitDuration = 0x40, 
  IEEE154_macAssociatedPANCoord = 0x56, 
  IEEE154_macAssociationPermit = 0x41, 
  IEEE154_macAutoRequest = 0x42, 
  IEEE154_macBattLifeExt = 0x43, 
  IEEE154_macBattLifeExtPeriods = 0x44, 
  IEEE154_macBeaconPayload = 0x45, 
  IEEE154_macBeaconPayloadLength = 0x46, 
  IEEE154_macBeaconOrder = 0x47, 
  IEEE154_macBeaconTxTime = 0x48, 
  IEEE154_macBSN = 0x49, 
  IEEE154_macCoordExtendedAddress = 0x4A, 
  IEEE154_macCoordShortAddress = 0x4B, 
  IEEE154_macDSN = 0x4C, 
  IEEE154_macGTSPermit = 0x4D, 
  IEEE154_macMaxBE = 0x57, 
  IEEE154_macMaxCSMABackoffs = 0x4E, 
  IEEE154_macMaxFrameTotalWaitTime = 0x58, 
  IEEE154_macMaxFrameRetries = 0x59, 
  IEEE154_macMinBE = 0x4F, 
  IEEE154_macMinLIFSPeriod = 0xA0, 
  IEEE154_macMinSIFSPeriod = 0xA1, 
  IEEE154_macPANId = 0x50, 
  IEEE154_macPromiscuousMode = 0x51, 
  IEEE154_macResponseWaitTime = 0x5A, 
  IEEE154_macRxOnWhenIdle = 0x52, 
  IEEE154_macSecurityEnabled = 0x5D, 
  IEEE154_macShortAddress = 0x53, 
  IEEE154_macSuperframeOrder = 0x54, 
  IEEE154_macSyncSymbolOffset = 0x5B, 
  IEEE154_macTimestampSupported = 0x5C, 
  IEEE154_macTransactionPersistenceTime = 0x55, 


  IEEE154_macPanCoordinator = 0xF0
};

enum __nesc_unnamed4271 {

  MHR_INDEX_FC1 = 0, 
  MHR_INDEX_FC2 = 1, 
  MHR_INDEX_SEQNO = 2, 
  MHR_INDEX_ADDRESS = 3, 
  MHR_MAX_LEN = 23, 


  FC1_FRAMETYPE_BEACON = 0x00, 
  FC1_FRAMETYPE_DATA = 0x01, 
  FC1_FRAMETYPE_ACK = 0x02, 
  FC1_FRAMETYPE_CMD = 0x03, 
  FC1_FRAMETYPE_MASK = 0x07, 

  FC1_SECURITY_ENABLED = 0x08, 
  FC1_FRAME_PENDING = 0x10, 
  FC1_ACK_REQUEST = 0x20, 
  FC1_PAN_ID_COMPRESSION = 0x40, 

  FC2_DEST_MODE_SHORT = 0x08, 
  FC2_DEST_MODE_EXTENDED = 0x0c, 
  FC2_DEST_MODE_MASK = 0x0c, 
  FC2_DEST_MODE_OFFSET = 2, 

  FC2_SRC_MODE_SHORT = 0x80, 
  FC2_SRC_MODE_EXTENDED = 0xc0, 
  FC2_SRC_MODE_MASK = 0xc0, 
  FC2_SRC_MODE_OFFSET = 6, 

  FC2_FRAME_VERSION_1 = 0x10, 
  FC2_FRAME_VERSION_2 = 0x20, 
  FC2_FRAME_VERSION_MASK = 0x30
};








enum __nesc_unnamed4272 {





  RADIO_CLIENT_SCAN = 0U, 
  RADIO_CLIENT_PIB = 1U, 
  RADIO_CLIENT_PROMISCUOUSMODE = 2U, 

  RADIO_CLIENT_BEACONTRANSMIT = 3U, 
  RADIO_CLIENT_COORDBROADCAST = 4U, 
  RADIO_CLIENT_COORDCAP = 5U, 
  RADIO_CLIENT_COORDCFP = 6U, 
  RADIO_CLIENT_COORD_INACTIVE_PERIOD = 7U, 

  RADIO_CLIENT_BEACONSYNCHRONIZE = 8U, 
  RADIO_CLIENT_DEVICECAP = 9U, 
  RADIO_CLIENT_DEVICECFP = 10U, 
  RADIO_CLIENT_DEVICE_INACTIVE_PERIOD = 11U
};

enum __nesc_unnamed4273 {

  OUTGOING_SUPERFRAME, 
  INCOMING_SUPERFRAME
};
#line 205
#line 183
typedef struct __nesc_unnamed4274 {

  uint8_t length;
  uint8_t mhr[MHR_MAX_LEN];
#line 198
  uint8_t network;



  uint8_t type;
} 

ieee154_header_t;





#line 207
typedef nx_struct __nesc_unnamed4275 {
  nx_uint32_t timestamp;
  nx_int8_t rssi;
  nx_uint8_t linkQuality;
} __attribute__((packed)) ieee154_metadata_t;










#line 213
typedef struct __nesc_unnamed4276 {

  ieee154_header_t *header;
  uint8_t *payload;
  ieee154_metadata_t *metadata;
  uint8_t headerLen;
  uint8_t payloadLen;
  uint8_t client;
  uint8_t handle;
} ieee154_txframe_t;





#line 224
typedef struct __nesc_unnamed4277 {

  ieee154_header_t header;
  ieee154_metadata_t metadata;
} ieee154_txcontrol_t;






#line 230
typedef struct ieee154_csma {
  uint8_t BE;
  uint8_t macMaxBE;
  uint8_t macMaxCsmaBackoffs;
  uint8_t NB;
} ieee154_csma_t;





#line 237
typedef struct __nesc_unnamed4278 {
  uint32_t transactionTime;
  ieee154_txframe_t *frame;
  ieee154_csma_t csma;
} ieee154_cap_frame_backup_t;




enum __nesc_unnamed4279 {
  CMD_FRAME_ASSOCIATION_REQUEST = 1, 
  CMD_FRAME_ASSOCIATION_RESPONSE = 2, 
  CMD_FRAME_DISASSOCIATION_NOTIFICATION = 3, 
  CMD_FRAME_DATA_REQUEST = 4, 
  CMD_FRAME_PAN_ID_CONFLICT_NOTIFICATION = 5, 
  CMD_FRAME_ORPHAN_NOTIFICATION = 6, 
  CMD_FRAME_BEACON_REQUEST = 7, 
  CMD_FRAME_COORDINATOR_REALIGNMENT = 8, 
  CMD_FRAME_GTS_REQUEST = 9
};

enum __nesc_unnamed4280 {

  BEACON_INDEX_SF_SPEC1 = 0, 
  BEACON_INDEX_SF_SPEC2 = 1, 
  BEACON_INDEX_GTS_SPEC = 2, 

  SF_SPEC1_BO_MASK = 0x0F, 
  SF_SPEC1_BO_OFFSET = 0, 
  SF_SPEC1_SO_MASK = 0xF0, 
  SF_SPEC1_SO_OFFSET = 4, 

  SF_SPEC2_FINAL_CAPSLOT_MASK = 0x0F, 
  SF_SPEC2_FINAL_CAPSLOT_OFFSET = 0, 
  SF_SPEC2_BATT_LIFE_EXT = 0x10, 
  SF_SPEC2_PAN_COORD = 0x40, 
  SF_SPEC2_ASSOCIATION_PERMIT = 0x80, 

  GTS_DESCRIPTOR_COUNT_MASK = 0x07, 
  GTS_DESCRIPTOR_COUNT_OFFSET = 0, 
  GTS_LENGTH_MASK = 0xF0, 
  GTS_LENGTH_OFFSET = 4, 
  GTS_SPEC_PERMIT = 0x80, 

  PENDING_ADDRESS_SHORT_MASK = 0x07, 
  PENDING_ADDRESS_EXT_MASK = 0x70
};

enum __nesc_unnamed4281 {

  IEEE154_aTurnaroundTime = 12, 

  FRAMECTL_LENGTH_MASK = 0x7F, 
  FRAMECTL_PROMISCUOUS = 0x80
};


enum __nesc_unnamed4282 {

  IEEE154_aNumSuperframeSlots = 16, 
  IEEE154_aMaxMPDUUnsecuredOverhead = 25, 
  IEEE154_aMinMPDUOverhead = 9, 
  IEEE154_aBaseSlotDuration = 60, 
  IEEE154_aBaseSuperframeDuration = IEEE154_aBaseSlotDuration * IEEE154_aNumSuperframeSlots, 
  IEEE154_aGTSDescPersistenceTime = 4, 
  IEEE154_aMaxBeaconOverhead = 75, 
  IEEE154_aMaxBeaconPayloadLength = IEEE154_aMaxPHYPacketSize - IEEE154_aMaxBeaconOverhead, 
  IEEE154_aMaxLostBeacons = 4, 
  IEEE154_aMaxMACSafePayloadSize = IEEE154_aMaxPHYPacketSize - IEEE154_aMaxMPDUUnsecuredOverhead, 
  IEEE154_aMaxMACPayloadSize = IEEE154_aMaxPHYPacketSize - IEEE154_aMinMPDUOverhead, 
  IEEE154_aMaxSIFSFrameSize = 18, 
  IEEE154_aMinCAPLength = 440, 
  IEEE154_aUnitBackoffPeriod = 20
};


typedef bool token_requested_t  ;
static inline token_requested_t rcombine(token_requested_t r1, token_requested_t r2);
# 20 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/platform_message.h"
#line 17
typedef union message_header {
  ieee154_header_t ieee154;
  serial_header_t serial;
} message_header_t;


#line 22
typedef union TOSRadioFooter {
} message_footer_t;



#line 25
typedef union TOSRadioMetadata {
  ieee154_metadata_t ieee154;
} message_metadata_t;
# 19 "/usr/src/tinyos/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[118];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/usr/src/tinyos/tos/types/IeeeEui64.h"
enum __nesc_unnamed4283 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/usr/src/tinyos/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4284 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4285 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4286 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4287 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/TKN154_PIB.h"
#line 44
typedef struct ieee154_PIB {




  ieee154_macAssociationPermit_t macAssociationPermit;

  ieee154_macAutoRequest_t macAutoRequest;

  ieee154_macBattLifeExt_t macBattLifeExt;

  ieee154_macGTSPermit_t macGTSPermit;

  ieee154_macPromiscuousMode_t macPromiscuousMode;

  ieee154_macRxOnWhenIdle_t macRxOnWhenIdle;

  ieee154_macAssociatedPANCoord_t macAssociatedPANCoord;

  ieee154_macSecurityEnabled_t macSecurityEnabled;

  ieee154_macPanCoordinator_t macPanCoordinator;




  ieee154_phyCurrentChannel_t phyCurrentChannel;

  ieee154_phyTransmitPower_t phyTransmitPower;

  ieee154_phyCCAMode_t phyCCAMode;

  ieee154_phyCurrentPage_t phyCurrentPage;

  ieee154_macBattLifeExtPeriods_t macBattLifeExtPeriods;

  ieee154_macBeaconPayloadLength_t macBeaconPayloadLength;

  ieee154_macBeaconOrder_t macBeaconOrder;

  ieee154_macBSN_t macBSN;

  ieee154_macDSN_t macDSN;

  ieee154_macMaxCSMABackoffs_t macMaxCSMABackoffs;

  ieee154_macMinBE_t macMinBE;

  ieee154_macSuperframeOrder_t macSuperframeOrder;

  ieee154_macMaxBE_t macMaxBE;

  ieee154_macMaxFrameRetries_t macMaxFrameRetries;

  ieee154_macResponseWaitTime_t macResponseWaitTime;




  ieee154_macCoordShortAddress_t macCoordShortAddress;

  ieee154_macPANId_t macPANId;

  ieee154_macShortAddress_t macShortAddress;

  ieee154_macTransactionPersistenceTime_t macTransactionPersistenceTime;


  ieee154_macMaxFrameTotalWaitTime_t macMaxFrameTotalWaitTime;

  ieee154_macBeaconTxTime_t macBeaconTxTime;

  ieee154_macCoordExtendedAddress_t macCoordExtendedAddress;
} 
ieee154_PIB_t;
# 41 "/usr/src/tinyos/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4288 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4289 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4290 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4291 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 33 "/usr/src/tinyos/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 39 "/usr/src/tinyos/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler2[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4292 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 118 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4293 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 56 "/usr/src/tinyos/tos/chips/msp430/usart/msp430usart.h"
#line 48
typedef enum __nesc_unnamed4294 {

  USART_NONE = 0, 
  USART_UART = 1, 
  USART_UART_TX = 2, 
  USART_UART_RX = 3, 
  USART_SPI = 4, 
  USART_I2C = 5
} msp430_usartmode_t;










#line 58
typedef struct __nesc_unnamed4295 {
  unsigned int swrst : 1;
  unsigned int mm : 1;
  unsigned int sync : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
} __attribute((packed))  msp430_uctl_t;









#line 69
typedef struct __nesc_unnamed4296 {
  unsigned int txept : 1;
  unsigned int stc : 1;
  unsigned int txwake : 1;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
} __attribute((packed))  msp430_utctl_t;










#line 79
typedef struct __nesc_unnamed4297 {
  unsigned int rxerr : 1;
  unsigned int rxwake : 1;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int brk : 1;
  unsigned int oe : 1;
  unsigned int pe : 1;
  unsigned int fe : 1;
} __attribute((packed))  msp430_urctl_t;
#line 116
#line 99
typedef struct __nesc_unnamed4298 {
  unsigned int ubr : 16;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int  : 3;

  unsigned int  : 1;
  unsigned int stc : 1;
  unsigned int  : 2;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int ckph : 1;
  unsigned int  : 0;
} msp430_spi_config_t;





#line 118
typedef struct __nesc_unnamed4299 {
  uint16_t ubr;
  uint8_t uctl;
  uint8_t utctl;
} msp430_spi_registers_t;




#line 124
typedef union __nesc_unnamed4300 {
  msp430_spi_config_t spiConfig;
  msp430_spi_registers_t spiRegisters;
} msp430_spi_union_config_t;

msp430_spi_union_config_t msp430_spi_default_config = { 
{ 
.ubr = 0x0002, 
.ssel = 0x02, 
.clen = 1, 
.listen = 0, 
.mm = 1, 
.ckph = 1, 
.ckpl = 0, 
.stc = 1 } };
#line 169
#line 150
typedef enum __nesc_unnamed4301 {

  UBR_32KHZ_1200 = 0x001B, UMCTL_32KHZ_1200 = 0x94, 
  UBR_32KHZ_1800 = 0x0012, UMCTL_32KHZ_1800 = 0x84, 
  UBR_32KHZ_2400 = 0x000D, UMCTL_32KHZ_2400 = 0x6D, 
  UBR_32KHZ_4800 = 0x0006, UMCTL_32KHZ_4800 = 0x77, 
  UBR_32KHZ_9600 = 0x0003, UMCTL_32KHZ_9600 = 0x29, 

  UBR_1MHZ_1200 = 0x0369, UMCTL_1MHZ_1200 = 0x7B, 
  UBR_1MHZ_1800 = 0x0246, UMCTL_1MHZ_1800 = 0x55, 
  UBR_1MHZ_2400 = 0x01B4, UMCTL_1MHZ_2400 = 0xDF, 
  UBR_1MHZ_4800 = 0x00DA, UMCTL_1MHZ_4800 = 0xAA, 
  UBR_1MHZ_9600 = 0x006D, UMCTL_1MHZ_9600 = 0x44, 
  UBR_1MHZ_19200 = 0x0036, UMCTL_1MHZ_19200 = 0xB5, 
  UBR_1MHZ_38400 = 0x001B, UMCTL_1MHZ_38400 = 0x94, 
  UBR_1MHZ_57600 = 0x0012, UMCTL_1MHZ_57600 = 0x84, 
  UBR_1MHZ_76800 = 0x000D, UMCTL_1MHZ_76800 = 0x6D, 
  UBR_1MHZ_115200 = 0x0009, UMCTL_1MHZ_115200 = 0x10, 
  UBR_1MHZ_230400 = 0x0004, UMCTL_1MHZ_230400 = 0x55
} msp430_uart_rate_t;
#line 200
#line 171
typedef struct __nesc_unnamed4302 {
  unsigned int ubr : 16;

  unsigned int umctl : 8;

  unsigned int  : 1;
  unsigned int mm : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int clen : 1;
  unsigned int spb : 1;
  unsigned int pev : 1;
  unsigned int pena : 1;
  unsigned int  : 0;

  unsigned int  : 3;
  unsigned int urxse : 1;
  unsigned int ssel : 2;
  unsigned int ckpl : 1;
  unsigned int  : 1;

  unsigned int  : 2;
  unsigned int urxwie : 1;
  unsigned int urxeie : 1;
  unsigned int  : 4;
  unsigned int  : 0;

  unsigned int utxe : 1;
  unsigned int urxe : 1;
} msp430_uart_config_t;








#line 202
typedef struct __nesc_unnamed4303 {
  uint16_t ubr;
  uint8_t umctl;
  uint8_t uctl;
  uint8_t utctl;
  uint8_t urctl;
  uint8_t ume;
} msp430_uart_registers_t;




#line 211
typedef union __nesc_unnamed4304 {
  msp430_uart_config_t uartConfig;
  msp430_uart_registers_t uartRegisters;
} msp430_uart_union_config_t;
#line 248
#line 240
typedef struct __nesc_unnamed4305 {
  unsigned int i2cstt : 1;
  unsigned int i2cstp : 1;
  unsigned int i2cstb : 1;
  unsigned int i2cctrx : 1;
  unsigned int i2cssel : 2;
  unsigned int i2ccrm : 1;
  unsigned int i2cword : 1;
} __attribute((packed))  msp430_i2ctctl_t;
#line 276
#line 253
typedef struct __nesc_unnamed4306 {
  unsigned int  : 1;
  unsigned int mst : 1;
  unsigned int  : 1;
  unsigned int listen : 1;
  unsigned int xa : 1;
  unsigned int  : 1;
  unsigned int txdmaen : 1;
  unsigned int rxdmaen : 1;

  unsigned int  : 4;
  unsigned int i2cssel : 2;
  unsigned int i2crm : 1;
  unsigned int i2cword : 1;

  unsigned int i2cpsc : 8;

  unsigned int i2csclh : 8;

  unsigned int i2cscll : 8;

  unsigned int i2coa : 10;
  unsigned int  : 6;
} msp430_i2c_config_t;








#line 278
typedef struct __nesc_unnamed4307 {
  uint8_t uctl;
  uint8_t i2ctctl;
  uint8_t i2cpsc;
  uint8_t i2csclh;
  uint8_t i2cscll;
  uint16_t i2coa;
} msp430_i2c_registers_t;




#line 287
typedef union __nesc_unnamed4308 {
  msp430_i2c_config_t i2cConfig;
  msp430_i2c_registers_t i2cRegisters;
} msp430_i2c_union_config_t;
#line 309
typedef uint8_t uart_speed_t;
typedef uint8_t uart_parity_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4309 {
  TOS_UART_1200 = 0, 
  TOS_UART_1800 = 1, 
  TOS_UART_2400 = 2, 
  TOS_UART_4800 = 3, 
  TOS_UART_9600 = 4, 
  TOS_UART_19200 = 5, 
  TOS_UART_38400 = 6, 
  TOS_UART_57600 = 7, 
  TOS_UART_76800 = 8, 
  TOS_UART_115200 = 9, 
  TOS_UART_230400 = 10
};

enum __nesc_unnamed4310 {
  TOS_UART_OFF, 
  TOS_UART_RONLY, 
  TOS_UART_TONLY, 
  TOS_UART_DUPLEX
};

enum __nesc_unnamed4311 {
  TOS_UART_PARITY_NONE, 
  TOS_UART_PARITY_EVEN, 
  TOS_UART_PARITY_ODD
};
# 39 "/usr/src/tinyos/apps/tests/tkn154/nonbeacon-enabled/TestAssociate/device/../app_profile.h"
enum __nesc_unnamed4312 {
  RADIO_CHANNEL = 26, 
  PAN_ID = 0x9678, 
  COORDINATOR_ADDRESS = 0x7722
};
typedef ieee154_txframe_t DataP__TxFramePool__t;
typedef uint64_t DataP__LocalExtendedAddress__val_t;
typedef ieee154_macSuperframeOrder_t PibP__SetMacSuperframeOrder__val_t;
typedef T62500hz PibP__LocalTime__precision_tag;
typedef ieee154_macPanCoordinator_t PibP__SetMacPanCoordinator__val_t;
typedef bool PibP__PromiscuousModeGet__val_t;
typedef uint64_t PibP__GetLocalExtendedAddress__val_t;
typedef ieee154_macBeaconTxTime_t PibP__SetMacBeaconTxTime__val_t;
typedef token_requested_t PibP__IsRadioTokenRequested__data_type;
typedef const void *PibP__PIBUpdate__val_t;
typedef bool RadioControlImplP__RadioPromiscuousMode__val_t;
typedef ieee154_macSuperframeOrder_t DispatchUnslottedCsmaP__SetMacSuperframeOrder__val_t;
typedef T62500hz DispatchUnslottedCsmaP__IndirectTxWaitTimer__precision_tag;
typedef bool DispatchUnslottedCsmaP__WasRxEnabled__val_t;
typedef ieee154_macPanCoordinator_t DispatchUnslottedCsmaP__SetMacPanCoordinator__val_t;
typedef ieee154_txframe_t *DispatchUnslottedCsmaP__GetIndirectTxFrame__val_t;
typedef bool DispatchUnslottedCsmaP__RxEnableStateChange__val_t;
typedef token_requested_t DispatchUnslottedCsmaP__IsRadioTokenRequested__data_type;
typedef const void *DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__val_t;
typedef bool DispatchUnslottedCsmaP__IsRxEnableActive__data_type;
typedef ieee154_txframe_t */*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t;
typedef T62500hz IndirectTxP__IndirectTxTimeout__precision_tag;
typedef ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__val_t;
typedef bool IndirectTxP__PendingAddrSpecUpdated__val_t;
typedef ieee154_txframe_t PollP__TxFramePool__t;
typedef ieee154_txcontrol_t PollP__TxControlPool__t;
typedef uint64_t PollP__LocalExtendedAddress__val_t;
typedef ieee154_txframe_t ScanP__TxFramePool__t;
typedef T62500hz ScanP__ScanTimer__precision_tag;
typedef ieee154_txcontrol_t ScanP__TxControlPool__t;
typedef token_requested_t ScanP__IsRadioTokenRequested__data_type;
typedef ieee154_txframe_t AssociateP__TxFramePool__t;
typedef ieee154_txcontrol_t AssociateP__TxControlPool__t;
typedef uint64_t AssociateP__LocalExtendedAddress__val_t;
typedef T62500hz AssociateP__ResponseTimeout__precision_tag;
typedef ieee154_txframe_t DisassociateP__TxFramePool__t;
typedef ieee154_txcontrol_t DisassociateP__TxControlPool__t;
typedef uint64_t DisassociateP__LocalExtendedAddress__val_t;
typedef ieee154_macPanCoordinator_t RxEnableP__IsMacPanCoordinator__val_t;
typedef bool RxEnableP__IsSendingBeacons__data_type;
typedef bool RxEnableP__IsTrackingBeacons__data_type;
typedef bool RxEnableP__WasRxEnabled__val_t;
typedef bool RxEnableP__RxEnableStateChange__val_t;
typedef T62500hz RxEnableP__RxEnableTimer__precision_tag;
typedef bool RxEnableP__IsRxEnableActive__data_type;
typedef bool PromiscuousModeP__PromiscuousModeGet__val_t;
typedef token_requested_t PromiscuousModeP__IsRadioTokenRequested__data_type;
typedef bool PromiscuousModeP__RadioPromiscuousMode__val_t;
typedef uint64_t CoordRealignmentP__LocalExtendedAddress__val_t;
typedef ieee154_txframe_t CoordRealignmentP__TxFramePool__t;
typedef ieee154_txcontrol_t CoordRealignmentP__TxControlPool__t;
typedef ieee154_txframe_t *CoordRealignmentP__GetSetRealignmentFrame__val_t;
typedef ieee154_txframe_t /*TKN154NonBeaconEnabledP.TxFramePoolP*/PoolC__0__pool_t;
typedef /*TKN154NonBeaconEnabledP.TxFramePoolP*/PoolC__0__pool_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t;
typedef /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__t;
typedef ieee154_txcontrol_t /*TKN154NonBeaconEnabledP.TxControlPoolP*/PoolC__1__pool_t;
typedef /*TKN154NonBeaconEnabledP.TxControlPoolP*/PoolC__1__pool_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t;
typedef /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__t;
typedef ieee154_txframe_t */*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t;
typedef /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__t;
typedef T62500hz CC2420TKN154P__LocalTime__precision_tag;
typedef bool CC2420TKN154P__CCA__data_type;
typedef bool CC2420TKN154P__RadioPromiscuousMode__val_t;
typedef const void *CC2420TKN154P__PIBUpdate__val_t;
typedef T62500hz CC2420ControlP__StartupAlarm__precision_tag;
typedef uint32_t CC2420ControlP__StartupAlarm__size_type;
enum /*CC2420ControlTransmitC.Spi*/CC2420SpiC__0____nesc_unnamed4313 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0____nesc_unnamed4314 {
  Msp430Spi0C__0__CLIENT_ID = 0U
};
enum /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0____nesc_unnamed4315 {
  Msp430Usart0C__0__CLIENT_ID = 0U
};
typedef T62500hz CC2420TransmitP__BackoffAlarm__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffAlarm__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__1____nesc_unnamed4316 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
enum /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__0____nesc_unnamed4317 {
  Msp430Timer32khzC__0__ALARM_ID = 0U
};
typedef T32khz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__frequency_tag /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__precision_tag;
typedef uint16_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type;
typedef T32khz /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag;
typedef /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__frequency_tag /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__precision_tag;
typedef uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type;
typedef T32khz /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type;
typedef uint16_t /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_precision_tag /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_precision_tag /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type;
typedef T62500hz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type;
typedef T62500hz Alarm32khzTo62500hzTransformC__Alarm__precision_tag;
typedef uint32_t Alarm32khzTo62500hzTransformC__Alarm__size_type;
typedef T32khz Alarm32khzTo62500hzTransformC__AlarmFrom__precision_tag;
typedef uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__size_type;
enum /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__1____nesc_unnamed4318 {
  Msp430Timer32khzC__1__ALARM_ID = 1U
};
typedef T32khz /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__frequency_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__precision_tag;
typedef uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type;
typedef T32khz /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type;
typedef T32khz /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type;
typedef T32khz /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag;
typedef uint32_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__precision_tag;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__precision_tag;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type;
enum /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0____nesc_unnamed4319 {
  Alarm62500hz32VirtualizedC__0__CLIENT_ID = 0U
};
enum /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Timer*/Msp430Timer32khzC__2____nesc_unnamed4320 {
  Msp430Timer32khzC__2__ALARM_ID = 2U
};
typedef T32khz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__frequency_tag;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__frequency_tag /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__precision_tag;
typedef uint16_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_precision_tag;
typedef uint16_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_precision_tag /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_precision_tag /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_precision_tag /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__precision_tag;
typedef /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__size_type;
typedef T62500hz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type;
typedef T32khz /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__precision_tag;
typedef uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type;
enum /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1____nesc_unnamed4321 {
  Alarm62500hz32VirtualizedC__1__CLIENT_ID = 1U
};
typedef T62500hz LocalTime62500hzP__LocalTime__precision_tag;
typedef T62500hz LocalTime62500hzP__Alarm__precision_tag;
typedef uint32_t LocalTime62500hzP__Alarm__size_type;
typedef bool TKN154TimingP__CCA__data_type;
typedef T62500hz TKN154TimingP__SymbolAlarm__precision_tag;
typedef uint32_t TKN154TimingP__SymbolAlarm__size_type;
enum /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2____nesc_unnamed4322 {
  Alarm62500hz32VirtualizedC__2__CLIENT_ID = 2U
};
typedef T62500hz /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef T62500hz /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef T62500hz TestDeviceC__DisassociateTimer__precision_tag;
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformC__Init__init(void );
# 46 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 43
static void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );



static void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );





static void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 45
static void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__default__initClocks(void );
# 62 "/usr/src/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t Msp430ClockP__Init__init(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(
# 51 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x406534b0);
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );
#line 39
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(
# 51 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x406534b0);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
static bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );
# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t delta);
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 68
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 42
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );
# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t delta);
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );
#line 57
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );
#line 47
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void );










static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 44
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );
# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t time);

static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t delta);
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 86
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t time);
# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 76 "/usr/src/tinyos/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x405c3b40);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x405c3b40);
# 57 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 72 "/usr/src/tinyos/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
# 73 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );






static bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
#line 78
static void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
#line 99
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 92
static void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );






static void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 99
static void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 78
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );
#line 73
static bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
#line 99
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 66
static uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
#line 92
static void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );
#line 85
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );




static void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );




static void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );




static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );
#line 85
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );




static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr(void );
#line 85
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
#line 48
static void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );





static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );




static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
#line 40
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DataP__DeviceCapRx__received(message_t *frame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
static void DataP__MCPS_DATA__default__confirm(
message_t *frame, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp);









static message_t *DataP__MCPS_DATA__default__indication(message_t *frame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DataP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
static void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 241 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static uint8_t PibP__Frame__getHeaderLength(message_t *frame);
#line 139
static error_t PibP__Frame__setAddressingFields(message_t *frame, 
uint8_t SrcAddrMode, 
uint8_t DstAddrMode, 
uint16_t DstPANID, 
ieee154_address_t *DstAddr, 
ieee154_security_t *security);







static void *PibP__Frame__getPayload(message_t *frame);
#line 69
static error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t PibP__Frame__getSrcAddrMode(message_t *frame);
#line 81
static error_t PibP__Frame__getSrcPANId(message_t *frame, uint16_t *PANID);









static uint8_t PibP__Frame__getDstAddrMode(message_t *frame);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PibP__LocalInit__init(void );
# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void );
#line 78
static ieee154_macAssociationPermit_t PibP__MLME_GET__macAssociationPermit(void );
#line 150
static ieee154_macResponseWaitTime_t PibP__MLME_GET__macResponseWaitTime(void );
#line 93
static ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void );
#line 147
static ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void );
#line 63
static ieee154_phyCurrentPage_t PibP__MLME_GET__phyCurrentPage(void );
#line 84
static ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void );
#line 120
static ieee154_macPANId_t PibP__MLME_GET__macPANId(void );
#line 66
static ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void );
#line 144
static ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void );
#line 135
static ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void );
#line 129
static ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void );
#line 141
static ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void );
#line 114
static ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void );
#line 81
static ieee154_macAutoRequest_t PibP__MLME_GET__macAutoRequest(void );
#line 54
static ieee154_phyChannelsSupported_t PibP__MLME_GET__phyChannelsSupported(void );
#line 105
static ieee154_macCoordShortAddress_t PibP__MLME_GET__macCoordShortAddress(void );
#line 102
static ieee154_macCoordExtendedAddress_t PibP__MLME_GET__macCoordExtendedAddress(void );





static ieee154_macDSN_t PibP__MLME_GET__macDSN(void );
#line 168
static ieee154_macPanCoordinator_t PibP__MLME_GET__macPanCoordinator(void );
#line 99
static ieee154_macBSN_t PibP__MLME_GET__macBSN(void );
# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
static error_t PibP__BeaconFrame__parsePANDescriptor(message_t *frame, uint8_t LogicalChannel, 
uint8_t ChannelPage, ieee154_PANDescriptor_t *pdescriptor);
#line 119
static void *PibP__BeaconFrame__getBeaconPayload(message_t *frame);
#line 132
static uint8_t PibP__BeaconFrame__getBeaconPayloadLength(message_t *frame);
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void PibP__RadioControl__startDone(error_t error);
#line 138
static void PibP__RadioControl__stopDone(error_t error);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void PibP__resetSpinTask__runTask(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void PibP__RadioToken__granted(void );
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static PibP__GetLocalExtendedAddress__val_t PibP__GetLocalExtendedAddress__get(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void PibP__RadioOff__offDone(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static PibP__IsRadioTokenRequested__data_type PibP__IsRadioTokenRequested__getNow(void );
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t PibP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 54
static ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 151
static ieee154_status_t PibP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);









static ieee154_status_t PibP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value);
#line 80
static ieee154_status_t PibP__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value);
#line 113
static ieee154_status_t PibP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);
#line 108
static ieee154_status_t PibP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value);









static ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value);
#line 103
static ieee154_status_t PibP__MLME_SET__macBSN(ieee154_macBSN_t value);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void PibP__radioControlStopTask__runTask(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__default__notify(
# 59 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
uint8_t arg_0x409bfec8, 
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
PibP__PIBUpdate__val_t val);
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);


static error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
#line 64
static void PibP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE);
#line 55
static void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);


static void PibP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE);


static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *srcNative);
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static ieee154_status_t PibP__MLME_RESET__request(
bool SetDefaultPIB);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static error_t RadioControlImplP__MacTx__transmit(
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae21e0, 
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
#line 83
static void RadioControlImplP__MacTx__default__transmitDone(
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae21e0, 
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
ieee154_txframe_t *frame, error_t result);
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t RadioControlImplP__MacRx__enableRx(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae7848, 
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
uint32_t t0, uint32_t dt);








static void RadioControlImplP__MacRx__default__enableRxDone(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae7848);
# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static bool RadioControlImplP__MacRx__isReceiving(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae7848);
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static message_t *RadioControlImplP__MacRx__default__received(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae7848, 
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
message_t *frame);
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static void RadioControlImplP__PhyUnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 62
static error_t RadioControlImplP__UnslottedCsmaCa__transmit(
# 45 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae12e0, 
# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma);
#line 89
static void RadioControlImplP__UnslottedCsmaCa__default__transmitDone(
# 45 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae12e0, 
# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void RadioControlImplP__PhyRadioOff__offDone(void );
#line 53
static void RadioControlImplP__MacRadioOff__default__offDone(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae1ac8);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t RadioControlImplP__MacRadioOff__off(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae1ac8);
# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static bool RadioControlImplP__MacRadioOff__isOff(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae1ac8);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void RadioControlImplP__PhyRx__enableRxDone(void );
#line 84
static message_t *RadioControlImplP__PhyRx__received(message_t *frame);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b14d60);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b129b8);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b129b8);
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b14178);
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b14178);
# 145 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b14178);
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b14178);
# 98 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t DispatchUnslottedCsmaP__FrameTx__transmit(ieee154_txframe_t *txFrame);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *DispatchUnslottedCsmaP__FrameExtracted__default__received(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
uint8_t arg_0x40b37718, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
message_t *rxFrame, ieee154_txframe_t *txFrame);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void DispatchUnslottedCsmaP__RadioRx__enableRxDone(void );
#line 84
static message_t *DispatchUnslottedCsmaP__RadioRx__received(message_t *frame);
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void DispatchUnslottedCsmaP__RadioTokenRequested__requested(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired(void );
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_START.nc"
static void DispatchUnslottedCsmaP__MLME_START__default__confirm(
ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DispatchUnslottedCsmaP__FrameRx__default__received(
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
uint8_t arg_0x40b3a268, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
message_t *frame);
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void DispatchUnslottedCsmaP__RadioToken__granted(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void DispatchUnslottedCsmaP__RxEnableStateChange__notify(DispatchUnslottedCsmaP__RxEnableStateChange__val_t val);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void DispatchUnslottedCsmaP__wasRxEnabledTask__runTask(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void DispatchUnslottedCsmaP__RadioOff__offDone(void );
# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static void DispatchUnslottedCsmaP__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void DispatchUnslottedCsmaP__startIndirectTxTimerTask__runTask(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t DispatchUnslottedCsmaP__Reset__init(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void DispatchUnslottedCsmaP__signalTxDoneTask__runTask(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__notify(DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__val_t val);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void DispatchUnslottedCsmaP__signalStartConfirmTask__runTask(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x40bbe0e8, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame);







static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__default__transmitDone(
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x40bbe0e8, 
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__runTask(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Reset__init(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void IndirectTxP__IndirectTxTimeout__fired(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t IndirectTxP__FrameTx__transmit(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
uint8_t arg_0x40bc0b48, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame);







static void IndirectTxP__FrameTx__default__transmitDone(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
uint8_t arg_0x40bc0b48, 
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static IndirectTxP__GetIndirectTxFrame__val_t IndirectTxP__GetIndirectTxFrame__get(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void IndirectTxP__tryCoordCapTxTask__runTask(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void IndirectTxP__PendingAddrSpecUpdated__default__notify(IndirectTxP__PendingAddrSpecUpdated__val_t val);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void IndirectTxP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t IndirectTxP__Reset__init(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *IndirectTxP__DataRequestRx__received(message_t *frame);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *PollP__DataExtracted__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static ieee154_status_t PollP__DataRequest__poll(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
uint8_t arg_0x40c30da8, 
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
uint8_t CoordAddrMode, uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t SrcAddrMode);





static void PollP__DataRequest__default__pollDone(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
uint8_t arg_0x40c30da8);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PollP__Init__init(void );
# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
static void PollP__MLME_POLL__default__confirm(
ieee154_status_t status);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void ScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void ScanP__continueScanRequestTask__runTask(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void ScanP__RadioRx__enableRxDone(void );
#line 84
static message_t *ScanP__RadioRx__received(message_t *frame);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void ScanP__startTimerTask__runTask(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t ScanP__Init__init(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void ScanP__RadioToken__granted(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void ScanP__ScanTimer__fired(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void ScanP__RadioOff__offDone(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static ScanP__IsRadioTokenRequested__data_type ScanP__IsRadioTokenRequested__getNow(void );
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static void ScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_BEACON_NOTIFY.nc"
static message_t *ScanP__MLME_BEACON_NOTIFY__default__indication(message_t *beaconFrame);
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
static void ScanP__MLME_SCAN__default__confirm(
ieee154_status_t status, 
uint8_t ScanType, 
uint8_t ChannelPage, 
uint32_t UnscannedChannels, 
uint8_t EnergyDetectNumResults, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumResults, 
ieee154_PANDescriptor_t *PANDescriptorList);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void ScanP__nextIterationTask__runTask(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *BeaconRequestRxP__BeaconRequestRx__received(message_t *frame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void BeaconRequestRxP__BeaconRequestResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 131 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154TxBeaconPayload.nc"
static void BeaconRequestRxP__IEEE154TxBeaconPayload__default__aboutToTransmit(void );






static void BeaconRequestRxP__IEEE154TxBeaconPayload__default__beaconTransmitted(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void BeaconRequestRxP__sendBeaconTask__runTask(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t BeaconRequestRxP__Reset__init(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *AssociateP__AssociationResponseExtracted__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static void AssociateP__DataRequest__pollDone(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t AssociateP__Init__init(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *AssociateP__AssociationRequestRx__received(message_t *frame);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
static ieee154_status_t AssociateP__MLME_ASSOCIATE__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
uint8_t CoordAddrMode, 
uint16_t CoordPANID, 
ieee154_address_t CoordAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void AssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void AssociateP__ResponseTimeout__fired(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void AssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 51
static void DisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 51
static void DisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
static ieee154_status_t DisassociateP__MLME_DISASSOCIATE__request(
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
bool TxIndirect, 
ieee154_security_t *security);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DisassociateP__DisassociationDirectRxFromCoord__received(message_t *frame);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t DisassociateP__Init__init(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *DisassociateP__DisassociationExtractedFromCoord__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DisassociateP__DisassociationRxFromDevice__received(message_t *frame);
# 75 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RX_ENABLE.nc"
static void RxEnableP__MLME_RX_ENABLE__default__confirm(
ieee154_status_t status);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void RxEnableP__WasRxEnabled__notify(RxEnableP__WasRxEnabled__val_t val);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void RxEnableP__RxEnableTimer__fired(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t RxEnableP__Reset__init(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static RxEnableP__IsRxEnableActive__data_type RxEnableP__IsRxEnableActive__getNow(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void PromiscuousModeP__signalStartDoneTask__runTask(void );
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void PromiscuousModeP__PromiscuousMode__default__startDone(error_t error);
#line 138
static void PromiscuousModeP__PromiscuousMode__default__stopDone(error_t error);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PromiscuousModeP__Init__init(void );
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static PromiscuousModeP__PromiscuousModeGet__val_t PromiscuousModeP__PromiscuousModeGet__get(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void PromiscuousModeP__RadioToken__granted(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void PromiscuousModeP__RadioOff__offDone(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static PromiscuousModeP__IsRadioTokenRequested__data_type PromiscuousModeP__IsRadioTokenRequested__getNow(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void PromiscuousModeP__continueStopTask__runTask(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void PromiscuousModeP__PromiscuousRx__enableRxDone(void );
#line 84
static message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *CoordRealignmentP__OrphanNotificationRx__received(message_t *frame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void CoordRealignmentP__CoordRealignmentTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CoordRealignmentP__Init__init(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ORPHAN.nc"
static void CoordRealignmentP__MLME_ORPHAN__default__indication(
uint64_t OrphanAddress, 
ieee154_security_t *security);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__t * 


/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 89
static error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(
#line 85
/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void );
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__t * 


/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 89
static error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(
#line 85
/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void );
# 73 "/usr/src/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__t  

/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__enqueue(
#line 86
/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__t  

/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size(void );
# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static error_t CC2420TKN154P__SplitControl__start(void );
#line 130
static error_t CC2420TKN154P__SplitControl__stop(void );
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static error_t CC2420TKN154P__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
# 36 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void CC2420TKN154P__ReliableWait__waitRxDone(void );



static void CC2420TKN154P__ReliableWait__waitBackoffDone(void );
#line 38
static void CC2420TKN154P__ReliableWait__waitTxDone(void );
# 45 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
static message_t *CC2420TKN154P__CC2420Rx__received(message_t *data);
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void CC2420TKN154P__SlottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool CC2420TKN154P__RadioRx__isReceiving(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__configSyncTask__runTask(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420TKN154P__SpiResource__granted(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static CC2420TKN154P__CCA__data_type CC2420TKN154P__CCA__getNow(void );
# 49 "/usr/src/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
static void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__energyDetectionTask__runTask(void );
# 41 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);


static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error);





static void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *data);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__startDoneTask__runTask(void );
#line 75
static void CC2420TKN154P__rxControlStopDoneTask__runTask(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t CC2420TKN154P__RadioOff__off(void );
#line 60
static bool CC2420TKN154P__RadioOff__isOff(void );
# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static error_t CC2420TKN154P__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma);
# 77 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static void CC2420TKN154P__CC2420Power__startOscillatorDone(void );
#line 57
static void CC2420TKN154P__CC2420Power__startVRegDone(void );
# 49 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static error_t CC2420TKN154P__EnergyDetection__start(uint32_t duration);
# 55 "/usr/src/tinyos/tos/interfaces/Set.nc"
static void CC2420TKN154P__RadioPromiscuousMode__set(CC2420TKN154P__RadioPromiscuousMode__val_t val);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void CC2420TKN154P__PIBUpdate__notify(
# 57 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
uint8_t arg_0x40eb4a80, 
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
CC2420TKN154P__PIBUpdate__val_t val);
# 132 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static void CC2420TKN154P__RxControl__stopDone(error_t error);
# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__setShortAddr(uint16_t address);
#line 66
static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);
#line 89
static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on);
#line 78
static void CC2420ControlP__CC2420Config__setPanAddr(uint16_t address);
#line 90
static bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void );





static void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode);
#line 53
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 65
static uint8_t CC2420ControlP__CC2420Config__getChannel(void );
#line 84
static void CC2420ControlP__CC2420Config__setPanCoordinator(bool pcoord);
#line 102
static void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 98
static error_t CC2420ControlP__CC2420Power__rfOff(void );
#line 112
static error_t CC2420ControlP__CC2420Power__flushRxFifo(void );
#line 91
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 52
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 64
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
#line 84
static error_t CC2420ControlP__CC2420Power__stopOscillator(void );
#line 104
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 97
static error_t CC2420ControlP__Resource__immediateRequest(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
#line 128
static bool CC2420ControlP__Resource__isOwner(void );
# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupAlarm__fired(void );
# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );


static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );

static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
#line 43
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );


static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );


static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
#line 43
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );


static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
#line 40
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 54 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );
# 52 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__clear(void );
#line 47
static void HplMsp430InterruptP__Port14__disable(void );
#line 67
static void HplMsp430InterruptP__Port14__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port14__enable(void );









static void HplMsp430InterruptP__Port26__clear(void );
#line 72
static void HplMsp430InterruptP__Port26__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port17__clear(void );
#line 72
static void HplMsp430InterruptP__Port17__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port21__clear(void );
#line 72
static void HplMsp430InterruptP__Port21__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port12__clear(void );
#line 72
static void HplMsp430InterruptP__Port12__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port24__clear(void );
#line 72
static void HplMsp430InterruptP__Port24__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port15__clear(void );
#line 72
static void HplMsp430InterruptP__Port15__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port27__clear(void );
#line 72
static void HplMsp430InterruptP__Port27__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port10__clear(void );
#line 47
static void HplMsp430InterruptP__Port10__disable(void );
#line 67
static void HplMsp430InterruptP__Port10__edge(bool low_to_high);
#line 42
static void HplMsp430InterruptP__Port10__enable(void );









static void HplMsp430InterruptP__Port22__clear(void );
#line 72
static void HplMsp430InterruptP__Port22__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port13__clear(void );
#line 72
static void HplMsp430InterruptP__Port13__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port25__clear(void );
#line 72
static void HplMsp430InterruptP__Port25__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port16__clear(void );
#line 72
static void HplMsp430InterruptP__Port16__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port20__clear(void );
#line 72
static void HplMsp430InterruptP__Port20__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port11__clear(void );
#line 72
static void HplMsp430InterruptP__Port11__default__fired(void );
#line 52
static void HplMsp430InterruptP__Port23__clear(void );
#line 72
static void HplMsp430InterruptP__Port23__default__fired(void );
#line 72
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );
# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );
# 82 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c6010, 
# 62 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c6010, 
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c6010, 
# 82 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c6010, 
# 51 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c6010, 
# 71 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x410c6a38, 
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c5200, 
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c5200, 
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c8558);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c8558);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c8558);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c8558);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c8558);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c59b8);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/usr/src/tinyos/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x410fcd08);
# 66 "/usr/src/tinyos/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x410fcd08, 
# 66 "/usr/src/tinyos/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x410fcd08);
# 45 "/usr/src/tinyos/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x410fcd08, 
# 45 "/usr/src/tinyos/tos/interfaces/State.nc"
uint8_t reqState);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(
# 76 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41168b90);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(
# 76 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41168b90);
# 70 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(
# 79 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41167d88, 
# 59 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
#line 82
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(
# 79 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41167d88, 
# 75 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(
# 82 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41164010);
# 45 "/usr/src/tinyos/tos/interfaces/SpiByte.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(
# 75 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41168148);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(
# 75 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41168148);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(
# 75 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41168148);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(
# 75 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41168148);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(
# 75 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41168148);
# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );
# 180 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 197
static void HplMsp430Usart0P__Usart__clrRxIntr(void );
#line 97
static void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 179
static void HplMsp430Usart0P__Usart__disableIntr(void );
#line 90
static void HplMsp430Usart0P__Usart__setUmctl(uint8_t umctl);
#line 177
static void HplMsp430Usart0P__Usart__disableRxIntr(void );
#line 207
static void HplMsp430Usart0P__Usart__clrIntr(void );
#line 80
static void HplMsp430Usart0P__Usart__setUbr(uint16_t ubr);
#line 224
static void HplMsp430Usart0P__Usart__tx(uint8_t data);
#line 128
static void HplMsp430Usart0P__Usart__disableUart(void );
#line 153
static void HplMsp430Usart0P__Usart__enableSpi(void );
#line 168
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t HplMsp430Usart0P__Usart__rx(void );
#line 192
static bool HplMsp430Usart0P__Usart__isRxIntrPending(void );
#line 158
static void HplMsp430Usart0P__Usart__disableSpi(void );
# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4121f200, 
# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4121f200);
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );
#line 39
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(
# 40 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4121fa80);
# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(
# 55 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123e690);
# 61 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(
# 55 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123e690);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(
# 60 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123da58);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(
# 60 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123da58);
# 56 "/usr/src/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 73
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(
# 54 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123fbd0);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(
# 54 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123fbd0);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(
# 54 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123fbd0);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(
# 54 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123fbd0);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(
# 54 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123fbd0);
# 90 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
# 7 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430I2C0P__HplI2C__isI2C(void );
# 61 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 24 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 40 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);


static error_t CC2420TransmitP__CC2420Tx__send(bool cca);



static void CC2420TransmitP__CC2420Tx__lockChipSpi(void );
#line 46
static bool CC2420TransmitP__CC2420Tx__cca(void );

static void CC2420TransmitP__CC2420Tx__unlockChipSpi(void );
# 95 "/usr/src/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t CC2420TransmitP__AsyncStdControl__start(void );









static error_t CC2420TransmitP__AsyncStdControl__stop(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffAlarm__fired(void );
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 75
static void CC2420ReceiveP__stopContinueTask__runTask(void );
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 113 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__start(void );









static error_t CC2420ReceiveP__AsyncSplitControl__stop(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__size_type dt);
#line 73
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__size_type /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );






static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__size_type dt);






static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__size_type dt);






static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void );




static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void );
#line 109
static Alarm32khzTo62500hzTransformC__Alarm__size_type Alarm32khzTo62500hzTransformC__Alarm__getNow(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41492010);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__default__fired(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41492010);
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__startAt(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41492010, 
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__Alarm__size_type t0, Alarm32khzTo62500hzTransformC__Alarm__size_type dt);
#line 116
static Alarm32khzTo62500hzTransformC__Alarm__size_type Alarm32khzTo62500hzTransformC__Alarm__getAlarm(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41492010);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__start(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41492010, 
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__Alarm__size_type dt);






static void Alarm32khzTo62500hzTransformC__Alarm__stop(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41492010);
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8);
# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8, 
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt);






static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x41470820);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x41470820);
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x41470820, 
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);
#line 116
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x41470820);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x41470820, 
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);






static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x41470820);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__size_type dt);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Init__init(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 66
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__size_type dt);
#line 78
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type dt);
#line 66
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type dt);
#line 78
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void );
# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t LocalTime62500hzP__LocalTime__get(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void LocalTime62500hzP__Alarm__fired(void );
# 35 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt);





static bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);
#line 37
static void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt);

static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void TKN154TimingP__SymbolAlarm__fired(void );
# 47 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
static uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime);








static uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x41527d88);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x41527d88);
# 92 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static bool /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x41527d88);
# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x41527d88, 
# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
uint32_t t0, uint32_t dt);
#line 73
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x41527d88, 
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x41527d88);
# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 60 "/usr/src/tinyos/tos/interfaces/Boot.nc"
static void TestDeviceC__Boot__booted(void );
# 101 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
static void TestDeviceC__MLME_DISASSOCIATE__confirm(
ieee154_status_t status, 
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress);
#line 81
static void TestDeviceC__MLME_DISASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
ieee154_security_t *security);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void TestDeviceC__DisassociateTimer__fired(void );
# 121 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
static void TestDeviceC__MLME_ASSOCIATE__confirm(
uint16_t AssocShortAddress, 
uint8_t status, 
ieee154_security_t *security);
#line 84
static void TestDeviceC__MLME_ASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_COMM_STATUS.nc"
static void TestDeviceC__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security);
# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static void TestDeviceC__MLME_RESET__confirm(
ieee154_status_t status);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MoteClockInit__init(void );
#line 62
static error_t PlatformP__LedsInit__init(void );
# 10 "/usr/src/tinyos/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 6 "/usr/src/tinyos/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__uwait(uint16_t u);




static __inline void MotePlatformC__TOSH_wait(void );




static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set);










static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void );
#line 56
static inline error_t MotePlatformC__Init__init(void );
# 43 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
static void Msp430ClockP__Msp430ClockInit__initTimerB(void );
#line 42
static void Msp430ClockP__Msp430ClockInit__initTimerA(void );
#line 40
static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void );
static void Msp430ClockP__Msp430ClockInit__initClocks(void );
# 51 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static volatile uint8_t Msp430ClockP__IE1 __asm ("0x0000");
static volatile uint16_t Msp430ClockP__TACTL __asm ("0x0160");
static volatile uint16_t Msp430ClockP__TAIV __asm ("0x012E");
static volatile uint16_t Msp430ClockP__TBCTL __asm ("0x0180");
static volatile uint16_t Msp430ClockP__TBIV __asm ("0x011E");

enum Msp430ClockP____nesc_unnamed4323 {

  Msp430ClockP__ACLK_CALIB_PERIOD = 8, 
  Msp430ClockP__TARGET_DCO_DELTA = 4096 / 32 * Msp430ClockP__ACLK_CALIB_PERIOD
};

static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void );



static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void );
#line 79
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void );
#line 100
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void );
#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void );
#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void );




static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void );





static inline void Msp430ClockP__startTimerA(void );
#line 163
static inline void Msp430ClockP__startTimerB(void );
#line 175
static void Msp430ClockP__set_dco_calib(int calib);





static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib);
#line 204
static inline void Msp430ClockP__busyCalibrateDco(void );
#line 229
static inline error_t Msp430ClockP__Init__init(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(
# 51 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x406534b0);
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void );
# 126 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void );








static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n);
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(
# 51 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
uint8_t arg_0x406534b0);
# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void );
# 62 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void );
#line 81
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void );
#line 126
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void );




static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void );





static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void );








static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n);
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t;


static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t;


static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t;


static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void );
#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)  ;
#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm);
#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void );
#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm);
#line 130
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void );
#line 175
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void );




static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void );
#line 192
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t;

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x)  ;
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)  ;

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl(void );
#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void );









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void );
#line 130
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void );




static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x);









static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x);
#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n);







static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t;


static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t;


static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void );
# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void );
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
typedef msp430_compare_control_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t;


static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)  ;
#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void );
#line 150
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void );
#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void );







static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n);



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void );



static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void Msp430TimerCommonP__VectorTimerB1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA0__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerA1__fired(void );
#line 39
static void Msp430TimerCommonP__VectorTimerB0__fired(void );
# 11 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
void sig_TIMERA0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000C)))  ;
void sig_TIMERA1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x000A)))  ;
void sig_TIMERB0_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x001A)))  ;
void sig_TIMERB1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0018)))  ;
# 62 "/usr/src/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 59 "/usr/src/tinyos/tos/chips/msp430/McuSleepC.nc"
bool McuSleepC__dirty = TRUE;
mcu_power_t McuSleepC__powerState = MSP430_POWER_ACTIVE;




const uint16_t McuSleepC__msp430PowerBits[MSP430_POWER_LPM4 + 1] = { 
0, 
0x0010, 
0x0040 + 0x0010, 
0x0080 + 0x0010, 
0x0080 + 0x0040 + 0x0010, 
0x0080 + 0x0040 + 0x0020 + 0x0010 };


static inline mcu_power_t McuSleepC__getPowerState(void );
#line 112
static inline void McuSleepC__computePowerState(void );




static inline void McuSleepC__McuSleep__sleep(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/usr/src/tinyos/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/usr/src/tinyos/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x405c3b40);
# 76 "/usr/src/tinyos/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4324 {

  SchedulerBasicP__NUM_TASKS = 26U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/usr/src/tinyos/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 89
static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );
# 59 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void );
#line 65
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void );
#line 67
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void );
#line 59
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void );
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void );
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void );



static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void );

static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void );
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void );






static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void );
#line 56
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void );
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr(void );





static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void );
#line 56
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void );






static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void );
# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void );





static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void );
# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void );




static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void );
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void );




static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void );
# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void );
#line 48
static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void );





static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void );
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static error_t DataP__TxFramePool__put(
#line 85
DataP__TxFramePool__t * newVal);
# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
static void DataP__MCPS_DATA__confirm(
message_t *frame, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp);









static message_t *DataP__MCPS_DATA__indication(message_t *frame);
# 70 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__dataReceived(message_t *frame);
static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 180
static inline void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *data, ieee154_status_t status);
#line 215
static inline message_t *DataP__DeviceCapRx__received(message_t *frame);




static inline message_t *DataP__dataReceived(message_t *frame);




static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 240
static inline void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);




static inline void DataP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 261
static inline void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);




static inline void DataP__MCPS_DATA__default__confirm(
message_t *msg, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp);

static inline message_t *DataP__MCPS_DATA__default__indication(message_t *frame);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PibP__MacReset__init(void );
# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t PibP__LocalTime__get(void );
# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
static uint16_t PibP__Random__rand16(void );
#line 46
static uint32_t PibP__Random__rand32(void );
# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static error_t PibP__RadioControl__start(void );
#line 130
static error_t PibP__RadioControl__stop(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PibP__DispatchReset__init(void );
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static PibP__PromiscuousModeGet__val_t PibP__PromiscuousModeGet__get(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PibP__resetSpinTask__postTask(void );
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t PibP__RadioToken__release(void );







static bool PibP__RadioToken__isOwner(void );
#line 84
static error_t PibP__RadioToken__request(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t PibP__RadioOff__off(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PibP__DispatchQueueReset__init(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PibP__radioControlStopTask__postTask(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__notify(
# 59 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
uint8_t arg_0x409bfec8, 
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
PibP__PIBUpdate__val_t val);
# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static void PibP__MLME_RESET__confirm(
ieee154_status_t status);
# 88 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
enum PibP____nesc_unnamed4325 {
#line 88
  PibP__radioControlStopTask = 0U
};
#line 88
typedef int PibP____nesc_sillytask_radioControlStopTask[PibP__radioControlStopTask];





enum PibP____nesc_unnamed4326 {
#line 94
  PibP__resetSpinTask = 1U
};
#line 94
typedef int PibP____nesc_sillytask_resetSpinTask[PibP__resetSpinTask];
#line 78
ieee154_PIB_t PibP__m_pib;

bool PibP__m_setDefaultPIB;
uint8_t PibP__m_resetSpin;




uint64_t PibP__m_aExtendedAddressLE;


static inline void PibP__updateMacMaxFrameTotalWaitTime(void );
static void PibP__resetAttributesToDefault(void );


static inline uint8_t PibP__getPendAddrSpecOffset(uint8_t *macPayloadField);


static inline error_t PibP__LocalInit__init(void );








static void PibP__resetAttributesToDefault(void );
#line 140
static inline void PibP__updateMacMaxFrameTotalWaitTime(void );
#line 164
static inline ieee154_status_t PibP__MLME_RESET__request(bool SetDefaultPIB);
#line 187
static inline void PibP__RadioToken__granted(void );





static inline void PibP__RadioOff__offDone(void );




static inline void PibP__radioControlStopTask__runTask(void );








static void PibP__RadioControl__stopDone(error_t result);
#line 222
static inline void PibP__resetSpinTask__runTask(void );









static inline token_requested_t PibP__IsRadioTokenRequested__getNow(void );

static inline void PibP__RadioControl__startDone(error_t error);
#line 258
static inline ieee154_phyChannelsSupported_t PibP__MLME_GET__phyChannelsSupported(void );





static inline ieee154_phyCurrentPage_t PibP__MLME_GET__phyCurrentPage(void );

static inline ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void );







static inline ieee154_macAssociationPermit_t PibP__MLME_GET__macAssociationPermit(void );

static inline ieee154_macAutoRequest_t PibP__MLME_GET__macAutoRequest(void );

static inline ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void );



static inline ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void );



static inline ieee154_macBSN_t PibP__MLME_GET__macBSN(void );

static inline ieee154_macCoordExtendedAddress_t PibP__MLME_GET__macCoordExtendedAddress(void );

static inline ieee154_macCoordShortAddress_t PibP__MLME_GET__macCoordShortAddress(void );

static inline ieee154_macDSN_t PibP__MLME_GET__macDSN(void );



static inline ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void );

static inline ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void );

static inline ieee154_macPANId_t PibP__MLME_GET__macPANId(void );





static inline ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void );



static inline ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void );



static inline ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void );

static inline ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void );

static inline ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void );

static inline ieee154_macResponseWaitTime_t PibP__MLME_GET__macResponseWaitTime(void );
#line 332
static inline ieee154_macPanCoordinator_t PibP__MLME_GET__macPanCoordinator(void );



static ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 378
static inline ieee154_status_t PibP__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value);
#line 406
static inline ieee154_status_t PibP__MLME_SET__macBSN(ieee154_macBSN_t value);





static ieee154_status_t PibP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value);





static ieee154_status_t PibP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);





static ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value);
#line 454
static ieee154_status_t PibP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 466
static ieee154_status_t PibP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);
#line 478
static inline ieee154_status_t PibP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value);
#line 540
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);








static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 591
static uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
#line 653
static error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
#line 678
static inline error_t PibP__Frame__setAddressingFields(message_t *frame, 
uint8_t srcAddrMode, 
uint8_t dstAddrMode, 
uint16_t dstPANId, 
ieee154_address_t *dstAddr, 
ieee154_security_t *security);
#line 728
static inline uint8_t PibP__Frame__getHeaderLength(message_t *frame);







static inline void *PibP__Frame__getPayload(message_t *frame);
#line 781
static uint8_t PibP__Frame__getSrcAddrMode(message_t *frame);





static error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 807
static inline error_t PibP__Frame__getSrcPANId(message_t *frame, uint16_t *PANID);
#line 827
static inline uint8_t PibP__Frame__getDstAddrMode(message_t *frame);
#line 876
static inline uint8_t PibP__getPendAddrSpecOffset(uint8_t *macPayloadField);
#line 937
static inline void *PibP__BeaconFrame__getBeaconPayload(message_t *frame);
#line 953
static inline uint8_t PibP__BeaconFrame__getBeaconPayloadLength(message_t *frame);
#line 969
static inline error_t PibP__BeaconFrame__parsePANDescriptor(
message_t *frame, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_PANDescriptor_t *pdescriptor);
#line 1015
static inline uint64_t PibP__GetLocalExtendedAddress__get(void );




static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *src);









static void PibP__FrameUtility__convertToNative(uint64_t *dest, const uint8_t *srcLE);








static inline void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);




static inline void PibP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE);
#line 1063
static void PibP__PIBUpdate__default__notify(uint8_t PIBAttributeID, const void *PIBAttributeValue);
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void RadioControlImplP__MacTx__transmitDone(
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae21e0, 
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
ieee154_txframe_t *frame, error_t result);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void RadioControlImplP__MacRx__enableRxDone(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae7848);
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static message_t *RadioControlImplP__MacRx__received(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae7848, 
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
message_t *frame);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static error_t RadioControlImplP__PhyTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static error_t RadioControlImplP__PhyUnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma);
#line 89
static void RadioControlImplP__UnslottedCsmaCa__transmitDone(
# 45 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae12e0, 
# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t RadioControlImplP__PhyRadioOff__off(void );
#line 60
static bool RadioControlImplP__PhyRadioOff__isOff(void );
#line 53
static void RadioControlImplP__MacRadioOff__offDone(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x40ae1ac8);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static RadioControlImplP__RadioPromiscuousMode__val_t RadioControlImplP__RadioPromiscuousMode__get(void );
# 98 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t RadioControlImplP__ArbiterInfo__userId(void );
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t RadioControlImplP__PhyRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool RadioControlImplP__PhyRx__isReceiving(void );
# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRx__enableRx(uint8_t client, uint32_t t0, uint32_t dt);









static inline void RadioControlImplP__PhyRx__enableRxDone(void );




static inline message_t *RadioControlImplP__PhyRx__received(message_t *msg);
#line 97
static inline bool RadioControlImplP__MacRx__isReceiving(uint8_t client);









static inline void RadioControlImplP__MacRx__default__enableRxDone(uint8_t client);

static inline message_t *RadioControlImplP__MacRx__default__received(uint8_t client, message_t *frame);







static inline error_t RadioControlImplP__MacTx__transmit(uint8_t client, ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);









static inline void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result);




static inline void RadioControlImplP__MacTx__default__transmitDone(uint8_t client, ieee154_txframe_t *frame, error_t result);






static inline error_t RadioControlImplP__UnslottedCsmaCa__transmit(uint8_t client, ieee154_txframe_t *frame, ieee154_csma_t *csma);









static inline void RadioControlImplP__PhyUnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);





static inline void RadioControlImplP__UnslottedCsmaCa__default__transmitDone(uint8_t client, 
ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 190
static error_t RadioControlImplP__MacRadioOff__off(uint8_t client);









static inline void RadioControlImplP__PhyRadioOff__offDone(void );





static bool RadioControlImplP__MacRadioOff__isOff(uint8_t client);







static inline void RadioControlImplP__MacRadioOff__default__offDone(uint8_t client);
# 49 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
enum /*RadioControlP.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4327 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 13U ? (13U - 1) / 8 + 1 : 0
};

uint8_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b14d60);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b129b8);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b129b8);
# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x40b14178);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask(void );
# 70 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4328 {
#line 70
  SimpleTransferArbiterP__0__grantedTask = 2U
};
#line 70
typedef int /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_sillytask_grantedTask[/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask];
#line 63
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4329 {
#line 63
  SimpleTransferArbiterP__0__RES_IDLE = 0, SimpleTransferArbiterP__0__RES_GRANTING = 1, SimpleTransferArbiterP__0__RES_BUSY = 2
};
#line 64
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4330 {
#line 64
  SimpleTransferArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE;
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId;



static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(uint8_t id);
#line 98
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(uint8_t id);
#line 151
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void );










static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void );









static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DispatchUnslottedCsmaP__FrameTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *DispatchUnslottedCsmaP__FrameExtracted__received(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
uint8_t arg_0x40b37718, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
message_t *rxFrame, ieee154_txframe_t *txFrame);
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t DispatchUnslottedCsmaP__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool DispatchUnslottedCsmaP__RadioRx__isReceiving(void );
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__startOneShot(uint32_t dt);




static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__stop(void );
# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macMinBE_t DispatchUnslottedCsmaP__MLME_GET__macMinBE(void );
#line 147
static ieee154_macMaxFrameRetries_t DispatchUnslottedCsmaP__MLME_GET__macMaxFrameRetries(void );
#line 84
static ieee154_macBattLifeExt_t DispatchUnslottedCsmaP__MLME_GET__macBattLifeExt(void );
#line 144
static ieee154_macMaxFrameTotalWaitTime_t DispatchUnslottedCsmaP__MLME_GET__macMaxFrameTotalWaitTime(void );
#line 141
static ieee154_macMaxBE_t DispatchUnslottedCsmaP__MLME_GET__macMaxBE(void );
#line 114
static ieee154_macMaxCSMABackoffs_t DispatchUnslottedCsmaP__MLME_GET__macMaxCSMABackoffs(void );
#line 108
static ieee154_macDSN_t DispatchUnslottedCsmaP__MLME_GET__macDSN(void );
#line 99
static ieee154_macBSN_t DispatchUnslottedCsmaP__MLME_GET__macBSN(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void DispatchUnslottedCsmaP__WasRxEnabled__notify(DispatchUnslottedCsmaP__WasRxEnabled__val_t val);
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_START.nc"
static void DispatchUnslottedCsmaP__MLME_START__confirm(
ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DispatchUnslottedCsmaP__FrameRx__received(
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
uint8_t arg_0x40b3a268, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
message_t *frame);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static DispatchUnslottedCsmaP__GetIndirectTxFrame__val_t DispatchUnslottedCsmaP__GetIndirectTxFrame__get(void );
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t DispatchUnslottedCsmaP__RadioToken__release(void );







static bool DispatchUnslottedCsmaP__RadioToken__isOwner(void );
#line 84
static error_t DispatchUnslottedCsmaP__RadioToken__request(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t DispatchUnslottedCsmaP__wasRxEnabledTask__postTask(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t DispatchUnslottedCsmaP__RadioOff__off(void );
#line 60
static bool DispatchUnslottedCsmaP__RadioOff__isOff(void );
# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static error_t DispatchUnslottedCsmaP__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t DispatchUnslottedCsmaP__startIndirectTxTimerTask__postTask(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static DispatchUnslottedCsmaP__IsRadioTokenRequested__data_type DispatchUnslottedCsmaP__IsRadioTokenRequested__getNow(void );
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t DispatchUnslottedCsmaP__MLME_SET__macDSN(ieee154_macDSN_t value);
#line 103
static ieee154_status_t DispatchUnslottedCsmaP__MLME_SET__macBSN(ieee154_macBSN_t value);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t DispatchUnslottedCsmaP__signalTxDoneTask__postTask(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static DispatchUnslottedCsmaP__IsRxEnableActive__data_type DispatchUnslottedCsmaP__IsRxEnableActive__getNow(void );
# 122 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
enum DispatchUnslottedCsmaP____nesc_unnamed4331 {
#line 122
  DispatchUnslottedCsmaP__signalTxDoneTask = 3U
};
#line 122
typedef int DispatchUnslottedCsmaP____nesc_sillytask_signalTxDoneTask[DispatchUnslottedCsmaP__signalTxDoneTask];
enum DispatchUnslottedCsmaP____nesc_unnamed4332 {
#line 123
  DispatchUnslottedCsmaP__wasRxEnabledTask = 4U
};
#line 123
typedef int DispatchUnslottedCsmaP____nesc_sillytask_wasRxEnabledTask[DispatchUnslottedCsmaP__wasRxEnabledTask];
enum DispatchUnslottedCsmaP____nesc_unnamed4333 {
#line 124
  DispatchUnslottedCsmaP__startIndirectTxTimerTask = 5U
};
#line 124
typedef int DispatchUnslottedCsmaP____nesc_sillytask_startIndirectTxTimerTask[DispatchUnslottedCsmaP__startIndirectTxTimerTask];
enum DispatchUnslottedCsmaP____nesc_unnamed4334 {
#line 125
  DispatchUnslottedCsmaP__signalStartConfirmTask = 6U
};
#line 125
typedef int DispatchUnslottedCsmaP____nesc_sillytask_signalStartConfirmTask[DispatchUnslottedCsmaP__signalStartConfirmTask];
#line 89
#line 84
typedef enum DispatchUnslottedCsmaP____nesc_unnamed4335 {
  DispatchUnslottedCsmaP__SWITCH_OFF, 
  DispatchUnslottedCsmaP__WAIT_FOR_RXDONE, 
  DispatchUnslottedCsmaP__WAIT_FOR_TXDONE, 
  DispatchUnslottedCsmaP__DO_NOTHING
} DispatchUnslottedCsmaP__next_state_t;




#line 91
typedef enum DispatchUnslottedCsmaP____nesc_unnamed4336 {
  DispatchUnslottedCsmaP__INDIRECT_TX_ALARM, 
  DispatchUnslottedCsmaP__NO_ALARM
} DispatchUnslottedCsmaP__rx_alarm_t;


bool DispatchUnslottedCsmaP__m_lock;
bool DispatchUnslottedCsmaP__m_resume;
ieee154_txframe_t *DispatchUnslottedCsmaP__m_currentFrame;
ieee154_txframe_t *DispatchUnslottedCsmaP__m_lastFrame;
ieee154_macRxOnWhenIdle_t DispatchUnslottedCsmaP__m_macRxOnWhenIdle;


ieee154_csma_t DispatchUnslottedCsmaP__m_csma;
ieee154_macMaxBE_t DispatchUnslottedCsmaP__m_BE;
ieee154_macMaxCSMABackoffs_t DispatchUnslottedCsmaP__m_macMaxCSMABackoffs;
ieee154_macMaxBE_t DispatchUnslottedCsmaP__m_macMaxBE;
ieee154_macMaxFrameRetries_t DispatchUnslottedCsmaP__m_macMaxFrameRetries;
ieee154_status_t DispatchUnslottedCsmaP__m_txStatus;
uint32_t DispatchUnslottedCsmaP__m_transactionTime;
bool DispatchUnslottedCsmaP__m_indirectTxPending = FALSE;


static DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryReceive(void );
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryTransmit(void );
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__trySwitchOff(void );


static void DispatchUnslottedCsmaP__updateState(void );
static inline void DispatchUnslottedCsmaP__setCurrentFrame(ieee154_txframe_t *frame);






static error_t DispatchUnslottedCsmaP__Reset__init(void );
#line 180
static inline void DispatchUnslottedCsmaP__signalStartConfirmTask__runTask(void );




static inline ieee154_status_t DispatchUnslottedCsmaP__FrameTx__transmit(ieee154_txframe_t *frame);
#line 201
static inline void DispatchUnslottedCsmaP__RadioToken__granted(void );




static inline void DispatchUnslottedCsmaP__setCurrentFrame(ieee154_txframe_t *frame);
#line 253
static void DispatchUnslottedCsmaP__updateState(void );
#line 325
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryTransmit(void );
#line 341
static DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryReceive(void );
#line 355
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__trySwitchOff(void );









static inline void DispatchUnslottedCsmaP__RadioOff__offDone(void );





static inline void DispatchUnslottedCsmaP__RadioRx__enableRxDone(void );







static inline void DispatchUnslottedCsmaP__RxEnableStateChange__notify(bool whatever);







static inline void DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__notify(const void *val);





static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired(void );









static inline void DispatchUnslottedCsmaP__startIndirectTxTimerTask__runTask(void );




static void DispatchUnslottedCsmaP__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, 
ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 471
static inline void DispatchUnslottedCsmaP__signalTxDoneTask__runTask(void );
#line 485
static inline message_t *DispatchUnslottedCsmaP__RadioRx__received(message_t *frame);
#line 514
static inline void DispatchUnslottedCsmaP__wasRxEnabledTask__runTask(void );






static inline message_t *DispatchUnslottedCsmaP__FrameRx__default__received(uint8_t client, message_t *data);


static inline message_t *DispatchUnslottedCsmaP__FrameExtracted__default__received(uint8_t client, message_t *msg, ieee154_txframe_t *txFrame);



static inline void DispatchUnslottedCsmaP__MLME_START__default__confirm(ieee154_status_t status);

static inline void DispatchUnslottedCsmaP__RadioTokenRequested__requested(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x40bbe0e8, 
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Purge__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 73 "/usr/src/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  

/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__head(void );
#line 90
static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__enqueue(
#line 86
/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  newVal);
#line 81
static 
#line 79
/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  

/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue(void );
#line 58
static uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmit(ieee154_txframe_t *txFrame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
enum /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0____nesc_unnamed4337 {
#line 51
  DispatchQueueP__0__txTask = 7U
};
#line 51
typedef int /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0____nesc_sillytask_txTask[/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask];
bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state;
uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_client;

enum /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0____nesc_unnamed4338 {
  DispatchQueueP__0__TX_DONE_PENDING = 0x01, 
  DispatchQueueP__0__RESET_PENDING = 0x02
};

static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isTxDonePending(void );
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setTxDonePending(void );
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetTxDonePending(void );

static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isResetPending(void );
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setResetPending(void );
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetResetPending(void );

static inline error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Reset__init(void );










static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame);










static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__runTask(void );
#line 107
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 132
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status);
# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static uint32_t IndirectTxP__IndirectTxTimeout__getNow(void );
#line 92
static bool IndirectTxP__IndirectTxTimeout__isRunning(void );
#line 73
static void IndirectTxP__IndirectTxTimeout__startOneShot(uint32_t dt);




static void IndirectTxP__IndirectTxTimeout__stop(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void IndirectTxP__FrameTx__transmitDone(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
uint8_t arg_0x40bc0b48, 
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool IndirectTxP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t IndirectTxP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 93 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macBeaconOrder_t IndirectTxP__MLME_GET__macBeaconOrder(void );
#line 135
static ieee154_macTransactionPersistenceTime_t IndirectTxP__MLME_GET__macTransactionPersistenceTime(void );
# 241 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static uint8_t IndirectTxP__IEEE154Frame__getHeaderLength(message_t *frame);
#line 139
static error_t IndirectTxP__IEEE154Frame__setAddressingFields(message_t *frame, 
uint8_t SrcAddrMode, 
uint8_t DstAddrMode, 
uint16_t DstPANID, 
ieee154_address_t *DstAddr, 
ieee154_security_t *security);
#line 69
static error_t IndirectTxP__IEEE154Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t IndirectTxP__IEEE154Frame__getSrcAddrMode(message_t *frame);
#line 81
static error_t IndirectTxP__IEEE154Frame__getSrcPANId(message_t *frame, uint16_t *PANID);









static uint8_t IndirectTxP__IEEE154Frame__getDstAddrMode(message_t *frame);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t IndirectTxP__tryCoordCapTxTask__postTask(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void IndirectTxP__PendingAddrSpecUpdated__notify(IndirectTxP__PendingAddrSpecUpdated__val_t val);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t IndirectTxP__CoordCapTx__transmit(ieee154_txframe_t *txFrame);
# 76 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
enum IndirectTxP____nesc_unnamed4339 {
#line 76
  IndirectTxP__tryCoordCapTxTask = 8U
};
#line 76
typedef int IndirectTxP____nesc_sillytask_tryCoordCapTxTask[IndirectTxP__tryCoordCapTxTask];
#line 61
enum IndirectTxP____nesc_unnamed4340 {
  IndirectTxP__SEND_THIS_FRAME = 0x80, 
  IndirectTxP__NUM_MAX_PENDING = 7
};

ieee154_txframe_t *IndirectTxP__m_txFrameTable[IndirectTxP__NUM_MAX_PENDING];
ieee154_txframe_t *IndirectTxP__m_pendingTxFrame;
uint8_t IndirectTxP__m_client;
uint8_t IndirectTxP__m_numTableEntries;
uint8_t IndirectTxP__m_numShortPending;
uint8_t IndirectTxP__m_numExtPending;
ieee154_txframe_t IndirectTxP__m_emptyDataFrame;
ieee154_metadata_t IndirectTxP__m_emptyDataFrameMetadata;
ieee154_header_t IndirectTxP__m_emptyDataFrameHeader;


static inline void IndirectTxP__tryCoordCapTx(void );
static inline void IndirectTxP__transmitEmptyDataFrame(message_t *dataRequestFrame);

static inline error_t IndirectTxP__Reset__init(void );
#line 104
static uint32_t IndirectTxP__getPersistenceTimeSymbols(void );
#line 189
static inline ieee154_status_t IndirectTxP__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame);
#line 215
static inline message_t *IndirectTxP__DataRequestRx__received(message_t *frame);
#line 269
static inline void IndirectTxP__transmitEmptyDataFrame(message_t *dataRequestFrame);
#line 296
static inline void IndirectTxP__tryCoordCapTx(void );
#line 317
static inline void IndirectTxP__tryCoordCapTxTask__runTask(void );




static inline void IndirectTxP__IndirectTxTimeout__fired(void );
#line 353
static inline void IndirectTxP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 381
static inline ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__get(void );


static inline void IndirectTxP__PendingAddrSpecUpdated__default__notify(bool val);
static inline void IndirectTxP__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *PollP__DataRx__received(message_t *frame);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
PollP__TxFramePool__t * 


PollP__TxFramePool__get(void );
#line 89
static error_t PollP__TxFramePool__put(
#line 85
PollP__TxFramePool__t * newVal);
# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macPANId_t PollP__MLME_GET__macPANId(void );








static ieee154_macShortAddress_t PollP__MLME_GET__macShortAddress(void );
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static void PollP__DataRequest__pollDone(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
uint8_t arg_0x40c30da8);
# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
static void PollP__MLME_POLL__confirm(
ieee154_status_t status);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
PollP__TxControlPool__t * 


PollP__TxControlPool__get(void );
#line 89
static error_t PollP__TxControlPool__put(
#line 85
PollP__TxControlPool__t * newVal);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static PollP__LocalExtendedAddress__val_t PollP__LocalExtendedAddress__get(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t PollP__PollTx__transmit(ieee154_txframe_t *txFrame);
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t PollP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
enum PollP____nesc_unnamed4341 {
  PollP__HANDLE_MLME_POLL_REQUEST = 0xFF, 
  PollP__HANDLE_MLME_POLL_SUCCESS = 0xFE
};
int PollP__m_numPending;
uint8_t PollP__m_dataRequestCmdID = CMD_FRAME_DATA_REQUEST;
static inline void PollP__assembleDataRequestFrame(uint8_t destAddrMode, uint16_t destPANId, 
uint8_t *DstAddr, uint8_t srcAddrMode, ieee154_txframe_t *txFrame);

static inline error_t PollP__Init__init(void );
#line 122
static inline ieee154_status_t PollP__DataRequest__poll(uint8_t client, uint8_t CoordAddrMode, 
uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t srcAddrMode);
#line 157
static inline void PollP__assembleDataRequestFrame(uint8_t destAddrMode, uint16_t destPANId, 
uint8_t *destAddrPtrLE, uint8_t srcAddrMode, ieee154_txframe_t *txFrame);
#line 191
static inline message_t *PollP__DataExtracted__received(message_t *frame, ieee154_txframe_t *txFrame);
#line 207
static inline void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 223
static inline void PollP__MLME_POLL__default__confirm(ieee154_status_t status);
static inline void PollP__DataRequest__default__pollDone(uint8_t client);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static error_t ScanP__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
# 152 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static void *ScanP__Frame__getPayload(message_t *frame);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t ScanP__continueScanRequestTask__postTask(void );
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static error_t ScanP__TxFramePool__put(
#line 85
ScanP__TxFramePool__t * newVal);
# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macResponseWaitTime_t ScanP__MLME_GET__macResponseWaitTime(void );
#line 81
static ieee154_macAutoRequest_t ScanP__MLME_GET__macAutoRequest(void );
#line 54
static ieee154_phyChannelsSupported_t ScanP__MLME_GET__phyChannelsSupported(void );
#line 108
static ieee154_macDSN_t ScanP__MLME_GET__macDSN(void );
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t ScanP__RadioRx__enableRx(uint32_t t0, uint32_t dt);
# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
static error_t ScanP__BeaconFrame__parsePANDescriptor(message_t *frame, uint8_t LogicalChannel, 
uint8_t ChannelPage, ieee154_PANDescriptor_t *pdescriptor);
#line 132
static uint8_t ScanP__BeaconFrame__getBeaconPayloadLength(message_t *frame);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t ScanP__startTimerTask__postTask(void );
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t ScanP__RadioToken__release(void );







static bool ScanP__RadioToken__isOwner(void );
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void ScanP__ScanTimer__startOneShot(uint32_t dt);




static void ScanP__ScanTimer__stop(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t ScanP__RadioOff__off(void );
#line 60
static bool ScanP__RadioOff__isOff(void );
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static error_t ScanP__TxControlPool__put(
#line 85
ScanP__TxControlPool__t * newVal);
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t ScanP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 54
static ieee154_status_t ScanP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 151
static ieee154_status_t ScanP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);
#line 113
static ieee154_status_t ScanP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);




static ieee154_status_t ScanP__MLME_SET__macDSN(ieee154_macDSN_t value);
# 49 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static error_t ScanP__EnergyDetection__start(uint32_t duration);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_BEACON_NOTIFY.nc"
static message_t *ScanP__MLME_BEACON_NOTIFY__indication(message_t *beaconFrame);
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
static void ScanP__MLME_SCAN__confirm(
ieee154_status_t status, 
uint8_t ScanType, 
uint8_t ChannelPage, 
uint32_t UnscannedChannels, 
uint8_t EnergyDetectNumResults, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumResults, 
ieee154_PANDescriptor_t *PANDescriptorList);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t ScanP__nextIterationTask__postTask(void );
# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static void ScanP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);
# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
enum ScanP____nesc_unnamed4342 {
#line 91
  ScanP__startTimerTask = 9U
};
#line 91
typedef int ScanP____nesc_sillytask_startTimerTask[ScanP__startTimerTask];
enum ScanP____nesc_unnamed4343 {
#line 92
  ScanP__nextIterationTask = 10U
};
#line 92
typedef int ScanP____nesc_sillytask_nextIterationTask[ScanP__nextIterationTask];
#line 191
enum ScanP____nesc_unnamed4344 {
#line 191
  ScanP__continueScanRequestTask = 11U
};
#line 191
typedef int ScanP____nesc_sillytask_continueScanRequestTask[ScanP__continueScanRequestTask];
#line 70
enum ScanP____nesc_unnamed4345 {
  ScanP__MAX_PAYLOAD_SIZE = 1, 
  ScanP__LAST_CHANNEL = 26
};


ieee154_txframe_t *ScanP__m_txFrame = (void *)0;
uint8_t ScanP__m_payload[ScanP__MAX_PAYLOAD_SIZE];
uint8_t ScanP__m_scanType;
uint32_t ScanP__m_scanChannels;
uint8_t ScanP__m_currentChannelNum;
bool ScanP__m_terminateScan;
void *ScanP__m_resultList;
uint8_t ScanP__m_resultListNumEntries;
uint8_t ScanP__m_resultIndex;
ieee154_macPANId_t ScanP__m_PANID;
uint32_t ScanP__m_scanDuration;
bool ScanP__m_busy = FALSE;

static void ScanP__nextIteration(void );
static void ScanP__continueScanRequest(void );



static inline error_t ScanP__Init__init(void );
#line 180
static inline void ScanP__RadioToken__granted(void );










static inline void ScanP__continueScanRequestTask__runTask(void );




static void ScanP__continueScanRequest(void );
#line 240
static void ScanP__nextIteration(void );
#line 320
static inline void ScanP__RadioRx__enableRxDone(void );






static inline void ScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel);
#line 339
static inline void ScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);







static inline message_t *ScanP__RadioRx__received(message_t *frame);
#line 419
static inline void ScanP__startTimerTask__runTask(void );




static inline void ScanP__ScanTimer__fired(void );





static void ScanP__RadioOff__offDone(void );









static inline void ScanP__nextIterationTask__runTask(void );




static inline token_requested_t ScanP__IsRadioTokenRequested__getNow(void );

static inline message_t *ScanP__MLME_BEACON_NOTIFY__default__indication(message_t *beaconFrame);
static inline void ScanP__MLME_SCAN__default__confirm(
ieee154_status_t status, 
uint8_t ScanType, 
uint8_t ChannelPage, 
uint32_t UnscannedChannels, 
uint8_t EnergyDetectListNumEntries, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumEntries, 
ieee154_PANDescriptor_t *PANDescriptorList);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t BeaconRequestRxP__BeaconRequestResponseTx__transmit(ieee154_txframe_t *txFrame);
# 131 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154TxBeaconPayload.nc"
static void BeaconRequestRxP__IEEE154TxBeaconPayload__aboutToTransmit(void );






static void BeaconRequestRxP__IEEE154TxBeaconPayload__beaconTransmitted(void );
# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macAssociationPermit_t BeaconRequestRxP__MLME_GET__macAssociationPermit(void );





static ieee154_macBattLifeExt_t BeaconRequestRxP__MLME_GET__macBattLifeExt(void );
#line 120
static ieee154_macPANId_t BeaconRequestRxP__MLME_GET__macPANId(void );








static ieee154_macShortAddress_t BeaconRequestRxP__MLME_GET__macShortAddress(void );
#line 168
static ieee154_macPanCoordinator_t BeaconRequestRxP__MLME_GET__macPanCoordinator(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t BeaconRequestRxP__sendBeaconTask__postTask(void );
# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static void BeaconRequestRxP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);
# 82 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconRequestRxP.nc"
enum BeaconRequestRxP____nesc_unnamed4346 {
#line 82
  BeaconRequestRxP__sendBeaconTask = 12U
};
#line 82
typedef int BeaconRequestRxP____nesc_sillytask_sendBeaconTask[BeaconRequestRxP__sendBeaconTask];
#line 59
ieee154_txframe_t BeaconRequestRxP__m_beaconFrame;
ieee154_header_t BeaconRequestRxP__m_header;
ieee154_metadata_t BeaconRequestRxP__m_metadata;
uint8_t BeaconRequestRxP__m_beaconPayloadLen;
uint8_t BeaconRequestRxP__m_payload[IEEE154_aMaxBeaconPayloadLength];



static inline error_t BeaconRequestRxP__Reset__init(void );
#line 82
static inline void BeaconRequestRxP__sendBeaconTask__runTask(void );



static inline message_t *BeaconRequestRxP__BeaconRequestRx__received(message_t *frame);
#line 129
static inline void BeaconRequestRxP__BeaconRequestResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 168
static inline void BeaconRequestRxP__IEEE154TxBeaconPayload__default__aboutToTransmit(void );
static inline void BeaconRequestRxP__IEEE154TxBeaconPayload__default__beaconTransmitted(void );
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static error_t AssociateP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t AssociateP__Frame__getSrcAddrMode(message_t *frame);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
AssociateP__TxFramePool__t * 


AssociateP__TxFramePool__get(void );
#line 89
static error_t AssociateP__TxFramePool__put(
#line 85
AssociateP__TxFramePool__t * newVal);
# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macResponseWaitTime_t AssociateP__MLME_GET__macResponseWaitTime(void );
#line 120
static ieee154_macPANId_t AssociateP__MLME_GET__macPANId(void );








static ieee154_macShortAddress_t AssociateP__MLME_GET__macShortAddress(void );
#line 105
static ieee154_macCoordShortAddress_t AssociateP__MLME_GET__macCoordShortAddress(void );
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static ieee154_status_t AssociateP__DataRequest__poll(uint8_t CoordAddrMode, uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t SrcAddrMode);
# 121 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
static void AssociateP__MLME_ASSOCIATE__confirm(
uint16_t AssocShortAddress, 
uint8_t status, 
ieee154_security_t *security);
#line 84
static void AssociateP__MLME_ASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
AssociateP__TxControlPool__t * 


AssociateP__TxControlPool__get(void );
#line 89
static error_t AssociateP__TxControlPool__put(
#line 85
AssociateP__TxControlPool__t * newVal);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_COMM_STATUS.nc"
static void AssociateP__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security);
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t AssociateP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 54
static ieee154_status_t AssociateP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 151
static ieee154_status_t AssociateP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);
#line 113
static ieee154_status_t AssociateP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);
#line 108
static ieee154_status_t AssociateP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static AssociateP__LocalExtendedAddress__val_t AssociateP__LocalExtendedAddress__get(void );
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void AssociateP__ResponseTimeout__startOneShot(uint32_t dt);




static void AssociateP__ResponseTimeout__stop(void );
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t AssociateP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
#line 64
static void AssociateP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE);
#line 58
static void AssociateP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t AssociateP__AssociationRequestTx__transmit(ieee154_txframe_t *txFrame);
# 67 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
enum AssociateP____nesc_unnamed4347 {
  AssociateP__S_IDLE = 0xFF
};
uint8_t AssociateP__m_payloadAssocRequest[2];
uint8_t AssociateP__m_payloadAssocResponse[7][4];
uint8_t AssociateP__m_coordAddrMode;
uint8_t AssociateP__m_assocRespStatus;
uint16_t AssociateP__m_shortAddress;
bool AssociateP__m_associationOngoing;

static inline error_t AssociateP__Init__init(void );
#line 91
static inline ieee154_status_t AssociateP__MLME_ASSOCIATE__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
uint8_t CoordAddrMode, 
uint16_t CoordPANID, 
ieee154_address_t CoordAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);
#line 157
static inline void AssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 173
static inline message_t *AssociateP__AssociationResponseExtracted__received(message_t *frame, ieee154_txframe_t *txFrame);
#line 199
static inline void AssociateP__ResponseTimeout__fired(void );
#line 222
static void AssociateP__DataRequest__pollDone(void );
#line 236
static inline message_t *AssociateP__AssociationRequestRx__received(message_t *frame);
#line 298
static void AssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t DisassociateP__DisassociationToCoord__transmit(ieee154_txframe_t *txFrame);
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static error_t DisassociateP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t DisassociateP__Frame__getSrcAddrMode(message_t *frame);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t DisassociateP__DisassociationDirectTx__transmit(ieee154_txframe_t *txFrame);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
DisassociateP__TxFramePool__t * 


DisassociateP__TxFramePool__get(void );
#line 89
static error_t DisassociateP__TxFramePool__put(
#line 85
DisassociateP__TxFramePool__t * newVal);
# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macPANId_t DisassociateP__MLME_GET__macPANId(void );
#line 105
static ieee154_macCoordShortAddress_t DisassociateP__MLME_GET__macCoordShortAddress(void );
#line 102
static ieee154_macCoordExtendedAddress_t DisassociateP__MLME_GET__macCoordExtendedAddress(void );
# 101 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
static void DisassociateP__MLME_DISASSOCIATE__confirm(
ieee154_status_t status, 
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress);
#line 81
static void DisassociateP__MLME_DISASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
ieee154_security_t *security);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t DisassociateP__DisassociationIndirectTx__transmit(ieee154_txframe_t *txFrame);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
DisassociateP__TxControlPool__t * 


DisassociateP__TxControlPool__get(void );
#line 89
static error_t DisassociateP__TxControlPool__put(
#line 85
DisassociateP__TxControlPool__t * newVal);
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t DisassociateP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 151
static ieee154_status_t DisassociateP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);









static ieee154_status_t DisassociateP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value);
#line 113
static ieee154_status_t DisassociateP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);
#line 108
static ieee154_status_t DisassociateP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static DisassociateP__LocalExtendedAddress__val_t DisassociateP__LocalExtendedAddress__get(void );
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t DisassociateP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
#line 64
static void DisassociateP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
enum DisassociateP____nesc_unnamed4348 {
  DisassociateP__S_IDLE = 0xFF
};
uint8_t DisassociateP__m_payloadDisassocRequest[2];
uint8_t DisassociateP__m_coordAddrMode;
bool DisassociateP__m_disAssociationOngoing;
static void DisassociateP__resetPanValuesInPib(void );

static inline error_t DisassociateP__Init__init(void );









static inline ieee154_status_t DisassociateP__MLME_DISASSOCIATE__request(
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
bool TxIndirect, 
ieee154_security_t *security);
#line 149
static inline void DisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);
#line 172
static inline void DisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);




static void DisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);
#line 200
static inline message_t *DisassociateP__DisassociationDirectRxFromCoord__received(message_t *frame);









static inline message_t *DisassociateP__DisassociationExtractedFromCoord__received(message_t *frame, ieee154_txframe_t *txFrame);





static inline message_t *DisassociateP__DisassociationRxFromDevice__received(message_t *frame);
#line 228
static void DisassociateP__resetPanValuesInPib(void );
# 75 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RX_ENABLE.nc"
static void RxEnableP__MLME_RX_ENABLE__confirm(
ieee154_status_t status);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void RxEnableP__RxEnableStateChange__notify(RxEnableP__RxEnableStateChange__val_t val);
# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void RxEnableP__RxEnableTimer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void RxEnableP__RxEnableTimer__stop(void );
# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
uint32_t RxEnableP__m_rxOnDuration;
uint32_t RxEnableP__m_rxOnOffset;
uint32_t RxEnableP__m_rxOnAnchor;
bool RxEnableP__m_isRxEnabled;
bool RxEnableP__m_confirmPending;

static inline error_t RxEnableP__Reset__init(void );
#line 139
static inline void RxEnableP__RxEnableTimer__fired(void );
#line 159
static inline bool RxEnableP__IsRxEnableActive__getNow(void );




static inline void RxEnableP__WasRxEnabled__notify(bool val);
#line 176
static inline void RxEnableP__MLME_RX_ENABLE__default__confirm(ieee154_status_t status);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PromiscuousModeP__signalStartDoneTask__postTask(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *PromiscuousModeP__FrameRx__received(message_t *frame);
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void PromiscuousModeP__PromiscuousMode__startDone(error_t error);
#line 138
static void PromiscuousModeP__PromiscuousMode__stopDone(error_t error);
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t PromiscuousModeP__RadioToken__release(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t PromiscuousModeP__RadioOff__off(void );
#line 60
static bool PromiscuousModeP__RadioOff__isOff(void );
# 55 "/usr/src/tinyos/tos/interfaces/Set.nc"
static void PromiscuousModeP__RadioPromiscuousMode__set(PromiscuousModeP__RadioPromiscuousMode__val_t val);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PromiscuousModeP__continueStopTask__postTask(void );
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t PromiscuousModeP__PromiscuousRx__enableRx(uint32_t t0, uint32_t dt);
# 96 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
enum PromiscuousModeP____nesc_unnamed4349 {
#line 96
  PromiscuousModeP__signalStartDoneTask = 13U
};
#line 96
typedef int PromiscuousModeP____nesc_sillytask_signalStartDoneTask[PromiscuousModeP__signalStartDoneTask];
#line 129
enum PromiscuousModeP____nesc_unnamed4350 {
#line 129
  PromiscuousModeP__continueStopTask = 14U
};
#line 129
typedef int PromiscuousModeP____nesc_sillytask_continueStopTask[PromiscuousModeP__continueStopTask];
#line 60
#line 55
enum PromiscuousModeP__promiscuous_state {
  PromiscuousModeP__S_STOPPING, 
  PromiscuousModeP__S_STOPPED, 
  PromiscuousModeP__S_STARTING, 
  PromiscuousModeP__S_STARTED
} PromiscuousModeP__m_state;

static inline error_t PromiscuousModeP__Init__init(void );







static inline bool PromiscuousModeP__PromiscuousModeGet__get(void );
#line 87
static inline void PromiscuousModeP__RadioToken__granted(void );








static inline void PromiscuousModeP__signalStartDoneTask__runTask(void );






static inline void PromiscuousModeP__PromiscuousRx__enableRxDone(void );




static inline message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame);
#line 129
static inline void PromiscuousModeP__continueStopTask__runTask(void );








static void PromiscuousModeP__RadioOff__offDone(void );







static inline token_requested_t PromiscuousModeP__IsRadioTokenRequested__getNow(void );
static inline void PromiscuousModeP__PromiscuousMode__default__startDone(error_t error);
static inline void PromiscuousModeP__PromiscuousMode__default__stopDone(error_t error);
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static error_t CoordRealignmentP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t CoordRealignmentP__Frame__getSrcAddrMode(message_t *frame);
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static error_t CoordRealignmentP__TxFramePool__put(
#line 85
CoordRealignmentP__TxFramePool__t * newVal);



static error_t CoordRealignmentP__TxControlPool__put(
#line 85
CoordRealignmentP__TxControlPool__t * newVal);
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ORPHAN.nc"
static void CoordRealignmentP__MLME_ORPHAN__indication(
uint64_t OrphanAddress, 
ieee154_security_t *security);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_COMM_STATUS.nc"
static void CoordRealignmentP__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security);
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static void CoordRealignmentP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordRealignmentP.nc"
enum CoordRealignmentP____nesc_unnamed4351 {
  CoordRealignmentP__ORPHAN_RESPONSE, 
  CoordRealignmentP__BEACON_REALIGNMENT
};


bool CoordRealignmentP__m_busy = FALSE;



static inline error_t CoordRealignmentP__Init__init(void );
#line 93
static inline message_t *CoordRealignmentP__OrphanNotificationRx__received(message_t *frame);
#line 182
static inline void CoordRealignmentP__CoordRealignmentTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 214
static inline void CoordRealignmentP__MLME_ORPHAN__default__indication(
uint64_t OrphanAddress, 
ieee154_security_t *security);
# 60 "/usr/src/tinyos/tos/system/PoolP.nc"
uint8_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free;
uint8_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index;
/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t * /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[4];
/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool[4];

static inline error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void );
#line 88
static /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t */*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free;
uint8_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index;
/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t * /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[3];
/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool[3];

static inline error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void );
#line 88
static /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t */*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/usr/src/tinyos/tos/system/QueueC.nc"
/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t  /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue[4];
uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head = 0;
uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail = 0;
uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size = 0;

static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__maxSize(void );



static inline /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head(void );



static inline void /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__printQueue(void );
#line 85
static /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__enqueue(/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t newVal);
# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static void CC2420TKN154P__CC2420Config__setShortAddr(uint16_t address);
#line 66
static void CC2420TKN154P__CC2420Config__setChannel(uint8_t channel);
#line 89
static void CC2420TKN154P__CC2420Config__setPromiscuousMode(bool on);
#line 78
static void CC2420TKN154P__CC2420Config__setPanAddr(uint16_t address);
#line 96
static void CC2420TKN154P__CC2420Config__setCCAMode(uint8_t mode);
#line 53
static error_t CC2420TKN154P__CC2420Config__sync(void );
#line 65
static uint8_t CC2420TKN154P__CC2420Config__getChannel(void );
#line 84
static void CC2420TKN154P__CC2420Config__setPanCoordinator(bool pcoord);
#line 102
static void CC2420TKN154P__CC2420Config__setTxPower(uint8_t txPower);
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void CC2420TKN154P__SplitControl__startDone(error_t error);
#line 138
static void CC2420TKN154P__SplitControl__stopDone(error_t error);
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void CC2420TKN154P__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 35 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void CC2420TKN154P__ReliableWait__waitRx(uint32_t t0, uint32_t dt);





static bool CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);
#line 37
static void CC2420TKN154P__ReliableWait__waitTx(uint32_t t0, uint32_t dt);

static void CC2420TKN154P__ReliableWait__waitBackoff(uint32_t dt);
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void CC2420TKN154P__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool CC2420TKN154P__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t CC2420TKN154P__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t CC2420TKN154P__LocalTime__get(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void CC2420TKN154P__RadioRx__enableRxDone(void );
#line 84
static message_t *CC2420TKN154P__RadioRx__received(message_t *frame);
# 95 "/usr/src/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t CC2420TKN154P__TxControl__start(void );









static error_t CC2420TKN154P__TxControl__stop(void );
# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
static uint16_t CC2420TKN154P__Random__rand16(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__configSyncTask__postTask(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420TKN154P__SpiResource__release(void );
#line 97
static error_t CC2420TKN154P__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TKN154P__SpiResource__request(void );
#line 128
static bool CC2420TKN154P__SpiResource__isOwner(void );
# 49 "/usr/src/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
static void CC2420TKN154P__Timestamp__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__energyDetectionTask__postTask(void );
# 40 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static error_t CC2420TKN154P__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);


static error_t CC2420TKN154P__CC2420Tx__send(bool cca);



static void CC2420TKN154P__CC2420Tx__lockChipSpi(void );
#line 46
static bool CC2420TKN154P__CC2420Tx__cca(void );

static void CC2420TKN154P__CC2420Tx__unlockChipSpi(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__startDoneTask__postTask(void );
#line 67
static error_t CC2420TKN154P__rxControlStopDoneTask__postTask(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void CC2420TKN154P__RadioOff__offDone(void );
# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static void CC2420TKN154P__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static error_t CC2420TKN154P__CC2420Power__startOscillator(void );
#line 98
static error_t CC2420TKN154P__CC2420Power__rfOff(void );
#line 112
static error_t CC2420TKN154P__CC2420Power__flushRxFifo(void );
#line 91
static error_t CC2420TKN154P__CC2420Power__rxOn(void );
#line 52
static error_t CC2420TKN154P__CC2420Power__startVReg(void );
#line 64
static error_t CC2420TKN154P__CC2420Power__stopVReg(void );
#line 84
static error_t CC2420TKN154P__CC2420Power__stopOscillator(void );
#line 104
static error_t CC2420TKN154P__CC2420Power__rssi(int8_t *rssi);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static void CC2420TKN154P__EnergyDetection__done(error_t status, int8_t EnergyLevel);
# 113 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static error_t CC2420TKN154P__RxControl__start(void );









static error_t CC2420TKN154P__RxControl__stop(void );
# 117 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
enum CC2420TKN154P____nesc_unnamed4352 {
#line 117
  CC2420TKN154P__energyDetectionTask = 15U
};
#line 117
typedef int CC2420TKN154P____nesc_sillytask_energyDetectionTask[CC2420TKN154P__energyDetectionTask];
enum CC2420TKN154P____nesc_unnamed4353 {
#line 118
  CC2420TKN154P__startDoneTask = 16U
};
#line 118
typedef int CC2420TKN154P____nesc_sillytask_startDoneTask[CC2420TKN154P__startDoneTask];
enum CC2420TKN154P____nesc_unnamed4354 {
#line 119
  CC2420TKN154P__rxControlStopDoneTask = 17U
};
#line 119
typedef int CC2420TKN154P____nesc_sillytask_rxControlStopDoneTask[CC2420TKN154P__rxControlStopDoneTask];
enum CC2420TKN154P____nesc_unnamed4355 {
#line 120
  CC2420TKN154P__configSyncTask = 18U
};
#line 120
typedef int CC2420TKN154P____nesc_sillytask_configSyncTask[CC2420TKN154P__configSyncTask];
#line 95
#line 74
typedef enum CC2420TKN154P____nesc_unnamed4356 {
  CC2420TKN154P__S_STOPPED, 
  CC2420TKN154P__S_STOPPING, 
  CC2420TKN154P__S_STARTING, 
  CC2420TKN154P__S_ED, 
  CC2420TKN154P__S_RADIO_OFF, 

  CC2420TKN154P__S_RESERVE_RX_SPI, 
  CC2420TKN154P__S_RX_PENDING, 
  CC2420TKN154P__S_RECEIVING, 
  CC2420TKN154P__S_OFF_PENDING, 

  CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA, 
  CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED, 
  CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED, 
  CC2420TKN154P__S_TX_PENDING, 
  CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED, 
  CC2420TKN154P__S_TX_BACKOFF_SLOTTED, 
  CC2420TKN154P__S_TX_ACTIVE_NO_CSMA, 
  CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA, 
  CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA
} CC2420TKN154P__m_state_t;

CC2420TKN154P__m_state_t CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPED;
ieee154_txframe_t *CC2420TKN154P__m_txframe;
error_t CC2420TKN154P__m_txResult;
bool CC2420TKN154P__m_ackFramePending;
uint16_t CC2420TKN154P__m_remainingBackoff;
bool CC2420TKN154P__m_resume;
ieee154_csma_t *CC2420TKN154P__m_csma;



uint32_t CC2420TKN154P__m_dt;
uint32_t CC2420TKN154P__m_t0;



int8_t CC2420TKN154P__m_maxEnergy;
uint32_t CC2420TKN154P__m_edDuration;
uint32_t CC2420TKN154P__m_edStartTime;








static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dbm);
static inline void CC2420TKN154P__txDoneRxControlStopped(void );
static void CC2420TKN154P__rxSpiReserved(void );
static void CC2420TKN154P__txSpiReserved(void );
static void CC2420TKN154P__sendDoneSpiReserved(void );
static void CC2420TKN154P__offSpiReserved(void );
static inline void CC2420TKN154P__offStopRxDone(void );
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE);
static void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame);
static void CC2420TKN154P__checkEnableRxForACK(void );



static inline error_t CC2420TKN154P__SplitControl__start(void );
#line 149
static inline void CC2420TKN154P__startSpiReserved(void );





static inline void CC2420TKN154P__CC2420Power__startVRegDone(void );




static inline void CC2420TKN154P__CC2420Power__startOscillatorDone(void );







static inline void CC2420TKN154P__startDoneTask__runTask(void );
#line 180
static inline error_t CC2420TKN154P__SplitControl__stop(void );
#line 193
static inline void CC2420TKN154P__stopSpiReserved(void );
#line 210
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE);










static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dBm);
#line 244
static void CC2420TKN154P__PIBUpdate__notify(uint8_t PIBAttribute, const void *PIBAttributeValue);
#line 276
static inline void CC2420TKN154P__configSyncTask__runTask(void );
#line 290
static inline void CC2420TKN154P__RadioPromiscuousMode__set(bool val);






static inline error_t CC2420TKN154P__EnergyDetection__start(uint32_t duration);
#line 312
static inline void CC2420TKN154P__edReserved(void );







static inline void CC2420TKN154P__energyDetectionTask__runTask(void );
#line 342
static inline error_t CC2420TKN154P__RadioOff__off(void );
#line 357
static inline void CC2420TKN154P__offStopRxDone(void );







static void CC2420TKN154P__offSpiReserved(void );










static inline bool CC2420TKN154P__RadioOff__isOff(void );






static inline error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 403
static void CC2420TKN154P__rxSpiReserved(void );
#line 417
static void CC2420TKN154P__ReliableWait__waitRxDone(void );
#line 430
static inline message_t *CC2420TKN154P__CC2420Rx__received(message_t *frame);







static inline bool CC2420TKN154P__RadioRx__isReceiving(void );






static inline error_t CC2420TKN154P__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
#line 464
static inline void CC2420TKN154P__loadDoneRadioTx(void );
#line 476
static void CC2420TKN154P__ReliableWait__waitTxDone(void );
#line 488
static __inline void CC2420TKN154P__txDoneRadioTx(ieee154_txframe_t *frame, error_t result);







static inline error_t CC2420TKN154P__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma);
#line 513
static void CC2420TKN154P__nextIterationUnslottedCsma(void );







static inline void CC2420TKN154P__waitBackoffDoneUnslottedCsma(void );
#line 572
static __inline void CC2420TKN154P__txDoneUnslottedCsma(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 607
static void CC2420TKN154P__nextIterationSlottedCsma(void );
#line 644
static inline void CC2420TKN154P__waitBackoffDoneSlottedCsma(void );
#line 713
static __inline void CC2420TKN154P__txDoneSlottedCsmaCa(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);







static void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame);







static void CC2420TKN154P__txSpiReserved(void );








static inline void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);
#line 752
static void CC2420TKN154P__checkEnableRxForACK(void );
#line 768
static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t result);
#line 782
static inline void CC2420TKN154P__txDoneRxControlStopped(void );








static void CC2420TKN154P__sendDoneSpiReserved(void );
#line 815
static inline void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *frame);
#line 837
static inline void CC2420TKN154P__ReliableWait__waitBackoffDone(void );
#line 849
static inline void CC2420TKN154P__RxControl__stopDone(error_t error);




static inline void CC2420TKN154P__rxControlStopDoneTask__runTask(void );
#line 868
static inline void CC2420TKN154P__SpiResource__granted(void );
#line 887
static inline bool CC2420TKN154P__CCA__getNow(void );









static inline void CC2420TKN154P__SlottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);

static inline void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *msdu, uint8_t token);
# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ControlP__FIFO__get(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SACKPEND__strobe(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCOFF__strobe(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 97
static error_t CC2420ControlP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 128
static bool CC2420ControlP__SpiResource__isOwner(void );
# 77 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 57
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXFIFO_REGISTER__read(uint16_t *data);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SFLUSHRX__strobe(void );
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupAlarm__start(CC2420ControlP__StartupAlarm__size_type dt);
# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static void CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 88 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
#line 82
typedef enum CC2420ControlP____nesc_unnamed4357 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;
uint16_t CC2420ControlP__m_pan;
uint16_t CC2420ControlP__m_short_addr;
bool CC2420ControlP__autoAckEnabled;
bool CC2420ControlP__hwAutoAckDefault;
bool CC2420ControlP__addressRecognition;
bool CC2420ControlP__acceptReservedFrames;
bool CC2420ControlP__m_isPanCoord;
uint8_t CC2420ControlP__m_CCAMode;
uint8_t CC2420ControlP__m_txPower;

bool CC2420ControlP__m_needsSync;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );
static inline void CC2420ControlP__writeTxPower(void );


static inline error_t CC2420ControlP__Init__init(void );
#line 145
static error_t CC2420ControlP__Resource__immediateRequest(void );







static inline error_t CC2420ControlP__Resource__request(void );



static inline bool CC2420ControlP__Resource__isOwner(void );



static error_t CC2420ControlP__Resource__release(void );






static inline void CC2420ControlP__SpiResource__granted(void );





static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 186
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 228
static inline error_t CC2420ControlP__CC2420Power__stopOscillator(void );
#line 242
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 255
static error_t CC2420ControlP__CC2420Power__rfOff(void );
#line 267
static error_t CC2420ControlP__CC2420Power__flushRxFifo(void );
#line 292
static inline uint8_t CC2420ControlP__CC2420Config__getChannel(void );



static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);










static inline void CC2420ControlP__CC2420Config__setShortAddr(uint16_t addr);










static inline void CC2420ControlP__CC2420Config__setPanAddr(uint16_t pan);










static inline void CC2420ControlP__CC2420Config__setPanCoordinator(bool pCoord);






static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on);
#line 352
static inline bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void );









static inline void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode);
#line 375
static inline void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower);
#line 392
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 417
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi);
#line 436
static void CC2420ControlP__StartupAlarm__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 461
static void CC2420ControlP__writeFsctrl(void );
#line 475
static void CC2420ControlP__writeMdmctrl0(void );
#line 498
static void CC2420ControlP__writeId(void );
#line 518
static inline void CC2420ControlP__writeTxPower(void );
# 78 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void );
# 51 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void );
# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void );
# 73 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void );
# 51 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void );
# 73 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void );
# 51 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void );
# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void );
# 78 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void );
#line 73
static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void );
# 51 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void );
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void );
# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void );
#line 48
static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void );




static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void );
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void );
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void );




static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void );
# 68 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void );
# 61 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time);
# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm);

static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void );
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void );
#line 92
static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void );
# 49 "/usr/src/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode);
#line 61
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void );






static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time);
# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void HplMsp430InterruptP__Port14__fired(void );
#line 72
static void HplMsp430InterruptP__Port26__fired(void );
#line 72
static void HplMsp430InterruptP__Port17__fired(void );
#line 72
static void HplMsp430InterruptP__Port21__fired(void );
#line 72
static void HplMsp430InterruptP__Port12__fired(void );
#line 72
static void HplMsp430InterruptP__Port24__fired(void );
#line 72
static void HplMsp430InterruptP__Port15__fired(void );
#line 72
static void HplMsp430InterruptP__Port27__fired(void );
#line 72
static void HplMsp430InterruptP__Port10__fired(void );
#line 72
static void HplMsp430InterruptP__Port22__fired(void );
#line 72
static void HplMsp430InterruptP__Port13__fired(void );
#line 72
static void HplMsp430InterruptP__Port25__fired(void );
#line 72
static void HplMsp430InterruptP__Port16__fired(void );
#line 72
static void HplMsp430InterruptP__Port20__fired(void );
#line 72
static void HplMsp430InterruptP__Port11__fired(void );
#line 72
static void HplMsp430InterruptP__Port23__fired(void );
# 64 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
void sig_PORT1_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0008)))  ;
#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void );
static inline void HplMsp430InterruptP__Port12__default__fired(void );
static inline void HplMsp430InterruptP__Port13__default__fired(void );

static inline void HplMsp430InterruptP__Port15__default__fired(void );
static inline void HplMsp430InterruptP__Port16__default__fired(void );
static inline void HplMsp430InterruptP__Port17__default__fired(void );
static inline void HplMsp430InterruptP__Port10__enable(void );



static inline void HplMsp430InterruptP__Port14__enable(void );



static inline void HplMsp430InterruptP__Port10__disable(void );



static inline void HplMsp430InterruptP__Port14__disable(void );



static inline void HplMsp430InterruptP__Port10__clear(void );
static inline void HplMsp430InterruptP__Port11__clear(void );
static inline void HplMsp430InterruptP__Port12__clear(void );
static inline void HplMsp430InterruptP__Port13__clear(void );
static inline void HplMsp430InterruptP__Port14__clear(void );
static inline void HplMsp430InterruptP__Port15__clear(void );
static inline void HplMsp430InterruptP__Port16__clear(void );
static inline void HplMsp430InterruptP__Port17__clear(void );








static inline void HplMsp430InterruptP__Port10__edge(bool l2h);
#line 142
static inline void HplMsp430InterruptP__Port14__edge(bool l2h);
#line 169
void sig_PORT2_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0002)))  ;
#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void );
static inline void HplMsp430InterruptP__Port21__default__fired(void );
static inline void HplMsp430InterruptP__Port22__default__fired(void );
static inline void HplMsp430InterruptP__Port23__default__fired(void );
static inline void HplMsp430InterruptP__Port24__default__fired(void );
static inline void HplMsp430InterruptP__Port25__default__fired(void );
static inline void HplMsp430InterruptP__Port26__default__fired(void );
static inline void HplMsp430InterruptP__Port27__default__fired(void );
#line 206
static inline void HplMsp430InterruptP__Port20__clear(void );
static inline void HplMsp430InterruptP__Port21__clear(void );
static inline void HplMsp430InterruptP__Port22__clear(void );
static inline void HplMsp430InterruptP__Port23__clear(void );
static inline void HplMsp430InterruptP__Port24__clear(void );
static inline void HplMsp430InterruptP__Port25__clear(void );
static inline void HplMsp430InterruptP__Port26__clear(void );
static inline void HplMsp430InterruptP__Port27__clear(void );
# 52 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void );
# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void );
# 52 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising);








static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void );







static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void );
# 52 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void );
#line 47
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void );
#line 67
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high);
#line 42
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void );
# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void );
# 52 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising);
#line 65
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void );







static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void );
# 70 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c6010, 
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c6010, 
# 71 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/usr/src/tinyos/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/usr/src/tinyos/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x410c8558);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4358 {
#line 88
  CC2420SpiP__grant = 19U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4359 {
  CC2420SpiP__RESOURCE_COUNT = 2U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4360 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static inline cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static inline cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t StateImplP__state[1U];

enum StateImplP____nesc_unnamed4361 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 118
static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static inline bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 82 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(
# 79 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41167d88, 
# 75 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(
# 82 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41164010);
# 180 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void );
#line 197
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void );
#line 97
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset);
#line 177
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void );
#line 224
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data);
#line 168
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 231
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void );
#line 192
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void );
#line 158
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(
# 81 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x411655a0);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(
# 75 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
uint8_t arg_0x41168148);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void );
# 102 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4362 {
#line 102
  Msp430SpiNoDmaP__0__signalDone_task = 20U
};
#line 102
typedef int /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_sillytask_signalDone_task[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task];
#line 91
enum /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0____nesc_unnamed4363 {
  Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE = 2
};

uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf;
uint8_t * /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf;
uint16_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos;
uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client;

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );


static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id);



static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id);



static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id);





static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id);



static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx);
#line 172
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id);
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id);
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id);



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id);

static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void );
#line 205
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len);
#line 227
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void );



static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data);
#line 244
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void );




static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void );

static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error);
# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__UCLK__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__UCLK__selectModuleFunc(void );
# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data);
#line 49
static void HplMsp430Usart0P__Interrupts__txDone(void );
# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__URXD__selectIOFunc(void );
#line 99
static void HplMsp430Usart0P__UTXD__selectIOFunc(void );
# 7 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2C.nc"
static void HplMsp430Usart0P__HplI2C__clearModeI2C(void );
#line 6
static bool HplMsp430Usart0P__HplI2C__isI2C(void );
# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SOMI__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SOMI__selectModuleFunc(void );
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void HplMsp430Usart0P__I2CInterrupts__fired(void );
# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
static void HplMsp430Usart0P__SIMO__selectIOFunc(void );
#line 92
static void HplMsp430Usart0P__SIMO__selectModuleFunc(void );
# 89 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static volatile uint8_t HplMsp430Usart0P__IE1 __asm ("0x0000");
static volatile uint8_t HplMsp430Usart0P__ME1 __asm ("0x0004");
static volatile uint8_t HplMsp430Usart0P__IFG1 __asm ("0x0002");
static volatile uint8_t HplMsp430Usart0P__U0TCTL __asm ("0x0071");

static volatile uint8_t HplMsp430Usart0P__U0TXBUF __asm ("0x0077");

void sig_UART0RX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0012)))  ;




void sig_UART0TX_VECTOR(void ) __attribute((wakeup)) __attribute((interrupt(0x0010)))  ;
#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control);










static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control);







static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset);
#line 207
static inline void HplMsp430Usart0P__Usart__disableUart(void );
#line 238
static inline void HplMsp430Usart0P__Usart__enableSpi(void );








static void HplMsp430Usart0P__Usart__disableSpi(void );








static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config);








static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config);
#line 330
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void );










static inline void HplMsp430Usart0P__Usart__clrRxIntr(void );



static inline void HplMsp430Usart0P__Usart__clrIntr(void );



static inline void HplMsp430Usart0P__Usart__disableRxIntr(void );







static inline void HplMsp430Usart0P__Usart__disableIntr(void );



static inline void HplMsp430Usart0P__Usart__enableRxIntr(void );
#line 382
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data);



static inline uint8_t HplMsp430Usart0P__Usart__rx(void );
# 90 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void );







static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void );
# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4121f200, 
# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
uint8_t data);
#line 49
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4121f200);
# 39 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(
# 40 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
uint8_t arg_0x4121fa80);








static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data);




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void );




static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data);
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id);
# 49 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0____nesc_unnamed4364 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(
# 55 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123e690);
# 61 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(
# 55 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123e690);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(
# 60 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123da58);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(
# 60 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123da58);
# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void );
# 73 "/usr/src/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void );
#line 46
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void );
#line 81
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(
# 54 "/usr/src/tinyos/tos/system/ArbiterP.nc"
uint8_t arg_0x4123fbd0);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void );
# 75 "/usr/src/tinyos/tos/system/ArbiterP.nc"
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4365 {
#line 75
  ArbiterP__0__grantedTask = 21U
};
#line 75
typedef int /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_sillytask_grantedTask[/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask];
#line 67
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4366 {
#line 67
  ArbiterP__0__RES_CONTROLLED, ArbiterP__0__RES_GRANTING, ArbiterP__0__RES_IMM_GRANTING, ArbiterP__0__RES_BUSY
};
#line 68
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4367 {
#line 68
  ArbiterP__0__default_owner_id = 1U
};
#line 69
enum /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0____nesc_unnamed4368 {
#line 69
  ArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;



static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id);
#line 93
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 111
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id);
#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void );
#line 153
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void );
#line 166
static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void );










static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id);
#line 190
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void );
#line 202
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void );

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void );


static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 97 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset);
# 49 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static volatile uint8_t HplMsp430I2C0P__U0CTL __asm ("0x0070");





static inline bool HplMsp430I2C0P__HplI2C__isI2C(void );



static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 31 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );


static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 41 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static void CC2420TransmitP__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);


static void CC2420TransmitP__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error);





static void CC2420TransmitP__CC2420Tx__transmissionStarted(ieee154_txframe_t *data);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 47 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
static uint32_t CC2420TransmitP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime);








static uint16_t CC2420TransmitP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__BackoffAlarm__size_type dt);






static void CC2420TransmitP__BackoffAlarm__stop(void );
# 82 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 94 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
#line 86
typedef enum CC2420TransmitP____nesc_unnamed4369 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_READY_TX, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4370 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320 * 3
};

ieee154_txframe_t *CC2420TransmitP__m_frame;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err);


static inline error_t CC2420TransmitP__Init__init(void );







static error_t CC2420TransmitP__AsyncStdControl__start(void );










static error_t CC2420TransmitP__AsyncStdControl__stop(void );
#line 154
static inline error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);
#line 172
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);
#line 190
static error_t CC2420TransmitP__CC2420Tx__send(bool cca);
#line 245
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 327
static inline bool CC2420TransmitP__CC2420Tx__cca(void );
#line 341
static inline void CC2420TransmitP__CC2420Tx__lockChipSpi(void );




static inline void CC2420TransmitP__CC2420Tx__unlockChipSpi(void );




static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 363
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ackFrame);
#line 375
static inline void CC2420TransmitP__BackoffAlarm__fired(void );
#line 410
static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err);





static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 90 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 45 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
static message_t *CC2420ReceiveP__CC2420Rx__received(message_t *data);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__stopContinueTask__postTask(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 132 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static void CC2420ReceiveP__AsyncSplitControl__stopDone(error_t error);
# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 48 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static error_t CC2420ReceiveP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
# 121 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4371 {
#line 121
  CC2420ReceiveP__stopContinueTask = 22U
};
#line 121
typedef int CC2420ReceiveP____nesc_sillytask_stopContinueTask[CC2420ReceiveP__stopContinueTask];

enum CC2420ReceiveP____nesc_unnamed4372 {
#line 123
  CC2420ReceiveP__receiveDone_task = 23U
};
#line 123
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 73
#line 65
typedef enum CC2420ReceiveP____nesc_unnamed4373 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTING, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_HEADER, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4374 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 

  CC2420ReceiveP__SACK_HEADER_LENGTH = 3
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];
uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;


uint8_t CC2420ReceiveP__m_missed_packets;


bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;





CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;


message_t CC2420ReceiveP__m_frame;
message_t *CC2420ReceiveP__m_rxFramePtr;
uint8_t CC2420ReceiveP__m_mhrLen;

bool CC2420ReceiveP__m_stop;


static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );



static void CC2420ReceiveP__continueStop(void );





static inline error_t CC2420ReceiveP__Init__init(void );
#line 143
static error_t CC2420ReceiveP__AsyncSplitControl__start(void );
#line 172
static error_t CC2420ReceiveP__AsyncSplitControl__stop(void );
#line 189
static void CC2420ReceiveP__continueStop(void );
#line 201
static inline void CC2420ReceiveP__stopContinueTask__runTask(void );
#line 214
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);









static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );








static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 246
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 261
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 391
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 430
static void CC2420ReceiveP__beginReceive(void );
#line 453
static void CC2420ReceiveP__flush(void );
#line 470
static void CC2420ReceiveP__receive(void );
#line 482
static void CC2420ReceiveP__waitForNextPacket(void );
#line 514
static void CC2420ReceiveP__reset_state(void );
# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time);

static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void );
# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void );
#line 47
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void );










static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void );
#line 44
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void );
#line 65
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void );




static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void );










static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void );
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void );
static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void );
# 49 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void );




static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void );









static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void );
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void );
# 67 "/usr/src/tinyos/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform*/TransformCounterC__0____nesc_unnamed4375 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void );
# 77 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0;
/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;

enum /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0____nesc_unnamed4376 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )1 << /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void );




static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void );
#line 147
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);









static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt);




static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired(void );
#line 66
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type dt);






static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop(void );
# 52 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(uint32_t dt);
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void );
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__fired(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41492010);
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8);
# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__start(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8, 
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt);






static void Alarm32khzTo62500hzTransformC__AlarmFrom__stop(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x41490ed8);
#line 55
static inline void Alarm32khzTo62500hzTransformC__Alarm__start(uint8_t num, uint32_t dt);
static inline void Alarm32khzTo62500hzTransformC__Alarm__stop(uint8_t num);
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(uint8_t num);

static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getAlarm(uint8_t num);

static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getNow(uint8_t num);





static void Alarm32khzTo62500hzTransformC__Alarm__startAt(uint8_t num, uint32_t t0, uint32_t dt);
#line 84
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(uint8_t num, uint32_t dt);
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(uint8_t num);

static inline void Alarm32khzTo62500hzTransformC__Alarm__default__fired(uint8_t num);

static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(uint8_t num);
static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(uint8_t num);
# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time);

static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void );
# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void );
#line 47
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void );










static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void );
#line 44
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void );
#line 65
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void );




static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void );










static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void );
# 77 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0;
/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;

enum /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1____nesc_unnamed4377 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type ) - 1 - 0, 
  TransformAlarmC__1__MAX_DELAY = (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )1 << /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void );
#line 102
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void );




static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void );
#line 147
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt);
#line 162
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x41470820);
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void );
#line 103
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void );
# 54 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
enum /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4378 {
  VirtualizeAlarmC__0__NUM_ALARMS = 3U
};




#line 58
typedef struct /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4379 {
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0;
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt;
} /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t;
#line 80
#line 76
struct /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4380 {
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t alarm[/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool isset[/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool is_signaling;
} /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m;

static inline error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );




static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void );
#line 139
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void );
#line 162
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
#line 183
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);








static inline /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(uint8_t id);



static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(uint8_t id);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id);
# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time);

static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta);
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
static uint16_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void );
# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void );
#line 47
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare(void );










static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void );
#line 44
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void );
# 53 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Init__init(void );
#line 70
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void );










static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt);
#line 114
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__fired(void );
#line 103
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt);
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__get(void );
# 77 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0;
/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt;

enum /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2____nesc_unnamed4381 {

  TransformAlarmC__2__MAX_DELAY_LOG2 = 8 * sizeof(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type ) - 1 - 0, 
  TransformAlarmC__2__MAX_DELAY = (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type )1 << /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY_LOG2
};

static inline /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow(void );
#line 107
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__set_alarm(void );
#line 147
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type dt);









static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type dt);




static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void );
#line 177
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired(void );
#line 109
static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow(void );
#line 66
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type dt);
# 52 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(uint32_t dt);

static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void );



static inline uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void );





static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(uint32_t t0, uint32_t dt);
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static LocalTime62500hzP__Alarm__size_type LocalTime62500hzP__Alarm__getNow(void );
# 9 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline uint32_t LocalTime62500hzP__LocalTime__get(void );



static inline void LocalTime62500hzP__Alarm__fired(void );
# 36 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void TKN154TimingP__ReliableWait__waitRxDone(void );



static void TKN154TimingP__ReliableWait__waitBackoffDone(void );
#line 38
static void TKN154TimingP__ReliableWait__waitTxDone(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static TKN154TimingP__CCA__data_type TKN154TimingP__CCA__getNow(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static TKN154TimingP__SymbolAlarm__size_type TKN154TimingP__SymbolAlarm__getNow(void );
#line 103
static void TKN154TimingP__SymbolAlarm__startAt(TKN154TimingP__SymbolAlarm__size_type t0, TKN154TimingP__SymbolAlarm__size_type dt);
#line 66
static void TKN154TimingP__SymbolAlarm__start(TKN154TimingP__SymbolAlarm__size_type dt);
# 58 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
enum TKN154TimingP____nesc_unnamed4382 {
  TKN154TimingP__S_WAIT_OFF, 
  TKN154TimingP__S_WAIT_RX, 
  TKN154TimingP__S_WAIT_TX, 
  TKN154TimingP__S_WAIT_BACKOFF
};
uint8_t TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;


static inline uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t captured_time);










static inline uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);





static inline bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);





static inline void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt);









static inline void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt);









static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt);









static inline void TKN154TimingP__SymbolAlarm__fired(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4383 {
#line 74
  AlarmToTimerC__0__fired = 24U
};
#line 74
typedef int /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x41527d88);
#line 71
enum /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4384 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 25U
};
#line 71
typedef int /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4385 {

  VirtualizeTimerC__0__NUM_TIMERS = 6U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4386 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 184
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt);




static inline uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 52 "/usr/src/tinyos/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_phyCurrentPage_t TestDeviceC__MLME_GET__phyCurrentPage(void );
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
static ieee154_status_t TestDeviceC__MLME_DISASSOCIATE__request(
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
bool TxIndirect, 
ieee154_security_t *security);
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void TestDeviceC__DisassociateTimer__startOneShot(uint32_t dt);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
static ieee154_status_t TestDeviceC__MLME_ASSOCIATE__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
uint8_t CoordAddrMode, 
uint16_t CoordPANID, 
ieee154_address_t CoordAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);
# 72 "/usr/src/tinyos/tos/interfaces/Leds.nc"
static void TestDeviceC__Leds__led1On(void );




static void TestDeviceC__Leds__led1Off(void );
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t TestDeviceC__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 54
static ieee154_status_t TestDeviceC__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 80
static ieee154_status_t TestDeviceC__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value);
#line 113
static ieee154_status_t TestDeviceC__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static ieee154_status_t TestDeviceC__MLME_RESET__request(
bool SetDefaultPIB);
# 52 "TestDeviceC.nc"
ieee154_CapabilityInformation_t TestDeviceC__m_capabilityInformation;
static void TestDeviceC__startApp(void );

static inline void TestDeviceC__Boot__booted(void );










static inline void TestDeviceC__MLME_RESET__confirm(ieee154_status_t status);





static void TestDeviceC__startApp(void );
#line 92
static void TestDeviceC__MLME_ASSOCIATE__confirm(
uint16_t AssocShortAddress, 
uint8_t status, 
ieee154_security_t *security);
#line 107
static inline void TestDeviceC__DisassociateTimer__fired(void );
#line 122
static void TestDeviceC__MLME_DISASSOCIATE__confirm(
ieee154_status_t status, 
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress);









static inline void TestDeviceC__MLME_ASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);


static inline void TestDeviceC__MLME_DISASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
ieee154_security_t *security);



static inline void TestDeviceC__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security);
# 397 "/usr/src/tinyos/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_enable_interrupt(void )
{
  __eint();
}

# 196 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow(void )
{
}

# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow(void ){
#line 48
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Timer__overflow();
#line 48
}
#line 48
# 137 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Timer__overflow();
}





static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(uint8_t n)
{
}

# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(uint8_t arg_0x406534b0){
#line 39
  switch (arg_0x406534b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__default__fired(arg_0x406534b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 126 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(0);
}

# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX0__fired();
#line 39
}
#line 39
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0____nesc_unnamed4387 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__cc_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__int2CC(* (volatile uint16_t * )354U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent(void )
{
  return * (volatile uint16_t * )370U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired(void )
{
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__default__fired();
#line 45
}
#line 45
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1____nesc_unnamed4388 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__cc_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__int2CC(* (volatile uint16_t * )356U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent(void )
{
  return * (volatile uint16_t * )372U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired(void )
{
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__default__fired();
#line 45
}
#line 45
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2____nesc_unnamed4389 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__cc_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__int2CC(* (volatile uint16_t * )358U);
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__default__captured(time);
#line 86
}
#line 86
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent(void )
{
  return * (volatile uint16_t * )374U;
}

#line 192
static inline void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired(void )
{
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__default__fired();
#line 45
}
#line 45
# 131 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )302U;

#line 134
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__Event__fired(n >> 1);
}

# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerA1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerA*/Msp430TimerP__0__VectorTimerX1__fired();
#line 39
}
#line 39
# 126 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(0);
}

# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB0__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX0__fired();
#line 39
}
#line 39
# 196 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow(void )
{
}

#line 196
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow(void )
{
}

# 114 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow(void )
{
}

#line 114
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow(void )
{
}

# 177 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow(void )
{
}

#line 177
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow(void )
{
}

#line 177
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__overflow(void )
{
}

# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__overflow();
#line 82
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__overflow();
#line 82
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/usr/src/tinyos/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow(void )
{
  /* atomic removed: atomic calls only */
  {
    /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper++;
    if ((/*Counter32khz32C.Transform*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
      /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__overflow();
      }
  }
}

# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow(void ){
#line 82
  /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 64 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline void /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow(void )
{
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__overflow();
}

# 48 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow(void ){
#line 48
  /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__overflow();
#line 48
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__overflow();
#line 48
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__overflow();
#line 48
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Timer__overflow();
#line 48
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Timer__overflow();
#line 48
}
#line 48
# 137 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired(void )
{
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__overflow();
}

# 102 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 44 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error){
#line 44
  CC2420TKN154P__CC2420Tx__sendDone(frame, ackPendingFlag, error);
#line 44
}
#line 44
# 410 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err)
#line 410
{
  /* atomic removed: atomic calls only */
#line 411
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__CC2420Tx__sendDone(CC2420TransmitP__m_frame, ackFramePending, err);
  CC2420TransmitP__ChipSpiResource__attemptRelease();
}

# 56 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )29U |= 0x01 << 2;
}

# 48 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__set();
#line 48
}
#line 48
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__set();
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr(void )
#line 57
{
  /* atomic removed: atomic calls only */
#line 57
  * (volatile uint8_t * )29U &= ~(0x01 << 2);
}

# 53 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__clr();
#line 53
}
#line 53
# 49 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__clr();
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 375 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffAlarm__fired(void )
#line 375
{
  /* atomic removed: atomic calls only */
#line 376
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          case CC2420TransmitP__S_EFD: 


            {
              CC2420TransmitP__CSN__set();
              CC2420TransmitP__CSN__clr();
              CC2420TransmitP__SFLUSHTX__strobe();
              CC2420TransmitP__CSN__set();
            }
        CC2420TransmitP__signalDone(FALSE, ERETRY);
        break;

        case CC2420TransmitP__S_ACK_WAIT: 







          CC2420TransmitP__signalDone(FALSE, ENOACK);
        break;


        default: 
          break;
      }
  }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffAlarm__fired();
#line 78
}
#line 78
# 54 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void )
#line 54
{
#line 54
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired();
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt == 0) 
      {
        /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__fired();
      }
    else 
      {
        /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
      }
  }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired(void ){
#line 78
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents(void )
{
  * (volatile uint16_t * )386U &= ~0x0010;
}

# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__disableEvents();
#line 58
}
#line 58
# 70 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__fired();
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired(void ){
#line 45
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent(void )
{
  return * (volatile uint16_t * )402U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4390 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__int2CC(* (volatile uint16_t * )386U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__captured(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__fired();
    }
}

# 382 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__tx(uint8_t data)
#line 382
{
  HplMsp430Usart0P__U0TXBUF = data;
}

# 224 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(uint8_t data){
#line 224
  HplMsp430Usart0P__Usart__tx(data);
#line 224
}
#line 224
# 330 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline bool HplMsp430Usart0P__Usart__isRxIntrPending(void )
#line 330
{
  if (HplMsp430Usart0P__IFG1 & 0x40) {
      return TRUE;
    }
  return FALSE;
}

# 192 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending(void ){
#line 192
  unsigned char __nesc_result;
#line 192

#line 192
  __nesc_result = HplMsp430Usart0P__Usart__isRxIntrPending();
#line 192

#line 192
  return __nesc_result;
#line 192
}
#line 192
# 341 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__clrRxIntr(void )
#line 341
{
  HplMsp430Usart0P__IFG1 &= ~0x40;
}

# 197 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr(void ){
#line 197
  HplMsp430Usart0P__Usart__clrRxIntr();
#line 197
}
#line 197
# 386 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline uint8_t HplMsp430Usart0P__Usart__rx(void )
#line 386
{
  return U0RXBUF;
}

# 231 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx(void ){
#line 231
  unsigned char __nesc_result;
#line 231

#line 231
  __nesc_result = HplMsp430Usart0P__Usart__rx();
#line 231

#line 231
  return __nesc_result;
#line 231
}
#line 231
# 102 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__clear(void )
#line 102
{
#line 102
  P1IFG &= ~(1 << 0);
}

# 52 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port10__clear();
#line 52
}
#line 52
# 94 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__disable(void )
#line 94
{
#line 94
  P1IE &= ~(1 << 0);
}

# 47 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port10__disable();
#line 47
}
#line 47
# 69 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  }
  return SUCCESS;
}

# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__stopContinueTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__stopContinueTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 3);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__getRaw() != 0;
}

# 73 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P13*/HplMsp430GeneralIOP__3__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__HplGeneralIO__get();
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ControlP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXFIFO_REGISTER__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RXFIFO, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 67 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )31U &= ~(0x01 << 1);
}

# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectIOFunc();
#line 99
}
#line 99
# 135 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents(void )
{
  * (volatile uint16_t * )388U &= ~0x0010;
}

# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__disableEvents();
#line 58
}
#line 58
# 69 "/usr/src/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectIOFunc();
  }
}

# 66 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 118 "/usr/src/tinyos/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  StateImplP__state[id] = StateImplP__S_IDLE;
}

# 56 "/usr/src/tinyos/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 95 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 351 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 351
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 208 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted(void )
#line 208
{
}

# 46 "/usr/src/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted(void ){
#line 46
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__granted();
#line 46
}
#line 46
# 151 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__resetUsart(bool reset)
#line 151
{
  if (reset) {
      U0CTL = 0x01;
    }
  else {
      U0CTL &= ~0x01;
    }
}

# 97 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
#line 158
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi(void ){
#line 158
  HplMsp430Usart0P__Usart__disableSpi();
#line 158
}
#line 158
# 124 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(uint8_t id)
#line 124
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(TRUE);
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableSpi();
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__resetUsart(FALSE);
}

# 218 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 218
{
}

# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x4123da58){
#line 65
  switch (arg_0x4123da58) {
#line 65
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 65
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__unconfigure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 65
      break;
#line 65
    default:
#line 65
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x4123da58);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 111 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(uint8_t id)
#line 111
{
  /* atomic removed: atomic calls only */
#line 112
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__dequeue();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
          }
        else {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__unconfigure(id);
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__granted();
          }
        {
          unsigned char __nesc_temp = 
#line 127
          SUCCESS;

#line 127
          return __nesc_temp;
        }
      }
  }
#line 130
  return FAIL;
}

# 175 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(uint8_t id)
#line 175
{
#line 175
  return FAIL;
}

# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(uint8_t arg_0x411655a0){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  switch (arg_0x411655a0) {
#line 120
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 120
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 120
      break;
#line 120
    default:
#line 120
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__release(arg_0x411655a0);
#line 120
      break;
#line 120
    }
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 116 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(uint8_t id)
#line 116
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__release(id);
}

# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__release(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 67 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 1);
}

# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 2);
}

# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 3);
}

# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectIOFunc();
#line 99
}
#line 99
# 98 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t RadioControlImplP__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t ScanP__RadioRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(0, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 339 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result)
{
  error_t e = ScanP__RadioRx__enableRx(0, 0);

#line 342
  while (!(e == SUCCESS)) {
#line 342
      break;
    }
#line 342
  ;
}

# 132 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacTx__default__transmitDone(uint8_t client, ieee154_txframe_t *frame, error_t result)
{
  while (!0) {
#line 134
      break;
    }
#line 134
  ;
}

# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static void RadioControlImplP__MacTx__transmitDone(uint8_t arg_0x40ae21e0, ieee154_txframe_t *frame, error_t result){
#line 83
  switch (arg_0x40ae21e0) {
#line 83
    case 0:
#line 83
      ScanP__RadioTx__transmitDone(frame, result);
#line 83
      break;
#line 83
    default:
#line 83
      RadioControlImplP__MacTx__default__transmitDone(arg_0x40ae21e0, frame, result);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 127 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result)
{
  RadioControlImplP__MacTx__transmitDone(RadioControlImplP__ArbiterInfo__userId(), frame, result);
}

# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static void CC2420TKN154P__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result){
#line 83
  RadioControlImplP__PhyTx__transmitDone(frame, result);
#line 83
}
#line 83
# 488 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneRadioTx(ieee154_txframe_t *frame, error_t result)
{

  CC2420TKN154P__RadioTx__transmitDone(frame, result);
}

# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 153 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 153
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420TKN154P__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88









inline static error_t CC2420TKN154P__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420ControlP__Resource__immediateRequest();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 113 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static error_t CC2420TKN154P__RxControl__start(void ){
#line 113
  unsigned char __nesc_result;
#line 113

#line 113
  __nesc_result = CC2420ReceiveP__AsyncSplitControl__start();
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
# 383 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt)
{
  error_t result;

#line 386
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 386
    {
      if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 388
          FAIL;

          {
#line 388
            __nesc_atomic_end(__nesc_atomic); 
#line 388
            return __nesc_temp;
          }
        }
#line 389
      CC2420TKN154P__m_state = CC2420TKN154P__S_RESERVE_RX_SPI;
    }
#line 390
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__m_t0 = t0;
  CC2420TKN154P__m_dt = dt;
  result = CC2420TKN154P__RxControl__start();
  while (!(result == SUCCESS)) {
#line 394
      break;
    }
#line 394
  ;
  if (result == SUCCESS) {
    if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
      CC2420TKN154P__rxSpiReserved();
      }
    else {
#line 399
      CC2420TKN154P__SpiResource__request();
      }
    }
#line 400
  return result;
}

# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t RadioControlImplP__PhyRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CC2420TKN154P__RadioRx__enableRx(t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 86 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__enable(void )
#line 86
{
#line 86
  P1IE |= 1 << 0;
}

# 42 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port10__enable();
#line 42
}
#line 42
# 118 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port10__edge(bool l2h)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  {
    if (l2h) {
#line 120
      P1IES &= ~(1 << 0);
      }
    else {
#line 121
      P1IES |= 1 << 0;
      }
  }
}

# 67 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port10__edge(low_to_high);
#line 67
}
#line 67
# 52 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__enable(FALSE);
}

# 54 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "/usr/src/tinyos/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 172 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(uint8_t id)
#line 172
{
#line 172
  return FALSE;
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(uint8_t arg_0x411655a0){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  switch (arg_0x411655a0) {
#line 128
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 128
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 128
      break;
#line 128
    default:
#line 128
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__isOwner(arg_0x411655a0);
#line 128
      break;
#line 128
    }
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 112 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline bool /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(uint8_t id)
#line 112
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__isOwner(id);
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__isOwner(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 176 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(uint8_t id)
#line 176
{
  return &msp430_spi_default_config;
}

# 39 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiConfigure.nc"
inline static msp430_spi_union_config_t */*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(uint8_t arg_0x41164010){
#line 39
  union __nesc_unnamed4300 *__nesc_result;
#line 39

#line 39
    __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__default__getConfig(arg_0x41164010);
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 168 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(msp430_spi_union_config_t *config){
#line 168
  HplMsp430Usart0P__Usart__setModeSpi(config);
#line 168
}
#line 168
# 120 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(uint8_t id)
#line 120
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__setModeSpi(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Msp430SpiConfigure__getConfig(id));
}

# 216 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 216
{
}

# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x4123da58){
#line 59
  switch (arg_0x4123da58) {
#line 59
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 59
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__ResourceConfigure__configure(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 59
      break;
#line 59
    default:
#line 59
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__default__configure(arg_0x4123da58);
#line 59
      break;
#line 59
    }
#line 59
}
#line 59
# 213 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested(void )
#line 213
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 81 "/usr/src/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested(void ){
#line 81
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__immediateRequested();
#line 81
}
#line 81
# 206 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 206
{
}

# 61 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x4123e690){
#line 61
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x4123e690);
#line 61
}
#line 61
# 93 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 93
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__immediateRequested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 95
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
        unsigned char __nesc_temp = 
#line 100
        FAIL;

#line 100
        return __nesc_temp;
      }
  }
#line 102
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__immediateRequested();
  if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id) {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
      return SUCCESS;
    }
  /* atomic removed: atomic calls only */
#line 107
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED;
  return FAIL;
}

# 174 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(uint8_t id)
#line 174
{
#line 174
  return FAIL;
}

# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(uint8_t arg_0x411655a0){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  switch (arg_0x411655a0) {
#line 97
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 97
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 97
      break;
#line 97
    default:
#line 97
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__immediateRequest(arg_0x411655a0);
#line 97
      break;
#line 97
    }
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 104 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(uint8_t id)
#line 104
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__immediateRequest(id);
}

# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__immediateRequest(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 97 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void HplMsp430I2C0P__HplUsart__resetUsart(bool reset){
#line 97
  HplMsp430Usart0P__Usart__resetUsart(reset);
#line 97
}
#line 97
# 59 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline void HplMsp430I2C0P__HplI2C__clearModeI2C(void )
#line 59
{
  /* atomic removed: atomic calls only */
#line 60
  {
    HplMsp430I2C0P__U0CTL &= ~((0x20 | 0x04) | 0x01);
    HplMsp430I2C0P__HplUsart__resetUsart(TRUE);
  }
}

# 7 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static void HplMsp430Usart0P__HplI2C__clearModeI2C(void ){
#line 7
  HplMsp430I2C0P__HplI2C__clearModeI2C();
#line 7
}
#line 7
# 67 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 5);
}

# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__URXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P35*/HplMsp430GeneralIOP__21__IO__selectIOFunc();
#line 99
}
#line 99
# 67 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc(void )
#line 67
{
  /* atomic removed: atomic calls only */
#line 67
  * (volatile uint8_t * )27U &= ~(0x01 << 4);
}

# 99 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UTXD__selectIOFunc(void ){
#line 99
  /*HplMsp430GeneralIOC.P34*/HplMsp430GeneralIOP__20__IO__selectIOFunc();
#line 99
}
#line 99
# 207 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableUart(void )
#line 207
{
  /* atomic removed: atomic calls only */
#line 208
  {
    HplMsp430Usart0P__ME1 &= ~(0x80 | 0x40);
    HplMsp430Usart0P__UTXD__selectIOFunc();
    HplMsp430Usart0P__URXD__selectIOFunc();
  }
}

#line 143
static inline void HplMsp430Usart0P__Usart__setUmctl(uint8_t control)
#line 143
{
  U0MCTL = control;
}

#line 132
static inline void HplMsp430Usart0P__Usart__setUbr(uint16_t control)
#line 132
{
  /* atomic removed: atomic calls only */
#line 133
  {
    U0BR0 = control & 0x00FF;
    U0BR1 = (control >> 8) & 0x00FF;
  }
}

#line 256
static inline void HplMsp430Usart0P__configSpi(msp430_spi_union_config_t *config)
#line 256
{

  U0CTL = (config->spiRegisters.uctl | 0x04) | 0x01;
  HplMsp430Usart0P__U0TCTL = config->spiRegisters.utctl;

  HplMsp430Usart0P__Usart__setUbr(config->spiRegisters.ubr);
  HplMsp430Usart0P__Usart__setUmctl(0x00);
}

# 65 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 3;
}

# 92 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__UCLK__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P33*/HplMsp430GeneralIOP__19__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 2;
}

# 92 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SOMI__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P32*/HplMsp430GeneralIOP__18__IO__selectModuleFunc();
#line 92
}
#line 92
# 65 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )27U |= 0x01 << 1;
}

# 92 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void HplMsp430Usart0P__SIMO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P31*/HplMsp430GeneralIOP__17__IO__selectModuleFunc();
#line 92
}
#line 92
# 238 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableSpi(void )
#line 238
{
  /* atomic removed: atomic calls only */
#line 239
  {
    HplMsp430Usart0P__SIMO__selectModuleFunc();
    HplMsp430Usart0P__SOMI__selectModuleFunc();
    HplMsp430Usart0P__UCLK__selectModuleFunc();
  }
  HplMsp430Usart0P__ME1 |= 0x40;
}

#line 345
static inline void HplMsp430Usart0P__Usart__clrIntr(void )
#line 345
{
  HplMsp430Usart0P__IFG1 &= ~(0x80 | 0x40);
}









static inline void HplMsp430Usart0P__Usart__disableIntr(void )
#line 357
{
  HplMsp430Usart0P__IE1 &= ~(0x80 | 0x40);
}

# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 518 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__writeTxPower(void )
#line 518
{
  CC2420ControlP__TXCTRL__write((((
  2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
  3 << CC2420_TXCTRL_PA_CURRENT)) | (
  1 << CC2420_TXCTRL_RESERVED)) | ((
  CC2420ControlP__m_txPower & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
}

# 1039 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE)
{
  PibP__FrameUtility__convertToLE(destLE, &PibP__m_aExtendedAddressLE);
}

# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE){
#line 55
  PibP__FrameUtility__copyLocalExtendedAddressLE(destLE);
#line 55
}
#line 55
# 45 "/usr/src/tinyos/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 133 "/usr/src/tinyos/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

  /* atomic removed: atomic calls only */
#line 135
  isState = StateImplP__state[id] == myState;
  return isState;
}

#line 126
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/usr/src/tinyos/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 260 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  /* atomic removed: atomic calls only */
#line 268
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 270
          status;

#line 270
          return __nesc_temp;
        }
      }
  }
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 95 "/usr/src/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t CC2420TKN154P__TxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 65 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc(void )
#line 65
{
  /* atomic removed: atomic calls only */
#line 65
  * (volatile uint8_t * )31U |= 0x01 << 1;
}

# 92 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc(void ){
#line 92
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__selectModuleFunc();
#line 92
}
#line 92
# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4391 {
#line 57
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

#line 72
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(uint8_t l_cm)
{
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t x = { 
  .cm = l_cm & 0x03, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 1, 
  .scs = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__CC2int(x);
}

#line 110
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(uint8_t cm)
{
  * (volatile uint16_t * )388U = /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__captureControl(cm);
}

# 55 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(uint8_t cm){
#line 55
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__setControlAsCapture(cm);
#line 55
}
#line 55
# 130 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents(void )
{
  * (volatile uint16_t * )388U |= 0x0010;
}

# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__enableEvents();
#line 57
}
#line 57
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 192 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(uint8_t id)
#line 192
{
  return /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow();
}

# 89 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(uint8_t num)
#line 89
{
#line 89
  return 0;
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(uint8_t arg_0x41490ed8){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  switch (arg_0x41490ed8) {
#line 109
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 109
      break;
#line 109
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 109
      break;
#line 109
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 109
      break;
#line 109
    default:
#line 109
      __nesc_result = Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(arg_0x41490ed8);
#line 109
      break;
#line 109
    }
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 61 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getNow(uint8_t num)
#line 61
{


  return Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(num) << 1;
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static LocalTime62500hzP__Alarm__size_type LocalTime62500hzP__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getNow(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 9 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline uint32_t LocalTime62500hzP__LocalTime__get(void )
{
  return LocalTime62500hzP__Alarm__getNow();
}

# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
inline static uint32_t PibP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = LocalTime62500hzP__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 49 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline uint16_t /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__get();
}

# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned int __nesc_result;
#line 64

#line 64
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 81 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline bool /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending(void )
{
  return * (volatile uint16_t * )384U & 1U;
}

# 46 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__isOverflowPending();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 54 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430CounterC.nc"
static inline bool /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending(void )
{
  return /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Msp430Timer__isOverflowPending();
}

# 71 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*Msp430Counter32khzC.Counter*/Msp430CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420ControlP__SACKPEND__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACKPEND);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 341 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Tx__lockChipSpi(void )
{
  CC2420TransmitP__abortSpiRelease = TRUE;
}

# 47 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TKN154P__CC2420Tx__lockChipSpi(void ){
#line 47
  CC2420TransmitP__CC2420Tx__lockChipSpi();
#line 47
}
#line 47
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t ScanP__startTimerTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ScanP__startTimerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 320 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__RadioRx__enableRxDone(void )
{
  ScanP__startTimerTask__postTask();
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t DispatchUnslottedCsmaP__startIndirectTxTimerTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DispatchUnslottedCsmaP__startIndirectTxTimerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 371 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RadioRx__enableRxDone(void )
{
  if (DispatchUnslottedCsmaP__m_indirectTxPending) {
    DispatchUnslottedCsmaP__startIndirectTxTimerTask__postTask();
    }
#line 375
  DispatchUnslottedCsmaP__m_lock = FALSE;
  DispatchUnslottedCsmaP__updateState();
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PromiscuousModeP__signalStartDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PromiscuousModeP__signalStartDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__PromiscuousRx__enableRxDone(void )
{
  PromiscuousModeP__signalStartDoneTask__postTask();
}

# 107 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacRx__default__enableRxDone(uint8_t client)
#line 107
{
#line 107
  while (!0) {
#line 107
      break;
    }
#line 107
  ;
}

# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static void RadioControlImplP__MacRx__enableRxDone(uint8_t arg_0x40ae7848){
#line 65
  switch (arg_0x40ae7848) {
#line 65
    case 0:
#line 65
      ScanP__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    case 2:
#line 65
      PromiscuousModeP__PromiscuousRx__enableRxDone();
#line 65
      break;
#line 65
    case 12U:
#line 65
      DispatchUnslottedCsmaP__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    default:
#line 65
      RadioControlImplP__MacRx__default__enableRxDone(arg_0x40ae7848);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyRx__enableRxDone(void )
{
  RadioControlImplP__MacRx__enableRxDone(RadioControlImplP__ArbiterInfo__userId());
}

# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static void CC2420TKN154P__RadioRx__enableRxDone(void ){
#line 65
  RadioControlImplP__PhyRx__enableRxDone();
#line 65
}
#line 65
# 438 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__RadioRx__isReceiving(void )
{
  return CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING;
}

# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static bool RadioControlImplP__PhyRx__isReceiving(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = CC2420TKN154P__RadioRx__isReceiving();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 97 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline bool RadioControlImplP__MacRx__isReceiving(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRx__isReceiving();
    }
  else 
#line 101
    {
      while (!0) {
#line 102
          break;
        }
#line 102
      ;
      return FAIL;
    }
}

# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static bool DispatchUnslottedCsmaP__RadioRx__isReceiving(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = RadioControlImplP__MacRx__isReceiving(12U);
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 376 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__RadioOff__isOff(void )
{
  return CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF;
}

# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool RadioControlImplP__PhyRadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = CC2420TKN154P__RadioOff__isOff();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t DispatchUnslottedCsmaP__RadioRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(12U, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 314 "/usr/src/tinyos/tos/lib/mac/tkn154/TKN154_MAC.h"
static inline token_requested_t rcombine(token_requested_t r1, token_requested_t r2)
{
  return r1 || r2;
}

# 445 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline token_requested_t ScanP__IsRadioTokenRequested__getNow(void )
#line 445
{
#line 445
  return ScanP__m_busy;
}

# 146 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline token_requested_t PromiscuousModeP__IsRadioTokenRequested__getNow(void )
#line 146
{
#line 146
  return PromiscuousModeP__m_state == PromiscuousModeP__S_STARTING;
}

# 232 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline token_requested_t PibP__IsRadioTokenRequested__getNow(void )
#line 232
{
#line 232
  return PibP__m_resetSpin != 0;
}

# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
inline static DispatchUnslottedCsmaP__IsRadioTokenRequested__data_type DispatchUnslottedCsmaP__IsRadioTokenRequested__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PibP__IsRadioTokenRequested__getNow();
#line 51
  __nesc_result = rcombine(__nesc_result, PromiscuousModeP__IsRadioTokenRequested__getNow());
#line 51
  __nesc_result = rcombine(__nesc_result, ScanP__IsRadioTokenRequested__getNow());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 530 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RadioTokenRequested__requested(void )
#line 530
{
#line 530
  DispatchUnslottedCsmaP__updateState();
}

# 181 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 181
{
}

# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(uint8_t arg_0x40b14d60){
#line 53
  switch (arg_0x40b14d60) {
#line 53
    case 12U:
#line 53
      DispatchUnslottedCsmaP__RadioTokenRequested__requested();
#line 53
      break;
#line 53
    default:
#line 53
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(arg_0x40b14d60);
#line 53
      break;
#line 53
    }
#line 53
}
#line 53
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t DispatchUnslottedCsmaP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(12U);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 66 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 13U) {
          i = 0;
          }
#line 85
        if (/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 187 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 187
{
}

# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x40b129b8){
#line 65
    /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x40b129b8);
#line 65
}
#line 65
# 496 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma)
{

  if ((((
#line 498
  frame == (void *)0 || frame->header == (void *)0) || (
  frame->payload == (void *)0 && frame->payloadLen != 0)) || frame->metadata == (void *)0) || 
  frame->headerLen + frame->payloadLen + 2 > IEEE154_aMaxPHYPacketSize) {
    return EINVAL;
    }
  /* atomic removed: atomic calls only */
#line 502
  {
    if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
      {
        unsigned char __nesc_temp = 
#line 504
        FAIL;

#line 504
        return __nesc_temp;
      }
#line 505
    CC2420TKN154P__m_state = CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED;
  }
  CC2420TKN154P__m_txframe = frame;
  CC2420TKN154P__m_csma = csma;
  CC2420TKN154P__loadTxFrame(frame);
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static error_t RadioControlImplP__PhyUnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420TKN154P__UnslottedCsmaCa__transmit(frame, csma);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 139 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline error_t RadioControlImplP__UnslottedCsmaCa__transmit(uint8_t client, ieee154_txframe_t *frame, ieee154_csma_t *csma)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyUnslottedCsmaCa__transmit(frame, csma);
    }
  else 
#line 143
    {
      while (!0) {
#line 144
          break;
        }
#line 144
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
}

# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static error_t DispatchUnslottedCsmaP__UnslottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RadioControlImplP__UnslottedCsmaCa__transmit(12U, frame, csma);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool DispatchUnslottedCsmaP__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(12U);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 325 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryTransmit(void )
{

  DispatchUnslottedCsmaP__next_state_t next;

  if (!DispatchUnslottedCsmaP__RadioOff__isOff()) {
    next = DispatchUnslottedCsmaP__SWITCH_OFF;
    }
  else 
#line 332
    {
      error_t res;

#line 334
      res = DispatchUnslottedCsmaP__UnslottedCsmaCa__transmit(DispatchUnslottedCsmaP__m_currentFrame, &DispatchUnslottedCsmaP__m_csma);
      ;
      next = DispatchUnslottedCsmaP__WAIT_FOR_TXDONE;
    }
  return next;
}

# 82 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 154 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 158
          FAIL;

          {
#line 158
            __nesc_atomic_end(__nesc_atomic); 
#line 158
            return __nesc_temp;
          }
        }
#line 159
      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_frame = data;
      CC2420TransmitP__m_frame->header->length = CC2420TransmitP__m_frame->headerLen + CC2420TransmitP__m_frame->payloadLen + 2;
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__CSN__clr();
      CC2420TransmitP__TXFIFO__write(& CC2420TransmitP__m_frame->header->length, 1);
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 40 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static error_t CC2420TKN154P__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = CC2420TransmitP__CC2420Tx__loadTXFIFO(data);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 361 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__enableRxIntr(void )
#line 361
{
  /* atomic removed: atomic calls only */
#line 362
  {
    HplMsp430Usart0P__IFG1 &= ~0x40;
    HplMsp430Usart0P__IE1 |= 0x40;
  }
}

# 180 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr(void ){
#line 180
  HplMsp430Usart0P__Usart__enableRxIntr();
#line 180
}
#line 180
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 210 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested(void )
#line 210
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release();
}

# 73 "/usr/src/tinyos/tos/interfaces/ResourceDefaultOwner.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested(void ){
#line 73
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__default__requested();
#line 73
}
#line 73
# 64 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead == /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ[/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 204 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 204
{
}

# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(uint8_t arg_0x4123e690){
#line 53
    /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__default__requested(arg_0x4123e690);
#line 53
}
#line 53
# 77 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(uint8_t id)
#line 77
{
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceRequested__requested(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 79
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) {
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING;
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId = id;
      }
    else {
#line 84
      if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId == id) {
          {
            unsigned char __nesc_temp = 
#line 85
            SUCCESS;

#line 85
            return __nesc_temp;
          }
        }
      else 
#line 87
        {
          unsigned char __nesc_temp = 
#line 87
          /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Queue__enqueue(id);

#line 87
          return __nesc_temp;
        }
      }
  }
#line 89
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__requested();
  return SUCCESS;
}

# 173 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(uint8_t id)
#line 173
{
#line 173
  return FAIL;
}

# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(uint8_t arg_0x411655a0){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x411655a0) {
#line 88
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 88
      __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__default__request(arg_0x411655a0);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 108 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(uint8_t id)
#line 108
{
  return /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__request(id);
}

# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__request(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 159 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline bool RxEnableP__IsRxEnableActive__getNow(void )
{
  return RxEnableP__m_isRxEnabled;
}

# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
inline static DispatchUnslottedCsmaP__IsRxEnableActive__data_type DispatchUnslottedCsmaP__IsRxEnableActive__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = RxEnableP__IsRxEnableActive__getNow();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t DispatchUnslottedCsmaP__wasRxEnabledTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DispatchUnslottedCsmaP__wasRxEnabledTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 355 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__trySwitchOff(void )
{
  DispatchUnslottedCsmaP__next_state_t next;

#line 358
  if (DispatchUnslottedCsmaP__RadioOff__isOff()) {
    next = DispatchUnslottedCsmaP__DO_NOTHING;
    }
  else {
#line 361
    next = DispatchUnslottedCsmaP__SWITCH_OFF;
    }
#line 362
  return next;
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t DispatchUnslottedCsmaP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(12U);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 123 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static error_t CC2420TKN154P__RxControl__stop(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = CC2420ReceiveP__AsyncSplitControl__stop();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 342 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__RadioOff__off(void )
{
  error_t result;

#line 345
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 345
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 347
          EALREADY;

          {
#line 347
            __nesc_atomic_end(__nesc_atomic); 
#line 347
            return __nesc_temp;
          }
        }
      else {
#line 348
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_RECEIVING) 
          {
            unsigned char __nesc_temp = 
#line 349
            FAIL;

            {
#line 349
              __nesc_atomic_end(__nesc_atomic); 
#line 349
              return __nesc_temp;
            }
          }
        }
#line 350
      CC2420TKN154P__m_state = CC2420TKN154P__S_OFF_PENDING;
    }
#line 351
    __nesc_atomic_end(__nesc_atomic); }
  result = CC2420TKN154P__RxControl__stop();
  while (!(result == SUCCESS)) {
#line 353
      break;
    }
#line 353
  ;
  return result;
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t RadioControlImplP__PhyRadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420TKN154P__RadioOff__off();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void TKN154TimingP__SymbolAlarm__startAt(TKN154TimingP__SymbolAlarm__size_type t0, TKN154TimingP__SymbolAlarm__size_type dt){
#line 103
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 90 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 93
          break;
        }
#line 93
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_RX;
  TKN154TimingP__SymbolAlarm__startAt(t0 - 16, dt);
}

# 35 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitRx(uint32_t t0, uint32_t dt){
#line 35
  TKN154TimingP__ReliableWait__waitRx(t0, dt);
#line 35
}
#line 35
# 130 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents(void )
{
  * (volatile uint16_t * )392U |= 0x0010;
}

# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__enableEvents();
#line 57
}
#line 57
# 95 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )392U &= ~0x0001;
}

# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )408U = x;
}

# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )408U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Timer__get() + x;
}

# 43 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__clearPendingInterrupt();
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__enableEvents();
  }
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__size_type dt){
#line 103
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 155 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__UnslottedCsmaCa__default__transmitDone(uint8_t client, 
ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{
  while (!0) {
#line 158
      break;
    }
#line 158
  ;
}

# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static void RadioControlImplP__UnslottedCsmaCa__transmitDone(uint8_t arg_0x40ae12e0, ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result){
#line 89
  switch (arg_0x40ae12e0) {
#line 89
    case 12U:
#line 89
      DispatchUnslottedCsmaP__UnslottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, result);
#line 89
      break;
#line 89
    default:
#line 89
      RadioControlImplP__UnslottedCsmaCa__default__transmitDone(arg_0x40ae12e0, frame, csma, ackPendingFlag, result);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 149 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyUnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{
  RadioControlImplP__UnslottedCsmaCa__transmitDone(RadioControlImplP__ArbiterInfo__userId(), 
  frame, csma, ackPendingFlag, result);
}

# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static void CC2420TKN154P__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result){
#line 89
  RadioControlImplP__PhyUnslottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, result);
#line 89
}
#line 89
# 572 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneUnslottedCsma(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{

  CC2420TKN154P__UnslottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, result);
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t DispatchUnslottedCsmaP__signalTxDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(DispatchUnslottedCsmaP__signalTxDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 897 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__SlottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
#line 898
{
}

# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
inline static void CC2420TKN154P__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, uint16_t remainingBackoff, error_t result){
#line 115
  CC2420TKN154P__SlottedCsmaCa__default__transmitDone(frame, csma, ackPendingFlag, remainingBackoff, result);
#line 115
}
#line 115
# 713 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneSlottedCsmaCa(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
{

  CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, remainingBackoff, result);
}

# 130 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents(void )
{
  * (volatile uint16_t * )386U |= 0x0010;
}

# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__enableEvents();
#line 57
}
#line 57
# 95 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )386U &= ~0x0001;
}

# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )402U = x;
}

# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )402U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Timer__get() + x;
}

# 43 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__clearPendingInterrupt();
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__enableEvents();
  }
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 192 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired(void )
{
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__default__fired();
#line 45
}
#line 45
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent(void )
{
  return * (volatile uint16_t * )404U;
}

# 347 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 224 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 224
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
    return;
    }
#line 227
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 78 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime)
{

  return (EFDCaptureTime - SFDCaptureTime) * 2;
}

# 56 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
inline static uint16_t CC2420TransmitP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime){
#line 56
  unsigned int __nesc_result;
#line 56

#line 56
  __nesc_result = TKN154TimingP__CaptureTime__getSFDUptime(SFDCaptureTime, EFDCaptureTime);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 61 "/usr/src/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_RISING);
}

# 53 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 59 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )28U & (0x01 << 1);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__getRaw() != 0;
}

# 73 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__get();
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 214 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 214
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
    return;
    }
#line 217
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 219
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 65 "/usr/src/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 65
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(MSP430TIMER_CM_FALLING);
}

# 54 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
}

#line 147
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type t0, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = t0;
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = dt;
    /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm();
  }
}

static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type dt)
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type dt){
#line 66
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 52 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(uint32_t dt)
#line 52
{
#line 52
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(dt >> 1);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__BackoffAlarm__size_type dt){
#line 66
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(dt);
#line 66
}
#line 66
# 900 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *msdu, uint8_t token)
#line 900
{
}

# 49 "/usr/src/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
inline static void CC2420TKN154P__Timestamp__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token){
#line 49
  CC2420TKN154P__Timestamp__default__transmissionStarted(frameType, msduHandle, payload, token);
#line 49
}
#line 49
# 815 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *frame)
{
  uint8_t frameType = frame->header->mhr[0] & FC1_FRAMETYPE_MASK;
  uint8_t token = frame->headerLen;

#line 819
  CC2420TKN154P__Timestamp__transmissionStarted(frameType, frame->handle, frame->payload, token);
}

# 50 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__transmissionStarted(ieee154_txframe_t *data){
#line 50
  CC2420TKN154P__CC2420Tx__transmissionStarted(data);
#line 50
}
#line 50
# 65 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop(void ){
#line 73
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 53 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void )
#line 53
{
#line 53
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffAlarm__stop(void ){
#line 73
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop();
#line 73
}
#line 73
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow(void )
{
  return /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__get();
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 58 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline uint32_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void )
#line 58
{


  return /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow() << 1;
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static TKN154TimingP__SymbolAlarm__size_type TKN154TimingP__SymbolAlarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 67 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t captured_time)
{
  uint32_t now = TKN154TimingP__SymbolAlarm__getNow();





  return now - (uint16_t )(now - captured_time * 2) - 10;
}

# 47 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
inline static uint32_t CC2420TransmitP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime){
#line 47
  unsigned long __nesc_result;
#line 47

#line 47
  __nesc_result = TKN154TimingP__CaptureTime__getTimestamp(SFDCaptureTime);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 245 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 245
{
  uint32_t time32;
  uint8_t sfd_state = 0;

  /* atomic removed: atomic calls only */
#line 248
  {
    time32 = CC2420TransmitP__CaptureTime__getTimestamp(time);
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
        CC2420TransmitP__sfdHigh = TRUE;


        CC2420TransmitP__m_receiving = FALSE;
        CC2420TransmitP__CaptureSFD__captureFallingEdge();
        __nesc_hton_uint32(CC2420TransmitP__m_frame->metadata->timestamp.nxdata, time32);

        CC2420TransmitP__BackoffAlarm__stop();

        if (CC2420TransmitP__SFD__get()) {
            break;
          }


        case CC2420TransmitP__S_EFD: 
          CC2420TransmitP__sfdHigh = FALSE;
        CC2420TransmitP__CaptureSFD__captureRisingEdge();

        CC2420TransmitP__CC2420Tx__transmissionStarted(CC2420TransmitP__m_frame);
        if (CC2420TransmitP__m_frame->header->mhr[0] & (1 << IEEE154_FCF_ACK_REQ)) {

            CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;



            CC2420TransmitP__BackoffAlarm__start(150);
          }
        else 
#line 280
          {
            CC2420TransmitP__signalDone(FALSE, SUCCESS);
          }

        if (!CC2420TransmitP__SFD__get()) {
            break;
          }


        default: 

          if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
              CC2420TransmitP__sfdHigh = TRUE;
              CC2420TransmitP__CaptureSFD__captureFallingEdge();

              sfd_state = CC2420TransmitP__SFD__get();

              CC2420TransmitP__CC2420Receive__sfd(time32);
              CC2420TransmitP__m_receiving = TRUE;
              CC2420TransmitP__m_prev_time = time;
              if (CC2420TransmitP__SFD__get()) {

                  return;
                }
            }

        if (CC2420TransmitP__sfdHigh == TRUE) {
            CC2420TransmitP__sfdHigh = FALSE;
            CC2420TransmitP__CaptureSFD__captureRisingEdge();
            CC2420TransmitP__m_receiving = FALSE;









            if (sfd_state == 0 && CC2420TransmitP__CaptureTime__getSFDUptime(CC2420TransmitP__m_prev_time, time) < 20) {
              CC2420TransmitP__CC2420Receive__sfd_dropped();
              }
#line 321
            break;
          }
      }
  }
}

# 61 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 175 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow(void )
{
  * (volatile uint16_t * )388U &= ~0x0002;
}

# 68 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow(void ){
#line 68
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__clearOverflow();
#line 68
}
#line 68
# 95 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )388U &= ~0x0001;
}

# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 76 "/usr/src/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(uint16_t time)
#line 76
{
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Capture__captured(time);
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(uint16_t time){
#line 86
  /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__captured(time);
#line 86
}
#line 86
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4____nesc_unnamed4392 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__cc_t /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__int2CC(* (volatile uint16_t * )388U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__captured(/*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Compare__fired();
    }
}

# 13 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline void LocalTime62500hzP__Alarm__fired(void )
#line 13
{
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 87 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__Alarm__default__fired(uint8_t num)
#line 87
{
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void Alarm32khzTo62500hzTransformC__Alarm__fired(uint8_t arg_0x41492010){
#line 78
  switch (arg_0x41492010) {
#line 78
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 78
      CC2420ControlP__StartupAlarm__fired();
#line 78
      break;
#line 78
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 78
      LocalTime62500hzP__Alarm__fired();
#line 78
      break;
#line 78
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 78
      /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
      break;
#line 78
    default:
#line 78
      Alarm32khzTo62500hzTransformC__Alarm__default__fired(arg_0x41492010);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 57 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(uint8_t num)
#line 57
{
#line 57
  Alarm32khzTo62500hzTransformC__Alarm__fired(num);
}

# 200 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id)
#line 200
{
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(uint8_t arg_0x41470820){
#line 78
  switch (arg_0x41470820) {
#line 78
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 78
      break;
#line 78
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 78
      break;
#line 78
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 78
      break;
#line 78
    default:
#line 78
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(arg_0x41470820);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 139 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void )
#line 139
{
  uint8_t id;

  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = TRUE;

  for (id = 0; id < /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS; id++) {
      if (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id]) {


          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0 = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0;
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow() - t0;

#line 150
          if (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt <= elapsed) {
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(id);
            }
        }
    }

  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = FALSE;
}











static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void )
#line 170
{
  /* atomic removed: atomic calls only */
#line 171
  {
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms();
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
  }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt == 0) 
      {
        /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__fired();
      }
    else 
      {
        /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
      }
  }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired(void ){
#line 78
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents(void )
{
  * (volatile uint16_t * )390U &= ~0x0010;
}

# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__disableEvents();
#line 58
}
#line 58
# 70 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__fired();
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired(void ){
#line 45
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent(void )
{
  return * (volatile uint16_t * )406U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4393 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__int2CC(* (volatile uint16_t * )390U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__captured(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__fired();
    }
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 90 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__enable(void )
#line 90
{
#line 90
  P1IE |= 1 << 4;
}

# 42 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable(void ){
#line 42
  HplMsp430InterruptP__Port14__enable();
#line 42
}
#line 42
# 142 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__edge(bool l2h)
#line 142
{
  /* atomic removed: atomic calls only */
#line 143
  {
    if (l2h) {
#line 144
      P1IES &= ~(1 << 4);
      }
    else {
#line 145
      P1IES |= 1 << 4;
      }
  }
}

# 67 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(bool low_to_high){
#line 67
  HplMsp430InterruptP__Port14__edge(low_to_high);
#line 67
}
#line 67
# 106 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__clear(void )
#line 106
{
#line 106
  P1IFG &= ~(1 << 4);
}

# 52 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear(void ){
#line 52
  HplMsp430InterruptP__Port14__clear();
#line 52
}
#line 52
# 98 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port14__disable(void )
#line 98
{
#line 98
  P1IE &= ~(1 << 4);
}

# 47 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable(void ){
#line 47
  HplMsp430InterruptP__Port14__disable();
#line 47
}
#line 47
# 69 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable(void )
#line 69
{
  /* atomic removed: atomic calls only */
#line 70
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  }
  return SUCCESS;
}

#line 52
static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(bool rising)
#line 52
{
  /* atomic removed: atomic calls only */
#line 53
  {
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__enable();
  }
  return SUCCESS;
}

static inline error_t /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge(void )
#line 61
{
  return /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__enable(TRUE);
}

# 53 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 194 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 194
{
  /* atomic removed: atomic calls only */
#line 195
  {
    if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
        {
          unsigned char __nesc_temp = 
#line 197
          FAIL;

#line 197
          return __nesc_temp;
        }
      }
    CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
    CC2420ControlP__CSN__set();
    CC2420ControlP__CSN__clr();
    CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
    CC2420_IOCFG1_CCAMUX);

    CC2420ControlP__InterruptCCA__enableRisingEdge();
    CC2420ControlP__SXOSCON__strobe();

    CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
    127 << CC2420_IOCFG0_FIFOP_THR));

    CC2420ControlP__writeFsctrl();
    CC2420ControlP__writeMdmctrl0();

    CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
    1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
    1 << CC2420_RXCTRL1_HIGH_HGM)) | (
    1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
    1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
    1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
    2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    CC2420ControlP__CSN__set();
  }
  return SUCCESS;
}

# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__startOscillator(void ){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 155 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Power__startVRegDone(void )
{
  CC2420TKN154P__CC2420Power__startOscillator();
}

# 57 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 57
  CC2420TKN154P__CC2420Power__startVRegDone();
#line 57
}
#line 57
# 147 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = t0;
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = dt;
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm();
  }
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 130 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents(void )
{
  * (volatile uint16_t * )390U |= 0x0010;
}

# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents(void ){
#line 57
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__enableEvents();
#line 57
}
#line 57
# 95 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt(void )
{
  * (volatile uint16_t * )390U &= ~0x0001;
}

# 44 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt(void ){
#line 44
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__clearPendingInterrupt();
#line 44
}
#line 44
# 155 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(uint16_t x)
{
  * (volatile uint16_t * )406U = x;
}

# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(uint16_t time){
#line 41
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEvent(time);
#line 41
}
#line 41
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 165 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(uint16_t x)
{
  * (volatile uint16_t * )406U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Timer__get() + x;
}

# 43 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(uint16_t delta){
#line 43
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Compare__setEventFromNow(delta);
#line 43
}
#line 43
# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Timer.nc"
inline static uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get(void ){
#line 45
  unsigned int __nesc_result;
#line 45

#line 45
  __nesc_result = /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get();
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 81 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(uint16_t t0, uint16_t dt)
{
  /* atomic removed: atomic calls only */
  {
    uint16_t now = /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Timer__get();
    uint16_t elapsed = now - t0;

#line 87
    if (elapsed >= dt) 
      {
        /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
      }
    else 
      {
        uint16_t remaining = dt - elapsed;

#line 94
        if (remaining <= 2) {
          /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEventFromNow(2);
          }
        else {
#line 97
          /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430Compare__setEvent(now + remaining);
          }
      }
#line 99
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__clearPendingInterrupt();
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__enableEvents();
  }
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 65 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 102 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420TKN154P__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 105 "/usr/src/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t CC2420TKN154P__TxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 346 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Tx__unlockChipSpi(void )
{
  CC2420TransmitP__abortSpiRelease = FALSE;
}

# 48 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TKN154P__CC2420Tx__unlockChipSpi(void ){
#line 48
  CC2420TransmitP__CC2420Tx__unlockChipSpi();
#line 48
}
#line 48
# 112 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__flushRxFifo(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ControlP__CC2420Power__flushRxFifo();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
#line 98
inline static error_t CC2420TKN154P__CC2420Power__rfOff(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = CC2420ControlP__CC2420Power__rfOff();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 43 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static error_t CC2420TKN154P__CC2420Tx__send(bool cca){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = CC2420TransmitP__CC2420Tx__send(cca);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 104 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__rssi(int8_t *rssi){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420ControlP__CC2420Power__rssi(rssi);
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
#line 91
inline static error_t CC2420TKN154P__CC2420Power__rxOn(void ){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 521 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__waitBackoffDoneUnslottedCsma(void )
{

  int8_t dummy;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 528
  {



    CC2420TKN154P__CC2420Power__rxOn();
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA;


    while (CC2420TKN154P__CC2420Power__rssi(&dummy) != SUCCESS) 
      ;


    if (CC2420TKN154P__CC2420Tx__send(TRUE) == SUCCESS) {

        CC2420TKN154P__checkEnableRxForACK();
      }
    else 
#line 543
      {

        CC2420TKN154P__CC2420Power__rfOff();

        CC2420TKN154P__CC2420Power__flushRxFifo();
        CC2420TKN154P__m_csma->NB += 1;
        if (CC2420TKN154P__m_csma->NB > CC2420TKN154P__m_csma->macMaxCsmaBackoffs) {

            frame = CC2420TKN154P__m_txframe;
            csma = CC2420TKN154P__m_csma;
          }
        else {

            CC2420TKN154P__m_csma->BE += 1;
            if (CC2420TKN154P__m_csma->BE > CC2420TKN154P__m_csma->macMaxBE) {
              CC2420TKN154P__m_csma->BE = CC2420TKN154P__m_csma->macMaxBE;
              }
#line 559
            CC2420TKN154P__nextIterationUnslottedCsma();
          }
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__UnslottedCsmaCa__transmitDone(frame, csma, FALSE, FAIL);
    }
}

# 59 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 4);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__getRaw() != 0;
}

# 73 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__get();
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 327 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline bool CC2420TransmitP__CC2420Tx__cca(void )
{
  return CC2420TransmitP__CCA__get();
}

# 46 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static bool CC2420TKN154P__CC2420Tx__cca(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = CC2420TransmitP__CC2420Tx__cca();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 887 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__CCA__getNow(void )
{
  return CC2420TKN154P__CC2420Tx__cca();
}

# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
inline static TKN154TimingP__CCA__data_type TKN154TimingP__CCA__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TKN154P__CCA__getNow();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 84 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0)
{

  return TKN154TimingP__CCA__getNow() ? 20 : 0;
}

# 41 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static bool CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(slot0);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 644 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__waitBackoffDoneSlottedCsma(void )
{
  int8_t dummy;
  bool ccaFailure = FALSE;
  error_t result = FAIL;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 652
  {



    CC2420TKN154P__CC2420Power__rxOn();
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA;


    while (CC2420TKN154P__CC2420Power__rssi(&dummy) != SUCCESS) 
      ;




    if (CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(CC2420TKN154P__m_t0)) {

        if (CC2420TKN154P__CC2420Tx__send(TRUE) == SUCCESS) {

            CC2420TKN154P__checkEnableRxForACK();
            return;
          }
        else {
#line 673
          ccaFailure = TRUE;
          }
      }
    else {
#line 675
      ccaFailure = TRUE;
      }

    CC2420TKN154P__CC2420Power__rfOff();
    CC2420TKN154P__CC2420Power__flushRxFifo();
    CC2420TKN154P__m_state = CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED;
    if (ccaFailure) {
        CC2420TKN154P__m_csma->NB += 1;
        if (CC2420TKN154P__m_csma->NB > CC2420TKN154P__m_csma->macMaxCsmaBackoffs) {

            frame = CC2420TKN154P__m_txframe;
            csma = CC2420TKN154P__m_csma;
            result = FAIL;
          }
        else 
#line 688
          {

            CC2420TKN154P__m_csma->BE += 1;
            if (CC2420TKN154P__m_csma->BE > CC2420TKN154P__m_csma->macMaxBE) {
              CC2420TKN154P__m_csma->BE = CC2420TKN154P__m_csma->macMaxBE;
              }
#line 693
            CC2420TKN154P__nextIterationSlottedCsma();
          }
      }
    else 
#line 695
      {



        frame = CC2420TKN154P__m_txframe;
        csma = CC2420TKN154P__m_csma;
        result = ERETRY;
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, FALSE, 0, result);
    }
}

#line 837
static inline void CC2420TKN154P__ReliableWait__waitBackoffDone(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_TX_BACKOFF_SLOTTED: CC2420TKN154P__waitBackoffDoneSlottedCsma();
#line 841
      break;
      case CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED: CC2420TKN154P__waitBackoffDoneUnslottedCsma();
#line 842
      break;
      default: while (!0) {
#line 843
            break;
          }
#line 843
      ;
#line 843
      break;
    }
}

# 40 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void TKN154TimingP__ReliableWait__waitBackoffDone(void ){
#line 40
  CC2420TKN154P__ReliableWait__waitBackoffDone();
#line 40
}
#line 40
#line 38
inline static void TKN154TimingP__ReliableWait__waitTxDone(void ){
#line 38
  CC2420TKN154P__ReliableWait__waitTxDone();
#line 38
}
#line 38
#line 36
inline static void TKN154TimingP__ReliableWait__waitRxDone(void ){
#line 36
  CC2420TKN154P__ReliableWait__waitRxDone();
#line 36
}
#line 36
# 120 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__SymbolAlarm__fired(void )
{
  switch (TKN154TimingP__m_state) 
    {
      case TKN154TimingP__S_WAIT_RX: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 124
      TKN154TimingP__ReliableWait__waitRxDone();
#line 124
      break;
      case TKN154TimingP__S_WAIT_TX: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 125
      TKN154TimingP__ReliableWait__waitTxDone();
#line 125
      break;
      case TKN154TimingP__S_WAIT_BACKOFF: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 126
      TKN154TimingP__ReliableWait__waitBackoffDone();
#line 126
      break;
      default: while (!0) {
#line 127
            break;
          }
#line 127
      ;
#line 127
      break;
    }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired(void ){
#line 78
  TKN154TimingP__SymbolAlarm__fired();
#line 78
}
#line 78
# 54 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void )
#line 54
{
#line 54
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired();
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__fired(void ){
#line 78
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__fired(void )
{
  /* atomic removed: atomic calls only */
  {
    if (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt == 0) 
      {
        /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__fired();
      }
    else 
      {
        /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__set_alarm();
      }
  }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired(void ){
#line 78
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__fired();
#line 78
}
#line 78
# 135 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents(void )
{
  * (volatile uint16_t * )392U &= ~0x0010;
}

# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents(void ){
#line 58
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__disableEvents();
#line 58
}
#line 58
# 70 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired(void )
{
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Alarm__fired();
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired(void ){
#line 45
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430Compare__fired();
#line 45
}
#line 45
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent(void )
{
  return * (volatile uint16_t * )408U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4394 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__int2CC(* (volatile uint16_t * )392U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__captured(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Compare__fired();
    }
}

# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 89 "/usr/src/tinyos/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
inline static uint16_t CC2420TKN154P__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static uint32_t CC2420TKN154P__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = PibP__TimeCalc__timeElapsed(t0, t1);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 39 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitBackoff(uint32_t dt){
#line 39
  TKN154TimingP__ReliableWait__waitBackoff(dt);
#line 39
}
#line 39
# 147 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type t0, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 = t0;
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt = dt;
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__set_alarm();
  }
}

static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type dt)
{
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__getNow(), dt);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type dt){
#line 66
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Alarm__start(dt);
#line 66
}
#line 66
# 52 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(uint32_t dt)
#line 52
{
#line 52
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(dt >> 1);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void TKN154TimingP__SymbolAlarm__start(TKN154TimingP__SymbolAlarm__size_type dt){
#line 66
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(dt);
#line 66
}
#line 66
# 192 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired(void )
{
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__default__fired();
#line 45
}
#line 45
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent(void )
{
  return * (volatile uint16_t * )410U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7____nesc_unnamed4395 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__cc_t /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__int2CC(* (volatile uint16_t * )394U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__captured(/*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired(void )
{
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__default__fired();
#line 45
}
#line 45
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent(void )
{
  return * (volatile uint16_t * )412U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8____nesc_unnamed4396 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__cc_t /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__int2CC(* (volatile uint16_t * )396U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__captured(/*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Compare__fired();
    }
}




static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired(void )
{
}

# 45 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Compare.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired(void ){
#line 45
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__default__fired();
#line 45
}
#line 45
# 150 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline uint16_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent(void )
{
  return * (volatile uint16_t * )414U;
}

#line 188
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(uint16_t n)
{
}

# 86 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430Capture.nc"
inline static void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(uint16_t time){
#line 86
  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__default__captured(time);
#line 86
}
#line 86
# 58 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(uint16_t x)
#line 58
{
#line 58
  union /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9____nesc_unnamed4397 {
#line 58
    uint16_t f;
#line 58
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t t;
  } 
#line 58
  c = { .f = x };

#line 58
  return c.t;
}

#line 85
static inline /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__cc_t /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl(void )
{
  return /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__int2CC(* (volatile uint16_t * )398U);
}

#line 180
static inline void /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__captured(/*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Compare__fired();
    }
}

# 131 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static inline void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired(void )
{
  uint8_t n = * (volatile uint16_t * )286U;

#line 134
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(n >> 1);
}

# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
inline static void Msp430TimerCommonP__VectorTimerB1__fired(void ){
#line 39
  /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__VectorTimerX1__fired();
#line 39
}
#line 39
# 124 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 56 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 6;
}

# 48 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__set();
#line 48
}
#line 48
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__set();
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__set();
#line 40
}
#line 40
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set();
#line 48
}
#line 48
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__set();
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__set();
#line 40
}
#line 40
# 56 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 56
  * (volatile uint8_t * )49U |= 0x01 << 4;
}

# 48 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__set();
#line 48
}
#line 48
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set(void )
#line 48
{
#line 48
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__set();
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__set();
#line 40
}
#line 40
# 63 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 6;
}

# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P56*/HplMsp430GeneralIOP__38__IO__makeOutput();
#line 85
}
#line 85
# 54 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__HplGeneralIO__makeOutput();
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led2Impl*/Msp430GpioC__2__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 5;
}

# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__makeOutput();
#line 85
}
#line 85
# 54 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__makeOutput();
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )50U |= 0x01 << 4;
}

# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P54*/HplMsp430GeneralIOP__36__IO__makeOutput();
#line 85
}
#line 85
# 54 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__HplGeneralIO__makeOutput();
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*PlatformLedsC.Led0Impl*/Msp430GpioC__0__GeneralIO__makeOutput();
#line 46
}
#line 46
# 56 "/usr/src/tinyos/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__LedsInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "/usr/src/tinyos/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r |= 1 << 1;
}

#line 37
static inline  void TOSH_SET_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r |= 1 << 3;
}

#line 88
static inline  void TOSH_SET_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r |= 1 << 4;
}

#line 37
static inline  void TOSH_CLR_UCLK0_PIN()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x0019");

#line 37
  r &= ~(1 << 3);
}

#line 88
static inline  void TOSH_CLR_FLASH_CS_PIN()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001D");

#line 88
  r &= ~(1 << 4);
}

# 11 "/usr/src/tinyos/tos/platforms/telosb/MotePlatformC.nc"
static __inline void MotePlatformC__TOSH_wait(void )
#line 11
{
  __nop();
#line 12
  __nop();
}

# 89 "/usr/src/tinyos/tos/platforms/telosb/hardware.h"
static inline  void TOSH_SET_FLASH_HOLD_PIN()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001D");

#line 89
  r |= 1 << 7;
}

#line 88
static inline  void TOSH_MAKE_FLASH_CS_OUTPUT()
#line 88
{
#line 88
  static volatile uint8_t r __asm ("0x001E");

#line 88
  r |= 1 << 4;
}

#line 89
static inline  void TOSH_MAKE_FLASH_HOLD_OUTPUT()
#line 89
{
#line 89
  static volatile uint8_t r __asm ("0x001E");

#line 89
  r |= 1 << 7;
}

#line 37
static inline  void TOSH_MAKE_UCLK0_OUTPUT()
#line 37
{
#line 37
  static volatile uint8_t r __asm ("0x001A");

#line 37
  r |= 1 << 3;
}

#line 36
static inline  void TOSH_MAKE_SIMO0_OUTPUT()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x001A");

#line 36
  r |= 1 << 1;
}

# 27 "/usr/src/tinyos/tos/platforms/telosb/MotePlatformC.nc"
static inline void MotePlatformC__TOSH_FLASH_M25P_DP(void )
#line 27
{

  TOSH_MAKE_SIMO0_OUTPUT();
  TOSH_MAKE_UCLK0_OUTPUT();
  TOSH_MAKE_FLASH_HOLD_OUTPUT();
  TOSH_MAKE_FLASH_CS_OUTPUT();
  TOSH_SET_FLASH_HOLD_PIN();
  TOSH_SET_FLASH_CS_PIN();

  MotePlatformC__TOSH_wait();


  TOSH_CLR_FLASH_CS_PIN();
  TOSH_CLR_UCLK0_PIN();

  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(FALSE);
  MotePlatformC__TOSH_FLASH_M25P_DP_bit(TRUE);

  TOSH_SET_FLASH_CS_PIN();
  TOSH_SET_UCLK0_PIN();
  TOSH_SET_SIMO0_PIN();
}

#line 6
static __inline void MotePlatformC__uwait(uint16_t u)
#line 6
{
  uint16_t t0 = TAR;

#line 8
  while (TAR - t0 <= u) ;
}

#line 56
static inline error_t MotePlatformC__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */

  {
    P1SEL = 0;
    P2SEL = 0;
    P3SEL = 0;
    P4SEL = 0;
    P5SEL = 0;
    P6SEL = 0;

    P1OUT = 0x00;
    P1DIR = 0xe0;

    P2OUT = 0x30;
    P2DIR = 0x7b;

    P3OUT = 0x00;
    P3DIR = 0xf1;

    P4OUT = 0xdd;
    P4DIR = 0xfd;

    P5OUT = 0xff;
    P5DIR = 0xff;

    P6OUT = 0x00;
    P6DIR = 0xff;

    P1IE = 0;
    P2IE = 0;






    MotePlatformC__uwait(1024 * 10);

    MotePlatformC__TOSH_FLASH_M25P_DP();
  }

  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 163 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__startTimerB(void )
{

  Msp430ClockP__TBCTL = 0x0020 | (Msp430ClockP__TBCTL & ~(0x0020 | 0x0010));
}

#line 151
static inline void Msp430ClockP__startTimerA(void )
{

  Msp430ClockP__TACTL = 0x0020 | (Msp430ClockP__TACTL & ~(0x0020 | 0x0010));
}

#line 115
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerB(void )
{
  TBR = 0;









  Msp430ClockP__TBCTL = 0x0100 | 0x0002;
}

#line 145
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerB(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerB();
}

# 43 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerB(void ){
#line 43
  Msp430ClockP__Msp430ClockInit__default__initTimerB();
#line 43
}
#line 43
# 100 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitTimerA(void )
{
  TAR = 0;









  Msp430ClockP__TACTL = 0x0200 | 0x0002;
}

#line 140
static inline void Msp430ClockP__Msp430ClockInit__default__initTimerA(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitTimerA();
}

# 42 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initTimerA(void ){
#line 42
  Msp430ClockP__Msp430ClockInit__default__initTimerA();
#line 42
}
#line 42
# 79 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline void Msp430ClockP__Msp430ClockInit__defaultInitClocks(void )
{





  BCSCTL1 = 0x80 | (BCSCTL1 & ((0x04 | 0x02) | 0x01));







  BCSCTL2 = 0x04;


  Msp430ClockP__IE1 &= ~0x02;
}

#line 135
static inline void Msp430ClockP__Msp430ClockInit__default__initClocks(void )
{
  Msp430ClockP__Msp430ClockInit__defaultInitClocks();
}

# 41 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__initClocks(void ){
#line 41
  Msp430ClockP__Msp430ClockInit__default__initClocks();
#line 41
}
#line 41
# 181 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline uint16_t Msp430ClockP__test_calib_busywait_delta(int calib)
{
  int8_t aclk_count = 2;
  uint16_t dco_prev = 0;
  uint16_t dco_curr = 0;

  Msp430ClockP__set_dco_calib(calib);

  while (aclk_count-- > 0) 
    {
      TBCCR0 = TBR + Msp430ClockP__ACLK_CALIB_PERIOD;
      TBCCTL0 &= ~0x0001;
      while ((TBCCTL0 & 0x0001) == 0) ;
      dco_prev = dco_curr;
      dco_curr = TAR;
    }

  return dco_curr - dco_prev;
}




static inline void Msp430ClockP__busyCalibrateDco(void )
{

  int calib;
  int step;






  for (calib = 0, step = 0x800; step != 0; step >>= 1) 
    {

      if (Msp430ClockP__test_calib_busywait_delta(calib | step) <= Msp430ClockP__TARGET_DCO_DELTA) {
        calib |= step;
        }
    }

  if ((calib & 0x0e0) == 0x0e0) {
    calib &= ~0x01f;
    }
  Msp430ClockP__set_dco_calib(calib);
}

#line 67
static inline void Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate(void )
{



  Msp430ClockP__TACTL = 0x0200 | 0x0020;
  Msp430ClockP__TBCTL = 0x0100 | 0x0020;
  BCSCTL1 = 0x80 | 0x04;
  BCSCTL2 = 0;
  TBCCTL0 = 0x4000;
}

#line 130
static inline void Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate(void )
{
  Msp430ClockP__Msp430ClockInit__defaultSetupDcoCalibrate();
}

# 40 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockInit.nc"
inline static void Msp430ClockP__Msp430ClockInit__setupDcoCalibrate(void ){
#line 40
  Msp430ClockP__Msp430ClockInit__default__setupDcoCalibrate();
#line 40
}
#line 40
# 229 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline error_t Msp430ClockP__Init__init(void )
{

  Msp430ClockP__TACTL = 0x0004;
  Msp430ClockP__TAIV = 0;
  Msp430ClockP__TBCTL = 0x0004;
  Msp430ClockP__TBIV = 0;
  /* atomic removed: atomic calls only */

  {
    Msp430ClockP__Msp430ClockInit__setupDcoCalibrate();
    Msp430ClockP__busyCalibrateDco();
    Msp430ClockP__Msp430ClockInit__initClocks();
    Msp430ClockP__Msp430ClockInit__initTimerA();
    Msp430ClockP__Msp430ClockInit__initTimerB();
    Msp430ClockP__startTimerA();
    Msp430ClockP__startTimerB();
  }

  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteClockInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 10 "/usr/src/tinyos/tos/platforms/telosa/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
#line 10
{
  WDTCTL = 0x5A00 + 0x0080;
  PlatformP__MoteClockInit__init();
  PlatformP__MoteInit__init();
  PlatformP__LedsInit__init();
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 36 "/usr/src/tinyos/tos/platforms/telosb/hardware.h"
static inline  void TOSH_CLR_SIMO0_PIN()
#line 36
{
#line 36
  static volatile uint8_t r __asm ("0x0019");

#line 36
  r &= ~(1 << 1);
}

# 65 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  Alarm32khzTo62500hzTransformC__Alarm__startAt(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID, t0, dt);
#line 103
}
#line 103
# 58 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 166 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id)
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 85 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(uint8_t num)
#line 85
{
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void Alarm32khzTo62500hzTransformC__AlarmFrom__stop(uint8_t arg_0x41490ed8){
#line 73
  switch (arg_0x41490ed8) {
#line 73
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 73
      break;
#line 73
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 73
      break;
#line 73
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 73
      break;
#line 73
    default:
#line 73
      Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(arg_0x41490ed8);
#line 73
      break;
#line 73
    }
#line 73
}
#line 73
# 56 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__Alarm__stop(uint8_t num)
#line 56
{
#line 56
  Alarm32khzTo62500hzTransformC__AlarmFrom__stop(num);
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  Alarm32khzTo62500hzTransformC__Alarm__stop(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 73
}
#line 73
# 71 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 96 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
        /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t ScanP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(0);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 145 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static bool ScanP__RadioToken__isOwner(void ){
#line 145
  unsigned char __nesc_result;
#line 145

#line 145
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(0);
#line 145

#line 145
  return __nesc_result;
#line 145
}
#line 145
# 424 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__ScanTimer__fired(void )
{
  if (ScanP__RadioToken__isOwner()) {
    ScanP__RadioOff__off();
    }
}

# 327 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 300 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macPANId_t PibP__MLME_GET__macPANId(void )
#line 300
{
#line 300
  return PibP__m_pib.macPANId;
}

# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macPANId_t AssociateP__MLME_GET__macPANId(void ){
#line 120
  unsigned int __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 224 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__DataRequest__default__pollDone(uint8_t client)
#line 224
{
}

# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
inline static void PollP__DataRequest__pollDone(uint8_t arg_0x40c30da8){
#line 52
  switch (arg_0x40c30da8) {
#line 52
    case 0U:
#line 52
      AssociateP__DataRequest__pollDone();
#line 52
      break;
#line 52
    default:
#line 52
      PollP__DataRequest__default__pollDone(arg_0x40c30da8);
#line 52
      break;
#line 52
    }
#line 52
}
#line 52
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t PollP__TxFramePool__put(PollP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t PollP__TxControlPool__put(PollP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t PollP__PollTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(6U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static uint8_t PollP__FrameUtility__writeHeader(uint8_t *mhr, uint8_t DstAddrMode, uint16_t DstPANId, ieee154_address_t *DstAddr, uint8_t SrcAddrMode, uint16_t SrcPANId, const ieee154_address_t *SrcAddr, bool PANIDCompression){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = PibP__FrameUtility__writeHeader(mhr, DstAddrMode, DstPANId, DstAddr, SrcAddrMode, SrcPANId, SrcAddr, PANIDCompression);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 1015 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint64_t PibP__GetLocalExtendedAddress__get(void )
{
  return PibP__m_aExtendedAddressLE;
}

# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static PollP__LocalExtendedAddress__val_t PollP__LocalExtendedAddress__get(void ){
#line 55
  unsigned long long __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__GetLocalExtendedAddress__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 306 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void )
#line 306
{
#line 306
  return PibP__m_pib.macShortAddress;
}

# 129 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macShortAddress_t PollP__MLME_GET__macShortAddress(void ){
#line 129
  unsigned int __nesc_result;
#line 129

#line 129
  __nesc_result = PibP__MLME_GET__macShortAddress();
#line 129

#line 129
  return __nesc_result;
#line 129
}
#line 129
#line 120
inline static ieee154_macPANId_t PollP__MLME_GET__macPANId(void ){
#line 120
  unsigned int __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 157 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__assembleDataRequestFrame(uint8_t destAddrMode, uint16_t destPANId, 
uint8_t *destAddrPtrLE, uint8_t srcAddrMode, ieee154_txframe_t *txFrame)
{

  ieee154_address_t srcAddress;
  uint8_t *mhr;
  uint16_t srcPANId;
  ieee154_address_t DstAddr;

#line 165
  srcPANId = PollP__MLME_GET__macPANId();

  memcpy(&DstAddr, destAddrPtrLE, destAddrMode == 2 ? 2 : 8);
  mhr = txFrame->header->mhr;
  mhr[MHR_INDEX_FC1] = FC1_FRAMETYPE_CMD | FC1_ACK_REQUEST;
  if (destAddrMode >= 2 && srcAddrMode >= 2 && destPANId == srcPANId) {
    mhr[MHR_INDEX_FC1] |= FC1_PAN_ID_COMPRESSION;
    }
#line 172
  mhr[MHR_INDEX_FC2] = destAddrMode << FC2_DEST_MODE_OFFSET;
  mhr[MHR_INDEX_FC2] |= srcAddrMode << FC2_SRC_MODE_OFFSET;
  if (srcAddrMode == 2) {
    srcAddress.shortAddress = PollP__MLME_GET__macShortAddress();
    }
  else {
#line 177
    srcAddress.extendedAddress = PollP__LocalExtendedAddress__get();
    }
#line 178
  txFrame->headerLen = PollP__FrameUtility__writeHeader(
  txFrame->header->mhr, 
  destAddrMode, 
  destPANId, 
  &DstAddr, 
  srcAddrMode, 
  srcPANId, 
  &srcAddress, 
  mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION ? TRUE : FALSE);
  txFrame->payload = &PollP__m_dataRequestCmdID;
  txFrame->payloadLen = 1;
}

# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static PollP__TxControlPool__t * PollP__TxControlPool__get(void ){
#line 97
  struct __nesc_unnamed4277 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
inline static PollP__TxFramePool__t * PollP__TxFramePool__get(void ){
#line 97
  struct __nesc_unnamed4276 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 122 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline ieee154_status_t PollP__DataRequest__poll(uint8_t client, uint8_t CoordAddrMode, 
uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t srcAddrMode)
{
  ieee154_txframe_t *txFrame;
  ieee154_txcontrol_t *txControl;
  ieee154_status_t status = IEEE154_TRANSACTION_OVERFLOW;

  ;
  if (client == 1U && PollP__m_numPending != 0) {

      PollP__DataRequest__pollDone(client);
      return IEEE154_SUCCESS;
    }
  else {
#line 134
    if ((txFrame = PollP__TxFramePool__get()) != (void *)0) {
        if ((txControl = PollP__TxControlPool__get()) != (void *)0) {
            txFrame->header = & txControl->header;
            txFrame->metadata = & txControl->metadata;
            txFrame->handle = client;
            PollP__assembleDataRequestFrame(CoordAddrMode, CoordPANId, 
            CoordAddressLE, srcAddrMode, txFrame);
            if ((status = PollP__PollTx__transmit(txFrame)) != IEEE154_SUCCESS) {
                PollP__TxControlPool__put(txControl);
                PollP__TxFramePool__put(txFrame);
                ;
              }
            else {
#line 146
              PollP__m_numPending++;
              }
          }
        else 
#line 147
          {
            PollP__TxFramePool__put(txFrame);
          }
      }
    }
#line 151
  ;
  if (status != IEEE154_SUCCESS) {
    PollP__DataRequest__pollDone(client);
    }
#line 154
  return status;
}

# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
inline static ieee154_status_t AssociateP__DataRequest__poll(uint8_t CoordAddrMode, uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t SrcAddrMode){
#line 46
  enum ieee154_status __nesc_result;
#line 46

#line 46
  __nesc_result = PollP__DataRequest__poll(0U, CoordAddrMode, CoordPANId, CoordAddressLE, SrcAddrMode);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 1044 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE)
{
  PibP__FrameUtility__convertToLE(destLE, & PibP__m_pib.macCoordExtendedAddress);
}

# 58 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void AssociateP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE){
#line 58
  PibP__FrameUtility__copyCoordExtendedAddressLE(destLE);
#line 58
}
#line 58
# 290 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macCoordShortAddress_t PibP__MLME_GET__macCoordShortAddress(void )
#line 290
{
#line 290
  return PibP__m_pib.macCoordShortAddress;
}

# 105 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macCoordShortAddress_t AssociateP__MLME_GET__macCoordShortAddress(void ){
#line 105
  unsigned int __nesc_result;
#line 105

#line 105
  __nesc_result = PibP__MLME_GET__macCoordShortAddress();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 199 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline void AssociateP__ResponseTimeout__fired(void )
{
  uint8_t coordAddress[8];
  nxle_uint16_t *shortAddress = (nxle_uint16_t *)coordAddress;

  if (!AssociateP__m_associationOngoing) {
    return;
    }


  ;
  if (AssociateP__m_coordAddrMode == ADDR_MODE_SHORT_ADDRESS) {
    __nesc_hton_leuint16((*shortAddress).nxdata, AssociateP__MLME_GET__macCoordShortAddress());
    }
  else {
#line 213
    AssociateP__FrameUtility__copyCoordExtendedAddressLE(coordAddress);
    }

  if (
#line 215
  AssociateP__DataRequest__poll(AssociateP__m_coordAddrMode, AssociateP__MLME_GET__macPANId(), 
  coordAddress, ADDR_MODE_EXTENDED_ADDRESS) != IEEE154_SUCCESS) {
      AssociateP__DataRequest__pollDone();
      ;
    }
}

# 340 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 159 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void IndirectTxP__IndirectTxTimeout__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static uint32_t IndirectTxP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = PibP__TimeCalc__timeElapsed(t0, t1);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 384 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__PendingAddrSpecUpdated__default__notify(bool val)
#line 384
{
#line 384
  return;
}

# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
inline static void IndirectTxP__PendingAddrSpecUpdated__notify(IndirectTxP__PendingAddrSpecUpdated__val_t val){
#line 74
  IndirectTxP__PendingAddrSpecUpdated__default__notify(val);
#line 74
}
#line 74
# 261 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

# 172 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline void DisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
{
  DisassociateP__DisassociationDirectTx__transmitDone(data, status);
}

# 385 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 385
{
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static void IndirectTxP__FrameTx__transmitDone(uint8_t arg_0x40bc0b48, ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  switch (arg_0x40bc0b48) {
#line 51
    case 0U:
#line 51
      AssociateP__AssociationResponseTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 1U:
#line 51
      DisassociateP__DisassociationIndirectTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 2U:
#line 51
      DataP__IndirectTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    default:
#line 51
      IndirectTxP__FrameTx__default__transmitDone(arg_0x40bc0b48, txFrame, status);
#line 51
      break;
#line 51
    }
#line 51
}
#line 51
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static bool IndirectTxP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = PibP__TimeCalc__hasExpired(t0, dt);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 189 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t IndirectTxP__IndirectTxTimeout__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(2U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 322 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__IndirectTxTimeout__fired(void )
{

  uint32_t now = IndirectTxP__IndirectTxTimeout__getNow();
#line 325
  uint32_t dt = 0;
  uint32_t persistenceTime = IndirectTxP__getPersistenceTimeSymbols();
  uint8_t i;

  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (IndirectTxP__m_txFrameTable[i] && IndirectTxP__m_txFrameTable[i] != IndirectTxP__m_pendingTxFrame) {
        if (IndirectTxP__TimeCalc__hasExpired(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), persistenceTime)) {
            ieee154_txframe_t *txFrame = IndirectTxP__m_txFrameTable[i];

#line 333
            txFrame->client &= ~IndirectTxP__SEND_THIS_FRAME;
            IndirectTxP__m_txFrameTable[i] = (void *)0;
            IndirectTxP__m_numTableEntries -= 1;
            if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
              IndirectTxP__m_numShortPending--;
              }
            else {
#line 338
              if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
                IndirectTxP__m_numExtPending--;
                }
              }
#line 340
            IndirectTxP__FrameTx__transmitDone(txFrame->client, txFrame, IEEE154_TRANSACTION_EXPIRED);
            IndirectTxP__PendingAddrSpecUpdated__notify(TRUE);
          }
        else {
#line 342
          if (IndirectTxP__TimeCalc__timeElapsed(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), now) > dt) {
              dt = IndirectTxP__TimeCalc__timeElapsed(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), now);
            }
          }
      }
#line 346
  if (dt != 0) {
      if (dt > persistenceTime) {
        dt = persistenceTime;
        }
#line 349
      IndirectTxP__IndirectTxTimeout__startOneShot(persistenceTime - dt);
    }
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t DispatchUnslottedCsmaP__RadioToken__request(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(12U);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
#line 145
inline static bool DispatchUnslottedCsmaP__RadioToken__isOwner(void ){
#line 145
  unsigned char __nesc_result;
#line 145

#line 145
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(12U);
#line 145

#line 145
  return __nesc_result;
#line 145
}
#line 145
# 379 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RxEnableStateChange__notify(bool whatever)
{
  if (!DispatchUnslottedCsmaP__RadioToken__isOwner()) {
    DispatchUnslottedCsmaP__RadioToken__request();
    }
  else {
#line 384
    DispatchUnslottedCsmaP__updateState();
    }
}

# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
inline static void RxEnableP__RxEnableStateChange__notify(RxEnableP__RxEnableStateChange__val_t val){
#line 74
  DispatchUnslottedCsmaP__RxEnableStateChange__notify(val);
#line 74
}
#line 74
# 176 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline void RxEnableP__MLME_RX_ENABLE__default__confirm(ieee154_status_t status)
#line 176
{
}

# 75 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RX_ENABLE.nc"
inline static void RxEnableP__MLME_RX_ENABLE__confirm(ieee154_status_t status){
#line 75
  RxEnableP__MLME_RX_ENABLE__default__confirm(status);
#line 75
}
#line 75
# 184 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, t0, dt, TRUE);
}

# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void RxEnableP__RxEnableTimer__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(4U, t0, dt);
#line 129
}
#line 129
# 139 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline void RxEnableP__RxEnableTimer__fired(void )
{
  if (!RxEnableP__m_isRxEnabled) {
      RxEnableP__m_isRxEnabled = TRUE;
      RxEnableP__RxEnableTimer__startOneShotAt(RxEnableP__m_rxOnAnchor, RxEnableP__m_rxOnOffset + RxEnableP__m_rxOnDuration);
    }
  else 
#line 144
    {
      RxEnableP__m_isRxEnabled = FALSE;
      if (RxEnableP__m_confirmPending) {



          RxEnableP__m_confirmPending = FALSE;
          ;
          RxEnableP__MLME_RX_ENABLE__confirm(IEEE154_SUCCESS);
        }
    }
  RxEnableP__RxEnableStateChange__notify(TRUE);
  ;
}

# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void TestDeviceC__DisassociateTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 73
}
#line 73
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t DisassociateP__TxControlPool__put(DisassociateP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t DisassociateP__TxFramePool__put(DisassociateP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t DisassociateP__DisassociationDirectTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(2U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 169 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static bool IndirectTxP__IndirectTxTimeout__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(2U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 189 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline ieee154_status_t IndirectTxP__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame)
{

  uint8_t i;

#line 193
  if (IndirectTxP__m_numTableEntries >= IndirectTxP__NUM_MAX_PENDING) {
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
  txFrame->client = client;
  __nesc_hton_uint32(txFrame->metadata->timestamp.nxdata, IndirectTxP__IndirectTxTimeout__getNow());
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (!IndirectTxP__m_txFrameTable[i]) {
      break;
      }
#line 202
  IndirectTxP__m_txFrameTable[i] = txFrame;
  IndirectTxP__m_numTableEntries += 1;
  if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
    IndirectTxP__m_numShortPending++;
    }
  else {
#line 206
    if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
      IndirectTxP__m_numExtPending++;
      }
    }
#line 208
  if (!IndirectTxP__IndirectTxTimeout__isRunning()) {
    IndirectTxP__IndirectTxTimeout__startOneShot(IndirectTxP__getPersistenceTimeSymbols());
    }
#line 210
  ;
  IndirectTxP__PendingAddrSpecUpdated__notify(TRUE);
  return IEEE154_SUCCESS;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t DisassociateP__DisassociationIndirectTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = IndirectTxP__FrameTx__transmit(1U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
inline static ieee154_status_t DisassociateP__DisassociationToCoord__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(3U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 288 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macCoordExtendedAddress_t PibP__MLME_GET__macCoordExtendedAddress(void )
#line 288
{
#line 288
  return PibP__m_pib.macCoordExtendedAddress;
}

# 102 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macCoordExtendedAddress_t DisassociateP__MLME_GET__macCoordExtendedAddress(void ){
#line 102
  unsigned long long __nesc_result;
#line 102

#line 102
  __nesc_result = PibP__MLME_GET__macCoordExtendedAddress();
#line 102

#line 102
  return __nesc_result;
#line 102
}
#line 102



inline static ieee154_macCoordShortAddress_t DisassociateP__MLME_GET__macCoordShortAddress(void ){
#line 105
  unsigned int __nesc_result;
#line 105

#line 105
  __nesc_result = PibP__MLME_GET__macCoordShortAddress();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
#line 120
inline static ieee154_macPANId_t DisassociateP__MLME_GET__macPANId(void ){
#line 120
  unsigned int __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static uint8_t DisassociateP__FrameUtility__writeHeader(uint8_t *mhr, uint8_t DstAddrMode, uint16_t DstPANId, ieee154_address_t *DstAddr, uint8_t SrcAddrMode, uint16_t SrcPANId, const ieee154_address_t *SrcAddr, bool PANIDCompression){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = PibP__FrameUtility__writeHeader(mhr, DstAddrMode, DstPANId, DstAddr, SrcAddrMode, SrcPANId, SrcAddr, PANIDCompression);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static DisassociateP__LocalExtendedAddress__val_t DisassociateP__LocalExtendedAddress__get(void ){
#line 55
  unsigned long long __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__GetLocalExtendedAddress__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static DisassociateP__TxControlPool__t * DisassociateP__TxControlPool__get(void ){
#line 97
  struct __nesc_unnamed4277 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
inline static DisassociateP__TxFramePool__t * DisassociateP__TxFramePool__get(void ){
#line 97
  struct __nesc_unnamed4276 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline ieee154_status_t DisassociateP__MLME_DISASSOCIATE__request(
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
bool TxIndirect, 
ieee154_security_t *security)
{
  ieee154_status_t status = IEEE154_SUCCESS;
  ieee154_txframe_t *txFrame = 0;
  ieee154_txcontrol_t *txControl = 0;
  ieee154_address_t srcAddress;

  if (security && security->SecurityLevel) {
    status = IEEE154_UNSUPPORTED_SECURITY;
    }
  else {
#line 99
    if (DisassociateP__MLME_GET__macPANId() != DevicePANID || (
    DeviceAddrMode != ADDR_MODE_SHORT_ADDRESS && DeviceAddrMode != ADDR_MODE_EXTENDED_ADDRESS)) {
      status = IEEE154_INVALID_PARAMETER;
      }
    else {
#line 102
      if (DisassociateP__m_disAssociationOngoing || !(txFrame = DisassociateP__TxFramePool__get())) {
        status = IEEE154_TRANSACTION_OVERFLOW;
        }
      else {
#line 104
        if (!(txControl = DisassociateP__TxControlPool__get())) {
            DisassociateP__TxFramePool__put(txFrame);
            status = IEEE154_TRANSACTION_OVERFLOW;
          }
        }
      }
    }
#line 108
  if (status == IEEE154_SUCCESS) {
      txFrame->header = & txControl->header;
      txFrame->metadata = & txControl->metadata;
      srcAddress.extendedAddress = DisassociateP__LocalExtendedAddress__get();
      txFrame->headerLen = DisassociateP__FrameUtility__writeHeader(
      txFrame->header->mhr, 
      DeviceAddrMode, 
      DisassociateP__MLME_GET__macPANId(), 
      &DeviceAddress, 
      ADDR_MODE_EXTENDED_ADDRESS, 
      DisassociateP__MLME_GET__macPANId(), 
      &srcAddress, 
      TRUE);
      txFrame->header->mhr[MHR_INDEX_FC1] = (FC1_ACK_REQUEST | FC1_FRAMETYPE_CMD) | FC1_PAN_ID_COMPRESSION;
      txFrame->header->mhr[MHR_INDEX_FC2] = FC2_SRC_MODE_EXTENDED | (
      DeviceAddrMode == ADDR_MODE_SHORT_ADDRESS ? FC2_DEST_MODE_SHORT : FC2_DEST_MODE_EXTENDED);
      DisassociateP__m_payloadDisassocRequest[0] = CMD_FRAME_DISASSOCIATION_NOTIFICATION;
      DisassociateP__m_payloadDisassocRequest[1] = DisassociateReason;
      txFrame->payload = DisassociateP__m_payloadDisassocRequest;
      txFrame->payloadLen = 2;
      DisassociateP__m_disAssociationOngoing = TRUE;

      if ((
#line 129
      DeviceAddrMode == ADDR_MODE_SHORT_ADDRESS && 
      DeviceAddress.shortAddress == DisassociateP__MLME_GET__macCoordShortAddress()) || (
      DeviceAddrMode == ADDR_MODE_EXTENDED_ADDRESS && 
      DeviceAddress.extendedAddress == DisassociateP__MLME_GET__macCoordExtendedAddress())) {
          status = DisassociateP__DisassociationToCoord__transmit(txFrame);
        }
      else {
#line 134
        if (TxIndirect) {
            status = DisassociateP__DisassociationIndirectTx__transmit(txFrame);
          }
        else 
#line 136
          {
            status = DisassociateP__DisassociationDirectTx__transmit(txFrame);
          }
        }
#line 139
      if (status != IEEE154_SUCCESS) {
          DisassociateP__m_disAssociationOngoing = FALSE;
          DisassociateP__TxFramePool__put(txFrame);
          DisassociateP__TxControlPool__put(txControl);
        }
    }
  ;
  return status;
}

# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
inline static ieee154_status_t TestDeviceC__MLME_DISASSOCIATE__request(uint8_t DeviceAddrMode, uint16_t DevicePANID, ieee154_address_t DeviceAddress, ieee154_disassociation_reason_t DisassociateReason, bool TxIndirect, ieee154_security_t *security){
#line 64
  enum ieee154_status __nesc_result;
#line 64

#line 64
  __nesc_result = DisassociateP__MLME_DISASSOCIATE__request(DeviceAddrMode, DevicePANID, DeviceAddress, DisassociateReason, TxIndirect, security);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 107 "TestDeviceC.nc"
static inline void TestDeviceC__DisassociateTimer__fired(void )
{
  ieee154_address_t coordAdr;

#line 110
  coordAdr.shortAddress = COORDINATOR_ADDRESS;







  if (
#line 111
  TestDeviceC__MLME_DISASSOCIATE__request(
  ADDR_MODE_SHORT_ADDRESS, 
  PAN_ID, 
  coordAdr, 
  IEEE154_DEVICE_WISHES_TO_LEAVE, 
  FALSE, 
  (void *)0)
   != IEEE154_SUCCESS) {
    TestDeviceC__DisassociateTimer__startOneShot(312500U);
    }
}

# 204 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x41527d88){
#line 83
  switch (arg_0x41527d88) {
#line 83
    case 0U:
#line 83
      ScanP__ScanTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      AssociateP__ResponseTimeout__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      IndirectTxP__IndirectTxTimeout__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      RxEnableP__RxEnableTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      TestDeviceC__DisassociateTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x41527d88);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isResetPending(void )
#line 64
{
#line 64
  return /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state & /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__RESET_PENDING ? TRUE : FALSE;
}

# 69 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 4;
}

#line 57
static inline uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size;
}

#line 97
static inline error_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__enqueue(/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size() < /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue[/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail] = newVal;
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail++;
      if (/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail == 4) {
#line 102
        /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__tail = 0;
        }
#line 103
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size++;
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__enqueue(/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 282 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void )
#line 282
{
#line 282
  return PibP__m_pib.macBeaconOrder;
}

# 93 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBeaconOrder_t IndirectTxP__MLME_GET__macBeaconOrder(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = PibP__MLME_GET__macBeaconOrder();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 310 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void )
#line 310
{
#line 310
  return PibP__m_pib.macTransactionPersistenceTime;
}

# 135 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macTransactionPersistenceTime_t IndirectTxP__MLME_GET__macTransactionPersistenceTime(void ){
#line 135
  unsigned int __nesc_result;
#line 135

#line 135
  __nesc_result = PibP__MLME_GET__macTransactionPersistenceTime();
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void AssociateP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE){
#line 64
  PibP__FrameUtility__convertToNative(destNative, srcLE);
#line 64
}
#line 64
# 356 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_leuint32(const void * source)
#line 356
{
  const uint8_t *base = source;

#line 358
  return ((((uint32_t )base[3] << 24) | (
  (uint32_t )base[2] << 16)) | (
  (uint32_t )base[1] << 8)) | base[0];
}

# 149 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security)
{
}

# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_COMM_STATUS.nc"
inline static void AssociateP__MLME_COMM_STATUS__indication(uint16_t PANId, uint8_t SrcAddrMode, ieee154_address_t SrcAddr, uint8_t DstAddrMode, ieee154_address_t DstAddr, ieee154_status_t status, ieee154_security_t *security){
#line 61
  TestDeviceC__MLME_COMM_STATUS__indication(PANId, SrcAddrMode, SrcAddr, DstAddrMode, DstAddr, status, security);
#line 61
}
#line 61
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DisassociateP__MLME_SET__macPANId(ieee154_macPANId_t value){
#line 138
  enum ieee154_status __nesc_result;
#line 138

#line 138
  __nesc_result = PibP__MLME_SET__macPANId(value);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 387 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__notify(const void *val)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 389
    DispatchUnslottedCsmaP__m_macRxOnWhenIdle = * (ieee154_macRxOnWhenIdle_t *)val;
#line 389
    __nesc_atomic_end(__nesc_atomic); }
  DispatchUnslottedCsmaP__RxEnableStateChange__notify(TRUE);
}

# 307 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setShortAddr(uint16_t addr)
#line 307
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 308
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_short_addr = addr;
    }
#line 311
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setShortAddr(uint16_t address){
#line 72
  CC2420ControlP__CC2420Config__setShortAddr(address);
#line 72
}
#line 72
# 318 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setPanAddr(uint16_t pan)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_pan = pan;
    }
#line 322
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPanAddr(uint16_t address){
#line 78
  CC2420ControlP__CC2420Config__setPanAddr(address);
#line 78
}
#line 78
# 329 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setPanCoordinator(bool pCoord)
#line 329
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 330
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_isPanCoord = pCoord;
    }
#line 333
    __nesc_atomic_end(__nesc_atomic); }
}

# 84 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPanCoordinator(bool pcoord){
#line 84
  CC2420ControlP__CC2420Config__setPanCoordinator(pcoord);
#line 84
}
#line 84
# 375 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 377
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_txPower = txPower;
    }
#line 380
    __nesc_atomic_end(__nesc_atomic); }
}

# 102 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setTxPower(uint8_t txPower){
#line 102
  CC2420ControlP__CC2420Config__setTxPower(txPower);
#line 102
}
#line 102
# 221 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dBm)
{
  uint8_t result;

  if (dBm >= 0) {
    result = 31;
    }
  else {
#line 227
    if (dBm > -2) {
      result = 27;
      }
    else {
#line 229
      if (dBm > -4) {
        result = 23;
        }
      else {
#line 231
        if (dBm > -6) {
          result = 19;
          }
        else {
#line 233
          if (dBm > -9) {
            result = 15;
            }
          else {
#line 235
            if (dBm > -13) {
              result = 11;
              }
            else {
#line 237
              if (dBm > -20) {
                result = 7;
                }
              else {
#line 240
                result = 3;
                }
              }
            }
          }
        }
      }
    }
#line 241
  return result;
}

# 362 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 364
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_CCAMode = mode;
    }
#line 367
    __nesc_atomic_end(__nesc_atomic); }
}

# 96 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setCCAMode(uint8_t mode){
#line 96
  CC2420ControlP__CC2420Config__setCCAMode(mode);
#line 96
}
#line 96
# 151 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DisassociateP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value){
#line 151
  enum ieee154_status __nesc_result;
#line 151

#line 151
  __nesc_result = PibP__MLME_SET__macShortAddress(value);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 478 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value)
#line 478
{
  PibP__m_pib.macAssociatedPANCoord = value;
  PibP__PIBUpdate__notify(IEEE154_macAssociatedPANCoord, & PibP__m_pib.macAssociatedPANCoord);
  return IEEE154_SUCCESS;
}

# 161 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DisassociateP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value){
#line 161
  enum ieee154_status __nesc_result;
#line 161

#line 161
  __nesc_result = PibP__MLME_SET__macAssociatedPANCoord(value);
#line 161

#line 161
  return __nesc_result;
#line 161
}
#line 161
#line 113
inline static ieee154_status_t DisassociateP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value){
#line 113
  enum ieee154_status __nesc_result;
#line 113

#line 113
  __nesc_result = PibP__MLME_SET__macCoordShortAddress(value);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
#line 108
inline static ieee154_status_t DisassociateP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value){
#line 108
  enum ieee154_status __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_SET__macCoordExtendedAddress(value);
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 94 "/usr/src/tinyos/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 77 "/usr/src/tinyos/tos/interfaces/Leds.nc"
inline static void TestDeviceC__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t DataP__TxFramePool__put(DataP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 266 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__MCPS_DATA__default__confirm(
message_t *msg, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp)
#line 270
{
}

# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
inline static void DataP__MCPS_DATA__confirm(message_t *frame, uint8_t msduHandle, ieee154_status_t status, uint32_t Timestamp){
#line 91
  DataP__MCPS_DATA__default__confirm(frame, msduHandle, status, Timestamp);
#line 91
}
#line 91
# 57 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )49U &= ~(0x01 << 5);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__clr();
#line 53
}
#line 53
# 49 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr(void )
#line 49
{
#line 49
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__HplGeneralIO__clr();
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*PlatformLedsC.Led1Impl*/Msp430GpioC__1__GeneralIO__clr();
#line 41
}
#line 41
# 89 "/usr/src/tinyos/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

# 72 "/usr/src/tinyos/tos/interfaces/Leds.nc"
inline static void TestDeviceC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 54 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t TestDeviceC__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value){
#line 54
  enum ieee154_status __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_SET__phyCurrentChannel(value);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 378 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value)
#line 378
{
  PibP__m_pib.macAutoRequest = value;
  PibP__PIBUpdate__notify(IEEE154_macAutoRequest, & PibP__m_pib.macAutoRequest);
  return IEEE154_SUCCESS;
}

# 80 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t TestDeviceC__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value){
#line 80
  enum ieee154_status __nesc_result;
#line 80

#line 80
  __nesc_result = PibP__MLME_SET__macAutoRequest(value);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
#line 138
inline static ieee154_status_t TestDeviceC__MLME_SET__macPANId(ieee154_macPANId_t value){
#line 138
  enum ieee154_status __nesc_result;
#line 138

#line 138
  __nesc_result = PibP__MLME_SET__macPANId(value);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
#line 113
inline static ieee154_status_t TestDeviceC__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value){
#line 113
  enum ieee154_status __nesc_result;
#line 113

#line 113
  __nesc_result = PibP__MLME_SET__macCoordShortAddress(value);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t AssociateP__TxControlPool__put(AssociateP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t AssociateP__TxFramePool__put(AssociateP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t AssociateP__AssociationRequestTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(1U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static uint8_t AssociateP__FrameUtility__writeHeader(uint8_t *mhr, uint8_t DstAddrMode, uint16_t DstPANId, ieee154_address_t *DstAddr, uint8_t SrcAddrMode, uint16_t SrcPANId, const ieee154_address_t *SrcAddr, bool PANIDCompression){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = PibP__FrameUtility__writeHeader(mhr, DstAddrMode, DstPANId, DstAddr, SrcAddrMode, SrcPANId, SrcAddr, PANIDCompression);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static AssociateP__LocalExtendedAddress__val_t AssociateP__LocalExtendedAddress__get(void ){
#line 55
  unsigned long long __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__GetLocalExtendedAddress__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t AssociateP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value){
#line 108
  enum ieee154_status __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_SET__macCoordExtendedAddress(value);
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108





inline static ieee154_status_t AssociateP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value){
#line 113
  enum ieee154_status __nesc_result;
#line 113

#line 113
  __nesc_result = PibP__MLME_SET__macCoordShortAddress(value);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
#line 138
inline static ieee154_status_t AssociateP__MLME_SET__macPANId(ieee154_macPANId_t value){
#line 138
  enum ieee154_status __nesc_result;
#line 138

#line 138
  __nesc_result = PibP__MLME_SET__macPANId(value);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
#line 54
inline static ieee154_status_t AssociateP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value){
#line 54
  enum ieee154_status __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_SET__phyCurrentChannel(value);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static AssociateP__TxControlPool__t * AssociateP__TxControlPool__get(void ){
#line 97
  struct __nesc_unnamed4277 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
inline static AssociateP__TxFramePool__t * AssociateP__TxFramePool__get(void ){
#line 97
  struct __nesc_unnamed4276 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline ieee154_status_t AssociateP__MLME_ASSOCIATE__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
uint8_t CoordAddrMode, 
uint16_t CoordPANID, 
ieee154_address_t CoordAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security)
{
  ieee154_status_t status = IEEE154_SUCCESS;
  ieee154_txframe_t *txFrame = 0;
  ieee154_txcontrol_t *txControl = 0;
  ieee154_address_t srcAddress;

  if (security && security->SecurityLevel) {
    status = IEEE154_UNSUPPORTED_SECURITY;
    }
  else {
#line 108
    if (((
#line 107
    ChannelPage != (IEEE154_SUPPORTED_CHANNELS >> 27) || LogicalChannel > 26) || 
    !(IEEE154_SUPPORTED_CHANNELS & ((uint32_t )1 << LogicalChannel))) || (
    CoordAddrMode != ADDR_MODE_SHORT_ADDRESS && CoordAddrMode != ADDR_MODE_EXTENDED_ADDRESS)) {
      status = IEEE154_INVALID_PARAMETER;
      }
    else {
#line 111
      if (AssociateP__m_associationOngoing || !(txFrame = AssociateP__TxFramePool__get())) {
        status = IEEE154_TRANSACTION_OVERFLOW;
        }
      else {
#line 113
        if (!(txControl = AssociateP__TxControlPool__get())) {
            AssociateP__TxFramePool__put(txFrame);
            status = IEEE154_TRANSACTION_OVERFLOW;
          }
        }
      }
    }
#line 117
  if (status == IEEE154_SUCCESS) {
      AssociateP__m_assocRespStatus = IEEE154_NO_DATA;
      AssociateP__m_shortAddress = 0xFFFF;
      AssociateP__MLME_SET__phyCurrentChannel(LogicalChannel);
      AssociateP__MLME_SET__macPANId(CoordPANID);
      AssociateP__m_coordAddrMode = CoordAddrMode;
      if (CoordAddrMode == ADDR_MODE_SHORT_ADDRESS) {
        AssociateP__MLME_SET__macCoordShortAddress(CoordAddress.shortAddress);
        }
      else {
#line 126
        AssociateP__MLME_SET__macCoordExtendedAddress(CoordAddress.extendedAddress);
        }
#line 127
      txFrame->header = & txControl->header;
      txFrame->metadata = & txControl->metadata;
      srcAddress.extendedAddress = AssociateP__LocalExtendedAddress__get();
      txFrame->headerLen = AssociateP__FrameUtility__writeHeader(
      txFrame->header->mhr, 
      CoordAddrMode, 
      CoordPANID, 
      &CoordAddress, 
      ADDR_MODE_EXTENDED_ADDRESS, 
      0xFFFF, 
      &srcAddress, 
      0);
      txFrame->header->mhr[MHR_INDEX_FC1] = FC1_ACK_REQUEST | FC1_FRAMETYPE_CMD;
      txFrame->header->mhr[MHR_INDEX_FC2] = FC2_SRC_MODE_EXTENDED | (
      CoordAddrMode == ADDR_MODE_SHORT_ADDRESS ? FC2_DEST_MODE_SHORT : FC2_DEST_MODE_EXTENDED);
      AssociateP__m_payloadAssocRequest[0] = CMD_FRAME_ASSOCIATION_REQUEST;
      AssociateP__m_payloadAssocRequest[1] = * (uint8_t *)&CapabilityInformation;
      txFrame->payload = AssociateP__m_payloadAssocRequest;
      txFrame->payloadLen = 2;
      AssociateP__m_associationOngoing = TRUE;
      if ((status = AssociateP__AssociationRequestTx__transmit(txFrame)) != IEEE154_SUCCESS) {
          AssociateP__m_associationOngoing = FALSE;
          AssociateP__TxFramePool__put(txFrame);
          AssociateP__TxControlPool__put(txControl);
        }
    }
  ;
  return status;
}

# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
inline static ieee154_status_t TestDeviceC__MLME_ASSOCIATE__request(uint8_t LogicalChannel, uint8_t ChannelPage, uint8_t CoordAddrMode, uint16_t CoordPANID, ieee154_address_t CoordAddress, ieee154_CapabilityInformation_t CapabilityInformation, ieee154_security_t *security){
#line 65
  enum ieee154_status __nesc_result;
#line 65

#line 65
  __nesc_result = AssociateP__MLME_ASSOCIATE__request(LogicalChannel, ChannelPage, CoordAddrMode, CoordPANID, CoordAddress, CapabilityInformation, security);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 264 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyCurrentPage_t PibP__MLME_GET__phyCurrentPage(void )
#line 264
{
#line 264
  return PibP__m_pib.phyCurrentPage;
}

# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_phyCurrentPage_t TestDeviceC__MLME_GET__phyCurrentPage(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = PibP__MLME_GET__phyCurrentPage();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 139 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 90 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(uint8_t num)
#line 90
{
#line 90
  return 0;
}

# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(uint8_t arg_0x41490ed8){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  switch (arg_0x41490ed8) {
#line 116
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 116
      break;
#line 116
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 116
      break;
#line 116
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 116
      break;
#line 116
    default:
#line 116
      __nesc_result = Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(arg_0x41490ed8);
#line 116
      break;
#line 116
    }
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 59 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getAlarm(uint8_t num)
#line 59
{
#line 59
  return Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(num) << 1;
}

# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getAlarm(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 286 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
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

#line 322
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 447 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline message_t *ScanP__MLME_BEACON_NOTIFY__default__indication(message_t *beaconFrame)
#line 447
{
#line 447
  return beaconFrame;
}

# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_BEACON_NOTIFY.nc"
inline static message_t *ScanP__MLME_BEACON_NOTIFY__indication(message_t *beaconFrame){
#line 61
  nx_struct message_t *__nesc_result;
#line 61

#line 61
  __nesc_result = ScanP__MLME_BEACON_NOTIFY__default__indication(beaconFrame);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 876 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__getPendAddrSpecOffset(uint8_t *macPayloadField)
{
  uint8_t gtsDescriptorCount = macPayloadField[BEACON_INDEX_GTS_SPEC] & GTS_DESCRIPTOR_COUNT_MASK;

#line 879
  return BEACON_INDEX_GTS_SPEC + 1 + (gtsDescriptorCount > 0 ? 1 + gtsDescriptorCount * 3 : 0);
}

#line 937
static inline void *PibP__BeaconFrame__getBeaconPayload(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t *payload = (uint8_t *)frame->data;

#line 941
  if ((mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_BEACON) {
      uint8_t pendAddrSpecOffset = PibP__getPendAddrSpecOffset(payload);
      uint8_t pendAddrSpec = payload[pendAddrSpecOffset];

#line 944
      payload += pendAddrSpecOffset + 1;
      if (pendAddrSpec & PENDING_ADDRESS_SHORT_MASK) {
        payload += (pendAddrSpec & PENDING_ADDRESS_SHORT_MASK) * 2;
        }
#line 947
      if (pendAddrSpec & PENDING_ADDRESS_EXT_MASK) {
        payload += ((pendAddrSpec & PENDING_ADDRESS_EXT_MASK) >> 4) * 8;
        }
    }
#line 950
  return payload;
}

static inline uint8_t PibP__BeaconFrame__getBeaconPayloadLength(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t len = ((ieee154_header_t *)frame->header)->length & FRAMECTL_LENGTH_MASK;

#line 957
  if ((mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_BEACON) {
      uint8_t *payload = PibP__BeaconFrame__getBeaconPayload(frame);

#line 959
      len = len - (payload - (uint8_t *)frame->data);
    }
  return len;
}

# 132 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
inline static uint8_t ScanP__BeaconFrame__getBeaconPayloadLength(message_t *frame){
#line 132
  unsigned char __nesc_result;
#line 132

#line 132
  __nesc_result = PibP__BeaconFrame__getBeaconPayloadLength(frame);
#line 132

#line 132
  return __nesc_result;
#line 132
}
#line 132
# 969 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__BeaconFrame__parsePANDescriptor(
message_t *frame, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_PANDescriptor_t *pdescriptor)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t offset;
  ieee154_metadata_t *metadata = (ieee154_metadata_t *)frame->metadata;

  if ((mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) != FC1_FRAMETYPE_BEACON || ((
  mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) != FC2_SRC_MODE_SHORT && (
  mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) != FC2_SRC_MODE_EXTENDED)) {
    return FAIL;
    }
  pdescriptor->CoordAddrMode = (mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) >> FC2_SRC_MODE_OFFSET;
  offset = MHR_INDEX_ADDRESS;
  pdescriptor->CoordPANId = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
  offset += sizeof(ieee154_macPANId_t );

  if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
    pdescriptor->CoordAddress.shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
    }
  else {
#line 992
    PibP__FrameUtility__convertToNative(& pdescriptor->CoordAddress.extendedAddress, &mhr[offset]);
    }
  pdescriptor->LogicalChannel = LogicalChannel;
  pdescriptor->ChannelPage = ChannelPage;
  ((uint8_t *)& pdescriptor->SuperframeSpec)[0] = __nesc_ntoh_uint8(frame->data[BEACON_INDEX_SF_SPEC1].nxdata);
  ((uint8_t *)& pdescriptor->SuperframeSpec)[1] = __nesc_ntoh_uint8(frame->data[BEACON_INDEX_SF_SPEC2].nxdata);
  pdescriptor->GTSPermit = __nesc_ntoh_uint8(frame->data[BEACON_INDEX_GTS_SPEC].nxdata) & GTS_SPEC_PERMIT ? 1 : 0;
  pdescriptor->LinkQuality = __nesc_ntoh_uint8(metadata->linkQuality.nxdata);
  pdescriptor->TimeStamp = __nesc_ntoh_uint32(metadata->timestamp.nxdata);

  pdescriptor->SecurityFailure = IEEE154_SUCCESS;
  pdescriptor->SecurityLevel = 0;
  pdescriptor->KeyIdMode = 0;
  pdescriptor->KeySource = 0;
  pdescriptor->KeyIndex = 0;



  return SUCCESS;
}

# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
inline static error_t ScanP__BeaconFrame__parsePANDescriptor(message_t *frame, uint8_t LogicalChannel, uint8_t ChannelPage, ieee154_PANDescriptor_t *pdescriptor){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = PibP__BeaconFrame__parsePANDescriptor(frame, LogicalChannel, ChannelPage, pdescriptor);
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 164 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void ScanP__ScanTimer__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 276 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macAutoRequest_t PibP__MLME_GET__macAutoRequest(void )
#line 276
{
#line 276
  return PibP__m_pib.macAutoRequest;
}

# 81 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macAutoRequest_t ScanP__MLME_GET__macAutoRequest(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PibP__MLME_GET__macAutoRequest();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 151 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t ScanP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value){
#line 151
  enum ieee154_status __nesc_result;
#line 151

#line 151
  __nesc_result = PibP__MLME_SET__macShortAddress(value);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
#line 54
inline static ieee154_status_t ScanP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value){
#line 54
  enum ieee154_status __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_SET__phyCurrentChannel(value);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
#line 113
inline static ieee154_status_t ScanP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value){
#line 113
  enum ieee154_status __nesc_result;
#line 113

#line 113
  __nesc_result = PibP__MLME_SET__macCoordShortAddress(value);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
#line 138
inline static ieee154_status_t ScanP__MLME_SET__macPANId(ieee154_macPANId_t value){
#line 138
  enum ieee154_status __nesc_result;
#line 138

#line 138
  __nesc_result = PibP__MLME_SET__macPANId(value);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 736 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void *PibP__Frame__getPayload(message_t *frame)
{
  uint8_t *payload = (uint8_t *)frame->data;

#line 739
  return payload;
}

# 152 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static void *ScanP__Frame__getPayload(message_t *frame){
#line 152
  void *__nesc_result;
#line 152

#line 152
  __nesc_result = PibP__Frame__getPayload(frame);
#line 152

#line 152
  return __nesc_result;
#line 152
}
#line 152
# 347 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline message_t *ScanP__RadioRx__received(message_t *frame)
{
  if (!ScanP__m_busy) {
    return frame;
    }
  if (ScanP__m_scanType == ORPHAN_SCAN) {
      uint8_t *payload = ScanP__Frame__getPayload(frame);

#line 354
      if (!ScanP__m_resultIndex) {
        if ((((ieee154_header_t *)frame->header)->mhr[0] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_CMD && 
        payload[0] == CMD_FRAME_COORDINATOR_REALIGNMENT) {




            ScanP__MLME_SET__macPANId(__nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[1]).nxdata));
            ScanP__MLME_SET__macCoordShortAddress(__nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[3]).nxdata));
            ScanP__MLME_SET__phyCurrentChannel(__nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[5]).nxdata));
            ScanP__MLME_SET__macShortAddress(__nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[6]).nxdata));
            ScanP__m_resultIndex++;
            ;
            ScanP__m_terminateScan = TRUE;
            ScanP__ScanTimer__stop();
            ScanP__RadioOff__off();
          }
        }
    }
  else {
#line 371
    if ((((ieee154_header_t *)frame->header)->mhr[0] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_BEACON) {







        if (!ScanP__MLME_GET__macAutoRequest()) {
          return ScanP__MLME_BEACON_NOTIFY__indication(frame);
          }
        else {
#line 381
          if (ScanP__m_resultIndex >= ScanP__m_resultListNumEntries) {
              ScanP__m_terminateScan = TRUE;
              ScanP__ScanTimer__stop();
              ScanP__RadioOff__off();
            }
          else {


            if (
#line 385
            ScanP__BeaconFrame__parsePANDescriptor(
            frame, 
            ScanP__m_currentChannelNum, 
            IEEE154_SUPPORTED_CHANNELS >> 27, 
            &((ieee154_PANDescriptor_t *)ScanP__m_resultList)[ScanP__m_resultIndex]) == SUCCESS) {



                uint8_t i;
                ieee154_PANDescriptor_t *descriptor = (ieee154_PANDescriptor_t *)ScanP__m_resultList;

                ;

                for (i = 0; i < ScanP__m_resultIndex; i++) 
                  if (descriptor[i].CoordPANId == descriptor[ScanP__m_resultIndex].CoordPANId && 
                  descriptor[i].CoordAddrMode == descriptor[ScanP__m_resultIndex].CoordAddrMode) {


                    if ((
#line 401
                    descriptor[i].CoordAddrMode == ADDR_MODE_SHORT_ADDRESS && 
                    descriptor[i].CoordAddress.shortAddress == 
                    descriptor[ScanP__m_resultIndex].CoordAddress.shortAddress) || (
                    descriptor[i].CoordAddrMode == ADDR_MODE_EXTENDED_ADDRESS && 
                    descriptor[i].CoordAddress.extendedAddress == 
                    descriptor[ScanP__m_resultIndex].CoordAddress.extendedAddress)) {
                      break;
                      }
                    }
#line 408
                if (i == ScanP__m_resultIndex) {
                  ScanP__m_resultIndex++;
                  }
              }
            }
          }
#line 411
        if (ScanP__BeaconFrame__getBeaconPayloadLength(frame) > 0) {
          return ScanP__MLME_BEACON_NOTIFY__indication(frame);
          }
      }
    }
#line 414
  return frame;
}

# 214 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordRealignmentP.nc"
static inline void CoordRealignmentP__MLME_ORPHAN__default__indication(
uint64_t OrphanAddress, 
ieee154_security_t *security)
#line 216
{
}

# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ORPHAN.nc"
inline static void CoordRealignmentP__MLME_ORPHAN__indication(uint64_t OrphanAddress, ieee154_security_t *security){
#line 53
  CoordRealignmentP__MLME_ORPHAN__default__indication(OrphanAddress, security);
#line 53
}
#line 53
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t CoordRealignmentP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__Frame__getSrcAddr(frame, address);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
#line 55
inline static uint8_t CoordRealignmentP__Frame__getSrcAddrMode(message_t *frame){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__Frame__getSrcAddrMode(frame);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 93 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordRealignmentP.nc"
static inline message_t *CoordRealignmentP__OrphanNotificationRx__received(message_t *frame)
{
  ieee154_address_t srcAddress;

#line 96
  if (CoordRealignmentP__Frame__getSrcAddrMode(frame) == ADDR_MODE_EXTENDED_ADDRESS && 
  CoordRealignmentP__Frame__getSrcAddr(frame, &srcAddress) == SUCCESS) {
    CoordRealignmentP__MLME_ORPHAN__indication(
    srcAddress.extendedAddress, 
    (void *)0);
    }
#line 101
  return frame;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t IndirectTxP__CoordCapTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(7U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 728 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__Frame__getHeaderLength(message_t *frame)
{
  uint8_t len;
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

#line 732
  PibP__FrameUtility__getMHRLength(mhr[0], mhr[1], &len);
  return len;
}

# 241 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint8_t IndirectTxP__IEEE154Frame__getHeaderLength(message_t *frame){
#line 241
  unsigned char __nesc_result;
#line 241

#line 241
  __nesc_result = PibP__Frame__getHeaderLength(frame);
#line 241

#line 241
  return __nesc_result;
#line 241
}
#line 241
#line 55
inline static uint8_t IndirectTxP__IEEE154Frame__getSrcAddrMode(message_t *frame){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__Frame__getSrcAddrMode(frame);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 827 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__Frame__getDstAddrMode(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

#line 830
  return (mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) >> FC2_DEST_MODE_OFFSET;
}

# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint8_t IndirectTxP__IEEE154Frame__getDstAddrMode(message_t *frame){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = PibP__Frame__getDstAddrMode(frame);
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 678 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__Frame__setAddressingFields(message_t *frame, 
uint8_t srcAddrMode, 
uint8_t dstAddrMode, 
uint16_t dstPANId, 
ieee154_address_t *dstAddr, 
ieee154_security_t *security)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  ieee154_address_t srcAddress;
  ieee154_macPANId_t srcPANId = PibP__MLME_GET__macPANId();

  if (security && security->SecurityLevel) {
    return FAIL;
    }
#line 691
  mhr[MHR_INDEX_FC2] &= ~(FC2_DEST_MODE_MASK | FC2_SRC_MODE_MASK);
  mhr[MHR_INDEX_FC2] |= dstAddrMode << FC2_DEST_MODE_OFFSET;
  mhr[MHR_INDEX_FC2] |= srcAddrMode << FC2_SRC_MODE_OFFSET;
  if (srcAddrMode == ADDR_MODE_SHORT_ADDRESS) {
    srcAddress.shortAddress = PibP__MLME_GET__macShortAddress();
    }
  else {
#line 697
    srcAddress.extendedAddress = PibP__GetLocalExtendedAddress__get();
    }
  if (
#line 698
  dstAddrMode >= ADDR_MODE_SHORT_ADDRESS && 
  srcAddrMode >= ADDR_MODE_SHORT_ADDRESS && 
  dstPANId == srcPANId) {
    mhr[MHR_INDEX_FC1] |= FC1_PAN_ID_COMPRESSION;
    }
  else {
#line 703
    mhr[MHR_INDEX_FC1] &= ~FC1_PAN_ID_COMPRESSION;
    }
#line 704
  PibP__FrameUtility__writeHeader(
  mhr, 
  dstAddrMode, 
  dstPANId, 
  dstAddr, 
  srcAddrMode, 
  srcPANId, 
  &srcAddress, 
  mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION ? TRUE : FALSE);
  return SUCCESS;
}

# 139 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t IndirectTxP__IEEE154Frame__setAddressingFields(message_t *frame, uint8_t SrcAddrMode, uint8_t DstAddrMode, uint16_t DstPANID, ieee154_address_t *DstAddr, ieee154_security_t *security){
#line 139
  unsigned char __nesc_result;
#line 139

#line 139
  __nesc_result = PibP__Frame__setAddressingFields(frame, SrcAddrMode, DstAddrMode, DstPANID, DstAddr, security);
#line 139

#line 139
  return __nesc_result;
#line 139
}
#line 139
# 807 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__Frame__getSrcPANId(message_t *frame, uint16_t *PANID)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t offset = MHR_INDEX_ADDRESS;
  uint8_t destMode = mhr[1] & FC2_DEST_MODE_MASK;

#line 812
  if (!(mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_SHORT)) {
    return FAIL;
    }
#line 814
  if (destMode == FC2_DEST_MODE_SHORT) {
    offset += 4;
    }
  else {
#line 816
    if (destMode == FC2_DEST_MODE_EXTENDED) {
      offset += 10;
      }
    }
#line 818
  if (mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION && mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_SHORT) {
    *PANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[MHR_INDEX_ADDRESS]).nxdata);
    }
  else {
#line 820
    if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
      *PANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
      }
    else {
#line 823
      *PANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
      }
    }
#line 824
  return SUCCESS;
}

# 81 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t IndirectTxP__IEEE154Frame__getSrcPANId(message_t *frame, uint16_t *PANID){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PibP__Frame__getSrcPANId(frame, PANID);
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 69
inline static error_t IndirectTxP__IEEE154Frame__getSrcAddr(message_t *frame, ieee154_address_t *address){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__Frame__getSrcAddr(frame, address);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 269 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__transmitEmptyDataFrame(message_t *dataRequestFrame)
{


  message_t *emptyDataMsg = (message_t *)IndirectTxP__m_emptyDataFrame.header;
  ieee154_address_t dstAddr;
  uint16_t dstPanID;

  if (IndirectTxP__m_emptyDataFrame.client != 0) {
    return;
    }
#line 279
  if (IndirectTxP__IEEE154Frame__getSrcAddr(dataRequestFrame, &dstAddr) != IEEE154_SUCCESS || 
  IndirectTxP__IEEE154Frame__getSrcPANId(dataRequestFrame, &dstPanID) != IEEE154_SUCCESS) {
    return;
    }
#line 282
  IndirectTxP__IEEE154Frame__setAddressingFields(emptyDataMsg, 
  IndirectTxP__IEEE154Frame__getDstAddrMode(dataRequestFrame), 
  IndirectTxP__IEEE154Frame__getSrcAddrMode(dataRequestFrame), 
  dstPanID, 
  &dstAddr, 
  (void *)0);
  (
  (ieee154_header_t *)(&IndirectTxP__m_emptyDataFrame)->header)->mhr[MHR_INDEX_FC1] |= FC1_FRAMETYPE_DATA;
  IndirectTxP__m_emptyDataFrame.headerLen = IndirectTxP__IEEE154Frame__getHeaderLength(emptyDataMsg);
  IndirectTxP__m_emptyDataFrame.client = 1;
  if (IndirectTxP__CoordCapTx__transmit(&IndirectTxP__m_emptyDataFrame) != IEEE154_SUCCESS) {
    IndirectTxP__m_emptyDataFrame.client = 0;
    }
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t IndirectTxP__tryCoordCapTxTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IndirectTxP__tryCoordCapTxTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 215 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline message_t *IndirectTxP__DataRequestRx__received(message_t *frame)
{
  uint8_t i;
#line 217
  uint8_t j;
#line 217
  uint8_t srcAddressMode;
#line 217
  uint8_t dstAddressMode;
#line 217
  uint8_t *src;
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t destMode = mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK;
  ieee154_txframe_t *dataResponseFrame = (void *)0;



  srcAddressMode = mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK;
  if (!(srcAddressMode & FC2_SRC_MODE_SHORT)) {
    return frame;
    }
#line 227
  src = mhr + MHR_INDEX_ADDRESS;
  if (destMode == FC2_DEST_MODE_SHORT) {
    src += 4;
    }
  else {
#line 230
    if (destMode == FC2_DEST_MODE_EXTENDED) {
      src += 10;
      }
    }
#line 232
  if (!(mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION && mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_SHORT)) {
    src += 2;
    }
#line 234
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) {
      if (IndirectTxP__m_txFrameTable[i] == (void *)0) {
        continue;
        }
      else 
#line 237
        {
          dstAddressMode = IndirectTxP__m_txFrameTable[i]->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK;
          if ((dstAddressMode << 4) != srcAddressMode) {
            continue;
            }
          else 
#line 241
            {

              uint8_t *dst = &IndirectTxP__m_txFrameTable[i]->header->mhr[MHR_INDEX_ADDRESS] + 2;
              uint8_t len = srcAddressMode == FC2_SRC_MODE_SHORT ? 2 : 8;

#line 245
              for (j = 0; j < len; j++) 
                if (dst[j] != src[j]) {
                  break;
                  }
#line 248
              if (j == len) {
                  if (dataResponseFrame == (void *)0) {
                    dataResponseFrame = IndirectTxP__m_txFrameTable[i];
                    }
                  else {
#line 252
                    dataResponseFrame->header->mhr[MHR_INDEX_FC1] |= FC1_FRAME_PENDING;
                    }
                }
            }
        }
    }
#line 257
  if (dataResponseFrame != (void *)0) {

      ;
      dataResponseFrame->client |= IndirectTxP__SEND_THIS_FRAME;
      IndirectTxP__tryCoordCapTxTask__postTask();
    }
  else 
#line 262
    {
      ;
      IndirectTxP__transmitEmptyDataFrame(frame);
    }
  return frame;
}

# 272 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__MCPS_DATA__default__indication(message_t *frame)
#line 272
{
#line 272
  return frame;
}

# 105 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
inline static message_t *DataP__MCPS_DATA__indication(message_t *frame){
#line 105
  nx_struct message_t *__nesc_result;
#line 105

#line 105
  __nesc_result = DataP__MCPS_DATA__default__indication(frame);
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 220 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__dataReceived(message_t *frame)
{
  return DataP__MCPS_DATA__indication(frame);
}

#line 215
static inline message_t *DataP__DeviceCapRx__received(message_t *frame)
{
  return DataP__dataReceived(frame);
}

# 142 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_DISASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
ieee154_security_t *security)
{
}

# 81 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
inline static void DisassociateP__MLME_DISASSOCIATE__indication(uint64_t DeviceAddress, ieee154_disassociation_reason_t DisassociateReason, ieee154_security_t *security){
#line 81
  TestDeviceC__MLME_DISASSOCIATE__indication(DeviceAddress, DisassociateReason, security);
#line 81
}
#line 81
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t DisassociateP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__Frame__getSrcAddr(frame, address);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
#line 55
inline static uint8_t DisassociateP__Frame__getSrcAddrMode(message_t *frame){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__Frame__getSrcAddrMode(frame);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 216 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline message_t *DisassociateP__DisassociationRxFromDevice__received(message_t *frame)
{

  ieee154_address_t address;

  if (DisassociateP__Frame__getSrcAddrMode(frame) == ADDR_MODE_EXTENDED_ADDRESS && 
  DisassociateP__Frame__getSrcAddr(frame, &address) == SUCCESS) {
    DisassociateP__MLME_DISASSOCIATE__indication(address.extendedAddress, __nesc_ntoh_uint8(frame->data[1].nxdata), (void *)0);
    }
#line 224
  ;
  return frame;
}

# 136 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_ASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security)
{
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
inline static void AssociateP__MLME_ASSOCIATE__indication(uint64_t DeviceAddress, ieee154_CapabilityInformation_t CapabilityInformation, ieee154_security_t *security){
#line 84
  TestDeviceC__MLME_ASSOCIATE__indication(DeviceAddress, CapabilityInformation, security);
#line 84
}
#line 84
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t AssociateP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__Frame__getSrcAddr(frame, address);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
#line 55
inline static uint8_t AssociateP__Frame__getSrcAddrMode(message_t *frame){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__Frame__getSrcAddrMode(frame);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 236 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline message_t *AssociateP__AssociationRequestRx__received(message_t *frame)
{
  uint8_t *payload = (uint8_t *)& frame->data;
  ieee154_address_t srcAddress;

#line 240
  if (AssociateP__Frame__getSrcAddrMode(frame) == ADDR_MODE_EXTENDED_ADDRESS && 
  AssociateP__Frame__getSrcAddr(frame, &srcAddress) == SUCCESS) {
    AssociateP__MLME_ASSOCIATE__indication(srcAddress.extendedAddress, 
    * (ieee154_CapabilityInformation_t *)(payload + 1), 0);
    }
#line 244
  return frame;
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t BeaconRequestRxP__sendBeaconTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BeaconRequestRxP__sendBeaconTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 168 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconRequestRxP.nc"
static inline void BeaconRequestRxP__IEEE154TxBeaconPayload__default__aboutToTransmit(void )
#line 168
{
}

# 131 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154TxBeaconPayload.nc"
inline static void BeaconRequestRxP__IEEE154TxBeaconPayload__aboutToTransmit(void ){
#line 131
  BeaconRequestRxP__IEEE154TxBeaconPayload__default__aboutToTransmit();
#line 131
}
#line 131
# 278 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void )
#line 278
{
#line 278
  return PibP__m_pib.macBattLifeExt;
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBattLifeExt_t BeaconRequestRxP__MLME_GET__macBattLifeExt(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = PibP__MLME_GET__macBattLifeExt();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 274 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macAssociationPermit_t PibP__MLME_GET__macAssociationPermit(void )
#line 274
{
#line 274
  return PibP__m_pib.macAssociationPermit;
}

# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macAssociationPermit_t BeaconRequestRxP__MLME_GET__macAssociationPermit(void ){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = PibP__MLME_GET__macAssociationPermit();
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 332 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macPanCoordinator_t PibP__MLME_GET__macPanCoordinator(void )
#line 332
{
#line 332
  return PibP__m_pib.macPanCoordinator;
}

# 168 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macPanCoordinator_t BeaconRequestRxP__MLME_GET__macPanCoordinator(void ){
#line 168
  unsigned char __nesc_result;
#line 168

#line 168
  __nesc_result = PibP__MLME_GET__macPanCoordinator();
#line 168

#line 168
  return __nesc_result;
#line 168
}
#line 168
# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void BeaconRequestRxP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE){
#line 55
  PibP__FrameUtility__copyLocalExtendedAddressLE(destLE);
#line 55
}
#line 55
# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macPANId_t BeaconRequestRxP__MLME_GET__macPANId(void ){
#line 120
  unsigned int __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120









inline static ieee154_macShortAddress_t BeaconRequestRxP__MLME_GET__macShortAddress(void ){
#line 129
  unsigned int __nesc_result;
#line 129

#line 129
  __nesc_result = PibP__MLME_GET__macShortAddress();
#line 129

#line 129
  return __nesc_result;
#line 129
}
#line 129
# 86 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconRequestRxP.nc"
static inline message_t *BeaconRequestRxP__BeaconRequestRx__received(message_t *frame)
{
  uint8_t offset = 0;
  ieee154_macShortAddress_t shortAddress = BeaconRequestRxP__MLME_GET__macShortAddress();
  bool isShortAddr;

  shortAddress = BeaconRequestRxP__MLME_GET__macShortAddress();
  isShortAddr = shortAddress != 0xFFFE;
  BeaconRequestRxP__m_beaconFrame.header->mhr[MHR_INDEX_FC1] = FC1_FRAMETYPE_BEACON;
  BeaconRequestRxP__m_beaconFrame.header->mhr[MHR_INDEX_FC2] = isShortAddr ? FC2_SRC_MODE_SHORT : FC2_SRC_MODE_EXTENDED;
  offset = MHR_INDEX_ADDRESS;
  __nesc_hton_leuint16((* (nxle_uint16_t *)&BeaconRequestRxP__m_beaconFrame.header->mhr[offset]).nxdata, BeaconRequestRxP__MLME_GET__macPANId());
  offset += sizeof(ieee154_macPANId_t );
  if (isShortAddr) {
      __nesc_hton_leuint16((* (nxle_uint16_t *)&BeaconRequestRxP__m_beaconFrame.header->mhr[offset]).nxdata, shortAddress);
      offset += sizeof(ieee154_macShortAddress_t );
    }
  else 
#line 102
    {
      BeaconRequestRxP__FrameUtility__copyLocalExtendedAddressLE(&BeaconRequestRxP__m_beaconFrame.header->mhr[offset]);
      offset += 8;
    }
  BeaconRequestRxP__m_beaconFrame.headerLen = offset;


  BeaconRequestRxP__m_payload[BEACON_INDEX_SF_SPEC1] = 0xff;
  BeaconRequestRxP__m_payload[BEACON_INDEX_SF_SPEC2] = 0x00;
  if (BeaconRequestRxP__MLME_GET__macPanCoordinator() == TRUE) {
    BeaconRequestRxP__m_payload[BEACON_INDEX_SF_SPEC2] |= SF_SPEC2_PAN_COORD;
    }
#line 113
  if (BeaconRequestRxP__MLME_GET__macAssociationPermit() == TRUE) {
    BeaconRequestRxP__m_payload[BEACON_INDEX_SF_SPEC2] |= SF_SPEC2_ASSOCIATION_PERMIT;
    }
#line 115
  if (BeaconRequestRxP__MLME_GET__macBattLifeExt() == TRUE) {
    BeaconRequestRxP__m_payload[BEACON_INDEX_SF_SPEC2] |= SF_SPEC2_BATT_LIFE_EXT;
    }
  BeaconRequestRxP__m_payload[BEACON_INDEX_GTS_SPEC] = 0;

  BeaconRequestRxP__m_payload[BEACON_INDEX_GTS_SPEC + 1] = 0;

  BeaconRequestRxP__IEEE154TxBeaconPayload__aboutToTransmit();
  BeaconRequestRxP__sendBeaconTask__postTask();

  return frame;
}

# 521 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline message_t *DispatchUnslottedCsmaP__FrameRx__default__received(uint8_t client, message_t *data)
#line 521
{
#line 521
  return data;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
inline static message_t *DispatchUnslottedCsmaP__FrameRx__received(uint8_t arg_0x40b3a268, message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  switch (arg_0x40b3a268) {
#line 43
    case FC1_FRAMETYPE_DATA:
#line 43
      __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_ASSOCIATION_REQUEST:
#line 43
      __nesc_result = AssociateP__AssociationRequestRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_DISASSOCIATION_NOTIFICATION:
#line 43
      __nesc_result = DisassociateP__DisassociationRxFromDevice__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_DATA_REQUEST:
#line 43
      __nesc_result = IndirectTxP__DataRequestRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_ORPHAN_NOTIFICATION:
#line 43
      __nesc_result = CoordRealignmentP__OrphanNotificationRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_BEACON_REQUEST:
#line 43
      __nesc_result = BeaconRequestRxP__BeaconRequestRx__received(frame);
#line 43
      break;
#line 43
    default:
#line 43
      __nesc_result = DispatchUnslottedCsmaP__FrameRx__default__received(arg_0x40b3a268, frame);
#line 43
      break;
#line 43
    }
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
inline static message_t *PollP__DataRx__received(message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 223 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__MLME_POLL__default__confirm(ieee154_status_t status)
#line 223
{
}

# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
inline static void PollP__MLME_POLL__confirm(ieee154_status_t status){
#line 73
  PollP__MLME_POLL__default__confirm(status);
#line 73
}
#line 73
# 191 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline message_t *PollP__DataExtracted__received(message_t *frame, ieee154_txframe_t *txFrame)
{
  if (!txFrame) {
      ;
      return frame;
    }
  else {
#line 197
    ;
    }
#line 198
  if (txFrame->handle == PollP__HANDLE_MLME_POLL_REQUEST) {
    PollP__MLME_POLL__confirm(IEEE154_SUCCESS);
    }
  else {
#line 201
    PollP__DataRequest__pollDone(txFrame->handle);
    }
#line 202
  txFrame->handle = PollP__HANDLE_MLME_POLL_SUCCESS;

  return PollP__DataRx__received(frame);
}

# 200 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline message_t *DisassociateP__DisassociationDirectRxFromCoord__received(message_t *frame)
{

  ieee154_address_t address;

  address.extendedAddress = DisassociateP__LocalExtendedAddress__get();
  DisassociateP__MLME_DISASSOCIATE__indication(address.extendedAddress, __nesc_ntoh_uint8(frame->data[1].nxdata), (void *)0);
  return frame;
}

static inline message_t *DisassociateP__DisassociationExtractedFromCoord__received(message_t *frame, ieee154_txframe_t *txFrame)
{

  return DisassociateP__DisassociationDirectRxFromCoord__received(frame);
}

# 129 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macShortAddress_t AssociateP__MLME_GET__macShortAddress(void ){
#line 129
  unsigned int __nesc_result;
#line 129

#line 129
  __nesc_result = PibP__MLME_GET__macShortAddress();
#line 129

#line 129
  return __nesc_result;
#line 129
}
#line 129
# 121 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
inline static void AssociateP__MLME_ASSOCIATE__confirm(uint16_t AssocShortAddress, uint8_t status, ieee154_security_t *security){
#line 121
  TestDeviceC__MLME_ASSOCIATE__confirm(AssocShortAddress, status, security);
#line 121
}
#line 121
# 151 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t AssociateP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value){
#line 151
  enum ieee154_status __nesc_result;
#line 151

#line 151
  __nesc_result = PibP__MLME_SET__macShortAddress(value);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void AssociateP__ResponseTimeout__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
# 173 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline message_t *AssociateP__AssociationResponseExtracted__received(message_t *frame, ieee154_txframe_t *txFrame)
{
  uint8_t *payload = (uint8_t *)& frame->data;
  ieee154_macShortAddress_t shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)(payload + 1)).nxdata);
  ieee154_association_status_t assocRespStatus = *(payload + 3);

  if (AssociateP__m_associationOngoing) {
      AssociateP__ResponseTimeout__stop();
      AssociateP__m_associationOngoing = FALSE;
      if (assocRespStatus == IEEE154_ASSOCIATION_SUCCESSFUL) {
          AssociateP__MLME_SET__macShortAddress(shortAddress);
          if (AssociateP__MLME_GET__macCoordShortAddress() != 0xFFFF && 
          AssociateP__Frame__getSrcAddrMode(frame) == ADDR_MODE_EXTENDED_ADDRESS) {
              ieee154_address_t coordExtendedAddress;

#line 187
              AssociateP__Frame__getSrcAddr(frame, &coordExtendedAddress);
              AssociateP__MLME_SET__macCoordExtendedAddress(coordExtendedAddress.extendedAddress);
            }
        }
      else {
#line 191
        AssociateP__MLME_SET__macPANId(0xFFFF);
        }
#line 192
      AssociateP__MLME_ASSOCIATE__confirm(AssociateP__MLME_GET__macShortAddress(), assocRespStatus, (void *)0);
      ;
    }

  return frame;
}

# 524 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline message_t *DispatchUnslottedCsmaP__FrameExtracted__default__received(uint8_t client, message_t *msg, ieee154_txframe_t *txFrame)
#line 524
{
#line 524
  return msg;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
inline static message_t *DispatchUnslottedCsmaP__FrameExtracted__received(uint8_t arg_0x40b37718, message_t *rxFrame, ieee154_txframe_t *txFrame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  switch (arg_0x40b37718) {
#line 43
    case FC1_FRAMETYPE_DATA:
#line 43
      __nesc_result = PollP__DataExtracted__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_ASSOCIATION_RESPONSE:
#line 43
      __nesc_result = AssociateP__AssociationResponseExtracted__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_DISASSOCIATION_NOTIFICATION:
#line 43
      __nesc_result = DisassociateP__DisassociationExtractedFromCoord__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    default:
#line 43
      __nesc_result = DispatchUnslottedCsmaP__FrameExtracted__default__received(arg_0x40b37718, rxFrame, txFrame);
#line 43
      break;
#line 43
    }
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 485 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline message_t *DispatchUnslottedCsmaP__RadioRx__received(message_t *frame)
{


  uint8_t *payload = (uint8_t *)frame->data;
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t frameType = mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK;

  if (frameType == FC1_FRAMETYPE_CMD) {
    frameType += payload[0];
    }
#line 495
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 495
    {
      if (DispatchUnslottedCsmaP__m_indirectTxPending) {
          message_t *frameBuf;

#line 498
          DispatchUnslottedCsmaP__IndirectTxWaitTimer__stop();






          DispatchUnslottedCsmaP__m_txStatus = IEEE154_SUCCESS;
          frameBuf = DispatchUnslottedCsmaP__FrameExtracted__received(frameType, frame, DispatchUnslottedCsmaP__m_lastFrame);
          DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired();
          {
            nx_struct message_t *__nesc_temp = 
#line 508
            frameBuf;

            {
#line 508
              __nesc_atomic_end(__nesc_atomic); 
#line 508
              return __nesc_temp;
            }
          }
        }
      else 
#line 510
        {
          nx_struct message_t *__nesc_temp = 
#line 510
          DispatchUnslottedCsmaP__FrameRx__received(frameType, frame);

          {
#line 510
            __nesc_atomic_end(__nesc_atomic); 
#line 510
            return __nesc_temp;
          }
        }
    }
#line 513
    __nesc_atomic_end(__nesc_atomic); }
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
inline static message_t *PromiscuousModeP__FrameRx__received(message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame)
{
  if (PromiscuousModeP__m_state == PromiscuousModeP__S_STARTED) {
      ((ieee154_header_t *)frame->header)->length |= FRAMECTL_PROMISCUOUS;
      return PromiscuousModeP__FrameRx__received(frame);
    }
  else {
#line 114
    return frame;
    }
}

# 109 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline message_t *RadioControlImplP__MacRx__default__received(uint8_t client, message_t *frame)
{
  while (!0) {
#line 111
      break;
    }
#line 111
  ;
  return frame;
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static message_t *RadioControlImplP__MacRx__received(uint8_t arg_0x40ae7848, message_t *frame){
#line 84
  nx_struct message_t *__nesc_result;
#line 84

#line 84
  switch (arg_0x40ae7848) {
#line 84
    case 0:
#line 84
      __nesc_result = ScanP__RadioRx__received(frame);
#line 84
      break;
#line 84
    case 2:
#line 84
      __nesc_result = PromiscuousModeP__PromiscuousRx__received(frame);
#line 84
      break;
#line 84
    case 12U:
#line 84
      __nesc_result = DispatchUnslottedCsmaP__RadioRx__received(frame);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = RadioControlImplP__MacRx__default__received(arg_0x40ae7848, frame);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 70 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline bool PromiscuousModeP__PromiscuousModeGet__get(void )
{
  return PromiscuousModeP__m_state == PromiscuousModeP__S_STARTED;
}

# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static RadioControlImplP__RadioPromiscuousMode__val_t RadioControlImplP__RadioPromiscuousMode__get(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PromiscuousModeP__PromiscuousModeGet__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline message_t *RadioControlImplP__PhyRx__received(message_t *msg)
{
  uint8_t *mhr = ((ieee154_header_t *)msg->header)->mhr;

  ;



  if ((
#line 85
  mhr[1] & FC2_FRAME_VERSION_MASK) > FC2_FRAME_VERSION_1
   && !RadioControlImplP__RadioPromiscuousMode__get()) {
    return msg;
    }


  if (
#line 90
  mhr[0] & FC1_SECURITY_ENABLED
   && !RadioControlImplP__RadioPromiscuousMode__get()) {
    return msg;
    }
  return RadioControlImplP__MacRx__received(RadioControlImplP__ArbiterInfo__userId(), msg);
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static message_t *CC2420TKN154P__RadioRx__received(message_t *frame){
#line 84
  nx_struct message_t *__nesc_result;
#line 84

#line 84
  __nesc_result = RadioControlImplP__PhyRx__received(frame);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 430 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline message_t *CC2420TKN154P__CC2420Rx__received(message_t *frame)
{
  if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING) {
    return CC2420TKN154P__RadioRx__received(frame);
    }
  else {
#line 435
    return frame;
    }
}

# 45 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
inline static message_t *CC2420ReceiveP__CC2420Rx__received(message_t *data){
#line 45
  nx_struct message_t *__nesc_result;
#line 45

#line 45
  __nesc_result = CC2420TKN154P__CC2420Rx__received(data);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 399 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 399
{
  uint8_t payloadLen = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length - CC2420ReceiveP__m_mhrLen - 2;
  ieee154_metadata_t *metadata = (ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 403
    while (!(CC2420ReceiveP__m_state != CC2420ReceiveP__S_STOPPED)) {
#line 403
        break;
      }
#line 404
    __nesc_atomic_end(__nesc_atomic); }
#line 403
  ;
  ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length = __nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[payloadLen + 1].nxdata) & 0x7f;
  __nesc_hton_int8(metadata->rssi.nxdata, __nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[payloadLen].nxdata));
  __nesc_hton_uint8(metadata->linkQuality.nxdata, ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length);
  ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length = payloadLen;
  CC2420ReceiveP__m_rxFramePtr = CC2420ReceiveP__CC2420Rx__received(CC2420ReceiveP__m_rxFramePtr);
#line 421
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 421
    CC2420ReceiveP__receivingPacket = FALSE;
#line 421
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__clr();
#line 41
}
#line 41
# 70 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID, txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 209 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

#line 189
static inline cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  /* atomic removed: atomic calls only */
#line 194
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 196
          status;

#line 196
          return __nesc_temp;
        }
      }
  }
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

# 51 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__rxControlStopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__rxControlStopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 849 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__RxControl__stopDone(error_t error)
{
  CC2420TKN154P__rxControlStopDoneTask__postTask();
}

# 132 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static void CC2420ReceiveP__AsyncSplitControl__stopDone(error_t error){
#line 132
  CC2420TKN154P__RxControl__stopDone(error);
#line 132
}
#line 132
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 201 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__stopContinueTask__runTask(void )
{
  while (!(CC2420ReceiveP__receivingPacket != TRUE)) {
#line 203
      break;
    }
#line 203
  ;
  CC2420ReceiveP__SpiResource__release();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__AsyncSplitControl__stopDone(SUCCESS);
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 180 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(uint8_t id)
#line 180
{
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(uint8_t arg_0x41168148){
#line 102
  switch (arg_0x41168148) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 102
      CC2420SpiP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__default__granted(arg_0x41168148);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 130 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(uint8_t id)
#line 130
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Resource__granted(id);
}

# 202 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(uint8_t id)
#line 202
{
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(uint8_t arg_0x4123fbd0){
#line 102
  switch (arg_0x4123fbd0) {
#line 102
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 102
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartResource__granted(/*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID);
#line 102
      break;
#line 102
    default:
#line 102
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__default__granted(arg_0x4123fbd0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 190 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static inline void /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask(void )
#line 190
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
    }
#line 194
    __nesc_atomic_end(__nesc_atomic); }
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceConfigure__configure(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
  /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__granted(/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId);
}

# 251 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(uint8_t id, uint8_t *tx_buf, uint8_t *rx_buf, uint16_t len, error_t error)
#line 251
{
}

# 82 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(uint8_t arg_0x41167d88, uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  switch (arg_0x41167d88) {
#line 82
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC*/Msp430Spi0C__0__CLIENT_ID:
#line 82
      CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    default:
#line 82
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__default__sendDone(arg_0x41167d88, txBuf, rxBuf, len, error);
#line 82
      break;
#line 82
    }
#line 82
}
#line 82
# 244 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone(void )
#line 244
{
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__sendDone(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf, /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len, 
  SUCCESS);
}

#line 227
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask(void )
#line 227
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 228
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
#line 228
    __nesc_atomic_end(__nesc_atomic); }
}

# 416 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 417
{
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__set();
#line 40
}
#line 40
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 352 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void )
{
  return CC2420ControlP__acceptReservedFrames;
}

# 90 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Config__isPromiscuousModeEnabled();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 363 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ackFrame)
#line 363
{
  /* atomic removed: atomic calls only */
#line 364
  {
    if (type == IEEE154_TYPE_ACK) {
        if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && 
        CC2420TransmitP__m_frame->header->mhr[2] == ((ieee154_header_t *)ackFrame->header)->mhr[2]) {
            CC2420TransmitP__BackoffAlarm__stop();
            CC2420TransmitP__signalDone(((ieee154_header_t *)ackFrame->header)->mhr[0] & 0x10 ? TRUE : FALSE, SUCCESS);
          }
      }
  }
}

# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 62 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 48 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static error_t CC2420ReceiveP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = PibP__FrameUtility__getMHRLength(fcf1, fcf2, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 59 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline uint8_t /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw(void )
#line 59
{
#line 59
  return * (volatile uint8_t * )32U & (0x01 << 0);
}

#line 60
static inline bool /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get(void )
#line 60
{
#line 60
  return /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__getRaw() != 0;
}

# 73 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = /*HplMsp430GeneralIOC.P10*/HplMsp430GeneralIOP__0__IO__get();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 51 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline bool /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get(void )
#line 51
{
#line 51
  return /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__HplGeneralIO__get();
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOPM*/Msp430GpioC__6__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 261 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 262
{
  uint8_t *buf;

  /* atomic removed: atomic calls only */
#line 265
  {
    buf = (uint8_t *)& ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length;
    CC2420ReceiveP__rxFrameLength = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length;

    switch (CC2420ReceiveP__m_state) {

        case CC2420ReceiveP__S_RX_LENGTH: 
          CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;
        if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) {

            CC2420ReceiveP__flush();
          }
        else {
            if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {

                CC2420ReceiveP__flush();
              }


            if (CC2420ReceiveP__rxFrameLength <= sizeof(ieee154_header_t ) - 1 + 118 + 2) {
                if (CC2420ReceiveP__rxFrameLength > 0) {
                    if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                        CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                      }
                    else {

                        CC2420ReceiveP__flush();
                      }
                  }
                else 

                  {

                    CC2420ReceiveP__flush();
                  }
              }
            else 



              {

                CC2420ReceiveP__flush();
              }
          }
        break;

        case CC2420ReceiveP__S_RX_FCF: 
          if (CC2420ReceiveP__FrameUtility__getMHRLength(buf[1], buf[2], &CC2420ReceiveP__m_mhrLen) != SUCCESS || 
          CC2420ReceiveP__m_mhrLen > CC2420ReceiveP__rxFrameLength - 2) {

              CC2420ReceiveP__flush();
              break;
            }
          else {
#line 319
            if (CC2420ReceiveP__m_mhrLen > CC2420ReceiveP__SACK_HEADER_LENGTH) {
                CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_HEADER;
                CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
                CC2420ReceiveP__m_mhrLen - CC2420ReceiveP__SACK_HEADER_LENGTH);
                break;
              }
            else 
#line 324
              {
              }
            }


        case CC2420ReceiveP__S_RX_HEADER: 



          if (CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen - 2 > 118) {
            CC2420ReceiveP__flush();
            }
          else 
#line 335
            {
              CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
              CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__m_rxFramePtr->data, CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen);
            }
        break;

        case CC2420ReceiveP__S_RX_PAYLOAD: 
          CC2420ReceiveP__CSN__set();

        if (!CC2420ReceiveP__m_missed_packets) {

            CC2420ReceiveP__SpiResource__release();
          }

        if (CC2420ReceiveP__m_timestamp_size) {
            if (CC2420ReceiveP__rxFrameLength > 4) {
                __nesc_hton_uint32(((ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata)->timestamp.nxdata, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
                CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
                CC2420ReceiveP__m_timestamp_size--;
              }
          }
        else 
#line 355
          {
            __nesc_hton_uint32(((ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata)->timestamp.nxdata, 0xffffffff);
          }



        if (__nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen - 1].nxdata) >> 7 && rx_buf) {
            uint8_t type = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->mhr[0] & 0x07;

            CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_rxFramePtr);


            if ((
#line 366
            type != IEEE154_TYPE_ACK || CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled())
             && !CC2420ReceiveP__m_stop) {
                CC2420ReceiveP__receiveDone_task__postTask();
                return;
              }
          }

        CC2420ReceiveP__waitForNextPacket();
        break;

        default: 
          CC2420ReceiveP__receivingPacket = FALSE;
        CC2420ReceiveP__CSN__set();
        CC2420ReceiveP__SpiResource__release();
        if (CC2420ReceiveP__m_stop) {
            CC2420ReceiveP__continueStop();
            return;
          }
        break;
      }
  }
}

# 370 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x410c6010, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x410c6010) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x410c6010, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 100 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 103
          break;
        }
#line 103
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_TX;
  TKN154TimingP__SymbolAlarm__startAt(t0 - 16, dt);
}

# 37 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitTx(uint32_t t0, uint32_t dt){
#line 37
  TKN154TimingP__ReliableWait__waitTx(t0, dt);
#line 37
}
#line 37
# 464 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__loadDoneRadioTx(void )
{
  /* atomic removed: atomic calls only */
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_PENDING;
    if (CC2420TKN154P__m_dt == 0) {
      CC2420TKN154P__ReliableWait__waitTxDone();
      }
    else {
#line 472
      CC2420TKN154P__ReliableWait__waitTx(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt);
      }
  }
}

#line 739
static inline void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error)
{
  /* atomic removed: atomic calls only */
#line 741
  {
    switch (CC2420TKN154P__m_state) 
      {
        case CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA: CC2420TKN154P__loadDoneRadioTx();
#line 744
        break;
        case CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED: CC2420TKN154P__nextIterationUnslottedCsma();
#line 745
        break;
        case CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED: CC2420TKN154P__nextIterationSlottedCsma();
#line 746
        break;
        default: while (!0) {
#line 747
              break;
            }
#line 747
        ;
#line 747
        break;
      }
  }
}

# 41 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error){
#line 41
  CC2420TKN154P__CC2420Tx__loadTXFIFODone(data, error);
#line 41
}
#line 41
# 172 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
{
  /* atomic removed: atomic calls only */
#line 174
  {
    CC2420TransmitP__CSN__set();
    if (tx_buf == & CC2420TransmitP__m_frame->header->length) {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__TXFIFO__write(CC2420TransmitP__m_frame->header->mhr, CC2420TransmitP__m_frame->headerLen);
        return;
      }
    else {
#line 180
      if (tx_buf == CC2420TransmitP__m_frame->header->mhr) {
          CC2420TransmitP__CSN__clr();
          CC2420TransmitP__TXFIFO__write(CC2420TransmitP__m_frame->payload, CC2420TransmitP__m_frame->payloadLen);
          return;
        }
      }
  }
#line 186
  CC2420TransmitP__m_state = CC2420TransmitP__S_READY_TX;
  CC2420TransmitP__CC2420Tx__loadTXFIFODone(CC2420TransmitP__m_frame, error);
}

# 391 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 391
{
}

# 373 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x410c6010, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x410c6010) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x410c6010, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 138 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void CC2420TKN154P__SplitControl__stopDone(error_t error){
#line 138
  PibP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set();
#line 48
}
#line 48
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__set();
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__set();
#line 40
}
#line 40
# 57 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 5);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

# 53 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__clr();
#line 53
}
#line 53
# 49 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__clr();
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__clr();
#line 41
}
#line 41
# 53 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr(void ){
#line 53
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr();
#line 53
}
#line 53
# 49 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr(void )
#line 49
{
#line 49
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__clr();
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__clr();
#line 41
}
#line 41
# 186 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 186
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 64 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__stopVReg(void ){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 228 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopOscillator(void )
#line 228
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 229
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 231
            FAIL;

            {
#line 231
              __nesc_atomic_end(__nesc_atomic); 
#line 231
              return __nesc_temp;
            }
          }
        }
#line 233
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SXOSCOFF__strobe();
      CC2420ControlP__CSN__set();
    }
#line 238
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__stopOscillator(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = CC2420ControlP__CC2420Power__stopOscillator();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 193 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__stopSpiReserved(void )
{

  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Power__stopOscillator();
  CC2420TKN154P__CC2420Power__stopVReg();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPED;
  CC2420TKN154P__SplitControl__stopDone(SUCCESS);
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__energyDetectionTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__energyDetectionTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 53 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static error_t CC2420TKN154P__CC2420Config__sync(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420ControlP__CC2420Config__sync();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 312 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__edReserved(void )
{
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__CC2420Power__rxOn();
  CC2420TKN154P__m_edStartTime = CC2420TKN154P__LocalTime__get();
  CC2420TKN154P__energyDetectionTask__postTask();
}

# 162 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 162
{
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(), dt);
}

# 84 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(uint8_t num, uint32_t dt)
#line 84
{
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void Alarm32khzTo62500hzTransformC__AlarmFrom__start(uint8_t arg_0x41490ed8, Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt){
#line 66
  switch (arg_0x41490ed8) {
#line 66
    case /*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID, dt);
#line 66
      break;
#line 66
    default:
#line 66
      Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(arg_0x41490ed8, dt);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 55 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__Alarm__start(uint8_t num, uint32_t dt)
#line 55
{
#line 55
  Alarm32khzTo62500hzTransformC__AlarmFrom__start(num, dt >> 1);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupAlarm__start(CC2420ControlP__StartupAlarm__size_type dt){
#line 66
  Alarm32khzTo62500hzTransformC__Alarm__start(/*Ieee802154NonBeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID, dt);
#line 66
}
#line 66
# 56 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 5;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 48 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set(void ){
#line 48
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__set();
#line 48
}
#line 48
# 48 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set(void )
#line 48
{
#line 48
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__set();
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__set();
#line 40
}
#line 40
# 174 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 174
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 175
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 177
            FAIL;

            {
#line 177
              __nesc_atomic_end(__nesc_atomic); 
#line 177
              return __nesc_temp;
            }
          }
        }
#line 179
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 180
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupAlarm__start(CC2420_TIME_VREN * 2);
  return SUCCESS;
}

# 52 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__startVReg(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 149 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__startSpiReserved(void )
{

  CC2420TKN154P__CC2420Power__startVReg();
}

#line 868
static inline void CC2420TKN154P__SpiResource__granted(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_STARTING: CC2420TKN154P__startSpiReserved();
#line 872
      break;
      case CC2420TKN154P__S_ED: CC2420TKN154P__edReserved();
#line 873
      break;
      case CC2420TKN154P__S_RESERVE_RX_SPI: CC2420TKN154P__rxSpiReserved();
#line 874
      break;
      case CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA: 
        case CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED: 
          case CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED: CC2420TKN154P__txSpiReserved();
#line 877
      break;
      case CC2420TKN154P__S_TX_ACTIVE_NO_CSMA: 
        case CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA: 
          case CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA: CC2420TKN154P__sendDoneSpiReserved();
#line 880
      break;
      case CC2420TKN154P__S_STOPPING: CC2420TKN154P__stopSpiReserved();
#line 881
      break;
      case CC2420TKN154P__S_OFF_PENDING: CC2420TKN154P__offSpiReserved();
#line 882
      break;
      default: while (!0) {
#line 883
            break;
          }
#line 883
      ;
#line 883
      break;
    }
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420TKN154P__SpiResource__granted();
#line 102
}
#line 102
# 168 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 168
{

  CC2420ControlP__Resource__granted();
}

# 246 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 246
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    {
      switch (CC2420ReceiveP__m_state) 
        {
          case CC2420ReceiveP__S_STOPPED: while (!0) {
#line 250
                break;
              }
#line 250
          ;
#line 250
          break;
          default: CC2420ReceiveP__receive();
        }
    }
#line 253
    __nesc_atomic_end(__nesc_atomic); }
}

# 367 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x410c8558){
#line 102
  switch (arg_0x410c8558) {
#line 102
    case /*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x410c8558);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 358 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 69 "/usr/src/tinyos/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__DispatchReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = DispatchUnslottedCsmaP__Reset__init();
#line 62
  __nesc_result = ecombine(__nesc_result, DispatchUnslottedCsmaP__Reset__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 53 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size == 0;
}

# 169 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconRequestRxP.nc"
static inline void BeaconRequestRxP__IEEE154TxBeaconPayload__default__beaconTransmitted(void )
#line 169
{
}

# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154TxBeaconPayload.nc"
inline static void BeaconRequestRxP__IEEE154TxBeaconPayload__beaconTransmitted(void ){
#line 138
  BeaconRequestRxP__IEEE154TxBeaconPayload__default__beaconTransmitted();
#line 138
}
#line 138
# 129 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconRequestRxP.nc"
static inline void BeaconRequestRxP__BeaconRequestResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 129
{
  BeaconRequestRxP__IEEE154TxBeaconPayload__beaconTransmitted();
}

# 320 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macResponseWaitTime_t PibP__MLME_GET__macResponseWaitTime(void )
#line 320
{
#line 320
  return PibP__m_pib.macResponseWaitTime;
}

# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macResponseWaitTime_t AssociateP__MLME_GET__macResponseWaitTime(void ){
#line 150
  unsigned char __nesc_result;
#line 150

#line 150
  __nesc_result = PibP__MLME_GET__macResponseWaitTime();
#line 150

#line 150
  return __nesc_result;
#line 150
}
#line 150
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void AssociateP__ResponseTimeout__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(1U, dt);
#line 73
}
#line 73
# 157 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline void AssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  AssociateP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  AssociateP__TxFramePool__put(txFrame);
  if (status != IEEE154_SUCCESS) {
      ;
      AssociateP__m_associationOngoing = FALSE;
      AssociateP__MLME_ASSOCIATE__confirm(0xFFFF, status, 0);
    }
  else 
#line 165
    {

      AssociateP__ResponseTimeout__startOneShot(AssociateP__MLME_GET__macResponseWaitTime() * IEEE154_aBaseSuperframeDuration);
      ;
    }
}

# 101 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
inline static void DisassociateP__MLME_DISASSOCIATE__confirm(ieee154_status_t status, uint8_t DeviceAddrMode, uint16_t DevicePANID, ieee154_address_t DeviceAddress){
#line 101
  TestDeviceC__MLME_DISASSOCIATE__confirm(status, DeviceAddrMode, DevicePANID, DeviceAddress);
#line 101
}
#line 101
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void DisassociateP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE){
#line 64
  PibP__FrameUtility__convertToNative(destNative, srcLE);
#line 64
}
#line 64
# 149 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline void DisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
{

  uint8_t *mhr = ((ieee154_header_t *)data->header)->mhr;
#line 152
  uint8_t srcAddrOffset = 7;
  uint8_t DeviceAddrMode = (mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) >> FC2_SRC_MODE_OFFSET;
  uint16_t DevicePANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[MHR_INDEX_ADDRESS]).nxdata);
  ieee154_address_t DeviceAddress;

  if ((mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
    srcAddrOffset += 6;
    }
#line 159
  DisassociateP__FrameUtility__convertToNative(& DeviceAddress.extendedAddress, &mhr[srcAddrOffset]);
  DisassociateP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)data->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  DisassociateP__TxFramePool__put(data);
  ;
  DisassociateP__m_disAssociationOngoing = FALSE;



  if (status == IEEE154_SUCCESS || status == IEEE154_NO_ACK) {
    DisassociateP__resetPanValuesInPib();
    }
#line 169
  DisassociateP__MLME_DISASSOCIATE__confirm(status, DeviceAddrMode, DevicePANID, DeviceAddress);
}

# 240 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

static inline void DataP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

# 207 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  ;
  PollP__m_numPending--;
  if (txFrame->handle != PollP__HANDLE_MLME_POLL_SUCCESS) {

      if (status == IEEE154_SUCCESS) {
        status = IEEE154_NO_DATA;
        }
#line 215
      if (txFrame->handle == PollP__HANDLE_MLME_POLL_REQUEST) {
        PollP__MLME_POLL__confirm(status);
        }
      else {
#line 218
        PollP__DataRequest__pollDone(txFrame->handle);
        }
    }
#line 220
  PollP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  PollP__TxFramePool__put(txFrame);
}

# 353 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__CoordCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  uint8_t i;

  ;

  if (txFrame == &IndirectTxP__m_emptyDataFrame) {
      IndirectTxP__m_emptyDataFrame.client = 0;
      return;
    }
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (IndirectTxP__m_txFrameTable[i] == txFrame) {
        IndirectTxP__m_txFrameTable[i] = (void *)0;
        break;
      }
  IndirectTxP__PendingAddrSpecUpdated__notify(TRUE);
  IndirectTxP__m_pendingTxFrame = (void *)0;
  txFrame->client = IndirectTxP__m_client;
  txFrame->client &= ~IndirectTxP__SEND_THIS_FRAME;
  IndirectTxP__m_numTableEntries -= 1;
  if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
    IndirectTxP__m_numShortPending--;
    }
  else {
#line 375
    if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
      IndirectTxP__m_numExtPending--;
      }
    }
#line 377
  IndirectTxP__FrameTx__transmitDone(txFrame->client, txFrame, status);
  IndirectTxP__tryCoordCapTxTask__postTask();
}

# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t CoordRealignmentP__TxFramePool__put(CoordRealignmentP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t CoordRealignmentP__TxControlPool__put(CoordRealignmentP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_COMM_STATUS.nc"
inline static void CoordRealignmentP__MLME_COMM_STATUS__indication(uint16_t PANId, uint8_t SrcAddrMode, ieee154_address_t SrcAddr, uint8_t DstAddrMode, ieee154_address_t DstAddr, ieee154_status_t status, ieee154_security_t *security){
#line 61
  TestDeviceC__MLME_COMM_STATUS__indication(PANId, SrcAddrMode, SrcAddr, DstAddrMode, DstAddr, status, security);
#line 61
}
#line 61
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void CoordRealignmentP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE){
#line 64
  PibP__FrameUtility__convertToNative(destNative, srcLE);
#line 64
}
#line 64
# 182 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordRealignmentP.nc"
static inline void CoordRealignmentP__CoordRealignmentTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  uint8_t *mhr = ((ieee154_header_t *)txFrame->header)->mhr;
  ieee154_address_t dstAddr;
  ieee154_address_t srcAddr;

  if (CoordRealignmentP__m_busy) {
      CoordRealignmentP__FrameUtility__convertToNative(& dstAddr.extendedAddress, &mhr[MHR_INDEX_ADDRESS + 2]);
      CoordRealignmentP__FrameUtility__convertToNative(& srcAddr.extendedAddress, &mhr[MHR_INDEX_ADDRESS + 2 + 8 + 2]);
      CoordRealignmentP__MLME_COMM_STATUS__indication(__nesc_ntoh_leuint16(
      (* (nxle_uint16_t *)&txFrame->payload[1]).nxdata), 
      ADDR_MODE_EXTENDED_ADDRESS, 
      srcAddr, 
      ADDR_MODE_EXTENDED_ADDRESS, 
      dstAddr, 
      status, 
      (void *)0);
      CoordRealignmentP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
      CoordRealignmentP__TxFramePool__put(txFrame);
      CoordRealignmentP__m_busy = FALSE;
    }
}

# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetResetPending(void )
#line 66
{
#line 66
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state &= ~/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__RESET_PENDING;
}

# 81 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue(void ){
#line 81
  struct __nesc_unnamed4276 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 58
inline static uint8_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setResetPending(void )
#line 65
{
#line 65
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state |= /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__RESET_PENDING;
}

static inline error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Reset__init(void )
{
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setResetPending();
  while (/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size()) {
      ieee154_txframe_t *txFrame = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue();

#line 73
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(txFrame->client, txFrame, IEEE154_TRANSACTION_OVERFLOW);
    }
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetResetPending();
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__DispatchQueueReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Reset__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void RxEnableP__RxEnableTimer__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
# 68 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline error_t RxEnableP__Reset__init(void )
{
  if (RxEnableP__m_confirmPending) {
      RxEnableP__m_confirmPending = FALSE;
      RxEnableP__MLME_RX_ENABLE__confirm(IEEE154_SUCCESS);
    }
  RxEnableP__m_isRxEnabled = FALSE;
  RxEnableP__RxEnableTimer__stop();
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline error_t PromiscuousModeP__Init__init(void )
{
  PromiscuousModeP__m_state = PromiscuousModeP__S_STOPPED;
  return SUCCESS;
}

# 76 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordRealignmentP.nc"
static inline error_t CoordRealignmentP__Init__init(void )
{
  return SUCCESS;
}

# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void IndirectTxP__IndirectTxTimeout__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
# 80 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline error_t IndirectTxP__Reset__init(void )
{
  uint8_t i;


  IndirectTxP__IndirectTxTimeout__stop();
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (IndirectTxP__m_txFrameTable[i] != (void *)0) {
      IndirectTxP__FrameTx__transmitDone(IndirectTxP__m_txFrameTable[i]->client, IndirectTxP__m_txFrameTable[i], IEEE154_TRANSACTION_OVERFLOW);
      }
#line 89
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    IndirectTxP__m_txFrameTable[i] = (void *)0;
  IndirectTxP__m_pendingTxFrame = (void *)0;
  IndirectTxP__m_numTableEntries = 0;
  IndirectTxP__m_numShortPending = 0;
  IndirectTxP__m_numExtPending = 0;

  IndirectTxP__m_emptyDataFrame.header = &IndirectTxP__m_emptyDataFrameHeader;
  IndirectTxP__m_emptyDataFrame.metadata = &IndirectTxP__m_emptyDataFrameMetadata;
  IndirectTxP__m_emptyDataFrame.payload = &IndirectTxP__m_numExtPending;
  IndirectTxP__m_emptyDataFrame.payloadLen = 0;
  IndirectTxP__m_emptyDataFrame.client = 0;
  return SUCCESS;
}

# 70 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline error_t PollP__Init__init(void )
{
  PollP__m_numPending = 0;
  return SUCCESS;
}

# 74 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline error_t DisassociateP__Init__init(void )
{
  DisassociateP__m_payloadDisassocRequest[0] = DisassociateP__S_IDLE;
  DisassociateP__m_coordAddrMode = 0;
  DisassociateP__m_disAssociationOngoing = FALSE;
  return SUCCESS;
}

# 77 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline error_t AssociateP__Init__init(void )
{
  uint8_t i;

#line 80
  AssociateP__ResponseTimeout__stop();
  AssociateP__m_payloadAssocRequest[0] = AssociateP__S_IDLE;
  AssociateP__m_coordAddrMode = 0;
  AssociateP__m_associationOngoing = FALSE;
  for (i = 0; i < 7; i++) 
    AssociateP__m_payloadAssocResponse[i][0] = AssociateP__S_IDLE;
  return SUCCESS;
}

# 67 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconRequestRxP.nc"
static inline error_t BeaconRequestRxP__Reset__init(void )
{
  BeaconRequestRxP__m_beaconPayloadLen = 0;
  BeaconRequestRxP__m_beaconFrame.header = &BeaconRequestRxP__m_header;
  BeaconRequestRxP__m_beaconFrame.headerLen = 0;
  BeaconRequestRxP__m_beaconFrame.payload = BeaconRequestRxP__m_payload;
  BeaconRequestRxP__m_beaconFrame.payloadLen = 4;
  BeaconRequestRxP__m_beaconFrame.metadata = &BeaconRequestRxP__m_metadata;

  ;
  return SUCCESS;
}

# 94 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline error_t ScanP__Init__init(void )
{




  if (ScanP__m_busy) {
      ScanP__m_terminateScan = TRUE;
      ScanP__nextIteration();
    }
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__MacReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = ScanP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, BeaconRequestRxP__Reset__init());
#line 62
  __nesc_result = ecombine(__nesc_result, AssociateP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, DisassociateP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PollP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, IndirectTxP__Reset__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CoordRealignmentP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PromiscuousModeP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RxEnableP__Reset__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 258 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyChannelsSupported_t PibP__MLME_GET__phyChannelsSupported(void )
#line 258
{
#line 258
  return IEEE154_SUPPORTED_CHANNELS;
}

# 54 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_phyChannelsSupported_t ScanP__MLME_GET__phyChannelsSupported(void ){
#line 54
  unsigned long __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_GET__phyChannelsSupported();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 445 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt)
{

  if ((((
#line 447
  frame == (void *)0 || frame->header == (void *)0) || (
  frame->payload == (void *)0 && frame->payloadLen != 0)) || frame->metadata == (void *)0) || 
  frame->headerLen + frame->payloadLen + 2 > IEEE154_aMaxPHYPacketSize) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 452
    {
      if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 454
          FAIL;

          {
#line 454
            __nesc_atomic_end(__nesc_atomic); 
#line 454
            return __nesc_temp;
          }
        }
#line 455
      CC2420TKN154P__m_state = CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA;
    }
#line 456
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__m_txframe = frame;
  CC2420TKN154P__m_t0 = t0;
  CC2420TKN154P__m_dt = dt;
  CC2420TKN154P__loadTxFrame(frame);
  return SUCCESS;
}

# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static error_t RadioControlImplP__PhyTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = CC2420TKN154P__RadioTx__transmit(frame, t0, dt);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline error_t RadioControlImplP__MacTx__transmit(uint8_t client, ieee154_txframe_t *frame, uint32_t t0, uint32_t dt)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyTx__transmit(frame, t0, dt);
    }
  else 
#line 121
    {
      while (!0) {
#line 122
          break;
        }
#line 122
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
}

# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static error_t ScanP__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = RadioControlImplP__MacTx__transmit(0, frame, t0, dt);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 297 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__EnergyDetection__start(uint32_t duration)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_ED) 
        {
          unsigned char __nesc_temp = 
#line 301
          EALREADY;

          {
#line 301
            __nesc_atomic_end(__nesc_atomic); 
#line 301
            return __nesc_temp;
          }
        }
      else {
#line 302
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 304
      CC2420TKN154P__m_state = CC2420TKN154P__S_ED;
    }
#line 305
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__m_edDuration = duration;
  CC2420TKN154P__m_maxEnergy = -128 + 45;
  CC2420TKN154P__SpiResource__request();
  return SUCCESS;
}

# 49 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
inline static error_t ScanP__EnergyDetection__start(uint32_t duration){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = CC2420TKN154P__EnergyDetection__start(duration);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t ScanP__TxControlPool__put(ScanP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t ScanP__TxFramePool__put(ScanP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t ScanP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(0);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 448 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__MLME_SCAN__default__confirm(
ieee154_status_t status, 
uint8_t ScanType, 
uint8_t ChannelPage, 
uint32_t UnscannedChannels, 
uint8_t EnergyDetectListNumEntries, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumEntries, 
ieee154_PANDescriptor_t *PANDescriptorList)
#line 456
{
}

# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
inline static void ScanP__MLME_SCAN__confirm(ieee154_status_t status, uint8_t ScanType, uint8_t ChannelPage, uint32_t UnscannedChannels, uint8_t EnergyDetectNumResults, int8_t *EnergyDetectList, uint8_t PANDescriptorListNumResults, ieee154_PANDescriptor_t *PANDescriptorList){
#line 118
  ScanP__MLME_SCAN__default__confirm(status, ScanType, ChannelPage, UnscannedChannels, EnergyDetectNumResults, EnergyDetectList, PANDescriptorListNumResults, PANDescriptorList);
#line 118
}
#line 118
# 365 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RadioOff__offDone(void )
{
  DispatchUnslottedCsmaP__m_lock = FALSE;
  DispatchUnslottedCsmaP__updateState();
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PibP__radioControlStopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PibP__radioControlStopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 193 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioOff__offDone(void )
{
  PibP__radioControlStopTask__postTask();
}

# 214 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacRadioOff__default__offDone(uint8_t client)
{
  while (!0) {
#line 216
      break;
    }
#line 216
  ;
}

# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static void RadioControlImplP__MacRadioOff__offDone(uint8_t arg_0x40ae1ac8){
#line 53
  switch (arg_0x40ae1ac8) {
#line 53
    case 0:
#line 53
      ScanP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 1:
#line 53
      PibP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 2:
#line 53
      PromiscuousModeP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 12U:
#line 53
      DispatchUnslottedCsmaP__RadioOff__offDone();
#line 53
      break;
#line 53
    default:
#line 53
      RadioControlImplP__MacRadioOff__default__offDone(arg_0x40ae1ac8);
#line 53
      break;
#line 53
    }
#line 53
}
#line 53
# 200 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyRadioOff__offDone(void )
{
  RadioControlImplP__MacRadioOff__offDone(RadioControlImplP__ArbiterInfo__userId());
}

# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static void CC2420TKN154P__RadioOff__offDone(void ){
#line 53
  RadioControlImplP__PhyRadioOff__offDone();
#line 53
}
#line 53
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t PromiscuousModeP__PromiscuousRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(2, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PromiscuousModeP__continueStopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PromiscuousModeP__continueStopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t ScanP__continueScanRequestTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ScanP__continueScanRequestTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t ScanP__nextIterationTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ScanP__nextIterationTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t CC2420TKN154P__configSyncTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__configSyncTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 276 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__configSyncTask__runTask(void )
{
  if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
      CC2420TKN154P__CC2420Config__sync();
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING) {

          CC2420TKN154P__CC2420Power__rfOff();
          CC2420TKN154P__CC2420Power__rxOn();
        }
      CC2420TKN154P__SpiResource__release();
    }
  else {
#line 287
    CC2420TKN154P__configSyncTask__postTask();
    }
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420ControlP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 157 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline bool CC2420ControlP__Resource__isOwner(void )
#line 157
{
  return CC2420ControlP__SpiResource__isOwner();
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420TKN154P__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420ControlP__Resource__isOwner();
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 782 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__txDoneRxControlStopped(void )
{

  if (CC2420TKN154P__SpiResource__isOwner() || CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__sendDoneSpiReserved();
    }
  else {
#line 788
    CC2420TKN154P__SpiResource__request();
    }
}

#line 357
static inline void CC2420TKN154P__offStopRxDone(void )
{
  if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__offSpiReserved();
    }
  else {
#line 362
    CC2420TKN154P__SpiResource__request();
    }
}

#line 854
static inline void CC2420TKN154P__rxControlStopDoneTask__runTask(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_OFF_PENDING: CC2420TKN154P__offStopRxDone();
#line 858
      break;
      case CC2420TKN154P__S_TX_ACTIVE_NO_CSMA: 
        case CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA: 
          case CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA: CC2420TKN154P__txDoneRxControlStopped();
#line 861
      break;
      default: while (!0) {
#line 862
            break;
          }
#line 862
      ;
#line 862
      break;
    }
}

# 66 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_RESET__confirm(ieee154_status_t status)
{
  if (status == IEEE154_SUCCESS) {
    TestDeviceC__startApp();
    }
}

# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
inline static void PibP__MLME_RESET__confirm(ieee154_status_t status){
#line 78
  TestDeviceC__MLME_RESET__confirm(status);
#line 78
}
#line 78
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PibP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(1);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137








inline static bool PibP__RadioToken__isOwner(void ){
#line 145
  unsigned char __nesc_result;
#line 145

#line 145
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(1);
#line 145

#line 145
  return __nesc_result;
#line 145
}
#line 145
# 234 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioControl__startDone(error_t error)
{

  if (PibP__RadioToken__isOwner()) {
      if (PibP__m_setDefaultPIB) {
        PibP__resetAttributesToDefault();
        }
      PibP__PIBUpdate__notify(IEEE154_phyCurrentChannel, & PibP__m_pib.phyCurrentChannel);
      PibP__PIBUpdate__notify(IEEE154_macShortAddress, & PibP__m_pib.macShortAddress);
      PibP__PIBUpdate__notify(IEEE154_macPANId, & PibP__m_pib.macPANId);
      PibP__PIBUpdate__notify(IEEE154_phyCCAMode, & PibP__m_pib.phyCCAMode);
      PibP__PIBUpdate__notify(IEEE154_phyTransmitPower, & PibP__m_pib.phyTransmitPower);
      PibP__PIBUpdate__notify(IEEE154_phyCurrentPage, & PibP__m_pib.phyCurrentPage);
      PibP__PIBUpdate__notify(IEEE154_macPanCoordinator, & PibP__m_pib.macPanCoordinator);

      PibP__RadioToken__release();
      PibP__MLME_RESET__confirm(IEEE154_SUCCESS);
    }
}

# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void CC2420TKN154P__SplitControl__startDone(error_t error){
#line 113
  PibP__RadioControl__startDone(error);
#line 113
}
#line 113
# 292 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline uint8_t CC2420ControlP__CC2420Config__getChannel(void )
#line 292
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 293
    {
      unsigned char __nesc_temp = 
#line 293
      CC2420ControlP__m_channel;

      {
#line 293
        __nesc_atomic_end(__nesc_atomic); 
#line 293
        return __nesc_temp;
      }
    }
#line 295
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static uint8_t CC2420TKN154P__CC2420Config__getChannel(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = CC2420ControlP__CC2420Config__getChannel();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65

inline static void CC2420TKN154P__CC2420Config__setChannel(uint8_t channel){
#line 66
  CC2420ControlP__CC2420Config__setChannel(channel);
#line 66
}
#line 66
# 168 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__startDoneTask__runTask(void )
{



  CC2420TKN154P__CC2420Config__setChannel(CC2420TKN154P__CC2420Config__getChannel());
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
  CC2420TKN154P__SplitControl__startDone(SUCCESS);
}

# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
inline static uint16_t PibP__Random__rand16(void ){
#line 52
  unsigned int __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 266 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void )
#line 266
{
#line 266
  return IEEE154_MAX_FRAME_DURATION;
}

#line 140
static inline void PibP__updateMacMaxFrameTotalWaitTime(void )
{

  ieee154_macMinBE_t macMinBE = PibP__m_pib.macMinBE;
  ieee154_macMaxBE_t macMaxBE = PibP__m_pib.macMaxBE;
  ieee154_macMaxCSMABackoffs_t macMaxCSMABackoffs = PibP__m_pib.macMaxCSMABackoffs;
  uint8_t m = macMaxBE - macMinBE;
#line 146
  uint8_t k;
  uint32_t waitTime = 0;

  if (macMaxCSMABackoffs < m) {
    m = macMaxCSMABackoffs;
    }
#line 151
  waitTime = (((uint16_t )1 << macMaxBE) - 1) * (macMaxCSMABackoffs - m);
  if (m) {
      k = 0;
      while (k != m) {
          waitTime += (uint16_t )1 << (macMinBE + k);
          k += 1;
        }
    }
  waitTime *= IEEE154_aUnitBackoffPeriod;
  waitTime += PibP__MLME_GET__phyMaxFrameDuration();
  PibP__m_pib.macMaxFrameTotalWaitTime = waitTime;
}

# 327 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel)
{
  if (status == SUCCESS && ScanP__m_resultListNumEntries) {
    ((uint8_t *)ScanP__m_resultList)[ScanP__m_resultIndex++] = EnergyLevel;
    }
#line 331
  if (ScanP__m_resultIndex == ScanP__m_resultListNumEntries) {
    ScanP__m_terminateScan = TRUE;
    }
#line 333
  if (ScanP__RadioOff__off() == EALREADY) {
    ScanP__RadioOff__offDone();
    }
}

# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
inline static void CC2420TKN154P__EnergyDetection__done(error_t status, int8_t EnergyLevel){
#line 61
  ScanP__EnergyDetection__done(status, EnergyLevel);
#line 61
}
#line 61
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static bool CC2420TKN154P__TimeCalc__hasExpired(uint32_t t0, uint32_t dt){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = PibP__TimeCalc__hasExpired(t0, dt);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 320 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__energyDetectionTask__runTask(void )
{
  int8_t value;

#line 323
  if (CC2420TKN154P__CC2420Power__rssi(&value) == SUCCESS) {
    if (value > CC2420TKN154P__m_maxEnergy) {
      CC2420TKN154P__m_maxEnergy = value;
      }
    }
#line 327
  if (CC2420TKN154P__TimeCalc__hasExpired(CC2420TKN154P__m_edStartTime, CC2420TKN154P__m_edDuration)) {


      CC2420TKN154P__m_maxEnergy -= 45;
      CC2420TKN154P__CC2420Power__rfOff();
      CC2420TKN154P__CC2420Power__flushRxFifo();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__EnergyDetection__done(SUCCESS, CC2420TKN154P__m_maxEnergy);
    }
  else {
#line 337
    CC2420TKN154P__energyDetectionTask__postTask();
    }
}

# 148 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__PromiscuousMode__default__stopDone(error_t error)
#line 148
{
}

# 138 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void PromiscuousModeP__PromiscuousMode__stopDone(error_t error){
#line 138
  PromiscuousModeP__PromiscuousMode__default__stopDone(error);
#line 138
}
#line 138
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PromiscuousModeP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(2);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 89 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPromiscuousMode(bool on){
#line 89
  CC2420ControlP__CC2420Config__setPromiscuousMode(on);
#line 89
}
#line 89
# 290 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__RadioPromiscuousMode__set(bool val)
{
  CC2420TKN154P__CC2420Config__setPromiscuousMode(val);
}

# 55 "/usr/src/tinyos/tos/interfaces/Set.nc"
inline static void PromiscuousModeP__RadioPromiscuousMode__set(PromiscuousModeP__RadioPromiscuousMode__val_t val){
#line 55
  CC2420TKN154P__RadioPromiscuousMode__set(val);
#line 55
}
#line 55
# 129 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__continueStopTask__runTask(void )
{
  PromiscuousModeP__RadioPromiscuousMode__set(FALSE);
  PromiscuousModeP__m_state = PromiscuousModeP__S_STOPPED;
  PromiscuousModeP__RadioToken__release();
  ;
  PromiscuousModeP__PromiscuousMode__stopDone(SUCCESS);
}










static inline void PromiscuousModeP__PromiscuousMode__default__startDone(error_t error)
#line 147
{
}

# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void PromiscuousModeP__PromiscuousMode__startDone(error_t error){
#line 113
  PromiscuousModeP__PromiscuousMode__default__startDone(error);
#line 113
}
#line 113
# 96 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__signalStartDoneTask__runTask(void )
{
  PromiscuousModeP__m_state = PromiscuousModeP__S_STARTED;
  ;
  PromiscuousModeP__PromiscuousMode__startDone(SUCCESS);
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t BeaconRequestRxP__BeaconRequestResponseTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(0U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 82 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconRequestRxP.nc"
static inline void BeaconRequestRxP__sendBeaconTask__runTask(void )
#line 82
{
  BeaconRequestRxP__BeaconRequestResponseTx__transmit(&BeaconRequestRxP__m_beaconFrame);
}

# 191 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__continueScanRequestTask__runTask(void )
{
  ScanP__continueScanRequest();
}

# 292 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macDSN_t PibP__MLME_GET__macDSN(void )
#line 292
{
#line 292
  return PibP__m_pib.macDSN;
}

# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macDSN_t ScanP__MLME_GET__macDSN(void ){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_GET__macDSN();
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t ScanP__MLME_SET__macDSN(ieee154_macDSN_t value){
#line 118
  enum ieee154_status __nesc_result;
#line 118

#line 118
  __nesc_result = PibP__MLME_SET__macDSN(value);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macResponseWaitTime_t ScanP__MLME_GET__macResponseWaitTime(void ){
#line 150
  unsigned char __nesc_result;
#line 150

#line 150
  __nesc_result = PibP__MLME_GET__macResponseWaitTime();
#line 150

#line 150
  return __nesc_result;
#line 150
}
#line 150
# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void ScanP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE){
#line 55
  PibP__FrameUtility__copyLocalExtendedAddressLE(destLE);
#line 55
}
#line 55
# 440 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__nextIterationTask__runTask(void )
{
  ScanP__nextIteration();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void ScanP__ScanTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 419 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__startTimerTask__runTask(void )
{
  ScanP__ScanTimer__startOneShot(ScanP__m_scanDuration);
}

# 296 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__tryCoordCapTx(void )
{


  uint8_t i;

#line 301
  if (IndirectTxP__m_pendingTxFrame == (void *)0 && IndirectTxP__m_numTableEntries) {
      for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
        if (IndirectTxP__m_txFrameTable[i] && IndirectTxP__m_txFrameTable[i]->client & IndirectTxP__SEND_THIS_FRAME) {
            IndirectTxP__m_pendingTxFrame = IndirectTxP__m_txFrameTable[i];
            IndirectTxP__m_client = IndirectTxP__m_txFrameTable[i]->client;
            if (IndirectTxP__CoordCapTx__transmit(IndirectTxP__m_txFrameTable[i]) == IEEE154_SUCCESS) {
                ;
              }
            else 
#line 308
              {
                IndirectTxP__m_pendingTxFrame = (void *)0;
                IndirectTxP__tryCoordCapTxTask__postTask();
              }
            return;
          }
    }
}

static inline void IndirectTxP__tryCoordCapTxTask__runTask(void )
{
  IndirectTxP__tryCoordCapTx();
}

# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetTxDonePending(void )
#line 62
{
#line 62
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state &= ~/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__TX_DONE_PENDING;
}

# 318 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void )
#line 318
{
#line 318
  return PibP__m_pib.macMaxFrameRetries;
}

# 147 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxFrameRetries_t DispatchUnslottedCsmaP__MLME_GET__macMaxFrameRetries(void ){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = PibP__MLME_GET__macMaxFrameRetries();
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 381 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__get(void )
#line 381
{
#line 381
  return IndirectTxP__m_pendingTxFrame;
}

# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static DispatchUnslottedCsmaP__GetIndirectTxFrame__val_t DispatchUnslottedCsmaP__GetIndirectTxFrame__get(void ){
#line 55
  struct __nesc_unnamed4276 *__nesc_result;
#line 55

#line 55
  __nesc_result = IndirectTxP__GetIndirectTxFrame__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBattLifeExt_t DispatchUnslottedCsmaP__MLME_GET__macBattLifeExt(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = PibP__MLME_GET__macBattLifeExt();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 298 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void )
#line 298
{
#line 298
  return PibP__m_pib.macMinBE;
}

# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMinBE_t DispatchUnslottedCsmaP__MLME_GET__macMinBE(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = PibP__MLME_GET__macMinBE();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 314 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void )
#line 314
{
#line 314
  return PibP__m_pib.macMaxBE;
}

# 141 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxBE_t DispatchUnslottedCsmaP__MLME_GET__macMaxBE(void ){
#line 141
  unsigned char __nesc_result;
#line 141

#line 141
  __nesc_result = PibP__MLME_GET__macMaxBE();
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 296 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void )
#line 296
{
#line 296
  return PibP__m_pib.macMaxCSMABackoffs;
}

# 114 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxCSMABackoffs_t DispatchUnslottedCsmaP__MLME_GET__macMaxCSMABackoffs(void ){
#line 114
  unsigned char __nesc_result;
#line 114

#line 114
  __nesc_result = PibP__MLME_GET__macMaxCSMABackoffs();
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 406 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_SET__macBSN(ieee154_macBSN_t value)
#line 406
{
  PibP__m_pib.macBSN = value;
  PibP__PIBUpdate__notify(IEEE154_macBSN, & PibP__m_pib.macBSN);
  return IEEE154_SUCCESS;
}

# 103 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DispatchUnslottedCsmaP__MLME_SET__macBSN(ieee154_macBSN_t value){
#line 103
  enum ieee154_status __nesc_result;
#line 103

#line 103
  __nesc_result = PibP__MLME_SET__macBSN(value);
#line 103

#line 103
  return __nesc_result;
#line 103
}
#line 103
# 286 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBSN_t PibP__MLME_GET__macBSN(void )
#line 286
{
#line 286
  return PibP__m_pib.macBSN;
}

# 99 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBSN_t DispatchUnslottedCsmaP__MLME_GET__macBSN(void ){
#line 99
  unsigned char __nesc_result;
#line 99

#line 99
  __nesc_result = PibP__MLME_GET__macBSN();
#line 99

#line 99
  return __nesc_result;
#line 99
}
#line 99
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DispatchUnslottedCsmaP__MLME_SET__macDSN(ieee154_macDSN_t value){
#line 118
  enum ieee154_status __nesc_result;
#line 118

#line 118
  __nesc_result = PibP__MLME_SET__macDSN(value);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macDSN_t DispatchUnslottedCsmaP__MLME_GET__macDSN(void ){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_GET__macDSN();
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 206 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__setCurrentFrame(ieee154_txframe_t *frame)
{
  if (frame->header->mhr[MHR_INDEX_FC1] != FC1_FRAMETYPE_BEACON) {

      ieee154_macDSN_t dsn = DispatchUnslottedCsmaP__MLME_GET__macDSN();

#line 211
      frame->header->mhr[MHR_INDEX_SEQNO] = dsn++;
      DispatchUnslottedCsmaP__MLME_SET__macDSN(dsn);
    }
  else 
#line 213
    {

      ieee154_macBSN_t bsn = DispatchUnslottedCsmaP__MLME_GET__macBSN();

#line 216
      frame->header->mhr[MHR_INDEX_SEQNO] = bsn++;
      DispatchUnslottedCsmaP__MLME_SET__macBSN(bsn);
    }
  DispatchUnslottedCsmaP__m_csma.NB = 0;
  DispatchUnslottedCsmaP__m_csma.macMaxCsmaBackoffs = DispatchUnslottedCsmaP__m_macMaxCSMABackoffs = DispatchUnslottedCsmaP__MLME_GET__macMaxCSMABackoffs();
  DispatchUnslottedCsmaP__m_csma.macMaxBE = DispatchUnslottedCsmaP__m_macMaxBE = DispatchUnslottedCsmaP__MLME_GET__macMaxBE();
  DispatchUnslottedCsmaP__m_csma.BE = DispatchUnslottedCsmaP__MLME_GET__macMinBE();
  if (DispatchUnslottedCsmaP__MLME_GET__macBattLifeExt() && DispatchUnslottedCsmaP__m_csma.BE > 2) {
    DispatchUnslottedCsmaP__m_csma.BE = 2;
    }
#line 225
  DispatchUnslottedCsmaP__m_BE = DispatchUnslottedCsmaP__m_csma.BE;
  if (DispatchUnslottedCsmaP__GetIndirectTxFrame__get() == frame) {
    DispatchUnslottedCsmaP__m_macMaxFrameRetries = 0;
    }
  else {
#line 229
    DispatchUnslottedCsmaP__m_macMaxFrameRetries = DispatchUnslottedCsmaP__MLME_GET__macMaxFrameRetries();
    }
#line 230
  DispatchUnslottedCsmaP__m_transactionTime = IEEE154_SHR_DURATION + (
  frame->headerLen + frame->payloadLen + 2) * IEEE154_SYMBOLS_PER_OCTET;
  if (frame->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST) {
    DispatchUnslottedCsmaP__m_transactionTime += IEEE154_aTurnaroundTime + IEEE154_aUnitBackoffPeriod + 
    11 * IEEE154_SYMBOLS_PER_OCTET;
    }



  DispatchUnslottedCsmaP__m_currentFrame = frame;
}

#line 185
static inline ieee154_status_t DispatchUnslottedCsmaP__FrameTx__transmit(ieee154_txframe_t *frame)
{
  if (DispatchUnslottedCsmaP__m_currentFrame != (void *)0) {

      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 191
    {
      DispatchUnslottedCsmaP__setCurrentFrame(frame);
      if (DispatchUnslottedCsmaP__RadioToken__isOwner()) {
        DispatchUnslottedCsmaP__updateState();
        }
      else {
#line 196
        DispatchUnslottedCsmaP__RadioToken__request();
        }
#line 197
      return IEEE154_SUCCESS;
    }
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = DispatchUnslottedCsmaP__FrameTx__transmit(txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setTxDonePending(void )
#line 61
{
#line 61
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state |= /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__TX_DONE_PENDING;
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 180 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *data, ieee154_status_t status)
{
  DataP__finishTxTransaction(data, status);
}

# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
inline static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Purge__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 37
  DataP__PurgeDirect__purgeDone(txFrame, status);
#line 37
}
#line 37
# 65 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue[/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head];
}

# 73 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__t  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__head(void ){
#line 73
  struct __nesc_unnamed4276 *__nesc_result;
#line 73

#line 73
  __nesc_result = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline bool /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isTxDonePending(void )
#line 60
{
#line 60
  return /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_state & /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__TX_DONE_PENDING ? TRUE : FALSE;
}

#line 90
static inline void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__runTask(void )
{
  if (!/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isTxDonePending() && /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size()) {
      ieee154_txframe_t *txFrame = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__head();

#line 94
      if (txFrame->headerLen == 0) {

          /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue();
          /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Purge__purgeDone(txFrame, IEEE154_SUCCESS);
          /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask();
        }
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__m_client = txFrame->client;
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__setTxDonePending();
      if (/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmit(txFrame) != IEEE154_SUCCESS) {
        /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetTxDonePending();
        }
    }
}

# 528 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__MLME_START__default__confirm(ieee154_status_t status)
#line 528
{
}

# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_START.nc"
inline static void DispatchUnslottedCsmaP__MLME_START__confirm(ieee154_status_t status){
#line 111
  DispatchUnslottedCsmaP__MLME_START__default__confirm(status);
#line 111
}
#line 111
# 180 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__signalStartConfirmTask__runTask(void )
{
  DispatchUnslottedCsmaP__MLME_START__confirm(IEEE154_SUCCESS);
}

# 316 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void )
#line 316
{
#line 316
  return PibP__m_pib.macMaxFrameTotalWaitTime;
}

# 144 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxFrameTotalWaitTime_t DispatchUnslottedCsmaP__MLME_GET__macMaxFrameTotalWaitTime(void ){
#line 144
  unsigned long __nesc_result;
#line 144

#line 144
  __nesc_result = PibP__MLME_GET__macMaxFrameTotalWaitTime();
#line 144

#line 144
  return __nesc_result;
#line 144
}
#line 144
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 403 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__startIndirectTxTimerTask__runTask(void )
{
  DispatchUnslottedCsmaP__IndirectTxWaitTimer__startOneShot(DispatchUnslottedCsmaP__MLME_GET__macMaxFrameTotalWaitTime());
}

# 164 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline void RxEnableP__WasRxEnabled__notify(bool val)
{
  if (RxEnableP__m_isRxEnabled && RxEnableP__m_confirmPending) {
      RxEnableP__m_confirmPending = FALSE;
      RxEnableP__MLME_RX_ENABLE__confirm(IEEE154_SUCCESS);
    }
  ;
  ;
}

# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
inline static void DispatchUnslottedCsmaP__WasRxEnabled__notify(DispatchUnslottedCsmaP__WasRxEnabled__val_t val){
#line 74
  RxEnableP__WasRxEnabled__notify(val);
#line 74
}
#line 74
# 514 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__wasRxEnabledTask__runTask(void )
{
  DispatchUnslottedCsmaP__WasRxEnabled__notify(TRUE);
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static void DispatchUnslottedCsmaP__FrameTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmitDone(txFrame, status);
#line 51
}
#line 51
# 471 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__signalTxDoneTask__runTask(void )
{
  ieee154_txframe_t *lastFrame = DispatchUnslottedCsmaP__m_lastFrame;
  ieee154_status_t status = DispatchUnslottedCsmaP__m_txStatus;

#line 475
  DispatchUnslottedCsmaP__m_indirectTxPending = FALSE;
  DispatchUnslottedCsmaP__m_lastFrame = (void *)0;
  if (lastFrame) {
      ;

      DispatchUnslottedCsmaP__FrameTx__transmitDone(lastFrame, status);
    }
  DispatchUnslottedCsmaP__updateState();
}

# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool ScanP__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(0);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 180 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__RadioToken__granted(void )
{
  if (ScanP__RadioOff__isOff()) {
    ScanP__continueScanRequest();
    }
  else 
#line 184
    {
      error_t e = ScanP__RadioOff__off();

#line 186
      while (!(e == SUCCESS)) {
#line 186
          break;
        }
#line 186
      ;
    }
}

# 201 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static inline void DispatchUnslottedCsmaP__RadioToken__granted(void )
{
  DispatchUnslottedCsmaP__updateState();
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t PromiscuousModeP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(2);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 60
inline static bool PromiscuousModeP__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(2);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 87 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__RadioToken__granted(void )
{
  PromiscuousModeP__RadioPromiscuousMode__set(TRUE);
  if (PromiscuousModeP__RadioOff__isOff()) {
    PromiscuousModeP__RadioOff__offDone();
    }
  else {
#line 93
    PromiscuousModeP__RadioOff__off();
    }
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t PibP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(1);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 187 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioToken__granted(void )
{
  if (PibP__RadioOff__off() != SUCCESS) {
    PibP__RadioOff__offDone();
    }
}

# 179 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(uint8_t id)
#line 179
{
}

# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(uint8_t arg_0x40b14178){
#line 98
  switch (arg_0x40b14178) {
#line 98
    case 0:
#line 98
      ScanP__RadioToken__granted();
#line 98
      break;
#line 98
    case 1:
#line 98
      PibP__RadioToken__granted();
#line 98
      break;
#line 98
    case 2:
#line 98
      PromiscuousModeP__RadioToken__granted();
#line 98
      break;
#line 98
    case 12U:
#line 98
      DispatchUnslottedCsmaP__RadioToken__granted();
#line 98
      break;
#line 98
    default:
#line 98
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(arg_0x40b14178);
#line 98
      break;
#line 98
    }
#line 98
}
#line 98
# 185 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 185
{
}

# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x40b129b8){
#line 59
    /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(arg_0x40b129b8);
#line 59
}
#line 59
# 169 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void )
#line 169
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 170
    {
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId;
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY;
    }
#line 173
    __nesc_atomic_end(__nesc_atomic); }
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
}

# 136 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__SplitControl__start(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 138
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 140
          EALREADY;

          {
#line 140
            __nesc_atomic_end(__nesc_atomic); 
#line 140
            return __nesc_temp;
          }
        }
      else {
#line 141
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_STOPPED) 
          {
            unsigned char __nesc_temp = 
#line 142
            FAIL;

            {
#line 142
              __nesc_atomic_end(__nesc_atomic); 
#line 142
              return __nesc_temp;
            }
          }
        }
#line 143
      CC2420TKN154P__m_state = CC2420TKN154P__S_STARTING;
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__SpiResource__request();
  return SUCCESS;
}

# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t PibP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420TKN154P__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PibP__resetSpinTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PibP__resetSpinTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 222 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__resetSpinTask__runTask(void )
{
  PibP__m_resetSpin -= 1;
  if (PibP__m_resetSpin != 0) {
      PibP__resetSpinTask__postTask();
      return;
    }
  while (!(PibP__RadioControl__start() == SUCCESS)) {
#line 229
      break;
    }
#line 229
  ;
}

# 180 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__SplitControl__stop(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 182
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_STOPPED) 
        {
          unsigned char __nesc_temp = 
#line 184
          EALREADY;

          {
#line 184
            __nesc_atomic_end(__nesc_atomic); 
#line 184
            return __nesc_temp;
          }
        }
      else {
#line 185
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
          {
            unsigned char __nesc_temp = 
#line 186
            FAIL;

            {
#line 186
              __nesc_atomic_end(__nesc_atomic); 
#line 186
              return __nesc_temp;
            }
          }
        }
#line 187
      CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPING;
    }
#line 188
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__SpiResource__request();
  return SUCCESS;
}

# 130 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t PibP__RadioControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = CC2420TKN154P__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 198 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__radioControlStopTask__runTask(void )
{
  error_t result = PibP__RadioControl__stop();

#line 201
  if (result == EALREADY) {
    PibP__RadioControl__stopDone(SUCCESS);
    }
  else {
#line 204
    while (!(result == SUCCESS)) {
#line 204
        break;
      }
    }
#line 204
  ;
}

# 46 "/usr/src/tinyos/tos/interfaces/Random.nc"
inline static uint32_t PibP__Random__rand32(void ){
#line 46
  unsigned long __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 96 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__LocalInit__init(void )
{

  PibP__m_aExtendedAddressLE = ((uint64_t )PibP__Random__rand32() << 32) | PibP__Random__rand32();

  PibP__resetAttributesToDefault();
  return SUCCESS;
}

# 61 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 65 "/usr/src/tinyos/tos/system/PoolP.nc"
static inline error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 4; i++) {
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[i] = &/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool[i];
    }
  /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free = 4;
  /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[i] = &/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool[i];
    }
  /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free = 3;
  /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

# 61 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )30U &= ~(0x01 << 1);
}

# 78 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P41*/HplMsp430GeneralIOP__25__IO__makeInput();
#line 78
}
#line 78
# 52 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__HplGeneralIO__makeInput();
}

# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplCC2420PinsC.SFDM*/Msp430GpioC__8__GeneralIO__makeInput();
#line 44
}
#line 44
# 63 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 2;
}

# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P42*/HplMsp430GeneralIOP__26__IO__makeOutput();
#line 85
}
#line 85
# 54 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__HplGeneralIO__makeOutput();
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 61 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput(void )
#line 61
{
  /* atomic removed: atomic calls only */
#line 61
  * (volatile uint8_t * )34U &= ~(0x01 << 4);
}

# 78 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput(void ){
#line 78
  /*HplMsp430GeneralIOC.P14*/HplMsp430GeneralIOP__4__IO__makeInput();
#line 78
}
#line 78
# 52 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput(void )
#line 52
{
#line 52
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__HplGeneralIO__makeInput();
}

# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplCC2420PinsC.CCAM*/Msp430GpioC__3__GeneralIO__makeInput();
#line 44
}
#line 44
# 122 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 122
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 63 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 5;
}

# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P45*/HplMsp430GeneralIOP__29__IO__makeOutput();
#line 85
}
#line 85
# 54 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__HplGeneralIO__makeOutput();
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.VRENM*/Msp430GpioC__9__GeneralIO__makeOutput();
#line 46
}
#line 46
# 63 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static inline void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput(void )
#line 63
{
  /* atomic removed: atomic calls only */
#line 63
  * (volatile uint8_t * )30U |= 0x01 << 6;
}

# 85 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIO.nc"
inline static void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput(void ){
#line 85
  /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__makeOutput();
#line 85
}
#line 85
# 54 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430GpioC.nc"
static inline void /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput(void )
#line 54
{
#line 54
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__HplGeneralIO__makeOutput();
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.RSTNM*/Msp430GpioC__7__GeneralIO__makeOutput();
#line 46
}
#line 46
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplCC2420PinsC.CSNM*/Msp430GpioC__4__GeneralIO__makeOutput();
#line 46
}
#line 46
# 113 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 113
{
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();





  CC2420ControlP__addressRecognition = TRUE;






  CC2420ControlP__autoAckEnabled = TRUE;


  CC2420ControlP__hwAutoAckDefault = TRUE;
  CC2420ControlP__acceptReservedFrames = FALSE;
  CC2420ControlP__m_needsSync = FALSE;
  return SUCCESS;
}

# 81 "/usr/src/tinyos/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 1U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 126 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 126
{
  CC2420ReceiveP__m_rxFramePtr = &CC2420ReceiveP__m_frame;
  /* atomic removed: atomic calls only */
#line 128
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
  return SUCCESS;
}

# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(/*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3____nesc_unnamed4398 {
#line 57
    /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )386U = /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__compareControl();
}

# 47 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__disableEvents();
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 82 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void )
#line 82
{
  memset(&/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m, 0, sizeof /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m);
  return SUCCESS;
}

# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(/*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5____nesc_unnamed4399 {
#line 57
    /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )390U = /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__compareControl();
}

# 47 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__disableEvents();
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 57 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static inline  uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(/*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x)
#line 57
{
#line 57
  union /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6____nesc_unnamed4400 {
#line 57
    /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t f;
#line 57
    uint16_t t;
  } 
#line 57
  c = { .f = x };

#line 57
  return c.t;
}

static inline uint16_t /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl(void )
{
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__cc_t x = { 
  .cm = 1, 
  .ccis = 0, 
  .clld = 0, 
  .cap = 0, 
  .ccie = 0 };

  return /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__CC2int(x);
}

#line 105
static inline void /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare(void )
{
  * (volatile uint16_t * )392U = /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__compareControl();
}

# 47 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerControl.nc"
inline static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare(void ){
#line 47
  /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Control__setControlAsCompare();
#line 47
}
#line 47
# 53 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430AlarmC.nc"
static inline error_t /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Init__init(void )
{
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__disableEvents();
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Msp430TimerControl__setControlAsCompare();
  return SUCCESS;
}

# 55 "/usr/src/tinyos/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RandomMlcgC__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__2__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Alarm32khz32VirtualizedP.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.AlarmC.Msp430Alarm*/Msp430AlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Msp430UsartShare0P.ArbiterC.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PibP__LocalInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 304 "/usr/lib/i386-linux-gnu/ncc/nesc_nx.h"
static inline  void __nesc_bfle_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x)
#line 304
{
#line 304
  unsigned byte_offset = offset >> 3;
#line 304
  unsigned bit_offset = offset & 7;
#line 304
  unsigned count = 0;

#line 304
  x = x & (((uint8_t )1 << length) - 1);
#line 304
  if (length + bit_offset <= 8) {
#line 304
      unsigned mask = ((1 << length) - 1) << bit_offset;

#line 304
      msg[byte_offset] = (msg[byte_offset] & ~mask) | (x << bit_offset);
#line 304
      return;
    }
#line 304
  if (bit_offset > 0) {
#line 304
      unsigned mask = (1 << bit_offset) - 1;

#line 304
      msg[byte_offset] = (msg[byte_offset] & mask) | (x << bit_offset);
#line 304
      count += 8 - bit_offset;
#line 304
      byte_offset++;
    }
#line 304
  while (count + 8 <= length) {
#line 304
      msg[byte_offset++] = x >> count;
#line 304
      count += 8;
    }
#line 304
  if (count < length) {
#line 304
      unsigned remaining = length - count;
#line 304
      unsigned mask = ~((1 << remaining) - 1);

#line 304
      msg[byte_offset] = (msg[byte_offset] & mask) | (x >> count);
    }
}

#line 304
static __inline  uint8_t __nesc_htonbf_leuint8(void *target, unsigned offset, uint8_t length, uint8_t value)
#line 304
{
#line 304
  __nesc_bfle_encode8(target, offset, length, value);
#line 304
  return value;
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PibP__RadioToken__request(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(1);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static PibP__PromiscuousModeGet__val_t PibP__PromiscuousModeGet__get(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PromiscuousModeP__PromiscuousModeGet__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 164 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_RESET__request(bool SetDefaultPIB)
{








  ieee154_status_t status = IEEE154_SUCCESS;

#line 175
  if (PibP__PromiscuousModeGet__get()) {
    status = IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 177
    {
      PibP__m_setDefaultPIB = SetDefaultPIB;
      PibP__m_resetSpin = 5;
      PibP__RadioToken__request();
    }
  ;

  return status;
}

# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
inline static ieee154_status_t TestDeviceC__MLME_RESET__request(bool SetDefaultPIB){
#line 69
  enum ieee154_status __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__MLME_RESET__request(SetDefaultPIB);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 55 "TestDeviceC.nc"
static inline void TestDeviceC__Boot__booted(void )
#line 55
{
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 0, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 1, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 2, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 3, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 4, 2, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 6, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 7, 1, 1);
  TestDeviceC__MLME_RESET__request(TRUE);
}

# 60 "/usr/src/tinyos/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  TestDeviceC__Boot__booted();
#line 60
}
#line 60
# 391 "/usr/src/tinyos/tos/chips/msp430/msp430hardware.h"
static inline  void __nesc_disable_interrupt(void )
{
  __dint();
  __nop();
}

# 63 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static inline mcu_power_t Msp430ClockP__McuPowerOverride__lowestState(void )
#line 63
{
  return MSP430_POWER_LPM3;
}

# 62 "/usr/src/tinyos/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = Msp430ClockP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/usr/src/tinyos/tos/chips/msp430/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{
  mcu_power_t pState = MSP430_POWER_LPM4;









  if ((((((
#line 77
  TACCTL0 & 0x0010 || 
  TACCTL1 & 0x0010) || 
  TACCTL2 & 0x0010) && (
  TACTL & 0x0300) == 0x0200) || (
  ME1 & (0x80 | 0x40) && U0TCTL & 0x20)) || (
  ME2 & (0x20 | 0x10) && U1TCTL & 0x20))


   || (U0CTLnr & 0x01 && I2CTCTLnr & 0x20 && 
  I2CDCTLnr & 0x20 && U0CTLnr & 0x04 && U0CTLnr & 0x20)) {


    pState = MSP430_POWER_LPM1;
    }


  if (ADC12CTL0 & 0x010) {
      if (ADC12CTL1 & 0x0010) {

          if (ADC12CTL1 & 0x0008) {
            pState = MSP430_POWER_LPM1;
            }
          else {
#line 99
            pState = MSP430_POWER_ACTIVE;
            }
        }
      else {
#line 100
        if (ADC12CTL1 & 0x0400 && (TACTL & 0x0300) == 0x0200) {



            pState = MSP430_POWER_LPM1;
          }
        }
    }

  return pState;
}

# 379 "/usr/src/tinyos/tos/chips/msp430/msp430hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 379
{
  return m1 < m2 ? m1 : m2;
}

# 112 "/usr/src/tinyos/tos/chips/msp430/McuSleepC.nc"
static inline void McuSleepC__computePowerState(void )
#line 112
{
  McuSleepC__powerState = mcombine(McuSleepC__getPowerState(), 
  McuSleepC__McuPowerOverride__lowestState());
}

static inline void McuSleepC__McuSleep__sleep(void )
#line 117
{
  uint16_t temp;

#line 119
  if (McuSleepC__dirty) {
      McuSleepC__computePowerState();
    }

  temp = McuSleepC__msp430PowerBits[McuSleepC__powerState] | 0x0008;
   __asm volatile ("bis  %0, r2" :  : "m"(temp));

   __asm volatile ("" :  :  : "memory");
  __nesc_disable_interrupt();
}

# 76 "/usr/src/tinyos/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 233 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {
        CC2420ReceiveP__beginReceive();
      }
    else {
        CC2420ReceiveP__m_missed_packets++;
      }
  }
}

# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 77 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__Interrupt__fired();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port10__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Msp430InterruptC__1__HplInterrupt__fired();
#line 72
}
#line 72
# 103 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port11__clear(void )
#line 103
{
#line 103
  P1IFG &= ~(1 << 1);
}

#line 79
static inline void HplMsp430InterruptP__Port11__default__fired(void )
#line 79
{
#line 79
  HplMsp430InterruptP__Port11__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port11__fired(void ){
#line 72
  HplMsp430InterruptP__Port11__default__fired();
#line 72
}
#line 72
# 104 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port12__clear(void )
#line 104
{
#line 104
  P1IFG &= ~(1 << 2);
}

#line 80
static inline void HplMsp430InterruptP__Port12__default__fired(void )
#line 80
{
#line 80
  HplMsp430InterruptP__Port12__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port12__fired(void ){
#line 72
  HplMsp430InterruptP__Port12__default__fired();
#line 72
}
#line 72
# 105 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port13__clear(void )
#line 105
{
#line 105
  P1IFG &= ~(1 << 3);
}

#line 81
static inline void HplMsp430InterruptP__Port13__default__fired(void )
#line 81
{
#line 81
  HplMsp430InterruptP__Port13__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port13__fired(void ){
#line 72
  HplMsp430InterruptP__Port13__default__fired();
#line 72
}
#line 72
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Power__startOscillatorDone(void )
{
  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__startDoneTask__postTask();
}

# 77 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 77
  CC2420TKN154P__CC2420Power__startOscillatorDone();
#line 77
}
#line 77
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 446 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 446
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 77 "/usr/src/tinyos/tos/chips/msp430/pins/Msp430InterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired(void )
#line 77
{
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__clear();
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__Interrupt__fired();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port14__fired(void ){
#line 72
  /*HplCC2420InterruptsC.InterruptCCAC*/Msp430InterruptC__0__HplInterrupt__fired();
#line 72
}
#line 72
# 107 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port15__clear(void )
#line 107
{
#line 107
  P1IFG &= ~(1 << 5);
}

#line 83
static inline void HplMsp430InterruptP__Port15__default__fired(void )
#line 83
{
#line 83
  HplMsp430InterruptP__Port15__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port15__fired(void ){
#line 72
  HplMsp430InterruptP__Port15__default__fired();
#line 72
}
#line 72
# 108 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port16__clear(void )
#line 108
{
#line 108
  P1IFG &= ~(1 << 6);
}

#line 84
static inline void HplMsp430InterruptP__Port16__default__fired(void )
#line 84
{
#line 84
  HplMsp430InterruptP__Port16__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port16__fired(void ){
#line 72
  HplMsp430InterruptP__Port16__default__fired();
#line 72
}
#line 72
# 109 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port17__clear(void )
#line 109
{
#line 109
  P1IFG &= ~(1 << 7);
}

#line 85
static inline void HplMsp430InterruptP__Port17__default__fired(void )
#line 85
{
#line 85
  HplMsp430InterruptP__Port17__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port17__fired(void ){
#line 72
  HplMsp430InterruptP__Port17__default__fired();
#line 72
}
#line 72
# 206 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port20__clear(void )
#line 206
{
#line 206
  P2IFG &= ~(1 << 0);
}

#line 182
static inline void HplMsp430InterruptP__Port20__default__fired(void )
#line 182
{
#line 182
  HplMsp430InterruptP__Port20__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port20__fired(void ){
#line 72
  HplMsp430InterruptP__Port20__default__fired();
#line 72
}
#line 72
# 207 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port21__clear(void )
#line 207
{
#line 207
  P2IFG &= ~(1 << 1);
}

#line 183
static inline void HplMsp430InterruptP__Port21__default__fired(void )
#line 183
{
#line 183
  HplMsp430InterruptP__Port21__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port21__fired(void ){
#line 72
  HplMsp430InterruptP__Port21__default__fired();
#line 72
}
#line 72
# 208 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port22__clear(void )
#line 208
{
#line 208
  P2IFG &= ~(1 << 2);
}

#line 184
static inline void HplMsp430InterruptP__Port22__default__fired(void )
#line 184
{
#line 184
  HplMsp430InterruptP__Port22__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port22__fired(void ){
#line 72
  HplMsp430InterruptP__Port22__default__fired();
#line 72
}
#line 72
# 209 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port23__clear(void )
#line 209
{
#line 209
  P2IFG &= ~(1 << 3);
}

#line 185
static inline void HplMsp430InterruptP__Port23__default__fired(void )
#line 185
{
#line 185
  HplMsp430InterruptP__Port23__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port23__fired(void ){
#line 72
  HplMsp430InterruptP__Port23__default__fired();
#line 72
}
#line 72
# 210 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port24__clear(void )
#line 210
{
#line 210
  P2IFG &= ~(1 << 4);
}

#line 186
static inline void HplMsp430InterruptP__Port24__default__fired(void )
#line 186
{
#line 186
  HplMsp430InterruptP__Port24__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port24__fired(void ){
#line 72
  HplMsp430InterruptP__Port24__default__fired();
#line 72
}
#line 72
# 211 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port25__clear(void )
#line 211
{
#line 211
  P2IFG &= ~(1 << 5);
}

#line 187
static inline void HplMsp430InterruptP__Port25__default__fired(void )
#line 187
{
#line 187
  HplMsp430InterruptP__Port25__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port25__fired(void ){
#line 72
  HplMsp430InterruptP__Port25__default__fired();
#line 72
}
#line 72
# 212 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port26__clear(void )
#line 212
{
#line 212
  P2IFG &= ~(1 << 6);
}

#line 188
static inline void HplMsp430InterruptP__Port26__default__fired(void )
#line 188
{
#line 188
  HplMsp430InterruptP__Port26__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port26__fired(void ){
#line 72
  HplMsp430InterruptP__Port26__default__fired();
#line 72
}
#line 72
# 213 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
static inline void HplMsp430InterruptP__Port27__clear(void )
#line 213
{
#line 213
  P2IFG &= ~(1 << 7);
}

#line 189
static inline void HplMsp430InterruptP__Port27__default__fired(void )
#line 189
{
#line 189
  HplMsp430InterruptP__Port27__clear();
}

# 72 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430Interrupt.nc"
inline static void HplMsp430InterruptP__Port27__fired(void ){
#line 72
  HplMsp430InterruptP__Port27__default__fired();
#line 72
}
#line 72
# 98 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 349 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static inline void HplMsp430Usart0P__Usart__disableRxIntr(void )
#line 349
{
  HplMsp430Usart0P__IE1 &= ~0x40;
}

# 177 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart.nc"
inline static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr(void ){
#line 177
  HplMsp430Usart0P__Usart__disableRxIntr();
#line 177
}
#line 177
# 231 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(uint8_t data)
#line 231
{

  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = data;
    }
  if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else 
#line 238
    {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__disableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone();
    }
}

# 65 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(uint8_t id, uint8_t data)
#line 65
{
}

# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(uint8_t arg_0x4121f200, uint8_t data){
#line 54
  switch (arg_0x4121f200) {
#line 54
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 54
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__rxDone(data);
#line 54
      break;
#line 54
    default:
#line 54
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__rxDone(arg_0x4121f200, data);
#line 54
      break;
#line 54
    }
#line 54
}
#line 54
# 90 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static bool /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 54 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(uint8_t data)
#line 54
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__rxDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId(), data);
    }
}

# 54 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__rxDone(uint8_t data){
#line 54
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__rxDone(data);
#line 54
}
#line 54
# 55 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2C0P.nc"
static inline bool HplMsp430I2C0P__HplI2C__isI2C(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  {
    unsigned char __nesc_temp = 
#line 56
    HplMsp430I2C0P__U0CTL & 0x20 && HplMsp430I2C0P__U0CTL & 0x04 && HplMsp430I2C0P__U0CTL & 0x01;

#line 56
    return __nesc_temp;
  }
}

# 6 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2C.nc"
inline static bool HplMsp430Usart0P__HplI2C__isI2C(void ){
#line 6
  unsigned char __nesc_result;
#line 6

#line 6
  __nesc_result = HplMsp430I2C0P__HplI2C__isI2C();
#line 6

#line 6
  return __nesc_result;
#line 6
}
#line 6
# 66 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(uint8_t id)
#line 66
{
}

# 39 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(uint8_t arg_0x4121fa80){
#line 39
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__default__fired(arg_0x4121fa80);
#line 39
}
#line 39
# 59 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired(void )
#line 59
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__I2CInterrupts__fired(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 39 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430I2CInterrupts.nc"
inline static void HplMsp430Usart0P__I2CInterrupts__fired(void ){
#line 39
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawI2CInterrupts__fired();
#line 39
}
#line 39
# 249 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static inline void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone(void )
#line 249
{
}

# 64 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(uint8_t id)
#line 64
{
}

# 49 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(uint8_t arg_0x4121f200){
#line 49
  switch (arg_0x4121f200) {
#line 49
    case /*CC2420SpiWireC.HplCC2420SpiC.SpiC.UsartC*/Msp430Usart0C__0__CLIENT_ID:
#line 49
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__UsartInterrupts__txDone();
#line 49
      break;
#line 49
    default:
#line 49
      /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__default__txDone(arg_0x4121f200);
#line 49
      break;
#line 49
    }
#line 49
}
#line 49
# 49 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430UsartShareP.nc"
static inline void /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone(void )
#line 49
{
  if (/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__inUse()) {
    /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__Interrupts__txDone(/*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__ArbiterInfo__userId());
    }
}

# 49 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430UsartInterrupts.nc"
inline static void HplMsp430Usart0P__Interrupts__txDone(void ){
#line 49
  /*Msp430UsartShare0P.UsartShareP*/Msp430UsartShareP__0__RawInterrupts__txDone();
#line 49
}
#line 49
# 411 "/usr/src/tinyos/tos/chips/msp430/msp430hardware.h"
  __nesc_atomic_t __nesc_atomic_start(void )
{
  __nesc_atomic_t result = (__read_status_register() & 0x0008) != 0;

#line 414
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}

  void __nesc_atomic_end(__nesc_atomic_t reenable_interrupts)
{
   __asm volatile ("" :  :  : "memory");
  if (reenable_interrupts) {
    __nesc_enable_interrupt();
    }
}

# 11 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000C)))  void sig_TIMERA0_VECTOR(void )
#line 11
{
#line 11
  Msp430TimerCommonP__VectorTimerA0__fired();
}

# 180 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCapComP.nc"
static void /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__captured(/*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA0*/Msp430TimerCapComP__0__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__captured(/*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA1*/Msp430TimerCapComP__1__Compare__fired();
    }
}

#line 180
static void /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Event__fired(void )
{
  if (/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Control__getControl().cap) {
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__captured(/*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Capture__getEvent());
    }
  else {
#line 185
    /*Msp430TimerC.Msp430TimerA2*/Msp430TimerCapComP__2__Compare__fired();
    }
}

# 12 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x000A)))  void sig_TIMERA1_VECTOR(void )
#line 12
{
#line 12
  Msp430TimerCommonP__VectorTimerA1__fired();
}

#line 13
__attribute((wakeup)) __attribute((interrupt(0x001A)))  void sig_TIMERB0_VECTOR(void )
#line 13
{
#line 13
  Msp430TimerCommonP__VectorTimerB0__fired();
}

# 146 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(uint8_t n)
{
}

# 39 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerEvent.nc"
static void /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__fired(uint8_t arg_0x406534b0){
#line 39
  switch (arg_0x406534b0) {
#line 39
    case 0:
#line 39
      /*Msp430TimerC.Msp430TimerB0*/Msp430TimerCapComP__3__Event__fired();
#line 39
      break;
#line 39
    case 1:
#line 39
      /*Msp430TimerC.Msp430TimerB1*/Msp430TimerCapComP__4__Event__fired();
#line 39
      break;
#line 39
    case 2:
#line 39
      /*Msp430TimerC.Msp430TimerB2*/Msp430TimerCapComP__5__Event__fired();
#line 39
      break;
#line 39
    case 3:
#line 39
      /*Msp430TimerC.Msp430TimerB3*/Msp430TimerCapComP__6__Event__fired();
#line 39
      break;
#line 39
    case 4:
#line 39
      /*Msp430TimerC.Msp430TimerB4*/Msp430TimerCapComP__7__Event__fired();
#line 39
      break;
#line 39
    case 5:
#line 39
      /*Msp430TimerC.Msp430TimerB5*/Msp430TimerCapComP__8__Event__fired();
#line 39
      break;
#line 39
    case 6:
#line 39
      /*Msp430TimerC.Msp430TimerB6*/Msp430TimerCapComP__9__Event__fired();
#line 39
      break;
#line 39
    case 7:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Overflow__fired();
#line 39
      break;
#line 39
    default:
#line 39
      /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Event__default__fired(arg_0x406534b0);
#line 39
      break;
#line 39
    }
#line 39
}
#line 39
# 318 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  /* atomic removed: atomic calls only */
#line 319
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 321
          0;

#line 321
          return __nesc_temp;
        }
      }
  }
  return CC2420SpiP__SpiByte__write(addr);
}

# 134 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static uint8_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiByte__write(uint8_t tx)
#line 134
{
  uint8_t byte;


  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(tx);
  while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__clrRxIntr();
  byte = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();

  return byte;
}

# 768 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t result)
{
  CC2420TKN154P__m_ackFramePending = ackPendingFlag;
  CC2420TKN154P__m_txResult = result;
  if (!CC2420TKN154P__SpiResource__isOwner()) {


      while (!(frame->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST)) {
#line 775
          break;
        }
#line 775
      ;
      result = CC2420TKN154P__RxControl__stop();
      while (!(result == SUCCESS)) {
#line 777
          break;
        }
#line 777
      ;
    }
  else {
#line 779
    CC2420TKN154P__sendDoneSpiReserved();
    }
}

# 178 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 179
    {
      unsigned char __nesc_temp = 
#line 179
      CC2420SpiP__m_holder == id;

      {
#line 179
        __nesc_atomic_end(__nesc_atomic); 
#line 179
        return __nesc_temp;
      }
    }
#line 181
    __nesc_atomic_end(__nesc_atomic); }
}

# 172 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__stop(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) 
        {
          unsigned char __nesc_temp = 
#line 176
          EALREADY;

          {
#line 176
            __nesc_atomic_end(__nesc_atomic); 
#line 176
            return __nesc_temp;
          }
        }
      else 
#line 177
        {
          CC2420ReceiveP__m_stop = TRUE;
          CC2420ReceiveP__InterruptFIFOP__disable();
          if (!CC2420ReceiveP__receivingPacket) {
            CC2420ReceiveP__continueStop();
            }
        }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

static void CC2420ReceiveP__continueStop(void )
{
  /* atomic removed: atomic calls only */
#line 191
  {
    if (!CC2420ReceiveP__m_stop) {
        return;
      }
    CC2420ReceiveP__m_stop = FALSE;
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
  }
  CC2420ReceiveP__stopContinueTask__postTask();
}

# 170 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 791 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__sendDoneSpiReserved(void )
{

  CC2420TKN154P__m_state_t state = CC2420TKN154P__m_state;
  ieee154_txframe_t *frame = CC2420TKN154P__m_txframe;
  ieee154_csma_t *csma = CC2420TKN154P__m_csma;

  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;

  if (state == CC2420TKN154P__S_TX_ACTIVE_NO_CSMA) {
    CC2420TKN154P__txDoneRadioTx(frame, CC2420TKN154P__m_txResult);
    }
  else {
#line 807
    if (state == CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA) {
      CC2420TKN154P__txDoneUnslottedCsma(frame, csma, CC2420TKN154P__m_ackFramePending, CC2420TKN154P__m_txResult);
      }
    else {
#line 809
      if (state == CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA) {
        CC2420TKN154P__txDoneSlottedCsmaCa(frame, csma, CC2420TKN154P__m_ackFramePending, CC2420TKN154P__m_remainingBackoff, CC2420TKN154P__m_txResult);
        }
      else {
#line 812
        while (!0) {
#line 812
            break;
          }
        }
      }
    }
#line 812
  ;
}

# 255 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rfOff(void )
#line 255
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 256
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 258
          FAIL;

          {
#line 258
            __nesc_atomic_end(__nesc_atomic); 
#line 258
            return __nesc_temp;
          }
        }
#line 259
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SRFOFF__strobe();
      CC2420ControlP__CSN__set();
    }
#line 263
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

static error_t CC2420ControlP__CC2420Power__flushRxFifo(void )
{
  uint16_t dummy;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 272
          FAIL;

          {
#line 272
            __nesc_atomic_end(__nesc_atomic); 
#line 272
            return __nesc_temp;
          }
        }
#line 273
      if (CC2420ControlP__FIFO__get()) {



          CC2420ControlP__CSN__clr();
          CC2420ControlP__RXFIFO_REGISTER__read(&dummy);
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();


          CC2420ControlP__SFLUSHRX__strobe();
          CC2420ControlP__SFLUSHRX__strobe();
          CC2420ControlP__CSN__set();
        }
    }
#line 287
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 287 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  /* atomic removed: atomic calls only */
#line 291
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 293
          status;

#line 293
          return __nesc_temp;
        }
      }
  }
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 141 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static error_t CC2420TransmitP__AsyncStdControl__stop(void )
#line 141
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffAlarm__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__CSN__set();
    }
#line 147
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 161 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__Resource__release(void )
#line 161
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    {

      {
        unsigned char __nesc_temp = 
#line 164
        CC2420ControlP__SpiResource__release();

        {
#line 164
          __nesc_atomic_end(__nesc_atomic); 
#line 164
          return __nesc_temp;
        }
      }
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 247 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__disableSpi(void )
#line 247
{
  /* atomic removed: atomic calls only */
#line 248
  {
    HplMsp430Usart0P__ME1 &= ~0x40;
    HplMsp430Usart0P__SIMO__selectIOFunc();
    HplMsp430Usart0P__SOMI__selectIOFunc();
    HplMsp430Usart0P__UCLK__selectIOFunc();
  }
}

# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRx__enableRx(uint8_t client, uint32_t t0, uint32_t dt)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRx__enableRx(t0, dt);
    }
  else 
#line 67
    {
      while (!0) {
#line 68
          break;
        }
#line 68
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
}

# 151 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void )
#line 151
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 152
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state != /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 154
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;

          {
#line 154
            __nesc_atomic_end(__nesc_atomic); 
#line 154
            return __nesc_temp;
          }
        }
#line 155
      {
        unsigned char __nesc_temp = 
#line 155
        /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId;

        {
#line 155
          __nesc_atomic_end(__nesc_atomic); 
#line 155
          return __nesc_temp;
        }
      }
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
}

# 143 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__start(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    {
      if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {




          {
            unsigned char __nesc_temp = 
#line 151
            FAIL;

            {
#line 151
              __nesc_atomic_end(__nesc_atomic); 
#line 151
              return __nesc_temp;
            }
          }
        }
#line 153
      while (!(CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED)) {
#line 153
          break;
        }
#line 153
      ;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 157
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplCC2420PinsC.FIFOM*/Msp430GpioC__5__GeneralIO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 514 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static void CC2420ReceiveP__reset_state(void )
#line 514
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 516
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 145 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__Resource__immediateRequest(void )
#line 145
{
  error_t error = CC2420ControlP__SpiResource__immediateRequest();

#line 147
  if (error == SUCCESS) {
    }

  return error;
}

# 126 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 96 "/usr/src/tinyos/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

  /* atomic removed: atomic calls only */
#line 98
  {
    if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
        StateImplP__state[id] = reqState;
        returnVal = SUCCESS;
      }
  }
  return returnVal;
}

# 177 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__Resource__isOwner(uint8_t id)
#line 177
{
  /* atomic removed: atomic calls only */
#line 178
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == id && /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 179
        TRUE;

#line 179
        return __nesc_temp;
      }
    else 
#line 180
      {
        unsigned char __nesc_temp = 
#line 180
        FALSE;

#line 180
        return __nesc_temp;
      }
  }
}

#line 133
static error_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ResourceDefaultOwner__release(void )
#line 133
{
  /* atomic removed: atomic calls only */
#line 134
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__default_owner_id) {
        if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_GRANTING) {
            /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__postTask();
            {
              unsigned char __nesc_temp = 
#line 138
              SUCCESS;

#line 138
              return __nesc_temp;
            }
          }
        else {
#line 140
          if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_IMM_GRANTING) {
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__reqResId;
              /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state = /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY;
              {
                unsigned char __nesc_temp = 
#line 143
                SUCCESS;

#line 143
                return __nesc_temp;
              }
            }
          }
      }
  }
#line 147
  return FAIL;
}

# 265 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
static void HplMsp430Usart0P__Usart__setModeSpi(msp430_spi_union_config_t *config)
#line 265
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 267
    {
      HplMsp430Usart0P__Usart__resetUsart(TRUE);
      HplMsp430Usart0P__HplI2C__clearModeI2C();
      HplMsp430Usart0P__Usart__disableUart();
      HplMsp430Usart0P__configSpi(config);
      HplMsp430Usart0P__Usart__enableSpi();
      HplMsp430Usart0P__Usart__resetUsart(FALSE);
      HplMsp430Usart0P__Usart__clrIntr();
      HplMsp430Usart0P__Usart__disableIntr();
    }
#line 276
    __nesc_atomic_end(__nesc_atomic); }
  return;
}

# 403 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__rxSpiReserved(void )
{
  CC2420TKN154P__m_state = CC2420TKN154P__S_RX_PENDING;
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__TxControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 409
    {
      if (CC2420TKN154P__TimeCalc__hasExpired(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt)) {
        CC2420TKN154P__ReliableWait__waitRxDone();
        }
      else {
#line 413
        CC2420TKN154P__ReliableWait__waitRx(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt);
        }
    }
#line 415
    __nesc_atomic_end(__nesc_atomic); }
}

# 392 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Config__sync(void )
#line 392
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 393
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 395
          FAIL;

          {
#line 395
            __nesc_atomic_end(__nesc_atomic); 
#line 395
            return __nesc_temp;
          }
        }
#line 396
      if (CC2420ControlP__m_needsSync) {
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__SRFOFF__strobe();
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__writeFsctrl();
          CC2420ControlP__writeMdmctrl0();
          CC2420ControlP__writeTxPower();
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__writeId();
          CC2420ControlP__CSN__set();
          CC2420ControlP__m_needsSync = FALSE;
        }
    }
#line 411
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 461
static void CC2420ControlP__writeFsctrl(void )
#line 461
{
  uint8_t channel;

  /* atomic removed: atomic calls only */
#line 464
  {
    channel = CC2420ControlP__m_channel;
  }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}

# 305 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  /* atomic removed: atomic calls only */
#line 306
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 308
          0;

#line 308
          return __nesc_temp;
        }
      }
  }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 475 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__writeMdmctrl0(void )
#line 475
{
  /* atomic removed: atomic calls only */
#line 476
  {
    uint8_t _acceptReservedFrames = CC2420ControlP__acceptReservedFrames ? 1 : 0;
    uint8_t _panCoord = CC2420ControlP__m_isPanCoord ? 1 : 0;
    uint8_t _addressRecognition = CC2420ControlP__addressRecognition ? 1 : 0;
    uint8_t _autoAck = CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault ? 1 : 0;

#line 481
    CC2420ControlP__MDMCTRL0__write((((((((_acceptReservedFrames << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | (
    _panCoord << CC2420_MDMCTRL0_PAN_COORDINATOR)) | (
    _addressRecognition << CC2420_MDMCTRL0_ADR_DECODE)) | (
    2 << CC2420_MDMCTRL0_CCA_HYST)) | (
    CC2420ControlP__m_CCAMode << CC2420_MDMCTRL0_CCA_MOD)) | (
    1 << CC2420_MDMCTRL0_AUTOCRC)) | (
    _autoAck << CC2420_MDMCTRL0_AUTOACK)) | (
    2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
  }
}







static void CC2420ControlP__writeId(void )
#line 498
{
  uint16_t bcnAccept = 0;
  nxle_uint16_t id[6];

  /* atomic removed: atomic calls only */
#line 502
  {
    CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE((uint8_t *)&id);
    __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
    __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
  }
  if (CC2420ControlP__m_pan == 0xFFFF) {
    bcnAccept = 1;
    }

  CC2420ControlP__IOCFG0__write(((bcnAccept << CC2420_IOCFG0_BCN_ACCEPT) | (
  1 << CC2420_IOCFG0_FIFOP_POLARITY)) | (
  127 << CC2420_IOCFG0_FIFOP_THR));

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, sizeof id);
}

# 1020 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *src)
{
  uint8_t i;
  uint64_t srcCopy = *src;

#line 1024
  for (i = 0; i < 8; i++) {
      destLE[i] = srcCopy;
      srcCopy >>= 8;
    }
}

# 130 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static error_t CC2420TransmitP__AsyncStdControl__start(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 133
          EALREADY;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 49 "/usr/src/tinyos/tos/chips/msp430/timer/GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__disableEvents();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__GeneralIO__selectModuleFunc();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__clearPendingInterrupt();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430Capture__clearOverflow();
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__setControlAsCapture(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/GpioCaptureC__0__Msp430TimerControl__enableEvents();
  }
  return SUCCESS;
}

# 549 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt)
{

  uint32_t now = PibP__LocalTime__get();
#line 552
  uint32_t elapsed;

#line 553
  if (now >= t0) {
    elapsed = now - t0;
    }
  else {
#line 556
    elapsed = ~(t0 - now) + 1;
    }
#line 557
  return elapsed >= dt;
}

# 80 "/usr/src/tinyos/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 62 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerP.nc"
static uint16_t /*Msp430TimerC.Msp430TimerB*/Msp430TimerP__1__Timer__get(void )
{




  if (1) {
      /* atomic removed: atomic calls only */
#line 69
      {
        uint16_t t0;
        uint16_t t1 = * (volatile uint16_t * )400U;

#line 72
        do {
#line 72
            t0 = t1;
#line 72
            t1 = * (volatile uint16_t * )400U;
          }
        while (
#line 72
        t0 != t1);
        {
          unsigned int __nesc_temp = 
#line 73
          t1;

#line 73
          return __nesc_temp;
        }
      }
    }
  else 
#line 76
    {
      return * (volatile uint16_t * )400U;
    }
}

# 417 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__ReliableWait__waitRxDone(void )
{
  error_t result;

  /* atomic removed: atomic calls only */
#line 420
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_RECEIVING;
    result = CC2420TKN154P__CC2420Power__rxOn();
  }
  while (!(result == SUCCESS)) {
#line 424
      break;
    }
#line 424
  ;
  CC2420TKN154P__CC2420Tx__lockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__RadioRx__enableRxDone();
}

# 242 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 242
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 245
          FAIL;

          {
#line 245
            __nesc_atomic_end(__nesc_atomic); 
#line 245
            return __nesc_temp;
          }
        }
#line 246
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SRXON__strobe();
      CC2420ControlP__SACKPEND__strobe();
      CC2420ControlP__CSN__set();
    }
#line 251
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 253 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static void DispatchUnslottedCsmaP__updateState(void )
{
  DispatchUnslottedCsmaP__next_state_t next;

#line 256
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 256
    {



      if (DispatchUnslottedCsmaP__m_lock || !DispatchUnslottedCsmaP__RadioToken__isOwner()) {
        {
#line 261
          __nesc_atomic_end(__nesc_atomic); 
#line 261
          return;
        }
        }
#line 262
      DispatchUnslottedCsmaP__m_lock = TRUE;



      if (DispatchUnslottedCsmaP__m_indirectTxPending) {
          next = DispatchUnslottedCsmaP__tryReceive();
        }
      else {

        if (DispatchUnslottedCsmaP__IsRadioTokenRequested__getNow()) {
            if (DispatchUnslottedCsmaP__RadioOff__isOff()) {

                ;
                DispatchUnslottedCsmaP__RadioToken__request();
                DispatchUnslottedCsmaP__m_lock = FALSE;
                DispatchUnslottedCsmaP__RadioToken__release();
                {
#line 278
                  __nesc_atomic_end(__nesc_atomic); 
#line 278
                  return;
                }
              }
            else {
#line 280
              next = DispatchUnslottedCsmaP__SWITCH_OFF;
              }
          }
        else {
          if (DispatchUnslottedCsmaP__m_currentFrame != (void *)0) {
              next = DispatchUnslottedCsmaP__tryTransmit();
            }
          else {

            if (DispatchUnslottedCsmaP__IsRxEnableActive__getNow() || DispatchUnslottedCsmaP__m_macRxOnWhenIdle) {
                next = DispatchUnslottedCsmaP__tryReceive();
                if (next == DispatchUnslottedCsmaP__DO_NOTHING) {


                    DispatchUnslottedCsmaP__wasRxEnabledTask__postTask();
                  }
              }
            else 

              {
                next = DispatchUnslottedCsmaP__trySwitchOff();
                if (next == DispatchUnslottedCsmaP__DO_NOTHING) {

                    DispatchUnslottedCsmaP__m_lock = FALSE;
                    ;
                    DispatchUnslottedCsmaP__RadioToken__release();
                    {
#line 306
                      __nesc_atomic_end(__nesc_atomic); 
#line 306
                      return;
                    }
                  }
              }
            }
          }
        }
#line 311
      if (next == DispatchUnslottedCsmaP__DO_NOTHING) {
        DispatchUnslottedCsmaP__m_lock = FALSE;
        }
    }
#line 314
    __nesc_atomic_end(__nesc_atomic); }

  switch (next) 
    {
      case DispatchUnslottedCsmaP__SWITCH_OFF: while (!(DispatchUnslottedCsmaP__RadioOff__off() == SUCCESS)) {
#line 318
            break;
          }
#line 318
      ;
#line 318
      break;
      case DispatchUnslottedCsmaP__WAIT_FOR_RXDONE: break;
      case DispatchUnslottedCsmaP__WAIT_FOR_TXDONE: break;
      case DispatchUnslottedCsmaP__DO_NOTHING: break;
    }
}

# 162 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(uint8_t id)
#line 162
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 163
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId == id && /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 164
          TRUE;

          {
#line 164
            __nesc_atomic_end(__nesc_atomic); 
#line 164
            return __nesc_temp;
          }
        }
      else 
#line 165
        {
          unsigned char __nesc_temp = 
#line 165
          FALSE;

          {
#line 165
            __nesc_atomic_end(__nesc_atomic); 
#line 165
            return __nesc_temp;
          }
        }
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
}

# 341 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static DispatchUnslottedCsmaP__next_state_t DispatchUnslottedCsmaP__tryReceive(void )
{
  DispatchUnslottedCsmaP__next_state_t next;

#line 344
  if (DispatchUnslottedCsmaP__RadioRx__isReceiving()) {
    next = DispatchUnslottedCsmaP__DO_NOTHING;
    }
  else {
#line 346
    if (!DispatchUnslottedCsmaP__RadioOff__isOff()) {
      next = DispatchUnslottedCsmaP__SWITCH_OFF;
      }
    else 
#line 348
      {
        DispatchUnslottedCsmaP__RadioRx__enableRx(0, 0);
        next = DispatchUnslottedCsmaP__WAIT_FOR_RXDONE;
      }
    }
#line 352
  return next;
}

# 206 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static bool RadioControlImplP__MacRadioOff__isOff(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRadioOff__isOff();
    }
  else {
#line 211
    return EBUSY;
    }
}

# 72 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(uint8_t id)
#line 72
{
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 74
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE) {
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_GRANTING;
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId = id;
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 79
            SUCCESS;

            {
#line 79
              __nesc_atomic_end(__nesc_atomic); 
#line 79
              return __nesc_temp;
            }
          }
        }
#line 81
      {
        unsigned char __nesc_temp = 
#line 81
        /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(id);

        {
#line 81
          __nesc_atomic_end(__nesc_atomic); 
#line 81
          return __nesc_temp;
        }
      }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
}

# 75 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(uint8_t id)
#line 98
{
  bool released = FALSE;

#line 100
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 100
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY && /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId == id) {
          if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue();
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_GRANTING;
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 722 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame)
{
  if (CC2420TKN154P__SpiResource__isOwner() || CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__txSpiReserved();
    }
  else {
#line 727
    CC2420TKN154P__SpiResource__request();
    }
}

#line 730
static void CC2420TKN154P__txSpiReserved(void )
{
  error_t result;

#line 733
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__TxControl__start();
  result = CC2420TKN154P__CC2420Tx__loadTXFIFO(CC2420TKN154P__m_txframe);
  while (!(result == SUCCESS)) {
#line 736
      break;
    }
#line 736
  ;
}

# 214 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  /* atomic removed: atomic calls only */
#line 219
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 221
          status;

#line 221
          return __nesc_temp;
        }
      }
  }
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 205 "/usr/src/tinyos/tos/chips/msp430/usart/Msp430SpiNoDmaP.nc"
static error_t /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SpiPacket__send(uint8_t id, uint8_t *tx_buf, 
uint8_t *rx_buf, 
uint16_t len)
#line 207
{

  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_client = id;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf = tx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf = rx_buf;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len = len;
  /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos = 0;

  if (len) {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__enableRxIntr();
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp();
    }
  else {
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__postTask();
    }

  return SUCCESS;
}

#line 182
static void /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__continueOp(void )
#line 182
{

  uint8_t end;
  uint8_t tmp;

  /* atomic removed: atomic calls only */
#line 187
  {
    /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);

    end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos + /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__SPI_ATOMIC_SIZE;
    if (end > /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len) {
      end = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_len;
      }
    while (++/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos < end) {
        while (!/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__isRxIntrPending()) ;
        tmp = /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__rx();
        if (/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf) {
          /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_rx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos - 1] = tmp;
          }
#line 199
        /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__Usart__tx(/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf ? /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_tx_buf[/*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__m_pos] : 0);
      }
  }
}

# 107 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 190 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRadioOff__off(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRadioOff__off();
    }
  else 
#line 194
    {
      while (!0) {
#line 195
          break;
        }
#line 195
      ;
      return EBUSY;
    }
}

# 64 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(uint32_t t0, uint32_t dt)
#line 64
{
  /* atomic removed: atomic calls only */
  {
    uint32_t now = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow();
#line 67
    uint32_t elapsed;

#line 68
    if (t0 < now) {
      elapsed = now - t0;
      }
    else {
#line 71
      elapsed = ~(t0 - now) + 1;
      }
#line 72
    if (elapsed > dt) {
      dt = elapsed;
      }
#line 74
    dt -= elapsed;
    /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(dt);
  }
}

# 107 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static void /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__set_alarm(void )
{
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type now = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__Counter__get();
#line 109
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type expires;
#line 109
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type remaining;




  expires = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 + /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt;


  remaining = (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__to_size_type )(expires - now);


  if (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 <= now) 
    {
      if (expires >= /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY) 
    {
      /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 = now + /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY;
      /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt = remaining - /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY;
      remaining = /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__MAX_DELAY;
    }
  else 
    {
      /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_t0 += /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt;
      /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__m_dt = 0;
    }
  /*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__AlarmFrom__startAt((/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type )now << 0, 
  (/*Ieee802154NonBeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform*/TransformAlarmC__2__from_size_type )remaining << 0);
}

# 408 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static void DispatchUnslottedCsmaP__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, 
ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{
  bool done = TRUE;

#line 412
  ;
  DispatchUnslottedCsmaP__m_resume = FALSE;
  switch (result) 
    {
      case SUCCESS: 


        DispatchUnslottedCsmaP__m_txStatus = IEEE154_SUCCESS;
      if (frame->payload[0] == CMD_FRAME_DATA_REQUEST && (
      frame->header->mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_CMD) {

          DispatchUnslottedCsmaP__m_txStatus = IEEE154_NO_DATA;
          if (ackPendingFlag) {


              DispatchUnslottedCsmaP__m_indirectTxPending = TRUE;
              DispatchUnslottedCsmaP__m_lastFrame = DispatchUnslottedCsmaP__m_currentFrame;
              DispatchUnslottedCsmaP__m_currentFrame = (void *)0;
              while (!(DispatchUnslottedCsmaP__RadioRx__enableRx(0, 0) == SUCCESS)) {
#line 430
                  break;
                }
#line 430
              ;
              return;
            }
        }
      break;
      case FAIL: 


        DispatchUnslottedCsmaP__m_txStatus = IEEE154_CHANNEL_ACCESS_FAILURE;
      break;
      case ENOACK: 



        if (DispatchUnslottedCsmaP__m_macMaxFrameRetries > 0) {

            done = FALSE;
            DispatchUnslottedCsmaP__m_csma.NB = 0;
            DispatchUnslottedCsmaP__m_csma.macMaxCsmaBackoffs = DispatchUnslottedCsmaP__m_macMaxCSMABackoffs;
            DispatchUnslottedCsmaP__m_csma.macMaxBE = DispatchUnslottedCsmaP__m_macMaxBE;
            DispatchUnslottedCsmaP__m_csma.BE = DispatchUnslottedCsmaP__m_BE;
            DispatchUnslottedCsmaP__m_macMaxFrameRetries -= 1;
          }
        else {
#line 453
          DispatchUnslottedCsmaP__m_txStatus = IEEE154_NO_ACK;
          }
#line 454
      break;
      default: 
        while (!0) {
#line 456
            break;
          }
#line 456
      ;
      break;
    }

  if (done) {
      DispatchUnslottedCsmaP__m_lastFrame = DispatchUnslottedCsmaP__m_currentFrame;
      DispatchUnslottedCsmaP__m_currentFrame = (void *)0;
      DispatchUnslottedCsmaP__signalTxDoneTask__postTask();
    }

  DispatchUnslottedCsmaP__m_lock = FALSE;
  DispatchUnslottedCsmaP__updateState();
  ;
}

# 107 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static void /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__set_alarm(void )
{
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type now = /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__Counter__get();
#line 109
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type remaining;




  expires = /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 + /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;


  remaining = (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 = now + /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = remaining - /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_t0 += /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt;
      /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__m_dt = 0;
    }
  /*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__AlarmFrom__startAt((/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*Ieee802154NonBeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 436 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__StartupAlarm__fired(void )
#line 436
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 57 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__clr(void )
#line 57
{
#line 57
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 57
    * (volatile uint8_t * )29U &= ~(0x01 << 6);
#line 57
    __nesc_atomic_end(__nesc_atomic); }
}

#line 56
static void /*HplMsp430GeneralIOC.P46*/HplMsp430GeneralIOP__30__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )29U |= 0x01 << 6;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 87 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void )
#line 87
{
  if (! /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling) {








      const /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type now = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow();
      const /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *pEnd = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm + /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS;
      bool isset = FALSE;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *p = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm;
      bool *pset = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt = (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )0 - (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1;

      for (; p != pEnd; p++, pset++) {
          if (*pset) {
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = now - p->t0;

#line 107
              if (p->dt <= elapsed) {
                  p->t0 += p->dt;
                  p->dt = 0;
                }
              else {
                  p->t0 = now;
                  p->dt -= elapsed;
                }

              if (p->dt <= dt) {
                  dt = p->dt;
                  isset = TRUE;
                }
            }
        }

      if (isset) {




          if (dt & ((/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1 << (8 * sizeof(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type ) - 1))) {
            dt >>= 1;
            }
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(now, dt);
        }
      else {
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop();
        }
    }
}

# 107 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__set_alarm(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type now = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__Counter__get();
#line 109
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type remaining;




  expires = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 + /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;


  remaining = (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 = now + /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = remaining - /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_t0 += /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt;
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__m_dt = 0;
    }
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__AlarmFrom__startAt((/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )now << 0, 
  (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform*/TransformAlarmC__1__from_size_type )remaining << 0);
}

# 476 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__ReliableWait__waitTxDone(void )
{
  error_t result;

#line 479
  while (!(CC2420TKN154P__m_state == CC2420TKN154P__S_TX_PENDING)) {
#line 479
      break;
    }
#line 479
  ;
  /* atomic removed: atomic calls only */
#line 480
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_NO_CSMA;
    result = CC2420TKN154P__CC2420Tx__send(FALSE);
    CC2420TKN154P__checkEnableRxForACK();
  }
  while (!(result == SUCCESS)) {
#line 485
      break;
    }
#line 485
  ;
}

# 190 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static error_t CC2420TransmitP__CC2420Tx__send(bool cca)
{
  cc2420_status_t status;
  bool congestion = TRUE;

  /* atomic removed: atomic calls only */
#line 195
  {
    if (CC2420TransmitP__m_state != CC2420TransmitP__S_READY_TX) 
      {
        unsigned char __nesc_temp = 
#line 197
        EOFF;

#line 197
        return __nesc_temp;
      }
#line 198
    CC2420TransmitP__CSN__set();
    CC2420TransmitP__CSN__clr();



    status = cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();






    if (!(status & CC2420_STATUS_TX_ACTIVE)) {
        status = CC2420TransmitP__SNOP__strobe();
        if (status & CC2420_STATUS_TX_ACTIVE) {
            congestion = FALSE;
          }
      }

    CC2420TransmitP__CSN__set();



    if (congestion) {
        {
          unsigned char __nesc_temp = 
#line 222
          FAIL;

#line 222
          return __nesc_temp;
        }
      }
    else 
#line 223
      {
        CC2420TransmitP__m_state = CC2420TransmitP__S_SFD;
        __nesc_hton_uint32(CC2420TransmitP__m_frame->metadata->timestamp.nxdata, 0xffffffff);
        CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
        {
          unsigned char __nesc_temp = 
#line 227
          SUCCESS;

#line 227
          return __nesc_temp;
        }
      }
  }
}

# 752 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__checkEnableRxForACK(void )
{


  bool ackRequest = CC2420TKN154P__m_txframe->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST ? TRUE : FALSE;
  error_t result = SUCCESS;

  if (ackRequest) {


      CC2420TKN154P__SpiResource__release();
      result = CC2420TKN154P__RxControl__start();
    }
  while (!(result == SUCCESS)) {
#line 765
      break;
    }
#line 765
  ;
}

# 417 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi)
#line 417
{
  uint16_t data;
  cc2420_status_t status;

#line 420
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 420
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 422
          FAIL;

          {
#line 422
            __nesc_atomic_end(__nesc_atomic); 
#line 422
            return __nesc_temp;
          }
        }
#line 423
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      status = CC2420ControlP__RSSI__read(&data);
      CC2420ControlP__CSN__set();
      if (status & 0x02) {
          *rssi = data & 0x00FF;
          {
            unsigned char __nesc_temp = 
#line 429
            SUCCESS;

            {
#line 429
              __nesc_atomic_end(__nesc_atomic); 
#line 429
              return __nesc_temp;
            }
          }
        }
      else 
#line 431
        {
          unsigned char __nesc_temp = 
#line 431
          FAIL;

          {
#line 431
            __nesc_atomic_end(__nesc_atomic); 
#line 431
            return __nesc_temp;
          }
        }
    }
#line 434
    __nesc_atomic_end(__nesc_atomic); }
}

# 607 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__nextIterationSlottedCsma(void )
{
  uint32_t dtTxTarget;
  uint16_t backoff;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 614
  {
    if (CC2420TKN154P__m_resume) {
        backoff = CC2420TKN154P__m_remainingBackoff;
        CC2420TKN154P__m_resume = FALSE;
      }
    else {
#line 619
      backoff = CC2420TKN154P__getRandomBackoff(CC2420TKN154P__m_csma->BE);
      }
#line 620
    dtTxTarget = CC2420TKN154P__TimeCalc__timeElapsed(CC2420TKN154P__m_t0, CC2420TKN154P__LocalTime__get());
    dtTxTarget += backoff;
    if (dtTxTarget > CC2420TKN154P__m_dt) {

        uint32_t overlap = dtTxTarget - CC2420TKN154P__m_dt;

#line 625
        overlap = overlap + (IEEE154_aUnitBackoffPeriod - overlap % IEEE154_aUnitBackoffPeriod);
        backoff = overlap;
        frame = CC2420TKN154P__m_txframe;
        csma = CC2420TKN154P__m_csma;
      }
    else 
#line 629
      {

        CC2420TKN154P__m_state = CC2420TKN154P__S_TX_BACKOFF_SLOTTED;
        CC2420TKN154P__ReliableWait__waitBackoff(backoff);
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, FALSE, backoff, ERETRY);
    }
}

#line 210
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE)
{
  uint16_t res = CC2420TKN154P__Random__rand16();
  uint16_t mask = 0xFFFF;

#line 214
  mask <<= BE;
  mask = ~mask;
  res &= mask;
  return res * IEEE154_aUnitBackoffPeriod;
}

# 69 "/usr/src/tinyos/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 540 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1)
{

  if (t0 <= t1) {
    return t1 - t0;
    }
  else {
#line 546
    return ~(t0 - t1) + 1;
    }
}

# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t CC2420TKN154P__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = LocalTime62500hzP__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 110 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 113
          break;
        }
#line 113
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_BACKOFF;
  TKN154TimingP__SymbolAlarm__start(dt);
}

# 513 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__nextIterationUnslottedCsma(void )
{

  uint16_t backoff = CC2420TKN154P__getRandomBackoff(CC2420TKN154P__m_csma->BE);

#line 517
  CC2420TKN154P__m_state = CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED;
  CC2420TKN154P__ReliableWait__waitBackoff(backoff);
}

# 14 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430TimerCommonP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0018)))  void sig_TIMERB1_VECTOR(void )
#line 14
{
#line 14
  Msp430TimerCommonP__VectorTimerB1__fired();
}

# 63 "/usr/src/tinyos/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 175 "/usr/src/tinyos/tos/chips/msp430/timer/Msp430ClockP.nc"
static void Msp430ClockP__set_dco_calib(int calib)
{
  BCSCTL1 = (BCSCTL1 & ~0x07) | ((calib >> 8) & 0x07);
  DCOCTL = calib & 0xff;
}

# 16 "/usr/src/tinyos/tos/platforms/telosb/MotePlatformC.nc"
static void MotePlatformC__TOSH_FLASH_M25P_DP_bit(bool set)
#line 16
{
  if (set) {
    TOSH_SET_SIMO0_PIN();
    }
  else {
#line 20
    TOSH_CLR_SIMO0_PIN();
    }
#line 21
  TOSH_SET_UCLK0_PIN();
  TOSH_CLR_UCLK0_PIN();
}

# 56 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430GeneralIOP.nc"
static void /*HplMsp430GeneralIOC.P55*/HplMsp430GeneralIOP__37__IO__set(void )
#line 56
{
#line 56
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 56
    * (volatile uint8_t * )49U |= 0x01 << 5;
#line 56
    __nesc_atomic_end(__nesc_atomic); }
}

# 134 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x405c3b40){
#line 75
  switch (arg_0x405c3b40) {
#line 75
    case PibP__radioControlStopTask:
#line 75
      PibP__radioControlStopTask__runTask();
#line 75
      break;
#line 75
    case PibP__resetSpinTask:
#line 75
      PibP__resetSpinTask__runTask();
#line 75
      break;
#line 75
    case /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask:
#line 75
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case DispatchUnslottedCsmaP__signalTxDoneTask:
#line 75
      DispatchUnslottedCsmaP__signalTxDoneTask__runTask();
#line 75
      break;
#line 75
    case DispatchUnslottedCsmaP__wasRxEnabledTask:
#line 75
      DispatchUnslottedCsmaP__wasRxEnabledTask__runTask();
#line 75
      break;
#line 75
    case DispatchUnslottedCsmaP__startIndirectTxTimerTask:
#line 75
      DispatchUnslottedCsmaP__startIndirectTxTimerTask__runTask();
#line 75
      break;
#line 75
    case DispatchUnslottedCsmaP__signalStartConfirmTask:
#line 75
      DispatchUnslottedCsmaP__signalStartConfirmTask__runTask();
#line 75
      break;
#line 75
    case /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask:
#line 75
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__runTask();
#line 75
      break;
#line 75
    case IndirectTxP__tryCoordCapTxTask:
#line 75
      IndirectTxP__tryCoordCapTxTask__runTask();
#line 75
      break;
#line 75
    case ScanP__startTimerTask:
#line 75
      ScanP__startTimerTask__runTask();
#line 75
      break;
#line 75
    case ScanP__nextIterationTask:
#line 75
      ScanP__nextIterationTask__runTask();
#line 75
      break;
#line 75
    case ScanP__continueScanRequestTask:
#line 75
      ScanP__continueScanRequestTask__runTask();
#line 75
      break;
#line 75
    case BeaconRequestRxP__sendBeaconTask:
#line 75
      BeaconRequestRxP__sendBeaconTask__runTask();
#line 75
      break;
#line 75
    case PromiscuousModeP__signalStartDoneTask:
#line 75
      PromiscuousModeP__signalStartDoneTask__runTask();
#line 75
      break;
#line 75
    case PromiscuousModeP__continueStopTask:
#line 75
      PromiscuousModeP__continueStopTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__energyDetectionTask:
#line 75
      CC2420TKN154P__energyDetectionTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__startDoneTask:
#line 75
      CC2420TKN154P__startDoneTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__rxControlStopDoneTask:
#line 75
      CC2420TKN154P__rxControlStopDoneTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__configSyncTask:
#line 75
      CC2420TKN154P__configSyncTask__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task:
#line 75
      /*Msp430SpiNoDma0P.SpiP*/Msp430SpiNoDmaP__0__signalDone_task__runTask();
#line 75
      break;
#line 75
    case /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask:
#line 75
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__stopContinueTask:
#line 75
      CC2420ReceiveP__stopContinueTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x405c3b40);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getNow(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 73 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

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
              /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 88 "/usr/src/tinyos/tos/system/PoolP.nc"
static /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t */*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free) {
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t *rval = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index];

#line 91
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index] = (void *)0;
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free--;
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index++;
      if (/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index == 4) {
          /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

#line 88
static /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t */*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free) {
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t *rval = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index];

#line 91
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index] = (void *)0;
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free--;
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index++;
      if (/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index == 3) {
          /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

static error_t /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free >= 4) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index + /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 4) {
          emptyIndex -= 4;
        }
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*TKN154NonBeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

# 591 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression)
{
  uint8_t offset = MHR_INDEX_ADDRESS;

#line 602
  if (DstAddrMode == ADDR_MODE_SHORT_ADDRESS || DstAddrMode == ADDR_MODE_EXTENDED_ADDRESS) {
      __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, DstPANId);
      offset += 2;
      if (DstAddrMode == ADDR_MODE_SHORT_ADDRESS) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, DstAddr->shortAddress);
          offset += 2;
        }
      else 
#line 608
        {
          PibP__FrameUtility__convertToLE(&mhr[offset], & DstAddr->extendedAddress);
          offset += 8;
        }
    }
  if (SrcAddrMode == ADDR_MODE_SHORT_ADDRESS || SrcAddrMode == ADDR_MODE_EXTENDED_ADDRESS) {
      if (DstPANId != SrcPANId || !PANIDCompression) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, SrcPANId);
          offset += 2;
        }
      if (SrcAddrMode == ADDR_MODE_SHORT_ADDRESS) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, SrcAddr->shortAddress);
          offset += 2;
        }
      else 
#line 621
        {
          PibP__FrameUtility__convertToLE(&mhr[offset], & SrcAddr->extendedAddress);
          offset += 8;
        }
    }
  return offset;
}

# 79 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static ieee154_status_t /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame)
{
  txFrame->client = client;
  if (/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__isResetPending() || /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__enqueue(txFrame) != SUCCESS) {
    return IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 84
    {
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask();
      return IEEE154_SUCCESS;
    }
}

# 144 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 104 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static uint32_t IndirectTxP__getPersistenceTimeSymbols(void )
{


  uint32_t unitPeriod;
  ieee154_macBeaconOrder_t BO = IndirectTxP__MLME_GET__macBeaconOrder();

  if (BO <= 14) {
      unitPeriod = IEEE154_aBaseSuperframeDuration;
      unitPeriod *= (uint16_t )1 << BO;
    }
  else {
#line 115
    unitPeriod = IEEE154_aBaseSuperframeDuration;
    }
#line 116
  return unitPeriod * IndirectTxP__MLME_GET__macTransactionPersistenceTime();
}

# 103 "/usr/src/tinyos/tos/system/PoolP.nc"
static error_t /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index + /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*TKN154NonBeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

# 393 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static void DispatchUnslottedCsmaP__IndirectTxWaitTimer__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 395
    {
      if (DispatchUnslottedCsmaP__m_indirectTxPending) {
          DispatchUnslottedCsmaP__m_indirectTxPending = FALSE;
          DispatchUnslottedCsmaP__signalTxDoneTask__postTask();
        }
    }
#line 400
    __nesc_atomic_end(__nesc_atomic); }
}

# 298 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static void AssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  ieee154_address_t srcAddress;
#line 300
  ieee154_address_t deviceAddress;

#line 301
  srcAddress.extendedAddress = AssociateP__LocalExtendedAddress__get();
  if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
    deviceAddress.shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)(&txFrame->header->mhr[MHR_INDEX_ADDRESS] + 2)).nxdata);
    }
  else {
#line 305
    AssociateP__FrameUtility__convertToNative(& deviceAddress.extendedAddress, &txFrame->header->mhr[MHR_INDEX_ADDRESS] + 2);
    }
#line 306
  txFrame->payload[0] = AssociateP__S_IDLE;
  AssociateP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  AssociateP__TxFramePool__put(txFrame);
  AssociateP__MLME_COMM_STATUS__indication(AssociateP__MLME_GET__macPANId(), ADDR_MODE_EXTENDED_ADDRESS, 
  srcAddress, ADDR_MODE_EXTENDED_ADDRESS, deviceAddress, 
  status, 0);
}

# 1030 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__FrameUtility__convertToNative(uint64_t *dest, const uint8_t *srcLE)
{

  uint32_t lower = __nesc_ntoh_leuint32((* (nxle_uint32_t *)srcLE).nxdata);
  uint64_t upper = __nesc_ntoh_leuint32((* (nxle_uint32_t *)(srcLE + 4)).nxdata);

#line 1035
  *dest = (upper << 32) + lower;
}

# 177 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static void DisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
{

  uint8_t *mhr = ((ieee154_header_t *)data->header)->mhr;
#line 180
  uint8_t dstAddrOffset = 5;
  uint8_t DeviceAddrMode = (mhr[1] & FC2_DEST_MODE_MASK) >> FC2_DEST_MODE_OFFSET;
  uint16_t DevicePANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[MHR_INDEX_ADDRESS]).nxdata);
  ieee154_address_t DeviceAddress;

  DisassociateP__FrameUtility__convertToNative(& DeviceAddress.extendedAddress, &mhr[dstAddrOffset]);
  DisassociateP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)data->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  DisassociateP__TxFramePool__put(data);
  ;
  DisassociateP__m_disAssociationOngoing = FALSE;



  if (status == IEEE154_SUCCESS || status == IEEE154_NO_ACK) {
    DisassociateP__resetPanValuesInPib();
    }
#line 195
  DisassociateP__MLME_DISASSOCIATE__confirm(status, DeviceAddrMode, DevicePANID, DeviceAddress);
}

#line 228
static void DisassociateP__resetPanValuesInPib(void )
{




  DisassociateP__MLME_SET__macPANId(0xFFFF);
  DisassociateP__MLME_SET__macShortAddress(0xFFFF);
  DisassociateP__MLME_SET__macAssociatedPANCoord(FALSE);
  DisassociateP__MLME_SET__macCoordShortAddress(0xFFFF);
  DisassociateP__MLME_SET__macCoordExtendedAddress(0);
}

# 454 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static ieee154_status_t PibP__MLME_SET__macPANId(ieee154_macPANId_t value)
#line 454
{
  PibP__m_pib.macPANId = value;
  PibP__PIBUpdate__notify(IEEE154_macPANId, & PibP__m_pib.macPANId);
  return IEEE154_SUCCESS;
}

#line 1063
static void PibP__PIBUpdate__default__notify(uint8_t PIBAttributeID, const void *PIBAttributeValue)
#line 1063
{
}

# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__notify(uint8_t arg_0x409bfec8, PibP__PIBUpdate__val_t val){
#line 74
  switch (arg_0x409bfec8) {
#line 74
    case IEEE154_phyCurrentChannel:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyCurrentChannel, val);
#line 74
      break;
#line 74
    case IEEE154_phyTransmitPower:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyTransmitPower, val);
#line 74
      break;
#line 74
    case IEEE154_phyCCAMode:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyCCAMode, val);
#line 74
      break;
#line 74
    case IEEE154_macPANId:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macPANId, val);
#line 74
      break;
#line 74
    case IEEE154_macRxOnWhenIdle:
#line 74
      DispatchUnslottedCsmaP__PIBUpdateMacRxOnWhenIdle__notify(val);
#line 74
      break;
#line 74
    case IEEE154_macShortAddress:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macShortAddress, val);
#line 74
      break;
#line 74
    case IEEE154_macPanCoordinator:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macPanCoordinator, val);
#line 74
      break;
#line 74
    default:
#line 74
      PibP__PIBUpdate__default__notify(arg_0x409bfec8, val);
#line 74
      break;
#line 74
    }
#line 74
}
#line 74
# 244 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__PIBUpdate__notify(uint8_t PIBAttribute, const void *PIBAttributeValue)
{
  uint8_t txpower;

#line 247
  switch (PIBAttribute) 
    {
      case IEEE154_macShortAddress: 
        CC2420TKN154P__CC2420Config__setShortAddr(* (ieee154_macShortAddress_t *)PIBAttributeValue);
      break;
      case IEEE154_macPANId: 
        CC2420TKN154P__CC2420Config__setPanAddr(* (ieee154_macPANId_t *)PIBAttributeValue);
      break;
      case IEEE154_phyCurrentChannel: 
        CC2420TKN154P__CC2420Config__setChannel(* (ieee154_phyCurrentChannel_t *)PIBAttributeValue);
      break;
      case IEEE154_macPanCoordinator: 
        CC2420TKN154P__CC2420Config__setPanCoordinator(* (ieee154_macPanCoordinator_t *)PIBAttributeValue);
      break;
      case IEEE154_phyTransmitPower: 

        txpower = * (ieee154_phyTransmitPower_t *)PIBAttributeValue & 0x3F;
      if (txpower & 0x20) {
        txpower |= 0xC0;
        }
#line 266
      CC2420TKN154P__CC2420Config__setTxPower(CC2420TKN154P__dBmToPA_LEVEL((int8_t )txpower));
      break;
      case IEEE154_phyCCAMode: 
        CC2420TKN154P__CC2420Config__setCCAMode(* (ieee154_phyCCAMode_t *)PIBAttributeValue);
      break;
    }
  if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING || CC2420TKN154P__m_state == CC2420TKN154P__S_RX_PENDING) {
    CC2420TKN154P__configSyncTask__postTask();
    }
}

# 296 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel)
#line 296
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 297
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_channel = channel;
    }
#line 300
    __nesc_atomic_end(__nesc_atomic); }
}

# 466 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static ieee154_status_t PibP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value)
#line 466
{
  PibP__m_pib.macShortAddress = value;
  PibP__PIBUpdate__notify(IEEE154_macShortAddress, & PibP__m_pib.macShortAddress);
  return IEEE154_SUCCESS;
}

#line 418
static ieee154_status_t PibP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value)
#line 418
{
  PibP__m_pib.macCoordShortAddress = value;
  PibP__PIBUpdate__notify(IEEE154_macCoordShortAddress, & PibP__m_pib.macCoordShortAddress);
  return IEEE154_SUCCESS;
}

#line 412
static ieee154_status_t PibP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value)
#line 412
{
  PibP__m_pib.macCoordExtendedAddress = value;
  PibP__PIBUpdate__notify(IEEE154_macCoordExtendedAddress, & PibP__m_pib.macCoordExtendedAddress);
  return IEEE154_SUCCESS;
}

# 122 "TestDeviceC.nc"
static void TestDeviceC__MLME_DISASSOCIATE__confirm(
ieee154_status_t status, 
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress)

{
  if (status == IEEE154_SUCCESS) {
      TestDeviceC__Leds__led1Off();
    }
  else 
#line 131
    {
      TestDeviceC__DisassociateTimer__startOneShot(312500U);
    }
}

# 225 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  uint8_t handle = txFrame->handle;
  uint32_t txTime = __nesc_ntoh_uint32(txFrame->metadata->timestamp.nxdata);
  message_t *msg = (message_t *)((uint8_t *)txFrame->header - (unsigned short )& ((message_t *)0)->header);

  DataP__TxFramePool__put(txFrame);
  DataP__MCPS_DATA__confirm(msg, handle, status, txTime);
}

# 222 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static void AssociateP__DataRequest__pollDone(void )
{
  if (AssociateP__m_associationOngoing) {

      AssociateP__ResponseTimeout__stop();
      AssociateP__m_associationOngoing = FALSE;
      AssociateP__MLME_SET__macPANId(0xFFFF);
      AssociateP__MLME_ASSOCIATE__confirm(0xFFFF, IEEE154_NO_DATA, 0);
      ;
    }
}

# 92 "TestDeviceC.nc"
static void TestDeviceC__MLME_ASSOCIATE__confirm(
uint16_t AssocShortAddress, 
uint8_t status, 
ieee154_security_t *security)

{
  if (status == IEEE154_SUCCESS) {

      TestDeviceC__Leds__led1On();
      TestDeviceC__DisassociateTimer__startOneShot(312500U);
    }
  else 
#line 102
    {
      TestDeviceC__startApp();
    }
}

#line 72
static void TestDeviceC__startApp(void )
{
  ieee154_address_t coordAdr;

  coordAdr.shortAddress = COORDINATOR_ADDRESS;
  TestDeviceC__MLME_SET__phyCurrentChannel(RADIO_CHANNEL);
  TestDeviceC__MLME_SET__macAutoRequest(FALSE);
  TestDeviceC__MLME_SET__macPANId(PAN_ID);
  TestDeviceC__MLME_SET__macCoordShortAddress(COORDINATOR_ADDRESS);
  TestDeviceC__MLME_ASSOCIATE__request(
  RADIO_CHANNEL, 
  TestDeviceC__MLME_GET__phyCurrentPage(), 
  ADDR_MODE_SHORT_ADDRESS, 
  PAN_ID, 
  coordAdr, 
  TestDeviceC__m_capabilityInformation, 
  (void *)0);
}

# 336 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value)
#line 336
{
  uint32_t i = 1;
  uint8_t k = value;

#line 339
  while (i && k) {
      i <<= 1;
      k -= 1;
    }
  if (!(IEEE154_SUPPORTED_CHANNELS & i)) {
    return IEEE154_INVALID_PARAMETER;
    }
#line 345
  PibP__m_pib.phyCurrentChannel = value;
  PibP__PIBUpdate__notify(IEEE154_phyCurrentChannel, & PibP__m_pib.phyCurrentChannel);
  return IEEE154_SUCCESS;
}

# 67 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__startAt(uint8_t num, uint32_t t0, uint32_t dt)
#line 67
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      uint32_t now = Alarm32khzTo62500hzTransformC__Alarm__getNow(num);
#line 70
      uint32_t elapsed;

#line 71
      if (t0 < now) {
        elapsed = now - t0;
        }
      else {
#line 74
        elapsed = ~(t0 - now) + 1;
        }
#line 75
      if (elapsed > dt) {
        dt = elapsed;
        }
#line 77
      dt -= elapsed;
      Alarm32khzTo62500hzTransformC__Alarm__start(num, dt);
    }
#line 79
    __nesc_atomic_end(__nesc_atomic); }
}

# 183 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    {
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0 = t0;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt = dt;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = TRUE;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
    }
#line 189
    __nesc_atomic_end(__nesc_atomic); }
}





static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(uint8_t id)
#line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type __nesc_temp = 
#line 197
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0 + /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt;

      {
#line 197
        __nesc_atomic_end(__nesc_atomic); 
#line 197
        return __nesc_temp;
      }
    }
#line 199
    __nesc_atomic_end(__nesc_atomic); }
}

# 781 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static uint8_t PibP__Frame__getSrcAddrMode(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

#line 784
  return (mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) >> FC2_SRC_MODE_OFFSET;
}

static error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t offset = MHR_INDEX_ADDRESS;
  uint8_t destMode = mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK;

#line 792
  if (!(mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_SHORT)) {
    return FAIL;
    }
#line 794
  if (destMode == FC2_DEST_MODE_SHORT) {
    offset += 4;
    }
  else {
#line 796
    if (destMode == FC2_DEST_MODE_EXTENDED) {
      offset += 10;
      }
    }
#line 798
  if (!(mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION && mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_SHORT)) {
    offset += 2;
    }
#line 800
  if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
    address->shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
    }
  else {
#line 803
    PibP__FrameUtility__convertToNative(& address->extendedAddress, &mhr[offset]);
    }
#line 804
  return SUCCESS;
}

#line 653
static error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len)
{
  uint8_t idCompression;
  uint8_t offset = MHR_INDEX_ADDRESS;

  if (fcf1 & FC1_SECURITY_ENABLED) {
    return FAIL;
    }
#line 660
  idCompression = fcf1 & FC1_PAN_ID_COMPRESSION;
  if (fcf2 & 0x08) {
      offset += 4;
      if (fcf2 & 0x04) {
        offset += 6;
        }
    }
#line 666
  if (fcf2 & 0x80) {
      offset += 2;
      if (!idCompression) {
        offset += 2;
        }
#line 670
      if (fcf2 & 0x40) {
        offset += 6;
        }
    }
#line 673
  *len = offset;
  return SUCCESS;
}

# 482 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 482
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 483
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 486
            __nesc_atomic_end(__nesc_atomic); 
#line 486
            return;
          }
        }
#line 488
      CC2420ReceiveP__receivingPacket = FALSE;
      if (CC2420ReceiveP__m_stop) {
          CC2420ReceiveP__continueStop();
          {
#line 491
            __nesc_atomic_end(__nesc_atomic); 
#line 491
            return;
          }
        }
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }

          CC2420ReceiveP__beginReceive();
        }
      else {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 508
    __nesc_atomic_end(__nesc_atomic); }
}

#line 430
static void CC2420ReceiveP__beginReceive(void )
#line 430
{
  /* atomic removed: atomic calls only */
#line 431
  {
    if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED || CC2420ReceiveP__m_stop) {
        return;
      }
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
    CC2420ReceiveP__receivingPacket = TRUE;

    if (CC2420ReceiveP__SpiResource__isOwner()) {
        CC2420ReceiveP__receive();
      }
    else {
#line 441
      if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
          CC2420ReceiveP__receive();
        }
      else {
          CC2420ReceiveP__SpiResource__request();
        }
      }
  }
}

#line 470
static void CC2420ReceiveP__receive(void )
#line 470
{
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();

  CC2420ReceiveP__RXFIFO__beginRead(& ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length, 1);
}

# 329 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 453 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 453
{
  CC2420ReceiveP__reset_state();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

# 207 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__RadioControl__stopDone(error_t result)
{




  if (PibP__RadioToken__isOwner()) {
      while (!(result == SUCCESS)) {
#line 214
          break;
        }
#line 214
      ;
      PibP__DispatchReset__init();
      PibP__DispatchQueueReset__init();
      PibP__MacReset__init();
      PibP__resetSpinTask__postTask();
    }
}

# 127 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchUnslottedCsmaP.nc"
static error_t DispatchUnslottedCsmaP__Reset__init(void )
{
  if (DispatchUnslottedCsmaP__m_currentFrame) {
    DispatchUnslottedCsmaP__FrameTx__transmitDone(DispatchUnslottedCsmaP__m_currentFrame, IEEE154_TRANSACTION_OVERFLOW);
    }
#line 131
  if (DispatchUnslottedCsmaP__m_lastFrame) {
    DispatchUnslottedCsmaP__FrameTx__transmitDone(DispatchUnslottedCsmaP__m_lastFrame, IEEE154_TRANSACTION_OVERFLOW);
    }
#line 133
  DispatchUnslottedCsmaP__m_currentFrame = DispatchUnslottedCsmaP__m_lastFrame = (void *)0;
  DispatchUnslottedCsmaP__IndirectTxWaitTimer__stop();
  return SUCCESS;
}

# 107 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__resetTxDonePending();
  if (!/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size()) {
    return;
    }
#line 112
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue();
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(txFrame->client, txFrame, status);
  if (FALSE && status == IEEE154_NO_BEACON) {

      while (/*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__size()) {
          ieee154_txframe_t *frame = /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__Queue__dequeue();

#line 118
          /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(frame->client, frame, IEEE154_NO_BEACON);
        }
    }
  /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__txTask__postTask();
}

# 85 "/usr/src/tinyos/tos/system/QueueC.nc"
static /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__queue_t t = /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__Queue__empty()) {
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head++;
      if (/*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head == 4) {
#line 90
        /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__head = 0;
        }
#line 91
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__size--;
      /*TKN154NonBeaconEnabledP.DispatchQueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 132 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 132
{
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__transmitDone(uint8_t arg_0x40bbe0e8, ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  switch (arg_0x40bbe0e8) {
#line 51
    case 0U:
#line 51
      BeaconRequestRxP__BeaconRequestResponseTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 1U:
#line 51
      AssociateP__AssociationRequestTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 2U:
#line 51
      DisassociateP__DisassociationDirectTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 3U:
#line 51
      DisassociateP__DisassociationToCoord__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 4U:
#line 51
      DataP__DeviceCapTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 5U:
#line 51
      DataP__CoordCapTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 6U:
#line 51
      PollP__PollTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 7U:
#line 51
      IndirectTxP__CoordCapTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 8U:
#line 51
      CoordRealignmentP__CoordRealignmentTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    default:
#line 51
      /*TKN154NonBeaconEnabledP.DispatchQueueP*/DispatchQueueP__0__FrameTx__default__transmitDone(arg_0x40bbe0e8, txFrame, status);
#line 51
      break;
#line 51
    }
#line 51
}
#line 51
# 240 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static void ScanP__nextIteration(void )
{
  ieee154_phyChannelsSupported_t supportedChannels = ScanP__MLME_GET__phyChannelsSupported();
  uint32_t currentChannelBit = (uint32_t )1 << ScanP__m_currentChannelNum;
  error_t radioStatus = SUCCESS;

  if (!ScanP__m_terminateScan) {
      while (ScanP__m_currentChannelNum <= ScanP__LAST_CHANNEL && 
      !((ScanP__m_scanChannels & currentChannelBit) & supportedChannels)) {
          ScanP__m_currentChannelNum++;
          currentChannelBit <<= 1;
        }
    }

  if (ScanP__m_currentChannelNum <= ScanP__LAST_CHANNEL && !ScanP__m_terminateScan) {

      ScanP__MLME_SET__phyCurrentChannel(ScanP__m_currentChannelNum);
      ;
      switch (ScanP__m_scanType) {
          case PASSIVE_SCAN: 
            radioStatus = ScanP__RadioRx__enableRx(0, 0);
          break;
          case ACTIVE_SCAN: 
            case ORPHAN_SCAN: 
              radioStatus = ScanP__RadioTx__transmit(ScanP__m_txFrame, 0, 0);
          break;
          case ENERGY_DETECTION_SCAN: 
            radioStatus = ScanP__EnergyDetection__start(ScanP__m_scanDuration);
          break;
        }
      while (!(radioStatus == SUCCESS)) {
#line 270
          break;
        }
#line 270
      ;
    }
  else 
#line 271
    {

      ieee154_status_t result = IEEE154_SUCCESS;
      uint32_t unscannedChannels = 0;

      if (ScanP__m_terminateScan) {





          if (ScanP__m_scanType == PASSIVE_SCAN || ScanP__m_scanType == ACTIVE_SCAN) {
            currentChannelBit >>= 1;
            }
#line 284
          while (!(currentChannelBit & 0xFC000000L) && 
          ScanP__m_scanChannels & currentChannelBit) {
              unscannedChannels |= currentChannelBit;
              currentChannelBit <<= 1;
            }
          if (unscannedChannels) {
            result = IEEE154_LIMIT_REACHED;
            }
        }
      else {
#line 291
        if (ScanP__m_scanType != ENERGY_DETECTION_SCAN && !ScanP__m_resultIndex) {
          result = IEEE154_NO_BEACON;
          }
        }
#line 294
      if (ScanP__m_scanType == PASSIVE_SCAN || ScanP__m_scanType == ACTIVE_SCAN) {
        ScanP__MLME_SET__macPANId(ScanP__m_PANID);
        }
#line 296
      if (ScanP__m_txFrame != (void *)0) {
          ScanP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)ScanP__m_txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
          ScanP__TxFramePool__put(ScanP__m_txFrame);
        }
      ScanP__m_txFrame = (void *)0;
      if (ScanP__RadioToken__isOwner()) {
        ScanP__RadioToken__release();
        }
#line 303
      ScanP__m_busy = FALSE;
      ;
      ScanP__MLME_SCAN__confirm(
      result, 
      ScanP__m_scanType, 
      IEEE154_SUPPORTED_CHANNELS >> 27, 
      unscannedChannels, 
      ScanP__m_scanType == ENERGY_DETECTION_SCAN ? ScanP__m_resultIndex : 0, 
      ScanP__m_scanType == ENERGY_DETECTION_SCAN ? (int8_t *)ScanP__m_resultList : (void *)0, (
      ScanP__m_scanType == ACTIVE_SCAN || 
      ScanP__m_scanType == PASSIVE_SCAN) && ScanP__MLME_GET__macAutoRequest() ? ScanP__m_resultIndex : 0, (
      ScanP__m_scanType == ACTIVE_SCAN || 
      ScanP__m_scanType == PASSIVE_SCAN) && ScanP__MLME_GET__macAutoRequest() ? (ieee154_PANDescriptor_t *)ScanP__m_resultList : (void *)0);
    }
  ;
}

# 365 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__offSpiReserved(void )
{
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
  CC2420TKN154P__RadioOff__offDone();
}

# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static void PromiscuousModeP__RadioOff__offDone(void )
{
  if (PromiscuousModeP__m_state == PromiscuousModeP__S_STARTING) {
      PromiscuousModeP__PromiscuousRx__enableRx(0, 0);
    }
  else {
#line 143
    PromiscuousModeP__continueStopTask__postTask();
    }
}

# 430 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static void ScanP__RadioOff__offDone(void )
{
  if (ScanP__m_currentChannelNum == 0) {
    ScanP__continueScanRequestTask__postTask();
    }
  else 
#line 434
    {
      ScanP__m_currentChannelNum++;
      ScanP__nextIterationTask__postTask();
    }
}

# 105 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__resetAttributesToDefault(void )
#line 105
{
  PibP__m_pib.phyCurrentChannel = 26;
  PibP__m_pib.phyTransmitPower = IEEE154_TXPOWER_TOLERANCE | (0 & 0x3F);
  PibP__m_pib.phyCCAMode = 3;
  PibP__m_pib.phyCurrentPage = 0;

  PibP__m_pib.macAssociatedPANCoord = FALSE;
  PibP__m_pib.macAssociationPermit = FALSE;
  PibP__m_pib.macAutoRequest = TRUE;
  PibP__m_pib.macBattLifeExt = FALSE;
  PibP__m_pib.macBattLifeExtPeriods = 6;
  PibP__m_pib.macBeaconPayloadLength = 0;
  PibP__m_pib.macBeaconOrder = 15;
  PibP__m_pib.macBeaconTxTime = 0;
  PibP__m_pib.macBSN = 0xFF & PibP__Random__rand16();

  PibP__m_pib.macCoordShortAddress = 0xFFFF;
  PibP__m_pib.macDSN = 0xFF & PibP__Random__rand16();
  PibP__m_pib.macGTSPermit = TRUE;
  PibP__m_pib.macMaxBE = 5;
  PibP__m_pib.macMaxCSMABackoffs = 4;
  PibP__m_pib.macMaxFrameRetries = 3;
  PibP__m_pib.macMinBE = 3;
  PibP__m_pib.macPANId = 0xFFFF;
  PibP__m_pib.macPromiscuousMode = FALSE;
  PibP__m_pib.macResponseWaitTime = 32;
  PibP__m_pib.macRxOnWhenIdle = FALSE;
  PibP__m_pib.macSecurityEnabled = FALSE;
  PibP__m_pib.macShortAddress = 0xFFFF;
  PibP__m_pib.macSuperframeOrder = 15;
  PibP__m_pib.macTransactionPersistenceTime = 0x01F4;
  PibP__m_pib.macPanCoordinator = FALSE;
  PibP__updateMacMaxFrameTotalWaitTime();
}

# 336 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 338
    {
      CC2420ControlP__m_needsSync = TRUE;
      if (on) {
          CC2420ControlP__addressRecognition = FALSE;
          CC2420ControlP__acceptReservedFrames = TRUE;
          CC2420ControlP__autoAckEnabled = FALSE;
        }
      else 
#line 344
        {
          CC2420ControlP__addressRecognition = TRUE;
          CC2420ControlP__acceptReservedFrames = FALSE;
          CC2420ControlP__autoAckEnabled = TRUE;
        }
    }
#line 349
    __nesc_atomic_end(__nesc_atomic); }
}

# 196 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static void ScanP__continueScanRequest(void )
{
  uint8_t i;
  ieee154_macPANId_t bcastPANID = 0xFFFF;
  ieee154_macDSN_t dsn = ScanP__MLME_GET__macDSN();

  if (!ScanP__m_busy) {
      ScanP__RadioToken__release();
      return;
    }
  switch (ScanP__m_scanType) {
      case ACTIVE_SCAN: 

        ScanP__m_txFrame->header->mhr[MHR_INDEX_FC1] = FC1_FRAMETYPE_CMD;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_FC2] = FC2_DEST_MODE_SHORT;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_SEQNO] = dsn;
      ScanP__MLME_SET__macDSN(dsn + 1);
      for (i = 0; i < 4; i++) 
        ScanP__m_txFrame->header->mhr[MHR_INDEX_ADDRESS + i] = 0xFF;
      ScanP__m_txFrame->headerLen = 7;
      ScanP__m_payload[0] = CMD_FRAME_BEACON_REQUEST;
      ScanP__m_txFrame->payloadLen = 1;

      case PASSIVE_SCAN: 
        ScanP__MLME_SET__macPANId(bcastPANID);
      break;
      case ORPHAN_SCAN: 

        ScanP__m_scanDuration = ScanP__MLME_GET__macResponseWaitTime() * IEEE154_aBaseSuperframeDuration;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_FC1] = FC1_FRAMETYPE_CMD | FC1_PAN_ID_COMPRESSION;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_FC2] = FC2_SRC_MODE_EXTENDED | FC2_DEST_MODE_SHORT;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_SEQNO] = dsn;
      ScanP__MLME_SET__macDSN(dsn + 1);
      for (i = 0; i < 4; i++) 
        ScanP__m_txFrame->header->mhr[MHR_INDEX_ADDRESS + i] = 0xFF;
      ScanP__FrameUtility__copyLocalExtendedAddressLE((uint8_t *)&ScanP__m_txFrame->header->mhr[MHR_INDEX_ADDRESS + i]);
      ScanP__m_txFrame->headerLen = 15;
      ScanP__m_payload[0] = CMD_FRAME_ORPHAN_NOTIFICATION;
      ScanP__m_txFrame->payloadLen = 1;
      break;
    }
  ScanP__nextIteration();
}

# 424 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value)
#line 424
{
  PibP__m_pib.macDSN = value;
  PibP__PIBUpdate__notify(IEEE154_macDSN, & PibP__m_pib.macDSN);
  return IEEE154_SUCCESS;
}

# 64 "/usr/src/tinyos/tos/chips/msp430/pins/HplMsp430InterruptP.nc"
__attribute((wakeup)) __attribute((interrupt(0x0008)))  void sig_PORT1_VECTOR(void )
{
  volatile int n = P1IFG & P1IE;

  if (n & (1 << 0)) {
#line 68
      HplMsp430InterruptP__Port10__fired();
#line 68
      return;
    }
#line 69
  if (n & (1 << 1)) {
#line 69
      HplMsp430InterruptP__Port11__fired();
#line 69
      return;
    }
#line 70
  if (n & (1 << 2)) {
#line 70
      HplMsp430InterruptP__Port12__fired();
#line 70
      return;
    }
#line 71
  if (n & (1 << 3)) {
#line 71
      HplMsp430InterruptP__Port13__fired();
#line 71
      return;
    }
#line 72
  if (n & (1 << 4)) {
#line 72
      HplMsp430InterruptP__Port14__fired();
#line 72
      return;
    }
#line 73
  if (n & (1 << 5)) {
#line 73
      HplMsp430InterruptP__Port15__fired();
#line 73
      return;
    }
#line 74
  if (n & (1 << 6)) {
#line 74
      HplMsp430InterruptP__Port16__fired();
#line 74
      return;
    }
#line 75
  if (n & (1 << 7)) {
#line 75
      HplMsp430InterruptP__Port17__fired();
#line 75
      return;
    }
}

#line 169
__attribute((wakeup)) __attribute((interrupt(0x0002)))  void sig_PORT2_VECTOR(void )
{
  volatile int n = P2IFG & P2IE;

  if (n & (1 << 0)) {
#line 173
      HplMsp430InterruptP__Port20__fired();
#line 173
      return;
    }
#line 174
  if (n & (1 << 1)) {
#line 174
      HplMsp430InterruptP__Port21__fired();
#line 174
      return;
    }
#line 175
  if (n & (1 << 2)) {
#line 175
      HplMsp430InterruptP__Port22__fired();
#line 175
      return;
    }
#line 176
  if (n & (1 << 3)) {
#line 176
      HplMsp430InterruptP__Port23__fired();
#line 176
      return;
    }
#line 177
  if (n & (1 << 4)) {
#line 177
      HplMsp430InterruptP__Port24__fired();
#line 177
      return;
    }
#line 178
  if (n & (1 << 5)) {
#line 178
      HplMsp430InterruptP__Port25__fired();
#line 178
      return;
    }
#line 179
  if (n & (1 << 6)) {
#line 179
      HplMsp430InterruptP__Port26__fired();
#line 179
      return;
    }
#line 180
  if (n & (1 << 7)) {
#line 180
      HplMsp430InterruptP__Port27__fired();
#line 180
      return;
    }
}

# 96 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0012)))  void sig_UART0RX_VECTOR(void )
#line 96
{
  uint8_t temp = U0RXBUF;

#line 98
  HplMsp430Usart0P__Interrupts__rxDone(temp);
}

# 153 "/usr/src/tinyos/tos/system/ArbiterP.nc"
static bool /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__inUse(void )
#line 153
{
  /* atomic removed: atomic calls only */
#line 154
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state == /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_CONTROLLED) 
      {
        unsigned char __nesc_temp = 
#line 156
        FALSE;

#line 156
        return __nesc_temp;
      }
  }
#line 158
  return TRUE;
}






static uint8_t /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__ArbiterInfo__userId(void )
#line 166
{
  /* atomic removed: atomic calls only */
#line 167
  {
    if (/*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__state != /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__RES_BUSY) 
      {
        unsigned char __nesc_temp = 
#line 169
        /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__NO_RES;

#line 169
        return __nesc_temp;
      }
#line 170
    {
      unsigned char __nesc_temp = 
#line 170
      /*Msp430UsartShare0P.ArbiterC.Arbiter*/ArbiterP__0__resId;

#line 170
      return __nesc_temp;
    }
  }
}

# 101 "/usr/src/tinyos/tos/chips/msp430/usart/HplMsp430Usart0P.nc"
__attribute((wakeup)) __attribute((interrupt(0x0010)))  void sig_UART0TX_VECTOR(void )
#line 101
{
  if (HplMsp430Usart0P__HplI2C__isI2C()) {
    HplMsp430Usart0P__I2CInterrupts__fired();
    }
  else {
#line 105
    HplMsp430Usart0P__Interrupts__txDone();
    }
}

