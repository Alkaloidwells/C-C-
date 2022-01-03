#ifndef _UCHAR_H
#define _UCHAR_H

/* uchar.h - C11 standard header */

#ifndef RC_INVOKED

#if __POCC__ < 900
#error <uchar.h> need POCC version 9.0 or higher
#endif /* __POCC__ < 900 */

#pragma once

#if __POCC_STDC_VERSION__ < 201112L

#error <uchar.h> is not supported in C99 mode

#else /* __POCC_STDC_VERSION__ >= 201112L */

/* type definitions */
#ifndef _CHAR16_T_DEFINED
#define _CHAR16_T_DEFINED
typedef unsigned short char16_t;
#endif /* _CHAR16_T_DEFINED */

#ifndef _CHAR32_T_DEFINED
#define _CHAR32_T_DEFINED
typedef unsigned int char32_t;
#endif /* _CHAR32_T_DEFINED */

#ifndef _MBSTATE_T_DEFINED
#define _MBSTATE_T_DEFINED
typedef struct mbstate_t {
    unsigned long wchar;
    unsigned short rsrv, state;
} mbstate_t;
#endif /* _MBSTATE_T_DEFINED */

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#endif /* _SIZE_T_DEFINED */

/* functions */
extern size_t __cdecl c16rtomb(char * restrict, char16_t, mbstate_t * restrict);
extern size_t __cdecl c32rtomb(char * restrict, char32_t, mbstate_t * restrict);
extern size_t __cdecl mbrtoc16(char16_t * restrict, const char * restrict, size_t, mbstate_t * restrict);
extern size_t __cdecl mbrtoc32(char32_t * restrict, const char * restrict, size_t, mbstate_t * restrict);

#endif /* __POCC_STDC_VERSION__ >= 201112L */

#endif /* !RC_INVOKED */

#endif /* _UCHAR_H */
