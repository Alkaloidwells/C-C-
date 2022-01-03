#pragma once

#ifndef _CRTIMP
#ifdef _DLL
#define _CRTIMP  __declspec(dllimport)
#else /* ! _DLL */
#define _CRTIMP
#endif /* ! _DLL */
#endif /* !_CRTIMP */

#if __POCC_STDC_VERSION__ >= 201112L
#define _CRTEND  _Noreturn
#else /* __POCC_STDC_VERSION__ < 201112L */
#define _CRTEND  __declspec(noreturn)
#endif /* __POCC_STDC_VERSION__ < 201112L */

#if __POCC__ >= 600 && !defined(__midl)
#define _CRTCHK(f,n,m)  __declspec(vaformat(f,n,m))
#else
#define _CRTCHK(f,n,m)
#endif

#if __POCC__ >= 650 && !defined(__midl)
#define _CRTBAD  __declspec(deprecated)
#else
#define _CRTBAD
#endif

#if __POCC__ >= 700 && !defined(__midl)
#define _CRTFRE(n)  __declspec(release(n))
#else
#define _CRTFRE(n)
#endif

#define _CRTNOP

#if __POCC__ >= 800 && !defined(__midl)
#define _CRTVAP  __declspec(valist)
#else
#define _CRTVAP
#endif

#if __POCC__ >= 900 && !defined(__midl)
#define _CRTMEM  __declspec(allocator)
#else
#define _CRTMEM
#endif

#if __POCC__ >= 900 && !defined(__midl)
#define _CRTJMP  __declspec(setjmp)
#else
#define _CRTJMP
#endif

#if __POCC__ >= 900 && !defined(__midl)
#define _CRTASS  __declspec(assert)
#else
#define _CRTASS
#endif

#if __POCC__ >= 900 && !defined(__midl)
#define _CRTUSE  __declspec(nodiscard)
#else
#define _CRTUSE
#endif
