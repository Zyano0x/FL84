#include "pch.h"

tPresent oPresent;
tResizeBuffers oResizeBuffers;
tGetShotDir GetShotDir;
tGetBulletSocketLocation GetBulletSocketLocation;
tSetAppearance SetAppearance;
tProcessEvent ProcessEvent;
tProcessRemoteFunction ProcessRemoteFunction;

int32_t ScreenWidth = 0;
int32_t ScreenHeight = 0;

struct FuncInfo
{
	std::string sFuncName;
	int nCallCount;
};

struct ClassInfo
{
	std::string sClassName;
	std::unordered_map<CG::UFunction*, FuncInfo> oRpcFuncInfoMap;
};

HRESULT WINAPI hkPresent(_In_ IDXGISwapChain* SwapChain, _In_ UINT SyncInterval, _In_ UINT Flags)
{
	SPOOF_FUNC;

	_mainGUI.Present(SwapChain, SyncInterval, Flags);

	return oPresent(SwapChain, SyncInterval, Flags);
}

HRESULT WINAPI hkResizeBuffers(_In_ IDXGISwapChain* SwapChain, _In_ UINT BufferCount, _In_ UINT Width, _In_ UINT Height, _In_ DXGI_FORMAT NewFormat, _In_ UINT SwapChainFlags)
{
	SPOOF_FUNC;

	return _mainGUI.ResizeBuffers(SwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);
}

__int64 HOOKCALL hkGetShotDir(CG::ASolarPlayerWeapon* Weapon, uint64_t a2, bool NeedSpread)
{
	SPOOF_FUNC;

	__int64 Result = GetShotDir(Weapon, a2, NeedSpread);

	if (_profiler.gAimEnabled.Custom.bValue && _profiler.gAimMode.Custom.iValue == cProfiler::AIMMODE_SILENT && a2 && Aimbot::TargetPosition.IsValid()
		|| _profiler.gAimEnabled.Custom.bValue && _profiler.gAimMode.Custom.iValue == cProfiler::AIMMODE_AUTOMATIC && a2 && Aimbot::TargetPosition.IsValid())
	{
		// Maybe from muzzle/GetShootingTraceStartLocation instead of camera location more accurate
		CG::FVector Out = Math::GetDirectionUnitVector(ZXC.CameraManager->GetCameraLocation(), Aimbot::TargetPosition);

		*(CG::FVector*)(Result) = Out;
	}

	return Result;
}

__int64 HOOKCALL hkGetBulletSocketLocation(CG::ASolarPlayerWeapon* Weapon, uint64_t a2)
{
	SPOOF_FUNC;

	__int64 Result = GetBulletSocketLocation(Weapon, a2);

	if (_profiler.gAimEnabled.Custom.bValue && _profiler.gAimMode.Custom.iValue == cProfiler::AIMMODE_SILENT && a2 && Aimbot::TargetPosition.IsValid()
		|| _profiler.gAimEnabled.Custom.bValue && _profiler.gAimMode.Custom.iValue == cProfiler::AIMMODE_AUTOMATIC && a2 && Aimbot::TargetPosition.IsValid())
	{
		*(CG::FVector*)(Result) = Aimbot::TargetPosition;
	}

	return Result;
}

void HOOKCALL hkSetAppearance(CG::ASolarCharacter* Character, int SkinID)
{
	SPOOF_FUNC;

	CG::ASolarCharacter* LocalCharacter = static_cast<CG::ASolarCharacter*>(ZXC.PlayerController->K2_GetPawn());

	if (Character == LocalCharacter && LocalCharacter->AssignedCharacterID == 100013)
	{
		SkinID = 131303;
		return SetAppearance(Character, SkinID);
	}
	else
	{
		return SetAppearance(Character, SkinID);
	}
}

CG::UFunction* FN_ServerReportRPC = nullptr;
CG::UFunction* FN_AntiCheatDataSchedulerUpload = nullptr;
void HOOKCALL hkProcessEvent(void* Object, CG::UFunction* Function, void* Params)
{
	SPOOF_FUNC;

	if (Function == FN_AntiCheatDataSchedulerUpload || Function == FN_ServerReportRPC)
	{
		return;
	}

	return ProcessEvent(Object, Function, Params);
}

#ifdef _DEBUG
std::unordered_map<CG::UClass*, ClassInfo> m_oRpcClassInfoMap;
void LogRPC(CG::AActor* pActor, CG::UFunction* pFunc)
{
	auto& oClassInfo = m_oRpcClassInfoMap[pActor->Class];
	if (oClassInfo.sClassName.empty())
	{
		oClassInfo.sClassName = pActor->Class->GetFullName();
	}

	auto& oFuncInfo = oClassInfo.oRpcFuncInfoMap[pFunc];
	if (oFuncInfo.sFuncName.empty())
	{
		oFuncInfo.sFuncName = pFunc->GetFullName();
	}

	oFuncInfo.nCallCount++;
}
__int64 HOOKCALL hkProcessRemoteFunction(CG::UNetDriver* Driver, CG::AActor* Actor, CG::UFunction* Function, void* Parameters, CG::FOutParmRec* OutParms, __int64 Stack, CG::UObject* SubObject)
{
	SPOOF_FUNC;

	LogRPC(Actor, Function);

	for (const auto& oClassInfoIt : m_oRpcClassInfoMap)
	{
		printf("Class: %s\n", oClassInfoIt.second.sClassName.c_str());

		for (const auto& oFuncInfoIt : oClassInfoIt.second.oRpcFuncInfoMap)
		{
			printf("\t%s | %d\n", oFuncInfoIt.second.sFuncName.c_str(), oFuncInfoIt.second.nCallCount);
		}
	}

	return ProcessRemoteFunction(Driver, Actor, Function, Parameters, OutParms, Stack, SubObject);
}
#endif

void Initialize()
{
	//GWorld: 48 8B 1D ?? ?? ?? ?? 48 85 DB 74 ?? 41 B0 01
	//GNames: 4C 8D 05 ? ? ? ? EB ? 48 8D 0D ? ? ? ? E8
	//GObjects: 48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1
	//FuncGetObjectName: 48 8D 15 ? ? ? ? 41 B8 ? ? ? ? E8 ? ? ? ? 48 8B C3 48 83 C4 ? 5B C3 48 8B 42 18

	//uint64_t GetBoneMatrix = Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "48 8B C4 48 89 58 ? 48 89 70 ? 57 48 81 EC ? ? ? ? F6 81");
	//uint64_t GetViewPointAddress = Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "48 8B C4 48 89 58 ? 48 89 68 ? 56 57 41 56 48 81 EC ? ? ? ? 0F 29 70 ? 0F 29 78 ? 48 8B 05");
	//uint64_t GetPlayerViewPointAddress = Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "48 89 5C 24 ? 48 89 7C 24 ? 55 41 56 41 57 48 8B EC 48 83 EC ? 48 8B FA");
	//uint64_t GetPlayerViewRotationAddress = Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "48 89 5C 24 ? 55 56 57 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 48 8B F2 48 8B D9");

	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);
	SetConsoleTitleW(xorstr_(L"Zy4n0 Private Debug Mode"));

	printf(xorstr_("Injecting\n"));

	CG::InitSDK();

	/*uint64_t hkPresent_Sig = Signature(xorstr_("48 89 6C 24 ? 48 89 74 24 ? 41 56 48 83 EC ? 41 8B E8")).Import(xorstr_("GameOverlayRenderer64.dll")).GetPointer();
	uint64_t hkResizeBuffers_Sig = Signature(xorstr_("48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 56 41 57 48 83 EC ? 44 8B FA")).Import(xorstr_("GameOverlayRenderer64.dll")).GetPointer();
	uint64_t CreateHook_Sig = Signature(xorstr_("48 89 5C 24 ? 57 48 83 EC ? 33 C0 48 89 44 24")).Import(xorstr_("GameOverlayRenderer64.dll")).GetPointer();

	__int64(HOOKCALL * CreateHook)(unsigned __int64 pFuncAddress, __int64 pDetourFuncAddress, unsigned __int64* pOriginalFuncAddressOut, int a4);
	CreateHook = (decltype(CreateHook))CreateHook_Sig;
	CreateHook(hkPresent_Sig, (__int64)&hkPresent, (unsigned __int64*)&oPresent, 1);
	CreateHook(hkResizeBuffers_Sig, (__int64)&hkResizeBuffers, (unsigned __int64*)&oResizeBuffers, 1);*/

	uint64_t PresentAddr = (uint64_t)(LI_FN(GetModuleHandleW)(xorstr_(L"DiscordHook64.dll"))) + 0xE9090;
	uint64_t ResizeBuffersAddr = (uint64_t)(LI_FN(GetModuleHandleW)(xorstr_(L"DiscordHook64.dll"))) + 0xE90B8;

	tPresent* Discord_Present = (tPresent*)PresentAddr;
	oPresent = *Discord_Present;

	tResizeBuffers* Discord_ResizeBuffers = (tResizeBuffers*)ResizeBuffersAddr;
	oResizeBuffers = *Discord_ResizeBuffers;

	_InterlockedExchangePointer((volatile PVOID*)PresentAddr, hkPresent);
	_InterlockedExchangePointer((volatile PVOID*)ResizeBuffersAddr, hkResizeBuffers);

	FN_ServerReportRPC = CG::UObject::FindObject<CG::UFunction>("Function Solarland.SolarMeerkatScheduleComponent.ServerReportRPC");
	FN_AntiCheatDataSchedulerUpload = CG::UObject::FindObject<CG::UFunction>("Function Solarland.SolarPlayerController.AntiCheatDataSchedulerUpload");

	GetShotDir = reinterpret_cast<tGetShotDir>(Signature(xorstr_("40 55 53 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 ? 48 8B D9")).GetPointer());
	Hook(GetShotDir, hkGetShotDir); // Silent Aim

	GetBulletSocketLocation = reinterpret_cast<tGetBulletSocketLocation>(Signature(xorstr_("48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC ? 48 8B 01 48 8B DA 48 8B F9 FF 90 ? ? ? ? 48 8B F0 48 85 C0 0F")).GetPointer());
	Hook(GetBulletSocketLocation, hkGetBulletSocketLocation); // Silent Shotgun

	SetAppearance = reinterpret_cast<tSetAppearance>(Signature(xorstr_("40 55 53 57 48 8D 6C 24 F0 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 E0")).GetPointer());
	Hook(SetAppearance, hkSetAppearance); // Skin

	ProcessEvent = reinterpret_cast<tProcessEvent>(Signature(xorstr_("40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC ? ? ? ? 48 8D 6C 24 ? 48 89 9D ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C5 48 89 85 ? ? ? ? 4C 8B")).GetPointer());
	Hook(ProcessEvent, hkProcessEvent);

#ifdef _DEBUG
	ProcessRemoteFunction = reinterpret_cast<tProcessRemoteFunction>(Signature(xorstr_("4C 89 4C 24 ? 55 53 56 57 41 55 41 57")).GetPointer());
	Hook(ProcessRemoteFunction, hkProcessRemoteFunction);
#endif
	printf(xorstr_("Cheat Loaded!\n"));
#ifndef _DEBUG
	LI_FN(Sleep)(2000);
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
#endif
}

void Deallocate()
{
	UnHook(GetShotDir, hkGetShotDir);
	UnHook(GetBulletSocketLocation, hkGetBulletSocketLocation);
	UnHook(SetAppearance, hkSetAppearance);
	UnHook(ProcessEvent, hkProcessEvent);
#ifdef _DEBUG
	UnHook(ProcessRemoteFunction, hkProcessRemoteFunction);
#endif
	_mainGUI.pDevice->Release();
	_mainGUI.pDeviceContext->Release();

	SetWindowLongPtr(_mainGUI.hWindow, GWLP_WNDPROC, (LONG_PTR)_mainGUI.oWindowProcess);

	ImGui_ImplWin32_Shutdown();
	ImGui_ImplDX11_Shutdown();
	ImGui::DestroyContext();
}
