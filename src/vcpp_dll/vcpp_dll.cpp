// vcpp_dll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "vcpp_dll.h"


// This is an example of an exported function.
VCPP_DLL_API int WINAPI Sum(int a, int b)
{
	return a+b;
}

VCPP_DLL_API float __cdecl Divide(int a, int b)
{
    return (float)a / (float)b;
}

VCPP_DLL_API HANDLE WINAPI OpenLog(wchar_t *filename)
{
    HANDLE hFile = CreateFile(filename, GENERIC_ALL, 0 ,NULL, OPEN_ALWAYS, 0, NULL);
    return hFile;
}
VCPP_DLL_API int __cdecl WriteLog(HANDLE hfile, wchar_t *content)
{
    DWORD size = sizeof(wchar_t) * wcslen(content);
    DWORD written = 0;
    WriteFile(hfile, content, size, &written, NULL);
    return written;
}

VCPP_DLL_API int __cdecl WriteBinary(HANDLE hfile, BYTE *content, int size)
{
    DWORD written = 0;
    WriteFile(hfile, content, size, &written, NULL);
    return written;
}

VCPP_DLL_API void WINAPI CloseLog(HANDLE hfile)
{
    CloseHandle(hfile);
}
