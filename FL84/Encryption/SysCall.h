#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <tlhelp32.h>
#include <psapi.h>
#include <thread>
#include <mutex>
#include <random>
#include <limits>
#include <algorithm>
#include <cmath>
#include <d2d1.h>
#include <cstdint>
#include <iomanip>
#include <sstream>
#include <dxgi1_4.h>
#include "LazyImporter.hpp"

extern "C" { NTSTATUS _NtUserSendInput(UINT a1, LPINPUT Input, int Size); };

namespace SysCall
{
    bool GetSysCallIndex(std::string ModuleName, std::string SysCallFunctionName, void* Function)
    {
        auto ModuleBaseAddress = LI_FN(GetModuleHandleA)(ModuleName.c_str());
        if (!ModuleBaseAddress)
            ModuleBaseAddress = LI_FN(LoadLibraryA)(ModuleName.c_str());
        if (!ModuleBaseAddress)
            return false;

        auto GetFunctionAddress = LI_FN(GetProcAddress)(ModuleBaseAddress, SysCallFunctionName.c_str());
        if (!GetFunctionAddress)
            return false;

        auto SyscallIndex = *(DWORD*)((PBYTE)GetFunctionAddress + 4);

        *(DWORD*)((PBYTE)Function + 4) = SyscallIndex;

        return true;
    }

    void Send_Mouse_Input(DWORD dwFlags, DWORD dX, DWORD dY, DWORD dwData, ULONG_PTR dwExtraInfo)
    {
        static bool once;
        if (!once)
        {
            if (!GetSysCallIndex("win32u.dll", ("NtUserSendInput"), _NtUserSendInput))
                return;
            once = true;
        }

        INPUT Input[3] = { 0 };
        Input[0].type = INPUT_MOUSE;
        Input[0].mi.dx = dX;
        Input[0].mi.dy = dY;
        Input[0].mi.mouseData = dwData;
        Input[0].mi.dwFlags = dwFlags;
        Input[0].mi.time = 0;
        Input[0].mi.dwExtraInfo = dwExtraInfo;

        _NtUserSendInput((UINT)1, (LPINPUT)&Input, (INT)sizeof(INPUT));
    }
}