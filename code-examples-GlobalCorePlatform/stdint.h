/*****************************************************************************/
/* STDINT.H v2.53                                                            */
/* Copyright (c) 2002-2004 Texas Instruments Incorporated                    */
/*****************************************************************************/
#ifndef _STDINT_H_
#define _STDINT_H_

/* 7.18.1.1 Exact-width integer types */

    typedef   signed char   int8_t;
    typedef unsigned char  uint8_t;
    typedef   signed short  int16_t;
    typedef unsigned short uint16_t;
    typedef   signed long   int32_t;
    typedef unsigned long  uint32_t;

/*
    typedef          long long  int64_t;
    typedef unsigned long long uint64_t;
*/

/* 7.18.1.2 Minimum-width integer types */
/* Types not currently used by the GCP */
/*
    typedef  int8_t   int_least8_t;
    typedef uint8_t  uint_least8_t;

typedef  int16_t  int_least16_t;
typedef uint16_t uint_least16_t;
typedef  int32_t  int_least32_t;
typedef uint32_t uint_least32_t;
*/


/*
    typedef  int64_t  int_least64_t;
    typedef uint64_t uint_least64_t;
*/
/* sorry, int_least64_t not implemented for C2000, C54x, C55x, C6x */

/* 7.18.1.3 Fastest minimum-width integer types */

    typedef  int32_t  int_fast8_t;
    typedef uint32_t uint_fast8_t;
    typedef  int32_t  int_fast16_t;
    typedef uint32_t uint_fast16_t;

	typedef  int32_t  int_fast32_t;
	typedef uint32_t uint_fast32_t;

/*
    typedef  int64_t  int_fast64_t;
    typedef uint64_t uint_fast64_t;
*/

/* 7.18.1.4 Integer types capable of holding object pointers */
/* Types not currently used by the GCP */
/*
    typedef          int intptr_t;
    typedef unsigned int uintptr_t;
*/

/* 7.18.1.5 Greatest-width integer types */
/* Types not currently used by the GCP */
/*
    typedef          long long intmax_t;
    typedef unsigned long long uintmax_t;

	typedef          int intmax_t;
    typedef unsigned int uintmax_t;
*/

/* 
   According to footnotes in the 1999 C standard, "C++ implementations
   should define these macros only when __STDC_LIMIT_MACROS is defined
   before <stdint.h> is included." 
*/
#if !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS)

/* 7.18.2 Limits of specified width integer types */

    #define  INT8_MAX   INT8_C(127)
    #define  INT8_MIN   (-INT8_MAX-1)
    #define UINT8_MAX   UINT8_C(255)

#define  INT16_MAX  INT16_C(32767)
#define  INT16_MIN  (-INT16_MAX-1)
#define UINT16_MAX  UINT16_C(65535)
#define  INT32_MAX  INT32_C(2147483647)
#define  INT32_MIN  (-INT32_MAX-1)
#define UINT32_MAX  UINT32_C(4294967295)


    #define  INT64_MAX  INT64_C(9223372036854775807)
    #define  INT64_MIN  (-INT64_MAX-1)
    #define UINT64_MAX  UINT64_C(18446744073709551615)

    #define  INT_LEAST8_MAX   INT8_MAX
    #define  INT_LEAST8_MIN   INT8_MIN
    #define UINT_LEAST8_MAX   UINT8_MAX

#define  INT_LEAST16_MAX  INT16_MAX
#define  INT_LEAST16_MIN  INT16_MIN
#define UINT_LEAST16_MAX  UINT16_MAX
#define  INT_LEAST32_MAX  INT32_MAX
#define  INT_LEAST32_MIN  INT32_MIN
#define UINT_LEAST32_MAX  UINT32_MAX


    #define  INT_LEAST64_MAX  INT64_MAX
    #define  INT_LEAST64_MIN  INT64_MIN
    #define UINT_LEAST64_MAX  UINT64_MAX

    #define  INT_FAST8_MAX   INT32_MAX
    #define  INT_FAST8_MIN   INT32_MIN
    #define UINT_FAST8_MAX   UINT32_MAX
    #define  INT_FAST16_MAX  INT32_MAX
    #define  INT_FAST16_MIN  INT32_MIN
    #define UINT_FAST16_MAX  UINT32_MAX

#define  INT_FAST32_MAX  INT32_MAX
#define  INT_FAST32_MIN  INT32_MIN
#define UINT_FAST32_MAX  UINT32_MAX


    #define  INT_FAST64_MAX  INT64_MAX
    #define  INT_FAST64_MIN  INT64_MIN
    #define UINT_FAST64_MAX  UINT64_MAX

#define INTPTR_MAX   INT32_MAX
#define INTPTR_MIN   INT32_MIN
#define UINTPTR_MAX  UINT32_MAX

    #define INTMAX_MIN   INT64_MIN
    #define INTMAX_MAX   INT64_MAX
    #define UINTMAX_MAX  UINT64_MAX

/* 7.18.3 Limits of other integer types */

    #define PTRDIFF_MAX INT32_MAX
    #define PTRDIFF_MIN INT32_MIN

/* sig_atomic_t not defined */

    #define SIZE_MAX INT32_MAX

    #define WCHAR_MAX UINT16_MAX
    #define WCHAR_MIN 0

/* wint_t not defined */

/* 7.18.4.1 Macros for minimum-width integer constants */

#define  INT8_C(value)  (0  + (value))
#define UINT8_C(value)  (0U + (value))
#define  INT16_C(value) (0  + (value))
#define UINT16_C(value) (0U + (value))

    #define  INT32_C(value) (0  + (value))
    #define UINT32_C(value) (0U + (value))


    #define  INT64_C(value) (0LL  + (value))
    #define UINT64_C(value) (0ULL + (value))

/* 7.18.4.2 Macros for greatest-width integer constants */

    #define  INTMAX_C(value) (0LL  + (value))
    #define UINTMAX_C(value) (0ULL + (value))

#endif /* !defined(__cplusplus) || defined(__STDC_LIMIT_MACROS) */

#endif /* _STDINT_H_ */
