#undef HAVE_ENDIAN_H
#undef HAVE_FCNTL_H
#undef HAVE_SCHED_H
#undef HAVE_UNISTD_H
#undef HAVE_SYS_PARAM_H
#undef HAVE_SYS_STAT_H
#undef HAVE_SYS_TIME_H 
#define HAVE_SYS_TYPES_H 1
#define HAVE_STDINT_H 1

#define HAVE_CLOSE 1
#undef HAVE_GETPID
#undef HAVE_GETTIMEOFDAY
#define HAVE_OPEN 1
#define HAVE_READ 1
#define HAVE_SCHED_YIELD 1

#undef HAVE_SYNC_BUILTINS
#undef HAVE_ATOMIC_BUILTINS

#define HAVE_LOCALE_H 1
#define HAVE_SETLOCALE 1

#define HAVE_INT32_T 1
#ifndef HAVE_INT32_T
#  define int32_t int32_t
#endif

#define HAVE_UINT32_T 1
#ifndef HAVE_UINT32_T
#  define uint32_t uint32_t
#endif

#define HAVE_UINT16_T 1
#ifndef HAVE_UINT16_T
#  define uint16_t uint16_t
#endif

#define HAVE_UINT8_T 1
#ifndef HAVE_UINT8_T
#  define uint8_t uint8_t
#endif

#define HAVE_SSIZE_T 1

#ifndef HAVE_SSIZE_T
#  define ssize_t 
#endif

#define USE_URANDOM 1
#undef USE_WINDOWS_CRYPTOAPI

#define INITIAL_HASHTABLE_ORDER 3

#ifdef USE_SGX
/****************** SGX defines ***************/
#include <stdlib.h>
#include <sgx.h>
#include <sgx_trts.h>
#include <sgx_tprotected_fs.h>
#define FILE SGX_FILE
#define fwrite sgx_fwrite
#define fopen  sgx_fopen_auto_key
#define fclose sgx_fclose
#define stdin NULL
#endif
