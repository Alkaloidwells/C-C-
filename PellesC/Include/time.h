#ifndef _TIME_H
#define _TIME_H

/* time.h - C99 standard header */

#ifndef RC_INVOKED

#if __POCC__ < 900
#error <time.h> need POCC version 9.0 or higher
#endif /* __POCC__ < 900 */

#pragma once

#include <crtdef.h>

/* macros */
#ifndef NULL
#define NULL  ((void *)0)
#endif

/* type definitions */
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#endif /* _SIZE_T_DEFINED */

#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
typedef unsigned long time_t;
#endif /* _TIME_T_DEFINED */

#define CLOCKS_PER_SEC  ((clock_t)1000)

#ifndef _CLOCK_T_DEFINED
#define _CLOCK_T_DEFINED
typedef unsigned int clock_t;
#endif /* _CLOCK_T_DEFINED */

struct tm {
    int tm_sec;     /* seconds after the minute [0,60] */
    int tm_min;     /* minutes after the hour [0,59] */
    int tm_hour;    /* hours since midnight [0,23] */
    int tm_mday;    /* day of the month [1,31] */
    int tm_mon;     /* month since January [0,11] */
    int tm_year;    /* years since 1900 */
    int tm_wday;    /* days since Sunday [0,6] */
    int tm_yday;    /* days since January 1 [0,365] */
    int tm_isdst;   /* Daylight Saving Time flag */
};

#if __POCC_STDC_VERSION__ >= 201112L
#define TIME_UTC  1
struct timespec {
    time_t tv_sec;
    long tv_nsec;
};
#endif /* __POCC_STDC_VERSION__ >= 201112L */

struct _timespec {
    time_t tv_sec;
    long tv_nsec;
};

/* declarations */
extern double __cdecl difftime(time_t, time_t);
extern time_t __cdecl time(time_t *);
extern char * __cdecl asctime(const struct tm *);
extern clock_t __cdecl clock(void);
extern char * __cdecl ctime(const time_t *);
extern struct tm * __cdecl gmtime(const time_t *);
extern struct tm * __cdecl localtime(const time_t *);
extern time_t __cdecl mktime(struct tm *);
extern size_t __cdecl strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict);
#if __POCC_STDC_VERSION__ >= 201112L
extern int __cdecl timespec_get(struct timespec *, int);
#endif /* __POCC_STDC_VERSION__ >= 201112L */

/* private extensions to standard C */
extern unsigned int __cdecl _sleep(unsigned int);
extern char * __cdecl _strdate(char *);
extern char * __cdecl _strtime(char *);
extern int __cdecl _nanosleep(const struct _timespec *, struct _timespec *);

#if __POCC_TARGET__ == 1 || __POCC_TARGET__ == 3
extern unsigned long long __cdecl _rdtsc(void);
#endif

/* bounds-checking interfaces (TR24731-1, C11 annex K) */
#if __STDC_WANT_LIB_EXT1__

#ifndef _ERRNO_T_DEFINED
#define _ERRNO_T_DEFINED
typedef int errno_t;
#endif /* _ERRNO_T_DEFINED */

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
typedef __SIZE_TYPE__ rsize_t;
#endif /* _RSIZE_T_DEFINED */

/* functions */
extern _CRTUSE errno_t __cdecl asctime_s(char *, rsize_t, const struct tm *);
extern _CRTUSE errno_t __cdecl ctime_s(char *, rsize_t, const time_t *);
extern struct tm * __cdecl gmtime_s(const time_t * restrict, struct tm * restrict);
extern struct tm * __cdecl localtime_s(const time_t * restrict, struct tm * restrict);

#endif /* __STDC_WANT_LIB_EXT1__ */

#endif /* !RC_INVOKED */

#endif /* _TIME_H */
