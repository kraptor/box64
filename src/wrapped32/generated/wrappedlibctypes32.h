/******************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.1.1) *
 ******************************************************************/
#ifndef __wrappedlibcTYPES32_H_
#define __wrappedlibcTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void (*vFp_t)(void*);
typedef int32_t (*iFv_t)(void);
typedef int32_t (*iFi_t)(int32_t);
typedef int32_t (*iFL_t)(uintptr_t);
typedef int32_t (*iFp_t)(void*);
typedef int32_t (*iFO_t)(int32_t);
typedef uint32_t (*uFu_t)(uint32_t);
typedef uint32_t (*uFV_t)(...);
typedef uintptr_t (*LFL_t)(uintptr_t);
typedef void* (*pFL_t)(uintptr_t);
typedef void (*vFip_t)(int32_t, void*);
typedef void (*vFpi_t)(void*, int32_t);
typedef void (*vFpu_t)(void*, uint32_t);
typedef int32_t (*iFpp_t)(void*, void*);
typedef int32_t (*iFpV_t)(void*, ...);
typedef int64_t (*IFII_t)(int64_t, int64_t);
typedef uint64_t (*UFUU_t)(uint64_t, uint64_t);
typedef void* (*pFip_t)(int32_t, void*);
typedef uintptr_t (*hFpp_t)(void*, void*);
typedef void (*vFipV_t)(int32_t, void*, ...);
typedef int32_t (*iFvpV_t)(void, void*, ...);
typedef int32_t (*iFiiN_t)(int32_t, int32_t, ...);
typedef int32_t (*iFipp_t)(int32_t, void*, void*);
typedef int32_t (*iFppp_t)(void*, void*, void*);
typedef void (*vFpppp_t)(void*, void*, void*, void*);
typedef int32_t (*iFiiII_t)(int32_t, int32_t, int64_t, int64_t);
typedef int32_t (*iFppiV_t)(void*, void*, int32_t, ...);
typedef int32_t (*iFpippppp_t)(void*, int32_t, void*, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(__close_nocancel, iFi_t) \
	GO(signal, pFip_t) \
	GO(__libc_init, vFpppp_t)

#endif // __wrappedlibcTYPES32_H_
