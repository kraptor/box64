/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.4.0.23) *
 *******************************************************************/
#ifndef __wrappedp11kitTYPES_H_
#define __wrappedp11kitTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFppp_t)(void*, void*, void*);
typedef int32_t (*iFpppp_t)(void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(p11_kit_pin_unregister_callback, vFppp_t) \
	GO(p11_kit_pin_register_callback, iFpppp_t)

#endif // __wrappedp11kitTYPES_H_
