#line 1 "C:\\Users\\mahus\\AppData\\Local\\Temp\\cxxfe_290923067405300.in"
#line 15 "C:\\Program Files\\MATLAB\\R2022b\\extern\\include\\mex.h"
#ifndef mex_h
#define mex_h
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdio.h"
#ifndef _INC_STDIO
#define _INC_STDIO
#line 23 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
#ifndef _VCRUNTIME_H
#define _VCRUNTIME_H
#line 36
#ifndef _UCRT
#define _UCRT
#endif /* _UCRT */
#line 148 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\sal.h"
#ifndef _SAL_VERSION
#define _SAL_VERSION 20
#endif /* _SAL_VERSION */

#ifndef __SAL_H_VERSION
#define __SAL_H_VERSION 180000000
#endif /* __SAL_H_VERSION */
#line 182
#ifndef _USE_DECLSPECS_FOR_SAL
#define _USE_DECLSPECS_FOR_SAL 0
#endif /* _USE_DECLSPECS_FOR_SAL */
#ifndef _USE_ATTRIBUTES_FOR_SAL
#define _USE_ATTRIBUTES_FOR_SAL 0
#endif /* _USE_ATTRIBUTES_FOR_SAL */
#line 224
#ifndef _SAL_L_Source_
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)

#endif /* _SAL_L_Source_ */
#line 2358
#ifndef __nothrow
#define __nothrow __declspec(nothrow)
#endif /* __nothrow */
#line 708
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 16 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\concurrencysal.h"
#ifndef CONCURRENCYSAL_H
#define CONCURRENCYSAL_H
#line 293
#ifndef _Interlocked_operand_
#define _Interlocked_operand_
#endif /* _Interlocked_operand_ */
#line 394
#endif /* CONCURRENCYSAL_H */
#line 37 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vadefs.h"
#ifndef _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#define _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_EXTRA_DISABLED_WARNINGS */



#ifndef _VCRUNTIME_DISABLED_WARNINGS
#define _VCRUNTIME_DISABLED_WARNINGS _VCRUNTIME_DISABLED_WARNING_4339 _VCRUNTIME_DISABLED_WARNING_4412 4514 4820 _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_DISABLED_WARNINGS */
#line 15
#pragma pack ( push, 8 )
#line 47
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 58
#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED

extern "C" { typedef unsigned __int64 uintptr_t; }



#endif /* _UINTPTR_T_DEFINED */

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED



extern "C" { typedef char *va_list; }

#endif /* _VA_LIST_DEFINED */
#line 155
extern "C" { void __cdecl __va_start(va_list *, ...); } 
#line 173
template < typename _Ty >
        struct __vcrt_va_list_is_reference
        {
            enum : bool { __the_value = false };
        };

template < typename _Ty >
        struct __vcrt_va_list_is_reference < _Ty & >
        {
            enum : bool { __the_value = true };
        };

template < typename _Ty >
        struct __vcrt_va_list_is_reference < _Ty && >
        {
            enum : bool { __the_value = true };
        };

template < typename _Ty >
        struct __vcrt_assert_va_start_is_not_reference
        {
            static_assert ( ! __vcrt_va_list_is_reference < _Ty > :: __the_value,
                "va_start argument must not have reference type and must not be parenthesized" );
        };
#line 207
#pragma warning(pop)
#pragma pack ( pop )
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 96
__pragma( pack ( push, 8 )) 
#line 193
typedef unsigned __int64 size_t; 
extern "C" { typedef __int64 ptrdiff_t; }
extern "C" { typedef __int64 intptr_t; }
#line 203
extern "C" { typedef bool __vcrt_bool; }
#line 213
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#endif /* _SIZE_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#endif /* _INTPTR_T_DEFINED */
#line 252
template < typename _CountofType, size_t _SizeOfArray >
        char ( * __countof_helper ( __unaligned _CountofType ( & _Array ) [ _SizeOfArray ] ) ) [ _SizeOfArray ];
#line 342
extern "C" { void __cdecl __security_init_cookie(); } 
#line 351
extern "C" { void __cdecl __security_check_cookie(uintptr_t _StackCookie); } 
extern "C" { __declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); } 



extern "C" uintptr_t __security_cookie; 
#line 368
#endif /* _VCRUNTIME_H */
#line 29 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt.h"
#ifndef _UCRT_EXTRA_DISABLED_WARNINGS
#define _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_EXTRA_DISABLED_WARNINGS */
#line 44
#ifndef _UCRT_DISABLED_WARNINGS
#define _UCRT_DISABLED_WARNINGS 4324 _UCRT_DISABLED_WARNING_4412 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_DISABLED_WARNINGS */
#line 364 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 73 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 96
#ifndef _ACRTIMP_ALT
#define _ACRTIMP_ALT _ACRTIMP
#endif /* _ACRTIMP_ALT */
#line 201
template < bool _Enable, typename _Ty >
    struct _CrtEnableIf;

template < typename _Ty >
    struct _CrtEnableIf < true, _Ty >
    {
        typedef _Ty _Type;
    };




extern "C" { typedef bool __crt_bool; }
#line 231
#ifndef _STATIC_ASSERT
#define _STATIC_ASSERT(expr) static_assert((expr), #expr)
#endif /* _STATIC_ASSERT */
#line 273
#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
#line 321
#ifndef _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE
#define _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE 1
#endif /* _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE */
#line 357
extern "C" { __declspec(dllimport) void __cdecl _invalid_parameter_noinfo(); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(); } 


extern "C" { 
#line 360
__declspec(noreturn) 
__declspec(dllimport) void __cdecl _invoke_watson(const __wchar_t * _Expression, const __wchar_t * _FunctionName, const __wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); } 
#line 484
#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif /* __STDC_WANT_SECURE_LIB__ */
#line 579
#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif /* _CRT_SECURE_CPP_NOTHROW */
#line 590
extern "C" { typedef int errno_t; }
extern "C" { typedef unsigned short wint_t; }
extern "C" { typedef unsigned short wctype_t; }
extern "C" { typedef long __time32_t; }
extern "C" { typedef __int64 __time64_t; }
#line 601
extern "C" { typedef 
#line 596
struct __crt_locale_data_public { 

const unsigned short *_locale_pctype; 
int _locale_mb_cur_max; 
unsigned _locale_lc_codepage; 
} __crt_locale_data_public; }
#line 607
extern "C" { typedef 
#line 603
struct __crt_locale_pointers { 

struct __crt_locale_data *locinfo; 
struct __crt_multibyte_data *mbcinfo; 
} __crt_locale_pointers; }

extern "C" { typedef __crt_locale_pointers *_locale_t; }
#line 615
extern "C" { typedef 
#line 611
struct _Mbstatet { 

unsigned long _Wchar; 
unsigned short _Byte, _State; 
} _Mbstatet; }

extern "C" { typedef _Mbstatet mbstate_t; }
#line 631
extern "C" { typedef __time64_t time_t; }




#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#endif /* _TIME_T_DEFINED */


extern "C" { typedef size_t rsize_t; }
#line 2058
__pragma( pack ( pop )) 


#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_stdio_config.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 72
#pragma detect_mismatch("_CRT_STDIO_ISO_WIDE_SPECIFIERS", "0")
#line 89
extern "C" { __declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options() 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} } 
#line 99
extern "C" { __declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_scanf_options() 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} } 
#line 129
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 26
#ifndef _FILE_DEFINED
#define _FILE_DEFINED



extern "C" { typedef 
#line 28
struct _iobuf { 

void *_Placeholder; 
} FILE; }
#endif /* _FILE_DEFINED */

extern "C" { __declspec(dllimport) FILE *__cdecl __acrt_iob_func(unsigned _Ix); } 
#line 51
extern "C" { __declspec(dllimport) wint_t __cdecl fgetwc(FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl _fgetwchar(); } 


extern "C" { __declspec(dllimport) wint_t __cdecl fputwc(__wchar_t _Character, FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl _fputwchar(__wchar_t _Character); } 




extern "C" { __declspec(dllimport) wint_t __cdecl getwc(FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl getwchar(); } 




extern "C" { __declspec(dllimport) __wchar_t *__cdecl fgetws(__wchar_t * _Buffer, int _BufferCount, FILE * _Stream); } 
#line 86
extern "C" { __declspec(dllimport) int __cdecl fputws(const __wchar_t * _Buffer, FILE * _Stream); } 
#line 93
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _getws_s(__wchar_t * _Buffer, size_t _BufferCount); } 




template < size_t _Size > inline wchar_t * __cdecl _getws_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _getws_s ( _Buffer, _Size ); }
#line 105
extern "C" { __declspec(dllimport) wint_t __cdecl putwc(__wchar_t _Character, FILE * _Stream); } 
#line 111
extern "C" { __declspec(dllimport) wint_t __cdecl putwchar(__wchar_t _Character); } 




extern "C" { __declspec(dllimport) int __cdecl _putws(const __wchar_t * _Buffer); } 




extern "C" { __declspec(dllimport) wint_t __cdecl ungetwc(wint_t _Character, FILE * _Stream); } 
#line 127
extern "C" { __declspec(dllimport) FILE *__cdecl _wfdopen(int _FileHandle, const __wchar_t * _Mode); } 
#line 133
extern "C" { __declspec(dllimport) FILE *__cdecl _wfopen(const __wchar_t * _FileName, const __wchar_t * _Mode); } 
#line 139
extern "C" { __declspec(dllimport) errno_t __cdecl _wfopen_s(FILE ** _Stream, const __wchar_t * _FileName, const __wchar_t * _Mode); } 
#line 147
extern "C" { __declspec(dllimport) FILE *__cdecl _wfreopen(const __wchar_t * _FileName, const __wchar_t * _Mode, FILE * _OldStream); } 
#line 154
extern "C" { __declspec(dllimport) errno_t __cdecl _wfreopen_s(FILE ** _Stream, const __wchar_t * _FileName, const __wchar_t * _Mode, FILE * _OldStream); } 
#line 162
extern "C" { __declspec(dllimport) FILE *__cdecl _wfsopen(const __wchar_t * _FileName, const __wchar_t * _Mode, int _ShFlag); } 
#line 168
extern "C" { __declspec(dllimport) void __cdecl _wperror(const __wchar_t * _ErrorMessage); } 
#line 175
extern "C" { __declspec(dllimport) FILE *__cdecl _wpopen(const __wchar_t * _Command, const __wchar_t * _Mode); } 
#line 182
extern "C" { __declspec(dllimport) int __cdecl _wremove(const __wchar_t * _FileName); } 
#line 190
extern "C" { __declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wtempnam(const __wchar_t * _Directory, const __wchar_t * _FilePrefix); } 
#line 199
extern "C" { __declspec(dllimport) errno_t __cdecl _wtmpnam_s(__wchar_t * _Buffer, size_t _BufferCount); } 




template < size_t _Size > inline errno_t __cdecl _wtmpnam_s ( wchar_t ( & _Buffer ) [ _Size ] ) throw ( ) { return _wtmpnam_s ( _Buffer, _Size ); }
#line 210
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wtmpnam(__wchar_t * _Buffer); } 
#line 224
extern "C" { __declspec(dllimport) wint_t __cdecl _fgetwc_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl _fputwc_nolock(__wchar_t _Character, FILE * _Stream); } 
#line 235
extern "C" { __declspec(dllimport) wint_t __cdecl _getwc_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) wint_t __cdecl _putwc_nolock(__wchar_t _Character, FILE * _Stream); } 
#line 246
extern "C" { __declspec(dllimport) wint_t __cdecl _ungetwc_nolock(wint_t _Character, FILE * _Stream); } 
#line 272
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfwprintf(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 281
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 290
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfwprintf_p(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 299
extern "C" { __inline int __cdecl _vfwprintf_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vfwprintf(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfwprintf_s_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 
#line 345
extern "C" { __inline int __cdecl vfwprintf_s(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
} } 
#line 361
extern "C" { __inline int __cdecl _vfwprintf_p_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfwprintf_p(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vwprintf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vwprintf(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vwprintf_s_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 
#line 433
extern "C" { __inline int __cdecl vwprintf_s(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 
#line 448
extern "C" { __inline int __cdecl _vwprintf_p_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vwprintf_p(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _fwprintf_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl fwprintf(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fwprintf_s_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 533
extern "C" { __inline int __cdecl fwprintf_s(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 553
extern "C" { __inline int __cdecl _fwprintf_p_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fwprintf_p(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _wprintf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl wprintf(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _wprintf_s_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 645
extern "C" { __inline int __cdecl wprintf_s(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 664
extern "C" { __inline int __cdecl _wprintf_p_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _wprintf_p(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 705
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfwscanf(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 714
extern "C" { __inline int __cdecl _vfwscanf_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} } 



extern "C" { __inline int __cdecl vfwscanf(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfwscanf_s_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} } 
#line 764
extern "C" { __inline int __cdecl vfwscanf_s(FILE *const 
_Stream, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vwscanf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vwscanf(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vwscanf_s_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} } 
#line 822
extern "C" { __inline int __cdecl vwscanf_s(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} } 
#line 837
extern "C" { __inline int __cdecl _fwscanf_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl fwscanf(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fwscanf_s_l(FILE *const 
_Stream, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 895
extern "C" { __inline int __cdecl fwscanf_s(FILE *const 
_Stream, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 915
extern "C" { __inline int __cdecl _wscanf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl wscanf(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _wscanf_s_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 970
extern "C" { __inline int __cdecl wscanf_s(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1006
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vswprintf(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1017
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1028
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1040
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vswprintf_p(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1051
extern "C" { __inline int __cdecl _vsnwprintf_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnwprintf_s_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnwprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnwprintf_s(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} } 


extern "C" { __inline int __cdecl _snwprintf(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, ...); } extern "C" { __inline int __cdecl _vsnwprintf(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, va_list _Args); } 
#line 1120
extern "C" { __inline int __cdecl _vsnwprintf(__wchar_t *
_Buffer, size_t 
_BufferCount, const __wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl _vsnwprintf_s ( wchar_t ( & _Buffer ) [ _Size ], size_t _BufferCount, wchar_t const * _Format, va_list _ArgList ) throw ( ) { return _vsnwprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 1145
extern "C" { __inline int __cdecl _vswprintf_c_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vswprintf_c(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vswprintf_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
} } 




extern "C" { __inline int __cdecl __vswprintf_l(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vswprintf(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl vswprintf(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vswprintf_s_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 
#line 1268
extern "C" { __inline int __cdecl vswprintf_s(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




template < size_t _Size > inline int __cdecl vswprintf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, va_list _ArgList ) throw ( ) { return vswprintf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1294
extern "C" { __inline int __cdecl _vswprintf_p_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vswprintf_p(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vscwprintf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vscwprintf(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_l(_Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vscwprintf_p_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vscwprintf_p(const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_p_l(_Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl __swprintf_l(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl swprintf(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


extern "C" { __inline int __cdecl __swprintf_l(__wchar_t * _Buffer, const __wchar_t * _Format, _locale_t _Locale, ...); } extern "C" { __inline int __cdecl __vswprintf_l(__wchar_t * _Buffer, const __wchar_t * _Format, _locale_t _Locale, va_list _Args); } 
#line 1484
extern "C" { __inline int __cdecl _swprintf(__wchar_t * _Buffer, const __wchar_t * _Format, ...); } extern "C" { __inline int __cdecl _vswprintf(__wchar_t * _Buffer, const __wchar_t * _Format, va_list _Args); } 
#line 1493
extern "C" { __inline int __cdecl _swprintf_s_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1515
extern "C" { __inline int __cdecl swprintf_s(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




template < size_t _Size > inline int __cdecl swprintf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return vswprintf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1544
extern "C" { __inline int __cdecl _swprintf_p_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf_p(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf_c_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swprintf_c(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwprintf_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwprintf(__wchar_t *
_Buffer, size_t 
_BufferCount, const __wchar_t *
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwprintf_s_l(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwprintf_s(__wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


template < size_t _Size > inline int __cdecl _snwprintf_s ( wchar_t ( & _Buffer ) [ _Size ], size_t _BufferCount, wchar_t const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return _vsnwprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 1721
extern "C" { __inline int __cdecl _scwprintf_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vscwprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _scwprintf(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vscwprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _scwprintf_p_l(const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _scwprintf_p(const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vscwprintf_p_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1797
#pragma warning(push)
#pragma warning(disable: 4141 6054)



__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int 
swprintf(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, ...) throw() 

{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = vswprintf(_Buffer, 2147483647, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 

__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int __cdecl 
vswprintf(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, va_list 
_ArgList) throw() 

{ 
return vswprintf(_Buffer, 2147483647, _Format, _ArgList); 
} 

__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int 
_swprintf_l(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) throw() 

{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 

__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int __cdecl 
_vswprintf_l(__wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) throw() 

{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} 



#pragma warning(pop)
#line 1871
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vswscanf(unsigned __int64 _Options, const __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1882
extern "C" { __inline int __cdecl _vswscanf_l(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} } 




extern "C" { __inline int __cdecl vswscanf(const __wchar_t *
_Buffer, const __wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vswscanf_s_l(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} } 
#line 1935
extern "C" { __inline int __cdecl vswscanf_s(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} } 




template < size_t _Size > inline int __cdecl vswscanf_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Format, va_list _ArgList ) throw ( ) { return vswscanf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1960
extern "C" { __inline int __cdecl _vsnwscanf_l(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} } 




extern "C" { __inline int __cdecl _vsnwscanf_s_l(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} } 




extern "C" { __inline int __cdecl _swscanf_l(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl swscanf(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _swscanf_s_l(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2059
extern "C" { __inline int __cdecl swscanf_s(const __wchar_t *const 
_Buffer, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2080
extern "C" { __inline int __cdecl _snwscanf_l(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwscanf(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwscanf_s_l(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snwscanf_s(const __wchar_t *const 
_Buffer, const size_t 
_BufferCount, const __wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2169
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 73
extern "C" { typedef __int64 fpos_t; }
#line 80
extern "C" { __declspec(dllimport) errno_t __cdecl _get_stream_buffer_pointers(FILE * _Stream, char *** _Base, char *** _Pointer, int ** _Count); } 
#line 96
extern "C" { __declspec(dllimport) errno_t __cdecl clearerr_s(FILE * _Stream); } 
#line 102
extern "C" { __declspec(dllimport) errno_t __cdecl fopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode); } 
#line 110
extern "C" { __declspec(dllimport) size_t __cdecl fread_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 119
extern "C" { __declspec(dllimport) errno_t __cdecl freopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode, FILE * _OldStream); } 
#line 127
extern "C" { __declspec(dllimport) char *__cdecl gets_s(char * _Buffer, rsize_t _Size); } 
#line 133
extern "C" { __declspec(dllimport) errno_t __cdecl tmpfile_s(FILE ** _Stream); } 
#line 139
extern "C" { __declspec(dllimport) errno_t __cdecl tmpnam_s(char * _Buffer, rsize_t _Size); } 
#line 146
extern "C" { __declspec(dllimport) void __cdecl clearerr(FILE * _Stream); } 
#line 152
extern "C" { __declspec(dllimport) int __cdecl fclose(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _fcloseall(); } 


extern "C" { __declspec(dllimport) FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); } 
#line 166
extern "C" { __declspec(dllimport) int __cdecl feof(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl ferror(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl fflush(FILE * _Stream); } 
#line 182
extern "C" { __declspec(dllimport) int __cdecl fgetc(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _fgetchar(); } 



extern "C" { __declspec(dllimport) int __cdecl fgetpos(FILE * _Stream, fpos_t * _Position); } 
#line 198
extern "C" { __declspec(dllimport) char *__cdecl fgets(char * _Buffer, int _MaxCount, FILE * _Stream); } 
#line 205
extern "C" { __declspec(dllimport) int __cdecl _fileno(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _flushall(); } 


extern "C" { __declspec(dllimport) FILE *__cdecl fopen(const char * _FileName, const char * _Mode); } 
#line 221
extern "C" { __declspec(dllimport) int __cdecl fputc(int _Character, FILE * _Stream); } 
#line 227
extern "C" { __declspec(dllimport) int __cdecl _fputchar(int _Character); } 
#line 233
extern "C" { __declspec(dllimport) int __cdecl fputs(const char * _Buffer, FILE * _Stream); } 
#line 239
extern "C" { __declspec(dllimport) size_t __cdecl fread(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 248
extern "C" { __declspec(dllimport) FILE *__cdecl freopen(const char * _FileName, const char * _Mode, FILE * _Stream); } 
#line 255
extern "C" { __declspec(dllimport) FILE *__cdecl _fsopen(const char * _FileName, const char * _Mode, int _ShFlag); } 
#line 263
extern "C" { __declspec(dllimport) int __cdecl fsetpos(FILE * _Stream, const fpos_t * _Position); } 
#line 270
extern "C" { __declspec(dllimport) int __cdecl fseek(FILE * _Stream, long _Offset, int _Origin); } 
#line 278
extern "C" { __declspec(dllimport) int __cdecl _fseeki64(FILE * _Stream, __int64 _Offset, int _Origin); } 
#line 286
extern "C" { __declspec(dllimport) long __cdecl ftell(FILE * _Stream); } 
#line 292
extern "C" { __declspec(dllimport) __int64 __cdecl _ftelli64(FILE * _Stream); } 




extern "C" { __declspec(dllimport) size_t __cdecl fwrite(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 306
extern "C" { __declspec(dllimport) int __cdecl getc(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl getchar(); } 


extern "C" { __declspec(dllimport) int __cdecl _getmaxstdio(); } 

template < size_t _Size > inline char * __cdecl gets_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return gets_s ( _Buffer, _Size ); }




extern "C" { __declspec(dllimport) int __cdecl _getw(FILE * _Stream); } 



extern "C" { __declspec(dllimport) void __cdecl perror(const char * _ErrorMessage); } 
#line 333
extern "C" { __declspec(dllimport) int __cdecl _pclose(FILE * _Stream); } 




extern "C" { __declspec(dllimport) FILE *__cdecl _popen(const char * _Command, const char * _Mode); } 
#line 347
extern "C" { __declspec(dllimport) int __cdecl putc(int _Character, FILE * _Stream); } 
#line 353
extern "C" { __declspec(dllimport) int __cdecl putchar(int _Character); } 




extern "C" { __declspec(dllimport) int __cdecl puts(const char * _Buffer); } 
#line 364
extern "C" { __declspec(dllimport) int __cdecl _putw(int _Word, FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl remove(const char * _FileName); } 




extern "C" { __declspec(dllimport) int __cdecl rename(const char * _OldFileName, const char * _NewFileName); } 




extern "C" { __declspec(dllimport) int __cdecl _unlink(const char * _FileName); } 
#line 386
extern "C" { 
#line 385
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _unlink. See online help for details" ".")) 
__declspec(dllimport) int __cdecl unlink(const char * _FileName); } 
#line 392
extern "C" { __declspec(dllimport) void __cdecl rewind(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _rmtmp(); } 


extern "C" { __declspec(dllimport) void __cdecl setbuf(FILE * _Stream, char * _Buffer); } 
#line 406
extern "C" { __declspec(dllimport) int __cdecl _setmaxstdio(int _Maximum); } 
#line 412
extern "C" { __declspec(dllimport) int __cdecl setvbuf(FILE * _Stream, char * _Buffer, int _Mode, size_t _Size); } 
#line 425
extern "C" { __declspec(dllimport) __declspec(allocator) char *__cdecl _tempnam(const char * _DirectoryName, const char * _FilePrefix); } 
#line 435
extern "C" { __declspec(dllimport) FILE *__cdecl tmpfile(); } 

template < size_t _Size > inline errno_t __cdecl tmpnam_s ( char ( & _Buffer ) [ _Size ] ) throw ( ) { return tmpnam_s ( _Buffer, _Size ); }
#line 443
extern "C" { __declspec(dllimport) char *__cdecl tmpnam(char * _Buffer); } 
#line 451
extern "C" { __declspec(dllimport) int __cdecl ungetc(int _Character, FILE * _Stream); } 
#line 463
extern "C" { __declspec(dllimport) void __cdecl _lock_file(FILE * _Stream); } 



extern "C" { __declspec(dllimport) void __cdecl _unlock_file(FILE * _Stream); } 
#line 473
extern "C" { __declspec(dllimport) int __cdecl _fclose_nolock(FILE * _Stream); } 
#line 479
extern "C" { __declspec(dllimport) int __cdecl _fflush_nolock(FILE * _Stream); } 
#line 485
extern "C" { __declspec(dllimport) int __cdecl _fgetc_nolock(FILE * _Stream); } 
#line 491
extern "C" { __declspec(dllimport) int __cdecl _fputc_nolock(int _Character, FILE * _Stream); } 
#line 497
extern "C" { __declspec(dllimport) size_t __cdecl _fread_nolock(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 506
extern "C" { __declspec(dllimport) size_t __cdecl _fread_nolock_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 515
extern "C" { __declspec(dllimport) int __cdecl _fseek_nolock(FILE * _Stream, long _Offset, int _Origin); } 
#line 522
extern "C" { __declspec(dllimport) int __cdecl _fseeki64_nolock(FILE * _Stream, __int64 _Offset, int _Origin); } 
#line 529
extern "C" { __declspec(dllimport) long __cdecl _ftell_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) __int64 __cdecl _ftelli64_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) size_t __cdecl _fwrite_nolock(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); } 
#line 547
extern "C" { __declspec(dllimport) int __cdecl _getc_nolock(FILE * _Stream); } 




extern "C" { __declspec(dllimport) int __cdecl _putc_nolock(int _Character, FILE * _Stream); } 
#line 558
extern "C" { __declspec(dllimport) int __cdecl _ungetc_nolock(int _Character, FILE * _Stream); } 
#line 589
extern "C" { __declspec(dllimport) int *__cdecl __p__commode(); } 
#line 609
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 617
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 626
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 635
extern "C" { __inline int __cdecl _vfprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vfprintf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 
#line 681
extern "C" { __inline int __cdecl vfprintf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
} } 
#line 697
extern "C" { __inline int __cdecl _vfprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfprintf_p(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vprintf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 
#line 769
extern "C" { __inline int __cdecl vprintf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 
#line 784
extern "C" { __inline int __cdecl _vprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _fprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl fprintf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


extern "C" { __declspec(dllimport) int __cdecl _set_printf_count_output(int _Value); } 



extern "C" { __declspec(dllimport) int __cdecl _get_printf_count_output(); } 


extern "C" { __inline int __cdecl _fprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 875
extern "C" { __inline int __cdecl fprintf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 895
extern "C" { __inline int __cdecl _fprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fprintf_p(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _printf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl printf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _printf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 987
extern "C" { __inline int __cdecl printf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1006
extern "C" { __inline int __cdecl _printf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _printf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1046
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vfscanf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _Arglist); } 
#line 1055
extern "C" { __inline int __cdecl _vfscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} } 



extern "C" { __inline int __cdecl vfscanf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(_Stream, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vfscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} } 
#line 1106
extern "C" { __inline int __cdecl vfscanf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
} } 
#line 1122
extern "C" { __inline int __cdecl _vscanf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} } 



extern "C" { __inline int __cdecl vscanf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vscanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} } 
#line 1165
extern "C" { __inline int __cdecl vscanf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} } 
#line 1180
extern "C" { __inline int __cdecl _fscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl fscanf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _fscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1238
extern "C" { __inline int __cdecl fscanf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1258
extern "C" { __inline int __cdecl _scanf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl scanf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _scanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1313
extern "C" { __inline int __cdecl scanf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1339
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsprintf(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1349
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1359
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1370
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 1381
extern "C" { __inline int __cdecl _vsnprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 
#line 1429
extern "C" { __inline int __cdecl vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), _Buffer, _BufferCount, _Format, 0, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} } 




extern "C" { __inline int __cdecl vsprintf(char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vsprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 
#line 1503
extern "C" { __inline int __cdecl vsprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl vsprintf_s ( char ( & _Buffer ) [ _Size ], char const * _Format, va_list _ArgList ) throw ( ) { return vsprintf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1529
extern "C" { __inline int __cdecl _vsprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _vsnprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl _vsnprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, va_list _ArgList ) throw ( ) { return _vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 1616
extern "C" { __inline int __cdecl vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl vsnprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, va_list _ArgList ) throw ( ) { return vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 1643
extern "C" { __inline int __cdecl _vscprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 



extern "C" { __inline int __cdecl _vscprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_l(_Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vscprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 



extern "C" { __inline int __cdecl _vscprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_p_l(_Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vsnprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} } 




extern "C" { __inline int __cdecl _vsnprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} } 




extern "C" { __inline int __cdecl _sprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl sprintf(char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


extern "C" { __inline int __cdecl sprintf(char * _Buffer, const char * _Format, ...); } extern "C" { __inline int __cdecl vsprintf(char * _Buffer, const char * _Format, va_list _Args); } 
#line 1792
extern "C" { __inline int __cdecl _sprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1815
extern "C" { __inline int __cdecl sprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




template < size_t _Size > inline int __cdecl sprintf_s ( char ( & _Buffer ) [ _Size ], char const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return vsprintf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 1844
extern "C" { __inline int __cdecl _sprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _sprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 1919
extern "C" { __inline int __cdecl snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


extern "C" { __inline int __cdecl _snprintf(char * _Buffer, size_t _BufferCount, const char * _Format, ...); } extern "C" { __inline int __cdecl _vsnprintf(char * _Buffer, size_t _BufferCount, const char * _Format, va_list _Args); } 
#line 1968
extern "C" { __inline int __cdecl _snprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


template < size_t _Size > inline int __cdecl _snprintf_s ( char ( & _Buffer ) [ _Size ], size_t _BufferCount, char const * _Format, ... ) throw ( ) { va_list _ArgList; ( ( void ) ( __vcrt_assert_va_start_is_not_reference < decltype ( _Format ) > ( ), ( ( void ) ( __va_start ( & _ArgList, _Format ) ) ) ) ); return _vsnprintf_s ( _Buffer, _Size, _BufferCount, _Format, _ArgList ); }
#line 2059
extern "C" { __inline int __cdecl _scprintf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vscprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _scprintf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vscprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _scprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vscprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _scprintf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vscprintf_p(_Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2133
extern "C" { __declspec(dllimport) int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, const char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); } 
#line 2143
extern "C" { __inline int __cdecl _vsscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} } 



extern "C" { __inline int __cdecl vsscanf(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
} } 



extern "C" { __inline int __cdecl _vsscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} } 




#pragma warning(push)
#pragma warning(disable: 6530)


extern "C" { __inline int __cdecl vsscanf_s(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} } 


template < size_t _Size > inline int __cdecl vsscanf_s ( char const ( & _Buffer ) [ _Size ], char const * _Format, va_list _ArgList ) throw ( ) { return vsscanf_s ( _Buffer, _Size, _Format, _ArgList ); }
#line 2216
#pragma warning(pop)




extern "C" { __inline int __cdecl _sscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl sscanf(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _sscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} } 
#line 2279
extern "C" { __inline int __cdecl sscanf_s(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = vsscanf_s(_Buffer, _Format, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




#pragma warning(push)
#pragma warning(disable: 6530)


extern "C" { __inline int __cdecl _snscanf_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _snscanf(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} } 




extern "C" { __inline int __cdecl _snscanf_s_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} } 



extern "C" { __inline int __cdecl _snscanf_s(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} } 


#pragma warning(pop)
#line 2421
extern "C" { 
#line 2420
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _tempnam. See online help for detail" "s.")) 
__declspec(dllimport) char *__cdecl tempnam(const char * _Directory, const char * _FilePrefix); } 
#line 2430
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcloseall. See online help for deta" "ils.")) __declspec(dllimport) int __cdecl fcloseall(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fdopen. See online help for details" ".")) __declspec(dllimport) FILE *__cdecl fdopen(int _FileHandle, const char * _Format); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fgetchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fgetchar(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fileno. See online help for details" ".")) __declspec(dllimport) int __cdecl fileno(FILE * _Stream); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _flushall. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl flushall(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fputchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fputchar(int _Ch); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getw. See online help for details.")) __declspec(dllimport) int __cdecl getw(FILE * _Stream); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putw. See online help for details.")) __declspec(dllimport) int __cdecl putw(int _Ch, FILE * _Stream); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _rmtmp. See online help for details." "")) __declspec(dllimport) int __cdecl rmtmp(); } 
#line 2448
#endif /* _INC_STDIO */
#line 2445
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 41 "C:\\Program Files\\MATLAB\\R2022b\\extern\\include\\mex.h"
typedef struct impl_info_tag *MEX_impl_info; 
#line 19 "C:\\Program Files\\MATLAB\\R2022b\\extern\\include\\matrix.h"
#ifndef matrix_h
#define matrix_h
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdlib.h"
#ifndef _INC_STDLIB
#define _INC_STDLIB
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_malloc.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 59
extern "C" { 
#line 58
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_calloc_base(size_t _Count, size_t _Size); } 
#line 66
extern "C" { 
#line 65
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
calloc(size_t _Count, size_t _Size); } 
#line 72
extern "C" { __declspec(dllimport) int __cdecl _callnewh(size_t _Size); } 
#line 78
extern "C" { 
#line 77
__declspec(dllimport) __declspec(allocator) void *__cdecl 
_expand(void * _Block, size_t _Size); } 
#line 84
extern "C" { 
#line 83
__declspec(dllimport) void __cdecl 
_free_base(void * _Block); } 




extern "C" { 
#line 88
__declspec(dllimport) void __cdecl 
free(void * _Block); } 
#line 95
extern "C" { 
#line 94
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_malloc_base(size_t _Size); } 
#line 101
extern "C" { 
#line 100
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
malloc(size_t _Size); } 
#line 107
extern "C" { 
#line 106
__declspec(dllimport) size_t __cdecl 
_msize_base(void * _Block); } 
#line 113
extern "C" { 
#line 112
__declspec(dllimport) size_t __cdecl 
_msize(void * _Block); } 
#line 119
extern "C" { 
#line 118
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_realloc_base(void * _Block, size_t _Size); } 
#line 126
extern "C" { 
#line 125
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
realloc(void * _Block, size_t _Size); } 
#line 133
extern "C" { 
#line 132
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc_base(void * _Block, size_t _Count, size_t _Size); } 
#line 141
extern "C" { 
#line 140
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc(void * _Block, size_t _Count, size_t _Size); } 
#line 148
extern "C" { 
#line 147
__declspec(dllimport) void __cdecl 
_aligned_free(void * _Block); } 
#line 154
extern "C" { 
#line 153
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_malloc(size_t _Size, size_t _Alignment); } 
#line 161
extern "C" { 
#line 160
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); } 
#line 169
extern "C" { 
#line 168
__declspec(dllimport) size_t __cdecl 
_aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); } 
#line 177
extern "C" { 
#line 176
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); } 
#line 186
extern "C" { 
#line 185
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); } 
#line 196
extern "C" { 
#line 195
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); } 
#line 204
extern "C" { 
#line 203
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); } 
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stddef.h"
#ifndef _INC_STDDEF
#define _INC_STDDEF
#line 232 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stddef.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




namespace std { 

typedef decltype(nullptr) nullptr_t; 
}

using std::nullptr_t;
#line 35
extern "C" { __declspec(dllimport) int *__cdecl _errno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_errno(int _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); } 
#line 55
extern "C" { __declspec(dllimport) extern unsigned long __cdecl __threadid(); } 

extern "C" { __declspec(dllimport) extern uintptr_t __cdecl __threadhandle(); } 
#line 64
#endif /* _INC_STDDEF */
#line 61
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_search.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 


extern "C" { typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); }
extern "C" { typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); }
#line 30
extern "C" { __declspec(dllimport) void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); } 
#line 39
extern "C" { __declspec(dllimport) void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); } 
#line 52
extern "C" { __declspec(dllimport) void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 60
extern "C" { __declspec(dllimport) void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 68
extern "C" { __declspec(dllimport) void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); } 
#line 78
extern "C" { __declspec(dllimport) void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 87
extern "C" { __declspec(dllimport) void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); } 
#line 97
extern "C" { __declspec(dllimport) void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 195
extern "C" { 
#line 194
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lfind. See online help for details." "")) 
__declspec(dllimport) void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 204
extern "C" { 
#line 203
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lsearch. See online help for detail" "s.")) 
__declspec(dllimport) void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); } 
#line 216
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 54
extern "C" { __declspec(dllimport) errno_t __cdecl _itow_s(int _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 61
template < size_t _Size > inline errno_t __cdecl _itow_s ( int _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itow_s ( _Value, _Buffer, _Size, _Radix ); }
#line 68
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _itow(int _Value, __wchar_t * _Buffer, int _Radix); } 
#line 77
extern "C" { __declspec(dllimport) errno_t __cdecl _ltow_s(long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 84
template < size_t _Size > inline errno_t __cdecl _ltow_s ( long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltow_s ( _Value, _Buffer, _Size, _Radix ); }
#line 91
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _ltow(long _Value, __wchar_t * _Buffer, int _Radix); } 
#line 99
extern "C" { __declspec(dllimport) errno_t __cdecl _ultow_s(unsigned long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 106
template < size_t _Size > inline errno_t __cdecl _ultow_s ( unsigned long _Value, wchar_t ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultow_s ( _Value, _Buffer, _Size, _Radix ); }
#line 113
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _ultow(unsigned long _Value, __wchar_t * _Buffer, int _Radix); } 
#line 121
extern "C" { __declspec(dllimport) double __cdecl wcstod(const __wchar_t * _String, __wchar_t ** _EndPtr); } 
#line 127
extern "C" { __declspec(dllimport) double __cdecl _wcstod_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); } 
#line 134
extern "C" { __declspec(dllimport) long __cdecl wcstol(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 141
extern "C" { __declspec(dllimport) long __cdecl _wcstol_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 149
extern "C" { __declspec(dllimport) __int64 __cdecl wcstoll(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 156
extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoll_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 164
extern "C" { __declspec(dllimport) unsigned long __cdecl wcstoul(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 171
extern "C" { __declspec(dllimport) unsigned long __cdecl _wcstoul_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 179
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl wcstoull(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 186
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoull_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 194
extern "C" { __declspec(dllimport) long double __cdecl wcstold(const __wchar_t * _String, __wchar_t ** _EndPtr); } 
#line 200
extern "C" { __declspec(dllimport) long double __cdecl _wcstold_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); } 
#line 207
extern "C" { __declspec(dllimport) float __cdecl wcstof(const __wchar_t * _String, __wchar_t ** _EndPtr); } 
#line 213
extern "C" { __declspec(dllimport) float __cdecl _wcstof_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); } 
#line 220
extern "C" { __declspec(dllimport) double __cdecl _wtof(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) double __cdecl _wtof_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 231
extern "C" { __declspec(dllimport) int __cdecl _wtoi(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) int __cdecl _wtoi_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 242
extern "C" { __declspec(dllimport) long __cdecl _wtol(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) long __cdecl _wtol_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 253
extern "C" { __declspec(dllimport) __int64 __cdecl _wtoll(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) __int64 __cdecl _wtoll_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 264
extern "C" { __declspec(dllimport) errno_t __cdecl _i64tow_s(__int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 272
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _i64tow(__int64 _Value, __wchar_t * _Buffer, int _Radix); } 
#line 279
extern "C" { __declspec(dllimport) errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); } 
#line 287
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, __wchar_t * _Buffer, int _Radix); } 
#line 294
extern "C" { __declspec(dllimport) __int64 __cdecl _wtoi64(const __wchar_t * _String); } 




extern "C" { __declspec(dllimport) __int64 __cdecl _wtoi64_l(const __wchar_t * _String, _locale_t _Locale); } 
#line 305
extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoi64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 312
extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoi64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 320
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); } 
#line 327
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 339
extern "C" { __declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wfullpath(__wchar_t * _Buffer, const __wchar_t * _Path, size_t _BufferCount); } 
#line 348
extern "C" { __declspec(dllimport) errno_t __cdecl _wmakepath_s(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); } 
#line 357
template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _Drive, wchar_t const * _Dir, wchar_t const * _Filename, wchar_t const * _Ext ) throw ( ) { return _wmakepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }
#line 366
extern "C" { __declspec(dllimport) void __cdecl _wmakepath(__wchar_t * _Buffer, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); } 
#line 375
extern "C" { __declspec(dllimport) void __cdecl _wperror(const __wchar_t * _ErrorMessage); } 




extern "C" { __declspec(dllimport) void __cdecl _wsplitpath(const __wchar_t * _FullPath, __wchar_t * _Drive, __wchar_t * _Dir, __wchar_t * _Filename, __wchar_t * _Ext); } 
#line 388
extern "C" { __declspec(dllimport) errno_t __cdecl _wsplitpath_s(const __wchar_t * _FullPath, __wchar_t * _Drive, size_t _DriveCount, __wchar_t * _Dir, size_t _DirCount, __wchar_t * _Filename, size_t _FilenameCount, __wchar_t * _Ext, size_t _ExtCount); } 
#line 400
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( wchar_t const * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 409
extern "C" { __declspec(dllimport) errno_t __cdecl _wdupenv_s(__wchar_t ** _Buffer, size_t * _BufferCount, const __wchar_t * _VarName); } 
#line 418
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wgetenv(const __wchar_t * _VarName); } 
#line 424
extern "C" { __declspec(dllimport) errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _VarName); } 
#line 431
template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( size_t * _RequiredCount, wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _VarName ) throw ( ) { return _wgetenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }
#line 440
extern "C" { __declspec(dllimport) int __cdecl _wputenv(const __wchar_t * _EnvString); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _wputenv_s(const __wchar_t * _Name, const __wchar_t * _Value); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _wsearchenv_s(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _Buffer, size_t _BufferCount); } 
#line 457
template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( wchar_t const * _Filename, wchar_t const * _VarName, wchar_t ( & _ResultPath ) [ _Size ] ) throw ( ) { return _wsearchenv_s ( _Filename, _VarName, _ResultPath, _Size ); }
#line 464
extern "C" { __declspec(dllimport) void __cdecl _wsearchenv(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _ResultPath); } 
#line 471
extern "C" { __declspec(dllimport) int __cdecl _wsystem(const __wchar_t * _Command); } 
#line 479
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\limits.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)

__pragma( pack ( push, 8 )) 
#line 71
#ifndef RSIZE_MAX
#define RSIZE_MAX (SIZE_MAX >> 1)
#endif /* RSIZE_MAX */


__pragma( pack ( pop )) 

#pragma warning(pop)
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 



#ifndef _countof
#define _countof __crt_countof
#endif /* _countof */
#line 38
extern "C" { __declspec(dllimport) void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); } 
#line 56
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl exit(int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl _exit(int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl abort(); } 
#line 67
extern "C" { __declspec(dllimport) unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); } 
#line 74
#ifndef _CRT_ONEXIT_T_DEFINED
#define _CRT_ONEXIT_T_DEFINED

extern "C" { typedef int (__cdecl *_onexit_t)(void); }



#endif /* _CRT_ONEXIT_T_DEFINED */
#line 144
extern "C" { int __cdecl atexit(void (__cdecl *)(void)); } 
extern "C" { _onexit_t __cdecl _onexit(_onexit_t _Func); } 


extern "C" { int __cdecl at_quick_exit(void (__cdecl *)(void)); } 
#line 159
extern "C" { typedef void (__cdecl *_purecall_handler)(void); }


extern "C" { typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); }
#line 171
extern "C" { _purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); } 



extern "C" { _purecall_handler __cdecl _get_purecall_handler(); } 


extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); } 



extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); } 

extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); } 



extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(); } 
#line 212
extern "C" { __declspec(dllimport) int __cdecl _set_error_mode(int _Mode); } 




extern "C" { __declspec(dllimport) int *__cdecl _errno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_errno(int _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); } 

extern "C" { __declspec(dllimport) unsigned long *__cdecl __doserrno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); } 


extern "C" { __declspec(dllimport) char **__cdecl __sys_errlist(); } 


extern "C" { __declspec(dllimport) int *__cdecl __sys_nerr(); } 


extern "C" { __declspec(dllimport) void __cdecl perror(const char * _ErrMsg); } 
#line 242
extern "C" { __declspec(dllimport) char **__cdecl __p__pgmptr(); } 
extern "C" { __declspec(dllimport) __wchar_t **__cdecl __p__wpgmptr(); } 
extern "C" { __declspec(dllimport) int *__cdecl __p__fmode(); } 
#line 259
extern "C" { __declspec(dllimport) errno_t __cdecl _get_pgmptr(char ** _Value); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _get_wpgmptr(__wchar_t ** _Value); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _set_fmode(int _Mode); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _get_fmode(int * _PMode); } 
#line 279
extern "C" { typedef 
#line 275
struct _div_t { 

int quot; 
int rem; 
} div_t; }
#line 285
extern "C" { typedef 
#line 281
struct _ldiv_t { 

long quot; 
long rem; 
} ldiv_t; }
#line 291
extern "C" { typedef 
#line 287
struct _lldiv_t { 

__int64 quot; 
__int64 rem; 
} lldiv_t; }

extern "C" { int __cdecl abs(int _Number); } 
extern "C" { long __cdecl labs(long _Number); } 
extern "C" { __int64 __cdecl llabs(__int64 _Number); } 
extern "C" { __int64 __cdecl _abs64(__int64 _Number); } 

extern "C" { unsigned short __cdecl _byteswap_ushort(unsigned short _Number); } 
extern "C" { unsigned long __cdecl _byteswap_ulong(unsigned long _Number); } 
extern "C" { unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); } 

extern "C" { __declspec(dllimport) div_t __cdecl div(int _Numerator, int _Denominator); } 
extern "C" { __declspec(dllimport) ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); } 
extern "C" { __declspec(dllimport) lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); } 



#pragma warning(push)
#pragma warning(disable: 6540)

extern "C" { unsigned __cdecl _rotl(unsigned _Value, int _Shift); } 
#line 317
extern "C" { unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); } 




extern "C" { unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); } 




extern "C" { unsigned __cdecl _rotr(unsigned _Value, int _Shift); } 
#line 333
extern "C" { unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); } 




extern "C" { unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); } 




#pragma warning(pop)
#line 350
extern "C" { __declspec(dllimport) void __cdecl srand(unsigned _Seed); } 

extern "C" { __declspec(dllimport) int __cdecl rand(); } 
#line 363
inline long abs(const long _X) throw() 
{ 
return labs(_X); 
} 

inline __int64 abs(const __int64 _X) throw() 
{ 
return llabs(_X); 
} 

inline ldiv_t div(const long _A1, const long _A2) throw() 
{ 
return ldiv(_A1, _A2); 
} 

inline lldiv_t div(const __int64 _A1, const __int64 _A2) throw() 
{ 
return lldiv(_A1, _A2); 
} 
#line 394
#pragma pack ( push, 4 )



extern "C" { typedef 
#line 396
struct { 
unsigned char ld[10]; 
} _LDOUBLE; }
#pragma pack ( pop )
#line 418
extern "C" { typedef 
#line 416
struct { 
double x; 
} _CRT_DOUBLE; }




extern "C" { typedef 
#line 421
struct { 
float f; 
} _CRT_FLOAT; }
#line 432
extern "C" { typedef 
#line 430
struct { 
long double x; 
} _LONGDOUBLE; }



#pragma pack ( push, 4 )



extern "C" { typedef 
#line 438
struct { 
unsigned char ld12[12]; 
} _LDBL12; }
#pragma pack ( pop )
#line 450
extern "C" { __declspec(dllimport) double __cdecl atof(const char * _String); } 
extern "C" { __declspec(dllimport) int __cdecl atoi(const char * _String); } 
extern "C" { __declspec(dllimport) long __cdecl atol(const char * _String); } 
extern "C" { __declspec(dllimport) __int64 __cdecl atoll(const char * _String); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _atoi64(const char * _String); } 

extern "C" { __declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl _atoi_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) long __cdecl _atol_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) __int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); } 

extern "C" { __declspec(dllimport) int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); } 
extern "C" { __declspec(dllimport) int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); } 
extern "C" { __declspec(dllimport) int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); } 


extern "C" { __declspec(dllimport) int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); } 
#line 474
extern "C" { __declspec(dllimport) int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); } 
#line 482
extern "C" { __declspec(dllimport) int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); } 
#line 489
extern "C" { __declspec(dllimport) float __cdecl strtof(const char * _String, char ** _EndPtr); } 
#line 495
extern "C" { __declspec(dllimport) float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); } 
#line 502
extern "C" { __declspec(dllimport) double __cdecl strtod(const char * _String, char ** _EndPtr); } 
#line 508
extern "C" { __declspec(dllimport) double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); } 
#line 515
extern "C" { __declspec(dllimport) long double __cdecl strtold(const char * _String, char ** _EndPtr); } 
#line 521
extern "C" { __declspec(dllimport) long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); } 
#line 528
extern "C" { __declspec(dllimport) long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); } 
#line 535
extern "C" { __declspec(dllimport) long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 543
extern "C" { __declspec(dllimport) __int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); } 
#line 550
extern "C" { __declspec(dllimport) __int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 558
extern "C" { __declspec(dllimport) unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); } 
#line 565
extern "C" { __declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 573
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); } 
#line 580
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 588
extern "C" { __declspec(dllimport) __int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); } 
#line 595
extern "C" { __declspec(dllimport) __int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 603
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); } 
#line 610
extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); } 
#line 626
extern "C" { __declspec(dllimport) errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 633
template < size_t _Size > inline errno_t __cdecl _itoa_s ( int _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _itoa_s ( _Value, _Buffer, _Size, _Radix ); }
#line 641
extern "C" { __declspec(dllimport) char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); } 
#line 650
extern "C" { __declspec(dllimport) errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 657
template < size_t _Size > inline errno_t __cdecl _ltoa_s ( long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ltoa_s ( _Value, _Buffer, _Size, _Radix ); }
#line 664
extern "C" { __declspec(dllimport) char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); } 
#line 673
extern "C" { __declspec(dllimport) errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 680
template < size_t _Size > inline errno_t __cdecl _ultoa_s ( unsigned long _Value, char ( & _Buffer ) [ _Size ], int _Radix ) throw ( ) { return _ultoa_s ( _Value, _Buffer, _Size, _Radix ); }
#line 687
extern "C" { __declspec(dllimport) char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); } 
#line 696
extern "C" { __declspec(dllimport) errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 705
extern "C" { __declspec(dllimport) char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); } 
#line 713
extern "C" { __declspec(dllimport) errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); } 
#line 721
extern "C" { __declspec(dllimport) char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); } 
#line 741
extern "C" { __declspec(dllimport) errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); } 
#line 750
template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _ecvt_s ( _Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign ); }
#line 760
extern "C" { __declspec(dllimport) char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); } 
#line 769
extern "C" { __declspec(dllimport) errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); } 
#line 778
template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign ) throw ( ) { return _fcvt_s ( _Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign ); }
#line 790
extern "C" { __declspec(dllimport) char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); } 
#line 798
extern "C" { __declspec(dllimport) errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); } 
#line 805
template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Buffer ) [ _Size ], double _Value, int _DigitCount ) throw ( ) { return _gcvt_s ( _Buffer, _Size, _Value, _DigitCount ); }
#line 814
extern "C" { __declspec(dllimport) char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); } 
#line 843
extern "C" { __declspec(dllimport) int __cdecl ___mb_cur_max_func(); } 


extern "C" { __declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); } 
#line 852
extern "C" { __declspec(dllimport) int __cdecl mblen(const char * _Ch, size_t _MaxCount); } 
#line 858
extern "C" { __declspec(dllimport) int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); } 
#line 866
extern "C" { __declspec(dllimport) size_t __cdecl _mbstrlen(const char * _String); } 
#line 872
extern "C" { __declspec(dllimport) size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); } 
#line 879
extern "C" { __declspec(dllimport) size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); } 
#line 886
extern "C" { __declspec(dllimport) size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); } 
#line 893
extern "C" { __declspec(dllimport) int __cdecl mbtowc(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); } 
#line 900
extern "C" { __declspec(dllimport) int __cdecl _mbtowc_l(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); } 
#line 908
extern "C" { __declspec(dllimport) errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); } 
#line 916
template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount ) throw ( ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
#line 924
extern "C" { __declspec(dllimport) size_t __cdecl mbstowcs(__wchar_t * _Dest, const char * _Source, size_t _MaxCount); } 
#line 932
extern "C" { __declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); } 
#line 941
template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], char const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
#line 950
extern "C" { __declspec(dllimport) size_t __cdecl _mbstowcs_l(__wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); } 
#line 963
extern "C" { __declspec(dllimport) int __cdecl wctomb(char * _MbCh, __wchar_t _WCh); } 
#line 969
extern "C" { __declspec(dllimport) int __cdecl _wctomb_l(char * _MbCh, __wchar_t _WCh, _locale_t _Locale); } 
#line 978
extern "C" { __declspec(dllimport) errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, __wchar_t _WCh); } 
#line 988
extern "C" { __declspec(dllimport) errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, __wchar_t _WCh, _locale_t _Locale); } 
#line 996
extern "C" { __declspec(dllimport) errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes); } 
#line 1004
template < size_t _Size > inline errno_t __cdecl wcstombs_s ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount ) throw ( ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
#line 1012
extern "C" { __declspec(dllimport) size_t __cdecl wcstombs(char * _Dest, const __wchar_t * _Source, size_t _MaxCount); } 
#line 1020
extern "C" { __declspec(dllimport) errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); } 
#line 1029
template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( size_t * _PtNumOfCharConverted, char ( & _Dest ) [ _Size ], wchar_t const * _Source, size_t _MaxCount, _locale_t _Locale ) throw ( ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
#line 1038
extern "C" { __declspec(dllimport) size_t __cdecl _wcstombs_l(char * _Dest, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); } 
#line 1068
extern "C" { __declspec(dllimport) __declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); } 
#line 1077
extern "C" { __declspec(dllimport) errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); } 
#line 1086
template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Buffer ) [ _Size ], char const * _Drive, char const * _Dir, char const * _Filename, char const * _Ext ) throw ( ) { return _makepath_s ( _Buffer, _Size, _Drive, _Dir, _Filename, _Ext ); }
#line 1095
extern "C" { __declspec(dllimport) void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); } 
#line 1105
extern "C" { __declspec(dllimport) void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); } 
#line 1114
extern "C" { __declspec(dllimport) errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); } 
#line 1126
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( char const * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) throw ( ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 1132
extern "C" { __declspec(dllimport) errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); } 
#line 1144
extern "C" { __declspec(dllimport) int *__cdecl __p___argc(); } 
extern "C" { __declspec(dllimport) char ***__cdecl __p___argv(); } 
extern "C" { __declspec(dllimport) __wchar_t ***__cdecl __p___wargv(); } 
#line 1158
extern "C" { __declspec(dllimport) char ***__cdecl __p__environ(); } 
extern "C" { __declspec(dllimport) __wchar_t ***__cdecl __p__wenviron(); } 
#line 1184
extern "C" { __declspec(dllimport) char *__cdecl getenv(const char * _VarName); } 



template < size_t _Size > inline errno_t __cdecl getenv_s ( size_t * _RequiredCount, char ( & _Buffer ) [ _Size ], char const * _VarName ) throw ( ) { return getenv_s ( _RequiredCount, _Buffer, _Size, _VarName ); }
#line 1201
extern "C" { __declspec(dllimport) errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); } 
#line 1211
extern "C" { __declspec(dllimport) int __cdecl system(const char * _Command); } 





#pragma warning(push)
#pragma warning(disable: 6540)


extern "C" { __declspec(dllimport) int __cdecl _putenv(const char * _EnvString); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); } 




#pragma warning(pop)

extern "C" { __declspec(dllimport) errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); } 
#line 1240
template < size_t _Size > inline errno_t __cdecl _searchenv_s ( char const * _Filename, char const * _VarName, char ( & _Buffer ) [ _Size ] ) throw ( ) { return _searchenv_s ( _Filename, _VarName, _Buffer, _Size ); }
#line 1247
extern "C" { __declspec(dllimport) void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); } 
#line 1256
extern "C" { 
#line 1255
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) 
__declspec(dllimport) void __cdecl _seterrormode(int _Mode); } 




extern "C" { 
#line 1260
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) 
__declspec(dllimport) void __cdecl _beep(unsigned _Frequency, unsigned _Duration); } 
#line 1267
extern "C" { 
#line 1266
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) 
__declspec(dllimport) void __cdecl _sleep(unsigned long _Duration); } 
#line 1289
#pragma warning(push)
#pragma warning(disable: 4141)


extern "C" { 
#line 1292
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ecvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); } 
#line 1301
extern "C" { 
#line 1300
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); } 
#line 1309
extern "C" { 
#line 1308
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _gcvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); } 
#line 1316
extern "C" { 
#line 1315
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _itoa. See online help for details.")) 
__declspec(dllimport) char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); } 
#line 1323
extern "C" { 
#line 1322
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ltoa. See online help for details.")) 
__declspec(dllimport) char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); } 
#line 1331
extern "C" { 
#line 1330
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _swab. See online help for details.")) 
__declspec(dllimport) void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); } 
#line 1338
extern "C" { 
#line 1337
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ultoa. See online help for details." "")) 
__declspec(dllimport) char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); } 
#line 1347
extern "C" { 
#line 1346
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putenv. See online help for details" ".")) 
__declspec(dllimport) int __cdecl putenv(const char * _EnvString); } 



#pragma warning(pop)

extern "C" { _onexit_t __cdecl onexit(_onexit_t _Func); } 
#line 1362
#endif /* _INC_STDLIB */
#line 12 "C:\\Program Files\\MATLAB\\R2022b\\extern\\include\\tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
#line 8 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\stdbool.h"
#ifndef _STDBOOL
#define _STDBOOL
#line 21
#endif /* _STDBOOL */
#line 62 "C:\\Program Files\\MATLAB\\R2022b\\extern\\include\\tmwtypes.h"
#ifndef FLT_MANT_DIG
#define FLT_MANT_DIG 24
#endif /* FLT_MANT_DIG */
#ifndef DBL_MANT_DIG
#define DBL_MANT_DIG 53
#endif /* DBL_MANT_DIG */
#line 1359 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\stdlib.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 89 "C:\\Program Files\\MATLAB\\R2022b\\extern\\include\\tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
#line 97
typedef unsigned __int64 ulonglong_T; 
#line 222
typedef signed char int8_T; 
#line 239
typedef unsigned char uint8_T; 
#line 257
typedef short int16_T; 
#line 275
typedef unsigned short uint16_T; 
#line 293
typedef int int32_T; 
#line 311
typedef unsigned uint32_T; 
#line 372
typedef float real32_T; 
#line 386
typedef double real64_T; 
#line 436
#ifndef INT64_T
#define INT64_T __int64
#endif /* INT64_T */
#ifndef UINT64_T
#define UINT64_T unsigned __int64
#endif /* UINT64_T */
#ifndef FMT64
#define FMT64 "I64"
#endif /* FMT64 */
#line 465
typedef __int64 int64_T; 
#line 479
typedef unsigned __int64 uint64_T; 
#line 535
typedef real64_T real_T; 
#line 544
typedef real_T time_T; 
#line 556
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
#line 592
typedef 
#line 590
struct { 
real32_T re, im; 
} creal32_T; 
#line 601
typedef 
#line 599
struct { 
real64_T re, im; 
} creal64_T; 
#line 610
typedef 
#line 608
struct { 
real_T re, im; 
} creal_T; 
#line 621
typedef 
#line 619
struct { 
int8_T re, im; 
} cint8_T; 
#line 630
typedef 
#line 628
struct { 
uint8_T re, im; 
} cuint8_T; 
#line 639
typedef 
#line 637
struct { 
int16_T re, im; 
} cint16_T; 
#line 648
typedef 
#line 646
struct { 
uint16_T re, im; 
} cuint16_T; 
#line 657
typedef 
#line 655
struct { 
int32_T re, im; 
} cint32_T; 
#line 666
typedef 
#line 664
struct { 
uint32_T re, im; 
} cuint32_T; 
#line 675
typedef 
#line 673
struct { 
int64_T re, im; 
} cint64_T; 
#line 684
typedef 
#line 682
struct { 
uint64_T re, im; 
} cuint64_T; 
#line 759
__forceinline uint64_T double_to_uint64_helper(double d) { 
union double_to_uint64_union_type { 
double dd; 
uint64_T i64; 
} di; 
di.dd = d; 
return ((((di.i64) & (0xfffffffffffffi64)) | (0x10000000000000i64)) << 11); 
} 
#line 834
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 





#ifndef SLSIZE_SLINDEX
#define SLSIZE_SLINDEX

typedef int64_T SLIndex; 
typedef int64_T SLSize; 




#endif /* SLSIZE_SLINDEX */
#line 877
typedef char16_t CHAR16_T; 
#line 886
#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
#line 161 "C:\\Program Files\\MATLAB\\R2022b\\extern\\include\\matrix.h"
typedef struct mxArray_tag mxArray; 




typedef void (*mxFunctionPtr)(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]); 
#line 176
typedef bool mxLogical; 




typedef CHAR16_T mxChar; 
#line 218
typedef 
#line 191
enum { 
mxUNKNOWN_CLASS, 
mxCELL_CLASS, 
mxSTRUCT_CLASS, 
mxLOGICAL_CLASS, 
mxCHAR_CLASS, 
mxVOID_CLASS, 
mxDOUBLE_CLASS, 
mxSINGLE_CLASS, 
mxINT8_CLASS, 
mxUINT8_CLASS, 
mxINT16_CLASS, 
mxUINT16_CLASS, 
mxINT32_CLASS, 
mxUINT32_CLASS, 
mxINT64_CLASS, 
mxUINT64_CLASS, 
mxFUNCTION_CLASS, 
mxOPAQUE_CLASS, 
mxOBJECT_CLASS, 

mxINDEX_CLASS = mxUINT64_CLASS
#line 218
} mxClassID; 
#line 225
typedef enum { mxREAL, mxCOMPLEX} mxComplexity; 




typedef double mxDouble; 
typedef float mxSingle; 
typedef int8_T mxInt8; 
typedef uint8_T mxUint8; 
typedef int16_T mxInt16; 
typedef uint16_T mxUint16; 
typedef int32_T mxInt32; 
typedef uint32_T mxUint32; 
typedef int64_T mxInt64; 
typedef uint64_T mxUint64; 
#line 245
typedef struct { mxDouble real, imag; } mxComplexDouble; 
typedef struct { mxSingle real, imag; } mxComplexSingle; 
typedef struct { mxInt8 real, imag; } mxComplexInt8; 
typedef struct { mxUint8 real, imag; } mxComplexUint8; 
typedef struct { mxInt16 real, imag; } mxComplexInt16; 
typedef struct { mxUint16 real, imag; } mxComplexUint16; 
typedef struct { mxInt32 real, imag; } mxComplexInt32; 
typedef struct { mxUint32 real, imag; } mxComplexUint32; 
typedef struct { mxInt64 real, imag; } mxComplexInt64; 
typedef struct { mxUint64 real, imag; } mxComplexUint64; 
#line 526
extern "C" void *mxMalloc_800(size_t n); 
#line 532
extern "C" void *mxCalloc_800(size_t n, size_t size); 
#line 539
extern "C" void mxFree_800(void * ptr); 




extern "C" void *mxRealloc_800(void * ptr, size_t size); 




extern "C" mwSize mxGetNumberOfDimensions_800(const mxArray * pa); 




extern "C" const mwSize *mxGetDimensions_800(const mxArray * pa); 




extern "C" size_t mxGetM_800(const mxArray * pa); 




extern "C" mwIndex *mxGetIr_800(const mxArray * pa); 




extern "C" mwIndex *mxGetJc_800(const mxArray * pa); 




extern "C" mwSize mxGetNzmax_800(const mxArray * pa); 




extern "C" void mxSetNzmax_800(mxArray * pa, mwSize nzmax); 




extern "C" const char *mxGetFieldNameByNumber_800(const mxArray * pa, int n); 
#line 592
extern "C" mxArray *mxGetFieldByNumber_800(const mxArray * pa, mwIndex i, int fieldnum); 




extern "C" mxArray *mxGetCell_800(const mxArray * pa, mwIndex i); 




extern "C" mxClassID mxGetClassID_800(const mxArray * pa); 




extern "C" void *mxGetData_800(const mxArray * pa); 
#line 613
extern "C" void mxSetData_800(mxArray * pa, void * newdata); 
#line 621
extern "C" bool mxIsNumeric_800(const mxArray * pa); 




extern "C" bool mxIsCell_800(const mxArray * pa); 




extern "C" bool mxIsLogical_800(const mxArray * pa); 




extern "C" bool mxIsScalar_800(const mxArray * pa); 




extern "C" bool mxIsChar_800(const mxArray * pa); 




extern "C" bool mxIsStruct_800(const mxArray * pa); 




extern "C" bool mxIsOpaque_800(const mxArray * pa); 




extern "C" bool mxIsFunctionHandle_800(const mxArray * pa); 
#line 663
extern "C" bool mxIsObject_800(const mxArray * pa); 
#line 684
extern "C" bool mxIsComplex_800(const mxArray * pa); 




extern "C" bool mxIsSparse_800(const mxArray * pa); 
#line 695
extern "C" bool mxIsDouble_800(const mxArray * pa); 
#line 701
extern "C" bool mxIsSingle_800(const mxArray * pa); 
#line 707
extern "C" bool mxIsInt8_800(const mxArray * pa); 
#line 713
extern "C" bool mxIsUint8_800(const mxArray * pa); 
#line 719
extern "C" bool mxIsInt16_800(const mxArray * pa); 
#line 725
extern "C" bool mxIsUint16_800(const mxArray * pa); 
#line 731
extern "C" bool mxIsInt32_800(const mxArray * pa); 
#line 737
extern "C" bool mxIsUint32_800(const mxArray * pa); 
#line 743
extern "C" bool mxIsInt64_800(const mxArray * pa); 
#line 749
extern "C" bool mxIsUint64_800(const mxArray * pa); 




extern "C" size_t mxGetNumberOfElements_800(const mxArray * pa); 
#line 776
extern "C" mxChar *mxGetChars_800(const mxArray * pa); 
#line 784
extern "C" int mxGetUserBits_800(const mxArray * pa); 
#line 792
extern "C" void mxSetUserBits_800(mxArray * pa, int value); 
#line 798
extern "C" double mxGetScalar_800(const mxArray * pa); 
#line 811
extern "C" bool mxIsFromGlobalWS_800(const mxArray * pa); 




extern "C" void mxSetFromGlobalWS_800(mxArray * pa, bool global); 




extern "C" void mxSetM_800(mxArray * pa, mwSize m); 




extern "C" size_t mxGetN_800(const mxArray * pa); 




extern "C" bool mxIsEmpty_800(const mxArray * pa); 




extern "C" int mxGetFieldNumber_800(const mxArray * pa, const char * name); 




extern "C" void mxSetIr_800(mxArray * pa, mwIndex * newir); 




extern "C" void mxSetJc_800(mxArray * pa, mwIndex * newjc); 

extern "C" double *mxGetPr_800(const mxArray * pa); 
extern "C" void mxSetPr_800(mxArray * pa, double * newdata); 
extern "C" size_t mxGetElementSize_800(const mxArray * pa); 
#line 856
extern "C" mwIndex mxCalcSingleSubscript_800(const mxArray * pa, mwSize nsubs, const mwIndex * subs); 
#line 864
extern "C" int mxGetNumberOfFields_800(const mxArray * pa); 
#line 870
extern "C" void mxSetCell_800(mxArray * pa, mwIndex i, mxArray * value); 
#line 876
extern "C" void mxSetFieldByNumber_800(mxArray * pa, mwIndex i, int fieldnum, mxArray * value); 
#line 884
extern "C" mxArray *mxGetField_800(const mxArray * pa, mwIndex i, const char * fieldname); 
#line 891
extern "C" void mxSetField_800(mxArray * pa, mwIndex i, const char * fieldname, mxArray * value); 
#line 901
extern "C" mxArray *mxGetProperty_800(const mxArray * pa, const mwIndex i, const char * propname); 
#line 909
extern "C" void mxSetProperty_800(mxArray * pa, mwIndex i, const char * propname, const mxArray * value); 




extern "C" const char *mxGetClassName_800(const mxArray * pa); 




extern "C" bool mxIsClass_800(const mxArray * pa, const char * name); 
#line 926
extern "C" mxArray *mxCreateNumericMatrix_800(mwSize m, mwSize n, mxClassID classid, mxComplexity flag); 
#line 933
extern "C" mxArray *mxCreateUninitNumericMatrix_800(size_t m, size_t n, mxClassID classid, mxComplexity flag); 
#line 940
extern "C" mxArray *mxCreateUninitNumericArray_800(size_t ndim, size_t * dims, mxClassID classid, mxComplexity flag); 




extern "C" void mxSetN_800(mxArray * pa, mwSize n); 
#line 952
extern "C" int mxSetDimensions_800(mxArray * pa, const mwSize * pdims, mwSize ndims); 




extern "C" void mxDestroyArray_800(mxArray * pa); 
#line 966
extern "C" mxArray *mxCreateNumericArray_800(mwSize ndim, const mwSize * dims, mxClassID classid, mxComplexity flag); 
#line 972
extern "C" mxArray *mxCreateCharArray_800(mwSize ndim, const mwSize * dims); 
#line 979
extern "C" mxArray *mxCreateDoubleMatrix_800(mwSize m, mwSize n, mxComplexity flag); 




extern "C" mxLogical *mxGetLogicals_800(const mxArray * pa); 




extern "C" mxArray *mxCreateLogicalArray_800(mwSize ndim, const mwSize * dims); 
#line 995
extern "C" mxArray *mxCreateLogicalMatrix_800(mwSize m, mwSize n); 




extern "C" mxArray *mxCreateLogicalScalar_800(bool value); 




extern "C" bool mxIsLogicalScalar_800(const mxArray * pa); 




extern "C" bool mxIsLogicalScalarTrue_800(const mxArray * pa); 
#line 1016
extern "C" mxArray *mxCreateDoubleScalar_800(double value); 
#line 1037
extern "C" mxArray *mxCreateSparse_800(mwSize m, mwSize n, mwSize nzmax, mxComplexity flag); 
#line 1043
extern "C" mxArray *mxCreateSparseLogicalMatrix_800(mwSize m, mwSize n, mwSize nzmax); 
#line 1051
extern "C" void mxGetNChars_800(const mxArray * pa, char * buf, mwSize nChars); 
#line 1062
extern "C" int mxGetString_800(const mxArray * pa, char * buf, mwSize buflen); 
#line 1069
extern "C" char *mxArrayToString_800(const mxArray * pa); 
#line 1077
extern "C" char *mxArrayToUTF8String_800(const mxArray * pa); 
#line 1084
extern "C" mxArray *mxCreateStringFromNChars_800(const char * str, mwSize n); 
#line 1091
extern "C" mxArray *mxCreateString_800(const char * str); 




extern "C" mxArray *mxCreateCharMatrixFromStrings_800(mwSize m, const char ** str); 
#line 1102
extern "C" mxArray *mxCreateCellMatrix_800(mwSize m, mwSize n); 
#line 1108
extern "C" mxArray *mxCreateCellArray_800(mwSize ndim, const mwSize * dims); 
#line 1115
extern "C" mxArray *mxCreateStructMatrix_800(mwSize m, mwSize n, int nfields, const char ** fieldnames); 
#line 1122
extern "C" mxArray *mxCreateStructArray_800(mwSize ndim, const mwSize * dims, int nfields, const char ** fieldnames); 




extern "C" mxArray *mxDuplicateArray_800(const mxArray * in); 
#line 1134
extern "C" int mxSetClassName_800(mxArray * pa, const char * classname); 
#line 1140
extern "C" int mxAddField_800(mxArray * pa, const char * fieldname); 
#line 1146
extern "C" void mxRemoveField_800(mxArray * pa, int field); 




extern "C" double mxGetEps_800(); 




extern "C" double mxGetInf_800(); 




extern "C" double mxGetNaN_800(); 




extern "C" bool mxIsFinite_800(double x); 
#line 1172
extern "C" bool mxIsInf_800(double x); 




extern "C" bool mxIsNaN_800(double x); 
#line 1204
extern "C" mxDouble *mxGetDoubles_800(const mxArray *); extern "C" int mxSetDoubles_800(mxArray *, mxDouble *); extern "C" mxComplexDouble *mxGetComplexDoubles_800(const mxArray *); extern "C" int mxSetComplexDoubles_800(mxArray *, mxComplexDouble *); 
extern "C" mxSingle *mxGetSingles_800(const mxArray *); extern "C" int mxSetSingles_800(mxArray *, mxSingle *); extern "C" mxComplexSingle *mxGetComplexSingles_800(const mxArray *); extern "C" int mxSetComplexSingles_800(mxArray *, mxComplexSingle *); 
extern "C" mxInt8 *mxGetInt8s_800(const mxArray *); extern "C" int mxSetInt8s_800(mxArray *, mxInt8 *); extern "C" mxComplexInt8 *mxGetComplexInt8s_800(const mxArray *); extern "C" int mxSetComplexInt8s_800(mxArray *, mxComplexInt8 *); 
extern "C" mxUint8 *mxGetUint8s_800(const mxArray *); extern "C" int mxSetUint8s_800(mxArray *, mxUint8 *); extern "C" mxComplexUint8 *mxGetComplexUint8s_800(const mxArray *); extern "C" int mxSetComplexUint8s_800(mxArray *, mxComplexUint8 *); 
extern "C" mxInt16 *mxGetInt16s_800(const mxArray *); extern "C" int mxSetInt16s_800(mxArray *, mxInt16 *); extern "C" mxComplexInt16 *mxGetComplexInt16s_800(const mxArray *); extern "C" int mxSetComplexInt16s_800(mxArray *, mxComplexInt16 *); 
extern "C" mxUint16 *mxGetUint16s_800(const mxArray *); extern "C" int mxSetUint16s_800(mxArray *, mxUint16 *); extern "C" mxComplexUint16 *mxGetComplexUint16s_800(const mxArray *); extern "C" int mxSetComplexUint16s_800(mxArray *, mxComplexUint16 *); 
extern "C" mxInt32 *mxGetInt32s_800(const mxArray *); extern "C" int mxSetInt32s_800(mxArray *, mxInt32 *); extern "C" mxComplexInt32 *mxGetComplexInt32s_800(const mxArray *); extern "C" int mxSetComplexInt32s_800(mxArray *, mxComplexInt32 *); 
extern "C" mxUint32 *mxGetUint32s_800(const mxArray *); extern "C" int mxSetUint32s_800(mxArray *, mxUint32 *); extern "C" mxComplexUint32 *mxGetComplexUint32s_800(const mxArray *); extern "C" int mxSetComplexUint32s_800(mxArray *, mxComplexUint32 *); 
extern "C" mxInt64 *mxGetInt64s_800(const mxArray *); extern "C" int mxSetInt64s_800(mxArray *, mxInt64 *); extern "C" mxComplexInt64 *mxGetComplexInt64s_800(const mxArray *); extern "C" int mxSetComplexInt64s_800(mxArray *, mxComplexInt64 *); 
extern "C" mxUint64 *mxGetUint64s_800(const mxArray *); extern "C" int mxSetUint64s_800(mxArray *, mxUint64 *); extern "C" mxComplexUint64 *mxGetComplexUint64s_800(const mxArray *); extern "C" int mxSetComplexUint64s_800(mxArray *, mxComplexUint64 *); 

extern "C" int mxMakeArrayReal_800(mxArray *); 
extern "C" int mxMakeArrayComplex_800(mxArray *); 
#line 1311
#endif /* matrix_h */
#line 49 "C:\\Program Files\\MATLAB\\R2022b\\extern\\include\\mex.h"
extern "C" { typedef void (*mex_exit_fn)(void); }
#line 58
typedef 
#line 54
struct mexGlobalTableEntry_Tag { 

const char *name; 
mxArray **variable; 
} mexGlobalTableEntry, *mexGlobalTable; 
#line 73
typedef 
#line 67
struct mexFunctionTableEntry_tag { 
const char *name; 
mxFunctionPtr f; 
int nargin; 
int nargout; 
struct _mexLocalFunctionTable *local_function_table; 
} mexFunctionTableEntry, *mexFunctionTable; 




typedef 
#line 75
struct _mexLocalFunctionTable { 
size_t length; 
mexFunctionTable entries; 
} _mexLocalFunctionTable, *mexLocalFunctionTable; 




typedef 
#line 80
struct { 
void (*initialize)(void); 
void (*terminate)(void); 
} _mexInitTermTableEntry, *mexInitTermTableEntry; 



typedef void (*fn_clean_up_after_error)(void); 
typedef const char *(*fn_simple_function_to_string)(mxFunctionPtr f); 

typedef mexLocalFunctionTable (*fn_mex_get_local_function_table)(void); 
typedef mexLocalFunctionTable (*fn_mex_set_local_function_table)(mexLocalFunctionTable); 
#line 150
extern "C" void mexErrMsgTxt_800(const char * error_msg); 
#line 159
extern "C" void mexErrMsgIdAndTxt_800(const char * identifier, const char * err_msg, ...); 
#line 170
extern "C" void mexWarnMsgTxt_800(const char * warn_msg); 
#line 181
extern "C" void mexWarnMsgIdAndTxt_800(const char * identifier, const char * warn_msg, ...); 
#line 191
extern "C" int mexPrintf_800(const char * fmt, ...); 
#line 206
extern "C" void mexMakeArrayPersistent_800(mxArray * pa); 
#line 216
extern "C" void mexMakeMemoryPersistent_800(void * ptr); 
#line 222
extern "C" int mexCallMATLAB_800(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
#line 234
extern "C" mxArray *mexCallMATLABWithTrap_800(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
#line 247
extern "C" void mexPrintAssertion_800(const char * test, const char * fname, int linenum, const char * message); 
#line 257
extern "C" bool mexIsGlobal_800(const mxArray * pA); 
#line 264
extern "C" int mexPutVariable_800(const char * workspace, const char * name, const mxArray * parray); 
#line 275
extern "C" const mxArray *mexGetVariablePtr_800(const char * workspace, const char * name); 
#line 285
extern "C" mxArray *mexGetVariable_800(const char * workspace, const char * name); 
#line 294
extern "C" void mexLock_800(); 
#line 300
extern "C" void mexUnlock_800(); 
#line 306
extern "C" bool mexIsLocked_800(); 
#line 312
extern "C" const char *mexFunctionName_800(); 
#line 319
extern "C" int mexEvalString_800(const char * str); 
#line 328
extern "C" mxArray *mexEvalStringWithTrap_800(const char * str); 
#line 336
extern "C" int mexAtExit_800(mex_exit_fn exit_fcn); 
#line 356
extern "C" void mexFunction(int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[]); 
#line 363
#endif /* mex_h */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\string.h"
#ifndef _INC_STRING
#define _INC_STRING
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\errno.h"
#ifndef _INC_ERRNO
#define _INC_ERRNO



#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




extern "C" { __declspec(dllimport) int *__cdecl _errno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_errno(int _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); } 

extern "C" { __declspec(dllimport) unsigned long *__cdecl __doserrno(); } 


extern "C" { __declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); } 
#line 137
#endif /* _INC_ERRNO */
#line 134
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime_string.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)



__pragma( pack ( push, 8 )) 




extern "C" { 
#line 21
[[nodiscard]] const void *__cdecl 
memchr(const void * _Buf, int _Val, size_t _MaxCount); } 
#line 29
extern "C" { 
#line 28
[[nodiscard]] int __cdecl 
memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); } 
#line 43
extern "C" { void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); } 
#line 50
extern "C" { void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); } 
#line 63
extern "C" { void *__cdecl memset(void * _Dst, int _Val, size_t _Size); } 
#line 70
extern "C" { 
#line 69
[[nodiscard]] const char *__cdecl 
strchr(const char * _Str, int _Val); } 
#line 76
extern "C" { 
#line 75
[[nodiscard]] const char *__cdecl 
strrchr(const char * _Str, int _Ch); } 
#line 82
extern "C" { 
#line 81
[[nodiscard]] const char *__cdecl 
strstr(const char * _Str, const char * _SubStr); } 
#line 89
extern "C" { 
#line 87
[[nodiscard]] const __wchar_t *__cdecl 

wcschr(const __wchar_t * _Str, __wchar_t _Ch); } 
#line 95
extern "C" { 
#line 94
[[nodiscard]] const __wchar_t *__cdecl 
wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); } 
#line 102
extern "C" { 
#line 100
[[nodiscard]] const __wchar_t *__cdecl 

wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); } 
#line 109
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_memcpy_s.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 

#ifndef _CRT_MEMCPY_S_INLINE
#define _CRT_MEMCPY_S_INLINE static __inline
#endif /* _CRT_MEMCPY_S_INLINE */
#line 39
extern "C" { static __inline errno_t __cdecl memcpy_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ 
if (_SourceSize == (0)) 
{ 
return 0; 
}  

{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
if ((_Source == (0)) || (_DestinationSize < _SourceSize)) 
{ 
memset(_Destination, 0, _DestinationSize); 

{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } ; 


return 22; 
}  
memcpy(_Destination, _Source, _SourceSize); 
return 0; 
} } 


extern "C" { static __inline errno_t __cdecl memmove_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ 
if (_SourceSize == (0)) 
{ 
return 0; 
}  

{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } ; 

memmove(_Destination, _Source, _SourceSize); 
return 0; 
} } 
#line 92
#pragma warning(pop)
__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_memory.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)




__pragma( pack ( push, 8 )) 




extern "C" { __declspec(dllimport) int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); } 
#line 35
extern "C" { __declspec(dllimport) int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); } 
#line 83
extern "C" { 
#line 82
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memccpy. See online help for detail" "s.")) 
__declspec(dllimport) void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); } 
#line 91
extern "C" { 
#line 90
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memicmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); } 
#line 104
inline void *__cdecl memchr(void *
_Pv, int 
_C, size_t 
_N) 

{ 
const void *const _Pvc = _Pv; 
return const_cast< void *>(memchr(_Pvc, _C, _N)); 
} 
#line 118
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)




__pragma( pack ( push, 8 )) 
#line 32
extern "C" { __declspec(dllimport) errno_t __cdecl wcscat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); } 
#line 39
extern "C" { __declspec(dllimport) errno_t __cdecl wcscpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); } 
#line 46
extern "C" { __declspec(dllimport) errno_t __cdecl wcsncat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); } 
#line 54
extern "C" { __declspec(dllimport) errno_t __cdecl wcsncpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); } 
#line 62
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcstok_s(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); } 
#line 83
extern "C" { __declspec(dllimport) __declspec(allocator) __wchar_t *__cdecl _wcsdup(const __wchar_t * _String); } 
#line 93
template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscat_s ( _Destination, _Size, _Source ); }
#line 100
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcscat(__wchar_t * _Destination, const __wchar_t * _Source); } 
#line 108
extern "C" { __declspec(dllimport) int __cdecl wcscmp(const __wchar_t * _String1, const __wchar_t * _String2); } 




template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source ) throw ( ) { return wcscpy_s ( _Destination, _Size, _Source ); }
#line 119
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcscpy(__wchar_t * _Destination, const __wchar_t * _Source); } 
#line 126
extern "C" { __declspec(dllimport) size_t __cdecl wcscspn(const __wchar_t * _String, const __wchar_t * _Control); } 
#line 132
extern "C" { __declspec(dllimport) size_t __cdecl wcslen(const __wchar_t * _String); } 
#line 145
extern "C" { __declspec(dllimport) size_t __cdecl wcsnlen(const __wchar_t * _Source, size_t _MaxCount); } 
#line 161
extern "C" { static __inline size_t __cdecl wcsnlen_s(const __wchar_t *
_Source, size_t 
_MaxCount) 

{ 
return (_Source == (0)) ? (0) : wcsnlen(_Source, _MaxCount); 
} } 



template < size_t _Size > inline errno_t __cdecl wcsncat_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncat_s ( _Destination, _Size, _Source, _Count ); }
#line 178
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcsncat(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); } 
#line 187
extern "C" { __declspec(dllimport) int __cdecl wcsncmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 193
template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t const * _Source, size_t _Count ) throw ( ) { return wcsncpy_s ( _Destination, _Size, _Source, _Count ); }
#line 200
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcsncpy(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); } 
#line 209
extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcspbrk(const __wchar_t * _String, const __wchar_t * _Control); } 
#line 215
extern "C" { __declspec(dllimport) size_t __cdecl wcsspn(const __wchar_t * _String, const __wchar_t * _Control); } 
#line 221
extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcstok(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); } 
#line 239
extern "C" { static __inline __wchar_t *__cdecl _wcstok(__wchar_t *const 
_String, const __wchar_t *const 
_Delimiter) 

{ 
return wcstok(_String, _Delimiter, 0); 
} } 
#line 252
__declspec(deprecated("wcstok has been changed to conform with the ISO C standard, adding an extra context parameter. To use the legacy Microsoft wcsto" "k, define _CRT_NON_CONFORMING_WCSTOK.")) inline __wchar_t *__cdecl 
wcstok(__wchar_t *
_String, const __wchar_t *
_Delimiter) throw() 

{ 
return wcstok(_String, _Delimiter, 0); 
} 
#line 268
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcserror(int _ErrorNumber); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); } 
#line 279
template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], int _Error ) throw ( ) { return _wcserror_s ( _Buffer, _Size, _Error ); }
#line 288
extern "C" { __declspec(dllimport) __wchar_t *__cdecl __wcserror(const __wchar_t * _String); } 



extern "C" { __declspec(dllimport) errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrorMessage); } 
#line 298
template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], wchar_t const * _ErrorMessage ) throw ( ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 304
extern "C" { __declspec(dllimport) int __cdecl _wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); } 




extern "C" { __declspec(dllimport) int __cdecl _wcsicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); } 
#line 315
extern "C" { __declspec(dllimport) int __cdecl _wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 321
extern "C" { __declspec(dllimport) int __cdecl _wcsnicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 328
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsnset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value, size_t _MaxCount); } 
#line 335
template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( wchar_t ( & _Destination ) [ _Size ], wchar_t _Value, size_t _MaxCount ) throw ( ) { return _wcsnset_s ( _Destination, _Size, _Value, _MaxCount ); }
#line 342
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); } 
#line 350
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsrev(__wchar_t * _String); } 



extern "C" { __declspec(dllimport) errno_t __cdecl _wcsset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value); } 
#line 360
template < size_t _Size > inline errno_t __cdecl _wcsset_s ( wchar_t ( & _String ) [ _Size ], wchar_t _Value ) throw ( ) { return _wcsset_s ( _String, _Size, _Value ); }
#line 366
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsset(__wchar_t * _String, __wchar_t _Value); } 
#line 373
extern "C" { __declspec(dllimport) errno_t __cdecl _wcslwr_s(__wchar_t * _String, size_t _SizeInWords); } 




template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcslwr_s ( _String, _Size ); }




extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcslwr(__wchar_t * _String); } 
#line 389
extern "C" { __declspec(dllimport) errno_t __cdecl _wcslwr_s_l(__wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); } 
#line 395
template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }
#line 401
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); } 
#line 409
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsupr_s(__wchar_t * _String, size_t _Size); } 




template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) throw ( ) { return _wcsupr_s ( _String, _Size ); }




extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsupr(__wchar_t * _String); } 
#line 425
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsupr_s_l(__wchar_t * _String, size_t _Size, _locale_t _Locale); } 
#line 431
template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( wchar_t ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }
#line 437
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); } 
#line 446
extern "C" { __declspec(dllimport) size_t __cdecl wcsxfrm(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount); } 
#line 454
extern "C" { __declspec(dllimport) size_t __cdecl _wcsxfrm_l(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); } 
#line 462
extern "C" { __declspec(dllimport) int __cdecl wcscoll(const __wchar_t * _String1, const __wchar_t * _String2); } 
#line 468
extern "C" { __declspec(dllimport) int __cdecl _wcscoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); } 
#line 475
extern "C" { __declspec(dllimport) int __cdecl _wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); } 
#line 481
extern "C" { __declspec(dllimport) int __cdecl _wcsicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); } 
#line 488
extern "C" { __declspec(dllimport) int __cdecl _wcsncoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 495
extern "C" { __declspec(dllimport) int __cdecl _wcsncoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 503
extern "C" { __declspec(dllimport) int __cdecl _wcsnicoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 510
extern "C" { __declspec(dllimport) int __cdecl _wcsnicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 529
inline __wchar_t *__cdecl wcschr(__wchar_t *_String, __wchar_t _C) 
{ 
return const_cast< __wchar_t *>(wcschr(static_cast< const __wchar_t *>(_String), _C)); 
} 


inline __wchar_t *__cdecl wcspbrk(__wchar_t *_String, const __wchar_t *_Control) 
{ 
return const_cast< __wchar_t *>(wcspbrk(static_cast< const __wchar_t *>(_String), _Control)); 
} 


inline __wchar_t *__cdecl wcsrchr(__wchar_t *_String, __wchar_t _C) 
{ 
return const_cast< __wchar_t *>(wcsrchr(static_cast< const __wchar_t *>(_String), _C)); 
} 



inline __wchar_t *__cdecl wcsstr(__wchar_t *_String, const __wchar_t *_SubStr) 
{ 
return const_cast< __wchar_t *>(wcsstr(static_cast< const __wchar_t *>(_String), _SubStr)); 
} 
#line 570
extern "C" { 
#line 569
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsdup. See online help for details" ".")) 
__declspec(dllimport) __wchar_t *__cdecl wcsdup(const __wchar_t * _String); } 
#line 582
extern "C" { 
#line 581
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); } 
#line 588
extern "C" { 
#line 587
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnicmp. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); } 
#line 596
extern "C" { 
#line 594
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnset. See online help for detail" "s.")) 

__declspec(dllimport) __wchar_t *__cdecl wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); } 
#line 604
extern "C" { 
#line 602
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsrev. See online help for details" ".")) 

__declspec(dllimport) __wchar_t *__cdecl wcsrev(__wchar_t * _String); } 
#line 610
extern "C" { 
#line 608
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsset. See online help for details" ".")) 

__declspec(dllimport) __wchar_t *__cdecl wcsset(__wchar_t * _String, __wchar_t _Value); } 
#line 617
extern "C" { 
#line 615
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcslwr. See online help for details" ".")) 

__declspec(dllimport) __wchar_t *__cdecl wcslwr(__wchar_t * _String); } 
#line 623
extern "C" { 
#line 621
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsupr. See online help for details" ".")) 

__declspec(dllimport) __wchar_t *__cdecl wcsupr(__wchar_t * _String); } 




extern "C" { 
#line 627
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicoll. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); } 
#line 637
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 32
extern "C" { __declspec(dllimport) errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); } 
#line 39
extern "C" { __declspec(dllimport) errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); } 
#line 46
extern "C" { __declspec(dllimport) errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); } 
#line 52
extern "C" { __declspec(dllimport) errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); } 
#line 60
extern "C" { __declspec(dllimport) errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); } 
#line 68
extern "C" { __declspec(dllimport) char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); } 
#line 76
extern "C" { __declspec(dllimport) void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); } 
#line 83
template < size_t _Size > inline errno_t __cdecl strcat_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcat_s ( _Destination, _Size, _Source ); }
#line 91
extern "C" { char *__cdecl strcat(char * _Destination, const char * _Source); } 
#line 100
extern "C" { int __cdecl strcmp(const char * _Str1, const char * _Str2); } 
#line 106
extern "C" { __declspec(dllimport) int __cdecl _strcmpi(const char * _String1, const char * _String2); } 
#line 112
extern "C" { __declspec(dllimport) int __cdecl strcoll(const char * _String1, const char * _String2); } 
#line 118
extern "C" { __declspec(dllimport) int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); } 
#line 124
template < size_t _Size > inline errno_t __cdecl strcpy_s ( char ( & _Destination ) [ _Size ], char const * _Source ) throw ( ) { return strcpy_s ( _Destination, _Size, _Source ); }
#line 130
extern "C" { char *__cdecl strcpy(char * _Destination, const char * _Source); } 
#line 137
extern "C" { __declspec(dllimport) size_t __cdecl strcspn(const char * _Str, const char * _Control); } 
#line 148
extern "C" { __declspec(dllimport) __declspec(allocator) char *__cdecl _strdup(const char * _Source); } 
#line 159
extern "C" { __declspec(dllimport) char *__cdecl _strerror(const char * _ErrorMessage); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); } 
#line 170
template < size_t _Size > inline errno_t __cdecl _strerror_s ( char ( & _Buffer ) [ _Size ], char const * _ErrorMessage ) throw ( ) { return _strerror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 178
extern "C" { __declspec(dllimport) char *__cdecl strerror(int _ErrorMessage); } 



template < size_t _Size > inline errno_t __cdecl strerror_s ( char ( & _Buffer ) [ _Size ], int _ErrorMessage ) throw ( ) { return strerror_s ( _Buffer, _Size, _ErrorMessage ); }
#line 189
extern "C" { __declspec(dllimport) int __cdecl _stricmp(const char * _String1, const char * _String2); } 
#line 195
extern "C" { __declspec(dllimport) int __cdecl _stricoll(const char * _String1, const char * _String2); } 
#line 201
extern "C" { __declspec(dllimport) int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); } 
#line 208
extern "C" { __declspec(dllimport) int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); } 
#line 215
extern "C" { size_t __cdecl strlen(const char * _Str); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _strlwr_s(char * _String, size_t _Size); } 




template < size_t _Size > inline errno_t __cdecl _strlwr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strlwr_s ( _String, _Size ); }




extern "C" { __declspec(dllimport) char *__cdecl _strlwr(char * _String); } 
#line 236
extern "C" { __declspec(dllimport) errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); } 
#line 242
template < size_t _Size > inline errno_t __cdecl _strlwr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strlwr_s_l ( _String, _Size, _Locale ); }
#line 248
extern "C" { __declspec(dllimport) char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); } 
#line 255
template < size_t _Size > inline errno_t __cdecl strncat_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncat_s ( _Destination, _Size, _Source, _Count ); }
#line 262
extern "C" { __declspec(dllimport) char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); } 
#line 271
extern "C" { __declspec(dllimport) int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); } 
#line 278
extern "C" { __declspec(dllimport) int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); } 
#line 285
extern "C" { __declspec(dllimport) int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 293
extern "C" { __declspec(dllimport) int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); } 
#line 300
extern "C" { __declspec(dllimport) int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 308
extern "C" { __declspec(dllimport) int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); } 
#line 315
extern "C" { __declspec(dllimport) int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); } 
#line 322
extern "C" { __declspec(dllimport) size_t __cdecl __strncnt(const char * _String, size_t _Count); } 




template < size_t _Size > inline errno_t __cdecl strncpy_s ( char ( & _Destination ) [ _Size ], char const * _Source, size_t _Count ) throw ( ) { return strncpy_s ( _Destination, _Size, _Source, _Count ); }
#line 334
extern "C" { __declspec(dllimport) char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); } 
#line 351
extern "C" { __declspec(dllimport) size_t __cdecl strnlen(const char * _String, size_t _MaxCount); } 
#line 367
extern "C" { static __inline size_t __cdecl strnlen_s(const char *
_String, size_t 
_MaxCount) 

{ 
return (_String == (0)) ? (0) : strnlen(_String, _MaxCount); 
} } 




extern "C" { __declspec(dllimport) errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); } 
#line 385
template < size_t _Size > inline errno_t __cdecl _strnset_s ( char ( & _Destination ) [ _Size ], int _Value, size_t _Count ) throw ( ) { return _strnset_s ( _Destination, _Size, _Value, _Count ); }
#line 392
extern "C" { __declspec(dllimport) char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); } 
#line 401
extern "C" { __declspec(dllimport) const char *__cdecl strpbrk(const char * _Str, const char * _Control); } 




extern "C" { __declspec(dllimport) char *__cdecl _strrev(char * _Str); } 




extern "C" { __declspec(dllimport) errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); } 
#line 417
template < size_t _Size > inline errno_t __cdecl _strset_s ( char ( & _Destination ) [ _Size ], int _Value ) throw ( ) { return _strset_s ( _Destination, _Size, _Value ); }
#line 423
extern "C" { char *__cdecl _strset(char * _Destination, int _Value); } 
#line 430
extern "C" { __declspec(dllimport) size_t __cdecl strspn(const char * _Str, const char * _Control); } 
#line 436
extern "C" { __declspec(dllimport) char *__cdecl strtok(char * _String, const char * _Delimiter); } 
#line 442
extern "C" { __declspec(dllimport) errno_t __cdecl _strupr_s(char * _String, size_t _Size); } 




template < size_t _Size > inline errno_t __cdecl _strupr_s ( char ( & _String ) [ _Size ] ) throw ( ) { return _strupr_s ( _String, _Size ); }




extern "C" { __declspec(dllimport) char *__cdecl _strupr(char * _String); } 
#line 458
extern "C" { __declspec(dllimport) errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); } 
#line 464
template < size_t _Size > inline errno_t __cdecl _strupr_s_l ( char ( & _String ) [ _Size ], _locale_t _Locale ) throw ( ) { return _strupr_s_l ( _String, _Size, _Locale ); }
#line 470
extern "C" { __declspec(dllimport) char *__cdecl _strupr_l(char * _String, _locale_t _Locale); } 
#line 479
extern "C" { __declspec(dllimport) size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); } 
#line 487
extern "C" { __declspec(dllimport) size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); } 
#line 500
inline char *__cdecl strchr(char *const _String, const int _Ch) 
{ 
return const_cast< char *>(strchr(static_cast< const char *>(_String), _Ch)); 
} 


inline char *__cdecl strpbrk(char *const _String, const char *const _Control) 
{ 
return const_cast< char *>(strpbrk(static_cast< const char *>(_String), _Control)); 
} 


inline char *__cdecl strrchr(char *const _String, const int _Ch) 
{ 
return const_cast< char *>(strrchr(static_cast< const char *>(_String), _Ch)); 
} 


inline char *__cdecl strstr(char *const _String, const char *const _SubString) 
{ 
return const_cast< char *>(strstr(static_cast< const char *>(_String), _SubString)); 
} 
#line 532
extern "C" { 
#line 531
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strdup. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strdup(const char * _String); } 
#line 539
extern "C" { 
#line 538
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strcmpi. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl strcmpi(const char * _String1, const char * _String2); } 
#line 545
extern "C" { 
#line 544
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl stricmp(const char * _String1, const char * _String2); } 
#line 551
extern "C" { 
#line 550
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strlwr. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strlwr(char * _String); } 




extern "C" { 
#line 555
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnicmp. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); } 
#line 563
extern "C" { 
#line 562
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnset. See online help for detail" "s.")) 
__declspec(dllimport) char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); } 
#line 570
extern "C" { 
#line 569
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strrev. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strrev(char * _String); } 




extern "C" { 
#line 574
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strset. See online help for details" ".")) char *__cdecl 
strset(char * _String, int _Value); } 




extern "C" { 
#line 579
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strupr. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strupr(char * _String); } 
#line 592
#endif /* _INC_STRING */
#line 9 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_math.h"
#ifndef _INC_MATH
#define _INC_MATH
#line 588 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\string.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_math.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




extern "C" { struct _exception { 

int type; 
char *name; 
double arg1; 
double arg2; 
double retval; 
}; }



#ifndef _COMPLEX_DEFINED
#define _COMPLEX_DEFINED

extern "C" { struct _complex { 

double x, y; 
}; }





#endif /* _COMPLEX_DEFINED */
#line 59
extern "C" { typedef float float_t; }
extern "C" { typedef double double_t; }
#line 78
extern "C" const double _HUGE; 





#ifndef _HUGE_ENUF
#define _HUGE_ENUF 1e+300
#endif /* _HUGE_ENUF */
#line 169
extern "C" { void __cdecl _fperrraise(int _Except); } 

extern "C" { __declspec(dllimport) short __cdecl _dclass(double _X); } 
extern "C" { __declspec(dllimport) short __cdecl _ldclass(long double _X); } 
extern "C" { __declspec(dllimport) short __cdecl _fdclass(float _X); } 

extern "C" { __declspec(dllimport) int __cdecl _dsign(double _X); } 
extern "C" { __declspec(dllimport) int __cdecl _ldsign(long double _X); } 
extern "C" { __declspec(dllimport) int __cdecl _fdsign(float _X); } 

extern "C" { __declspec(dllimport) int __cdecl _dpcomp(double _X, double _Y); } 
extern "C" { __declspec(dllimport) int __cdecl _ldpcomp(long double _X, long double _Y); } 
extern "C" { __declspec(dllimport) int __cdecl _fdpcomp(float _X, float _Y); } 

extern "C" { __declspec(dllimport) short __cdecl _dtest(double * _Px); } 
extern "C" { __declspec(dllimport) short __cdecl _ldtest(long double * _Px); } 
extern "C" { __declspec(dllimport) short __cdecl _fdtest(float * _Px); } 

extern "C" { __declspec(dllimport) short __cdecl _d_int(double * _Px, short _Xexp); } 
extern "C" { __declspec(dllimport) short __cdecl _ld_int(long double * _Px, short _Xexp); } 
extern "C" { __declspec(dllimport) short __cdecl _fd_int(float * _Px, short _Xexp); } 

extern "C" { __declspec(dllimport) short __cdecl _dscale(double * _Px, long _Lexp); } 
extern "C" { __declspec(dllimport) short __cdecl _ldscale(long double * _Px, long _Lexp); } 
extern "C" { __declspec(dllimport) short __cdecl _fdscale(float * _Px, long _Lexp); } 

extern "C" { __declspec(dllimport) short __cdecl _dunscale(short * _Pex, double * _Px); } 
extern "C" { __declspec(dllimport) short __cdecl _ldunscale(short * _Pex, long double * _Px); } 
extern "C" { __declspec(dllimport) short __cdecl _fdunscale(short * _Pex, float * _Px); } 

extern "C" { __declspec(dllimport) short __cdecl _dexp(double * _Px, double _Y, long _Eoff); } 
extern "C" { __declspec(dllimport) short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); } 
extern "C" { __declspec(dllimport) short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); } 

extern "C" { __declspec(dllimport) short __cdecl _dnorm(unsigned short * _Ps); } 
extern "C" { __declspec(dllimport) short __cdecl _fdnorm(unsigned short * _Ps); } 

extern "C" { __declspec(dllimport) double __cdecl _dpoly(double _X, const double * _Tab, int _N); } 
extern "C" { __declspec(dllimport) long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); } 
extern "C" { __declspec(dllimport) float __cdecl _fdpoly(float _X, const float * _Tab, int _N); } 

extern "C" { __declspec(dllimport) double __cdecl _dlog(double _X, int _Baseflag); } 
extern "C" { __declspec(dllimport) long double __cdecl _ldlog(long double _X, int _Baseflag); } 
extern "C" { __declspec(dllimport) float __cdecl _fdlog(float _X, int _Baseflag); } 

extern "C" { __declspec(dllimport) double __cdecl _dsin(double _X, unsigned _Qoff); } 
extern "C" { __declspec(dllimport) long double __cdecl _ldsin(long double _X, unsigned _Qoff); } 
extern "C" { __declspec(dllimport) float __cdecl _fdsin(float _X, unsigned _Qoff); } 
#line 223
extern "C" { typedef 
#line 220
union { 
unsigned short _Sh[4]; 
double _Val; 
} _double_val; }
#line 230
extern "C" { typedef 
#line 227
union { 
unsigned short _Sh[2]; 
float _Val; 
} _float_val; }
#line 237
extern "C" { typedef 
#line 234
union { 
unsigned short _Sh[4]; 
long double _Val; 
} _ldouble_val; }
#line 245
extern "C" { typedef 
#line 240
union { 
unsigned short _Word[4]; 
float _Float; 
double _Double; 
long double _Long_double; 
} _float_const; }

extern "C" const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
extern "C" const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
extern "C" const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 

extern "C" const _float_const _Eps_C, _Rteps_C; 
extern "C" const _float_const _FEps_C, _FRteps_C; 
extern "C" const _float_const _LEps_C, _LRteps_C; 

extern "C" const double _Zero_C, _Xbig_C; 
extern "C" const float _FZero_C, _FXbig_C; 
extern "C" const long double _LZero_C, _LXbig_C; 
#line 288
inline int fpclassify(float _X) throw() 
{ 
return _fdtest(&_X); 
} 

inline int fpclassify(double _X) throw() 
{ 
return _dtest(&_X); 
} 

inline int fpclassify(long double _X) throw() 
{ 
return _ldtest(&_X); 
} 

inline bool signbit(float _X) throw() 
{ 
return _fdsign(_X) != 0; 
} 

inline bool signbit(double _X) throw() 
{ 
return _dsign(_X) != 0; 
} 

inline bool signbit(long double _X) throw() 
{ 
return _ldsign(_X) != 0; 
} 

inline int _fpcomp(float _X, float _Y) throw() 
{ 
return _fdpcomp(_X, _Y); 
} 

inline int _fpcomp(double _X, double _Y) throw() 
{ 
return _dpcomp(_X, _Y); 
} 

inline int _fpcomp(long double _X, long double _Y) throw() 
{ 
return _ldpcomp(_X, _Y); 
} 

template < class _Trc, class _Tre > struct _Combined_type
    {
        typedef float _Type;
    };

template<> struct _Combined_type< float, double>  { 

typedef double _Type; 
}; 

template<> struct _Combined_type< float, long double>  { 

typedef long double _Type; 
}; 

template < class _Ty, class _T2 > struct _Real_widened
    {
        typedef long double _Type;
    };

template<> struct _Real_widened< float, float>  { 

typedef float _Type; 
}; 

template<> struct _Real_widened< float, double>  { 

typedef double _Type; 
}; 

template<> struct _Real_widened< double, float>  { 

typedef double _Type; 
}; 

template<> struct _Real_widened< double, double>  { 

typedef double _Type; 
}; 

template < class _Ty > struct _Real_type
    {
        typedef double _Type;
    };

template<> struct _Real_type< float>  { 

typedef float _Type; 
}; 

template<> struct _Real_type< long double>  { 

typedef long double _Type; 
}; 

template < class _T1, class _T2 >
                   inline int _fpcomp ( _T1 _X, _T2 _Y ) throw ( )
    {
        typedef typename _Combined_type < float,
            typename _Real_widened <
            typename _Real_type < _T1 > :: _Type,
            typename _Real_type < _T2 > :: _Type > :: _Type > :: _Type _Tw;
        return _fpcomp ( ( _Tw ) _X, ( _Tw ) _Y );
    }

template < class _Ty >
                   inline bool isfinite ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) <= 0;
    }

template < class _Ty >
                   inline bool isinf ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 1;
    }

template < class _Ty >
                   inline bool isnan ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == 2;
    }

template < class _Ty >
                   inline bool isnormal ( _Ty _X ) throw ( )
    {
        return fpclassify ( _X ) == ( - 1 );
    }

template < class _Ty1, class _Ty2 >
                   inline bool isgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 4 ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool isgreaterequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 2 | 4 ) ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool isless ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & 1 ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool islessequal ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 2 ) ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool islessgreater ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return ( _fpcomp ( _X, _Y ) & ( 1 | 4 ) ) != 0;
    }

template < class _Ty1, class _Ty2 >
                   inline bool isunordered ( _Ty1 _X, _Ty2 _Y ) throw ( )
    {
        return _fpcomp ( _X, _Y ) == 0;
    }
#line 464
extern "C" { int __cdecl abs(int _X); } 
extern "C" { long __cdecl labs(long _X); } 
extern "C" { __int64 __cdecl llabs(__int64 _X); } 

extern "C" { double __cdecl acos(double _X); } 
extern "C" { double __cdecl asin(double _X); } 
extern "C" { double __cdecl atan(double _X); } 
extern "C" { double __cdecl atan2(double _Y, double _X); } 

extern "C" { double __cdecl cos(double _X); } 
extern "C" { double __cdecl cosh(double _X); } 
extern "C" { double __cdecl exp(double _X); } 
extern "C" { double __cdecl fabs(double _X); } 
extern "C" { double __cdecl fmod(double _X, double _Y); } 
extern "C" { double __cdecl log(double _X); } 
extern "C" { double __cdecl log10(double _X); } 
extern "C" { double __cdecl pow(double _X, double _Y); } 
extern "C" { double __cdecl sin(double _X); } 
extern "C" { double __cdecl sinh(double _X); } 
extern "C" { double __cdecl sqrt(double _X); } 
extern "C" { double __cdecl tan(double _X); } 
extern "C" { double __cdecl tanh(double _X); } 

extern "C" { __declspec(dllimport) double __cdecl acosh(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl asinh(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl atanh(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl atof(const char * _String); } 
extern "C" { __declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); } 
extern "C" { __declspec(dllimport) double __cdecl _cabs(_complex _Complex_value); } 
extern "C" { __declspec(dllimport) double __cdecl cbrt(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl ceil(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _chgsign(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl copysign(double _Number, double _Sign); } 
extern "C" { __declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); } 
extern "C" { __declspec(dllimport) double __cdecl erf(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl erfc(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl exp2(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl expm1(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl fdim(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl floor(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl fma(double _X, double _Y, double _Z); } 
extern "C" { __declspec(dllimport) double __cdecl fmax(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl fmin(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl frexp(double _X, int * _Y); } 
extern "C" { __declspec(dllimport) double __cdecl hypot(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl _hypot(double _X, double _Y); } 
extern "C" { __declspec(dllimport) int __cdecl ilogb(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl ldexp(double _X, int _Y); } 
extern "C" { __declspec(dllimport) double __cdecl lgamma(double _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llrint(double _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llround(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl log1p(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl log2(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl logb(double _X); } 
extern "C" { __declspec(dllimport) long __cdecl lrint(double _X); } 
extern "C" { __declspec(dllimport) long __cdecl lround(double _X); } 

extern "C" { int __cdecl _matherr(_exception * _Except); } 

extern "C" { __declspec(dllimport) double __cdecl modf(double _X, double * _Y); } 
extern "C" { __declspec(dllimport) double __cdecl nan(const char * _X); } 
extern "C" { __declspec(dllimport) double __cdecl nearbyint(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl nextafter(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl nexttoward(double _X, long double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl remainder(double _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl remquo(double _X, double _Y, int * _Z); } 
extern "C" { __declspec(dllimport) double __cdecl rint(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl round(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl scalbln(double _X, long _Y); } 
extern "C" { __declspec(dllimport) double __cdecl scalbn(double _X, int _Y); } 
extern "C" { __declspec(dllimport) double __cdecl tgamma(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl trunc(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _j0(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _j1(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _jn(int _X, double _Y); } 
extern "C" { __declspec(dllimport) double __cdecl _y0(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _y1(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _yn(int _X, double _Y); } 

extern "C" { __declspec(dllimport) float __cdecl acoshf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl asinhf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl atanhf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl cbrtf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl _chgsignf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl copysignf(float _Number, float _Sign); } 
extern "C" { __declspec(dllimport) float __cdecl _copysignf(float _Number, float _Sign); } 
extern "C" { __declspec(dllimport) float __cdecl erff(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl erfcf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl expm1f(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl exp2f(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl fdimf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl fmaf(float _X, float _Y, float _Z); } 
extern "C" { __declspec(dllimport) float __cdecl fmaxf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl fminf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl _hypotf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) int __cdecl ilogbf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl lgammaf(float _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llrintf(float _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llroundf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl log1pf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl log2f(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl logbf(float _X); } 
extern "C" { __declspec(dllimport) long __cdecl lrintf(float _X); } 
extern "C" { __declspec(dllimport) long __cdecl lroundf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl nanf(const char * _X); } 
extern "C" { __declspec(dllimport) float __cdecl nearbyintf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl nextafterf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl nexttowardf(float _X, long double _Y); } 
extern "C" { __declspec(dllimport) float __cdecl remainderf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl remquof(float _X, float _Y, int * _Z); } 
extern "C" { __declspec(dllimport) float __cdecl rintf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl roundf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl scalblnf(float _X, long _Y); } 
extern "C" { __declspec(dllimport) float __cdecl scalbnf(float _X, int _Y); } 
extern "C" { __declspec(dllimport) float __cdecl tgammaf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl truncf(float _X); } 
#line 589
extern "C" { __declspec(dllimport) float __cdecl _logbf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl _nextafterf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) int __cdecl _finitef(float _X); } 
extern "C" { __declspec(dllimport) int __cdecl _isnanf(float _X); } 
extern "C" { __declspec(dllimport) int __cdecl _fpclassf(float _X); } 

extern "C" { __declspec(dllimport) int __cdecl _set_FMA3_enable(int _Flag); } 
extern "C" { __declspec(dllimport) int __cdecl _get_FMA3_enable(); } 
#line 609
extern "C" { __declspec(dllimport) float __cdecl acosf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl asinf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl atan2f(float _Y, float _X); } 
extern "C" { __declspec(dllimport) float __cdecl atanf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl ceilf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl cosf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl coshf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl expf(float _X); } 
#line 668
extern "C" { __inline float __cdecl fabsf(float _X) 
{ 
return (float)fabs(_X); 
} } 
#line 677
extern "C" { __declspec(dllimport) float __cdecl floorf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl fmodf(float _X, float _Y); } 
#line 694
extern "C" { __inline float __cdecl frexpf(float _X, int *_Y) 
{ 
return (float)frexp(_X, _Y); 
} } 

extern "C" { __inline float __cdecl hypotf(float _X, float _Y) 
{ 
return _hypotf(_X, _Y); 
} } 

extern "C" { __inline float __cdecl ldexpf(float _X, int _Y) 
{ 
return (float)ldexp(_X, _Y); 
} } 



extern "C" { __declspec(dllimport) float __cdecl log10f(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl logf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl modff(float _X, float * _Y); } 
extern "C" { __declspec(dllimport) float __cdecl powf(float _X, float _Y); } 
extern "C" { __declspec(dllimport) float __cdecl sinf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl sinhf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl sqrtf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl tanf(float _X); } 
extern "C" { __declspec(dllimport) float __cdecl tanhf(float _X); } 
#line 773
extern "C" { __declspec(dllimport) long double __cdecl acoshl(long double _X); } 

extern "C" { __inline long double __cdecl acosl(long double _X) 
{ 
return acos((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl asinhl(long double _X); } 

extern "C" { __inline long double __cdecl asinl(long double _X) 
{ 
return asin((double)_X); 
} } 

extern "C" { __inline long double __cdecl atan2l(long double _Y, long double _X) 
{ 
return atan2((double)_Y, (double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl atanhl(long double _X); } 

extern "C" { __inline long double __cdecl atanl(long double _X) 
{ 
return atan((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl cbrtl(long double _X); } 

extern "C" { __inline long double __cdecl ceill(long double _X) 
{ 
return ceil((double)_X); 
} } 

extern "C" { __inline long double __cdecl _chgsignl(long double _X) 
{ 
return _chgsign((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl copysignl(long double _Number, long double _Sign); } 

extern "C" { __inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
{ 
return _copysign((double)_Number, (double)_Sign); 
} } 

extern "C" { __inline long double __cdecl coshl(long double _X) 
{ 
return cosh((double)_X); 
} } 

extern "C" { __inline long double __cdecl cosl(long double _X) 
{ 
return cos((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl erfl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl erfcl(long double _X); } 

extern "C" { __inline long double __cdecl expl(long double _X) 
{ 
return exp((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl exp2l(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl expm1l(long double _X); } 

extern "C" { __inline long double __cdecl fabsl(long double _X) 
{ 
return fabs((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl fdiml(long double _X, long double _Y); } 

extern "C" { __inline long double __cdecl floorl(long double _X) 
{ 
return floor((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl fmal(long double _X, long double _Y, long double _Z); } 
extern "C" { __declspec(dllimport) long double __cdecl fmaxl(long double _X, long double _Y); } 
extern "C" { __declspec(dllimport) long double __cdecl fminl(long double _X, long double _Y); } 

extern "C" { __inline long double __cdecl fmodl(long double _X, long double _Y) 
{ 
return fmod((double)_X, (double)_Y); 
} } 

extern "C" { __inline long double __cdecl frexpl(long double _X, int *_Y) 
{ 
return frexp((double)_X, _Y); 
} } 

extern "C" { __declspec(dllimport) int __cdecl ilogbl(long double _X); } 

extern "C" { __inline long double __cdecl _hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} } 

extern "C" { __inline long double __cdecl hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} } 

extern "C" { __inline long double __cdecl ldexpl(long double _X, int _Y) 
{ 
return ldexp((double)_X, _Y); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl lgammal(long double _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llrintl(long double _X); } 
extern "C" { __declspec(dllimport) __int64 __cdecl llroundl(long double _X); } 

extern "C" { __inline long double __cdecl logl(long double _X) 
{ 
return log((double)_X); 
} } 

extern "C" { __inline long double __cdecl log10l(long double _X) 
{ 
return log10((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl log1pl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl log2l(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl logbl(long double _X); } 
extern "C" { __declspec(dllimport) long __cdecl lrintl(long double _X); } 
extern "C" { __declspec(dllimport) long __cdecl lroundl(long double _X); } 

extern "C" { __inline long double __cdecl modfl(long double _X, long double *_Y) 
{ 
double _F, _I; 
_F = modf((double)_X, &_I); 
*_Y = _I; 
return _F; 
} } 

extern "C" { __declspec(dllimport) long double __cdecl nanl(const char * _X); } 
extern "C" { __declspec(dllimport) long double __cdecl nearbyintl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl nextafterl(long double _X, long double _Y); } 
extern "C" { __declspec(dllimport) long double __cdecl nexttowardl(long double _X, long double _Y); } 

extern "C" { __inline long double __cdecl powl(long double _X, long double _Y) 
{ 
return pow((double)_X, (double)_Y); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl remainderl(long double _X, long double _Y); } 
extern "C" { __declspec(dllimport) long double __cdecl remquol(long double _X, long double _Y, int * _Z); } 
extern "C" { __declspec(dllimport) long double __cdecl rintl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl roundl(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl scalblnl(long double _X, long _Y); } 
extern "C" { __declspec(dllimport) long double __cdecl scalbnl(long double _X, int _Y); } 

extern "C" { __inline long double __cdecl sinhl(long double _X) 
{ 
return sinh((double)_X); 
} } 

extern "C" { __inline long double __cdecl sinl(long double _X) 
{ 
return sin((double)_X); 
} } 

extern "C" { __inline long double __cdecl sqrtl(long double _X) 
{ 
return sqrt((double)_X); 
} } 

extern "C" { __inline long double __cdecl tanhl(long double _X) 
{ 
return tanh((double)_X); 
} } 

extern "C" { __inline long double __cdecl tanl(long double _X) 
{ 
return tan((double)_X); 
} } 

extern "C" { __declspec(dllimport) long double __cdecl tgammal(long double _X); } 
extern "C" { __declspec(dllimport) long double __cdecl truncl(long double _X); } 
#line 974
extern "C" double HUGE; 




extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j0. See online help for details.")) __declspec(dllimport) double __cdecl j0(double _X); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j1. See online help for details.")) __declspec(dllimport) double __cdecl j1(double _X); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _jn. See online help for details.")) __declspec(dllimport) double __cdecl jn(int _X, double _Y); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y0. See online help for details.")) __declspec(dllimport) double __cdecl y0(double _X); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y1. See online help for details.")) __declspec(dllimport) double __cdecl y1(double _X); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _yn. See online help for details.")) __declspec(dllimport) double __cdecl yn(int _X, double _Y); } 
#line 992
#endif /* _INC_MATH */
#line 5 "C:\\Users\\mahus\\AppData\\Local\\Temp\\cxxfe_290923067405300.in"
#ifndef RTWTYPES_H
#define RTWTYPES_H

#endif /* RTWTYPES_H */
#line 8 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\ccontrol_functions.h"
#ifndef CCONTROLFUNCTIONS_H
#define CCONTROLFUNCTIONS_H
#line 989 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\corecrt_math.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\stdint.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)

typedef signed char int8_t; 
typedef short int16_t; 
typedef int int32_t; 
typedef __int64 int64_t; 
typedef unsigned char uint8_t; 
typedef unsigned short uint16_t; 
typedef unsigned uint32_t; 
typedef unsigned __int64 uint64_t; 

typedef signed char int_least8_t; 
typedef short int_least16_t; 
typedef int int_least32_t; 
typedef __int64 int_least64_t; 
typedef unsigned char uint_least8_t; 
typedef unsigned short uint_least16_t; 
typedef unsigned uint_least32_t; 
typedef unsigned __int64 uint_least64_t; 

typedef signed char int_fast8_t; 
typedef int int_fast16_t; 
typedef int int_fast32_t; 
typedef __int64 int_fast64_t; 
typedef unsigned char uint_fast8_t; 
typedef unsigned uint_fast16_t; 
typedef unsigned uint_fast32_t; 
typedef unsigned __int64 uint_fast64_t; 

typedef __int64 intmax_t; 
typedef unsigned __int64 uintmax_t; 
#line 10 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\float.h"
#ifndef _INC_FLOAT
#define _INC_FLOAT
#line 136 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\stdint.h"
#pragma warning(pop)
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\include\\10.0.19041.0\\ucrt\\float.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 231
extern "C" { __declspec(dllimport) unsigned __cdecl _clearfp(); } 

#pragma warning(push)
#pragma warning(disable: 4141)


extern "C" { __declspec(dllimport) unsigned __cdecl _controlfp(unsigned _NewValue, unsigned _Mask); } 




#pragma warning(pop)


extern "C" { __declspec(dllimport) void __cdecl _set_controlfp(unsigned _NewValue, unsigned _Mask); } 
#line 251
extern "C" { __declspec(dllimport) errno_t __cdecl _controlfp_s(unsigned * _CurrentState, unsigned _NewValue, unsigned _Mask); } 
#line 258
extern "C" { __declspec(dllimport) unsigned __cdecl _statusfp(); } 


extern "C" { __declspec(dllimport) void __cdecl _fpreset(); } 
#line 277
extern "C" { __declspec(dllimport) unsigned __cdecl _control87(unsigned _NewValue, unsigned _Mask); } 
#line 294
extern "C" { __declspec(dllimport) int *__cdecl __fpecode(); } 




extern "C" { __declspec(dllimport) int __cdecl __fpe_flt_rounds(); } 
#line 312
extern "C" { __declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); } 
extern "C" { __declspec(dllimport) double __cdecl _chgsign(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _scalb(double _X, long _Y); } 
extern "C" { __declspec(dllimport) double __cdecl _logb(double _X); } 
extern "C" { __declspec(dllimport) double __cdecl _nextafter(double _X, double _Y); } 
extern "C" { __declspec(dllimport) int __cdecl _finite(double _X); } 
extern "C" { __declspec(dllimport) int __cdecl _isnan(double _X); } 
extern "C" { __declspec(dllimport) int __cdecl _fpclass(double _X); } 


extern "C" { __declspec(dllimport) float __cdecl _scalbf(float _X, long _Y); } 
#line 339
extern "C" { __declspec(dllimport) void __cdecl fpreset(); } 
#line 409
#endif /* _INC_FLOAT */
#line 406
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 26 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\ccontrol_functions.h"
void mpc(float * A, float * B, float * C, float * x, float * u, float * r, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM, uint8_t HORIZON, uint8_t ITERATION_LIMIT, bool has_integration); 
void kalman(float * A, float * B, float * C, float * K, float * u, float * x, float * y, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM); 
void lqi(float * y, float * u, float qi, float * r, float * L, float * Li, float * x, float * xi, uint8_t ADIM, uint8_t YDIM, uint8_t RDIM, uint8_t ANTI_WINDUP); 
void mrac(float limit, float gain, float * y, float * u, float * r, float * I1, float * I2, uint8_t RDIM); 
void theta2ss(float * A, float * B, float * C, float * theta, float * K, uint8_t ADIM, uint8_t NP, uint8_t NZ, uint8_t NZE, bool integral_action); 
bool stability(float * A, uint8_t ADIM); 
void c2d(float  A[], float  B[], uint8_t ADIM, uint8_t RDIM, float sampleTime); 




float saturation(float input, float lower_limit, float upper_limit); 
void cut(float * A, int row, int column, float * B, int start_row, int stop_row, int start_column, int stop_column); 
void insert(float * A, float * B, int row_a, int column_a, int column_b, int startRow_b, int startColumn_b); 
void print(float * A, int row, int column); 
float sign(float number); 
void filtfilt(float * y, float * t, uint16_t l, float K); 




int inv(float * A, int row); 
void linsolve_upper_triangular(float * A, float * x, float * b, int column); 
void tran(float * A, int row, int column); 
void mul(float * A, float * B, float * C, int row_a, int column_a, int column_b); 
void svd_jacobi_one_sided(float * A, uint16_t row, uint8_t max_iterations, float * U, float * S, float * V); 
void dlyap(float * A, float * P, float * Q, int row); 
uint8_t svd_golub_reinsch(float * A, uint16_t row, uint16_t column, float * U, float * singular_values, float * V); 
void qr(float * A, float * Q, float * R, int row_a, int column_a); 
void triu(float * A, float * b, int row); 
void linsolve_lower_triangular(float * A, float * x, float * b, int row); 
void tikhonov(float * A, float * b, float * ATA, float * ATb, int row_a, int column_a, float alpha); 
uint8_t lup(float * A, float * LU, int * P, int row); 
float det(float * A, int row); 
uint8_t linsolve_lup(float * A, float * x, float * b, int row); 
void chol(float * A, float * L, int row); 
void pinv(float * A, int row, int column); 
void hankel(float * V, float * H, uint16_t row_v, uint16_t column_v, uint16_t row_h, uint16_t column_h, uint16_t shift); 
void balance(float * A, uint16_t row); 
void eig(float * A, float * wr, float * wi, uint16_t row); 
void eig_sym(float * A, uint16_t row, float * d); 
void sum(float  A[], uint32_t row, uint32_t column, uint8_t l); 
float norm(float  A[], uint32_t row, uint32_t column, uint8_t l); 
void expm(float  A[], uint32_t row); 




void linprog(float * c, float * A, float * b, float * x, int row_a, int column_a, uint8_t max_or_min, int iteration_limit); 




void Astar(int * map, int * path_x, int * path_y, int x_start, int y_start, int x_stop, int y_stop, int height, int width, int norm_mode, int * steps); 




void rls(uint8_t NP, uint8_t NZ, uint8_t NZE, float * theta, float u, float y, uint8_t * count, float * past_e, float * past_y, float * past_u, float * phi, float * P, float Pq, float forgetting); 
void okid(float * u, float * y, float * g, uint16_t row, uint16_t column); 
void era(float * u, float * y, uint16_t row, uint16_t column, float * A, float * B, float * C, uint8_t row_a, uint8_t inputs_outputs); 

#endif /* CCONTROLFUNCTIONS_H */
#line 1 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\common_data_types.hpp"
#ifndef COMMON_DATA_TYPES_HPP
#define COMMON_DATA_TYPES_HPP

enum SensorErrorCodes_e { SENSOR_SUCCESS, SENSOR_FAIL}; 


#endif /* COMMON_DATA_TYPES_HPP */
#line 13 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\manhony_ahrs.h"
#ifndef MahonyAHRS_h
#define MahonyAHRS_h




extern volatile float twoKp; 
extern volatile float twoKi; 
extern volatile float q0, q1, q2, q3; 




void MahonyAHRSupdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz); 
void MahonyAHRSupdateIMU(float gx, float gy, float gz, float ax, float ay, float az); 

#endif /* MahonyAHRS_h */
#line 15 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\math_constants.hpp"
constexpr double ZP_PI = (3.14159265358979311599796346854); 



constexpr double ZP_E = (2.71828182845904523536028747135); 
#line 26
#ifndef DEG_TO_RAD
#define DEG_TO_RAD(angleInDegrees) ((angleInDegrees) * ZP_PI / 180.0)
#endif /* DEG_TO_RAD */

#ifndef RAD_TO_DEG
#define RAD_TO_DEG(angleInRadians) ((angleInRadians) * 180.0 / ZP_PI)
#endif /* RAD_TO_DEG */
#line 17 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\sensor_fusion.hpp"
#ifndef SENSORFUSION_HPP
#define SENSORFUSION_HPP
#line 26
const int SF_FREQ = 200; 


struct SFIterationData_t { 
float prevX[6]; 
float prevP[6 * 6]; 
}; 
#line 39
typedef 
#line 37
struct { 
int errorCode; 
} SFError_t; 
#line 53
typedef 
#line 41
struct { 
float roll, pitch, yaw; 
float rollRate, pitchRate, yawRate; 
float airspeed; 
float altitude; 
float rateOfClimb; 
float latitude; 
float latitudeSpeed; 
float longitude; 
float longitudeSpeed; 
float track; 
float heading; 
} SFOutput_t; 
#line 66
typedef 
#line 57
struct { 
float magx, magy, magz; 
float accx, accy, accz; 
float gyrx, gyry, gyrz; 
float temp; 

bool isDataNew; 
SensorErrorCodes_e sensorStatus; 
float utcTime; 
} IMU_Data_t; 
#line 75
typedef 
#line 69
struct { 
double airspeed; 

SensorErrorCodes_e sensorStatus; 
bool isDataNew; 
float utcTime; 
} Airspeed_Data_t; 
#line 95
typedef 
#line 78
struct { 
float latitude; 
float longitude; 
float utcTime; 
float groundSpeed; 
int altitude; 
int heading; 
int numSatellites; 
int fixStatus; 

SensorErrorCodes_e sensorStatus; 
bool dataIsNew; 
bool timeIsNew; 


bool ggaDataIsNew; 
bool vtgDataIsNew; 
} Gps_Data_t; 
#line 104
typedef 
#line 97
struct { 

float pressure, altitude, temp; 

bool isDataNew; 
SensorErrorCodes_e status; 
int utcTime; 
} Altimeter_Data_t; 
#line 110
SFError_t SF_Init(SFIterationData_t * iterData); 




SFError_t SF_GenerateNewResult(IMU_Data_t * imuData, Gps_Data_t * GpsData, Altimeter_Data_t * altimeterData, SFIterationData_t * iterData, SFOutput_t * SFoutput); 
#line 136
IMU_Data_t SF_GetRawIMU(); 
#line 142
Airspeed_Data_t SF_GetRawAirspeed(); 




Gps_Data_t SF_GetRawGPS(); 
#line 153
Altimeter_Data_t SF_GetRawAltimeter(); 

#endif /* SENSORFUSION_HPP */
#line 1 "c:\\users\\mahus\\desktop\\warg_new\\zp3-simulator\\sensor_fusion\\inc\\sf_config.h"
#ifndef SF_CONFIG_H_
#define SF_CONFIG_H_





#endif /* SF_CONFIG_H_ */
