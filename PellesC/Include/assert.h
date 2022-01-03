/* assert.h - C99 standard header */

#undef assert

#ifdef NDEBUG
#define assert(exp)  ((void)0)
#else /* !NDEBUG */
#include <crtdef.h>
#define assert(exp)  (!!(exp) ? (void)0 : (__assert(#exp, __FILE__, __LINE__, __func__), __debugbreak(), abort()))
extern _CRTEND void __cdecl abort(void);
extern void __cdecl __debugbreak(void);
extern _CRTASS void __cdecl __assert(const char *, const char *, int, const char *);
#endif /* !NDEBUG */

#if __POCC_STDC_VERSION__ >= 201112L
#define static_assert  _Static_assert
#endif /* __POCC_STDC_VERSION__ >= 201101L */
