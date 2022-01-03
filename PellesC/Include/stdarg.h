#ifndef _STDARG_H
#define _STDARG_H

/* stdarg.h - C99 standard header */

#ifndef RC_INVOKED

#if __POCC__ < 900
#error <stdarg.h> need POCC version 9.0 or higher
#endif /* __POCC__ < 900 */

#pragma once

#include <crtdef.h>

/* type definitions */
#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED
typedef _CRTVAP char *va_list;
#endif /* _VA_LIST_DEFINED */

/* macros */
#define va_start  __stdarg_start
#define va_arg    __stdarg_arg
#define va_end    __stdarg_end
#define va_copy   __stdarg_copy

#endif /* !RC_INVOKED */

#endif /* _STDARG_H */

