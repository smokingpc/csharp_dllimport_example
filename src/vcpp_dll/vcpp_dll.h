// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the VCPP_DLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// VCPP_DLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef VCPP_DLL_EXPORTS
#define VCPP_DLL_API __declspec(dllexport)
#else
#define VCPP_DLL_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif __cplusplus

    VCPP_DLL_API int WINAPI Sum(int a, int b);
    VCPP_DLL_API float __cdecl Divide(int a, int b);

    VCPP_DLL_API HANDLE WINAPI OpenLog(char *filename);
    VCPP_DLL_API int __cdecl WriteLog(HANDLE hfile, wchar_t *content);
    VCPP_DLL_API int __cdecl WriteBinary(HANDLE hfile, BYTE *content);
    VCPP_DLL_API void WINAPI CloseLog(HANDLE hfile);

#ifdef __cplusplus
}
#endif __cplusplus
