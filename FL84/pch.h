// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#define WIN32_CLEAN_AND_MEAN

// add headers that you want to pre-compile here
#include <Windows.h>
#include <map>
#include <cmath>
#include <array>
#include <mutex>
#include <cmath>
#include <random>
#include <vector>
#include <string>
#include <locale>
#include <cstdio>
#include <random>
#include <dxgi.h>	
#include <codecvt>
#include <xstring>
#include <sstream>
#include <iomanip>
#include <d3d11.h>
#include <iostream>
#include <algorithm>
#include <detours.h>
#include <d3dx10math.h>
#include <unordered_map>

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_file_system.h"

#include "Encryption/XOR.hpp"
#include "Encryption/LazyImporter.hpp"
#include "Encryption/Thunk.hpp"

#include "SDK.h"
#include "Fonts.h"
#include "FarsiType.h"
#include "Icons.h"
#include "Profiler.h"
#include "Elements.h"
#include "Mathematics.h"
#include "Menu.h"
#include "Draw.h"
#include "Memory.h"
#include "Hook.h"
#include "Engine.h"
#include "XXX.h"
#include "Aimbot.h"

using namespace ZyanoCheats;

#pragma intrinsic(_ReturnAddress)
#endif //PCH_H
