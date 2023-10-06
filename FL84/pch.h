// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <array>
#include <map>
#include <random>
#include <unordered_map>
#include <dxgi.h>	
#include <d3d11.h>
#include <d3dx10math.h>
#include <detours.h>

#define IMGUI_DEFINE_MATH_OPERATORS
#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "imgui/imgui_impl_dx11.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_file_system.h"

#include "Encryption/XOR.hpp"
#include "Encryption/LazyImporter.hpp"
#include "Encryption/SpoofCall.h"
#include "Thunk.hpp"

#include "SDK.hpp"
#include "Fonts.h"
#include "Icons.h"
#include "Profiler.h"
#include "Elements.h"
#include "Menu.h"
#include "Draw.h"
#include "Mathematics.h"
#include "Hook.h"
#include "Engine.h"
#include "XXX.h"
#include "Aimbot.h"

using namespace ZyanoCheats;

#pragma intrinsic(_ReturnAddress)
#endif //PCH_H
