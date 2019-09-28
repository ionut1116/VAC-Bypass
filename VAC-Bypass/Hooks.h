#pragma once

#include <Windows.h>

HMODULE           WINAPI     Hooks_LoadLibraryExW(LPCWSTR, HANDLE, DWORD);
HMODULE           WINAPI     Hooks_LoadLibraryExW_SteamClient(LPCWSTR, HANDLE, DWORD);
FARPROC           WINAPI     Hooks_GetProcAddress(HMODULE, LPCSTR);
VOID              WINAPI     Hooks_GetSystemInfo(LPSYSTEM_INFO);
