#include "pch.h"

bool Initialized = false;
HWND window = 0;
WNDPROC oWndProc = 0;

tPresent oPresent;
tGetShotDir GetShotDir;
tShotgunImpact ShotgunImpact;
tProcessRemoteFunction ProcessRemoteFunction;
tProcessEvent oProcessEvent;

ID3D11Device* pDevice = 0;
ID3D11DeviceContext* pContext = 0;
ID3D11RenderTargetView* pRenderTarget = 0;

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
	std::unordered_map<SDK::UFunction*, FuncInfo> oRpcFuncInfoMap;
};

void SwapVTable(void* Object, void* Hook, uint32_t Index)
{
	auto CurrVTable = *(void**)(Object);

	auto VTable = *(void***)(Object);
	int i = 0;

	for (; VTable[i]; i++)
		__noop();

	auto NewVTable = new uintptr_t[i];

	memcpy(NewVTable, CurrVTable, i * 0x8);

	NewVTable[Index] = (uintptr_t)Hook;

	*(uintptr_t**)(Object) = NewVTable;
}

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (Menu::MenuOpen)
	{
		ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam);
		return true;
	}

	return CallWindowProcA(oWndProc, hWnd, uMsg, wParam, lParam);
}

HRESULT __stdcall hkPresent(IDXGISwapChain* SwapChain, UINT SyncInterval, UINT Flags)
{
	if (!Initialized)
	{
		if (SUCCEEDED(SwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			SwapChain->GetDesc(&sd);

			window = sd.OutputWindow;
			ID3D11Texture2D* buffer;
			SwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&buffer);
			pDevice->CreateRenderTargetView(buffer, NULL, &pRenderTarget);

			buffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtrA(window, GWLP_WNDPROC, (LONG_PTR)WndProc);

			Menu::InitGUI();

			Initialized = true;
		}
		else
			return spoof_call(oPresent, SwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	ImGui::GetIO().MouseDrawCursor = Menu::MenuOpen;

	if (GetAsyncKeyState(VK_INSERT) & 1)
		Menu::MenuOpen ^= 1;

	if (GetAsyncKeyState(VK_F1) & 1)
		Settings[AIM_ENABLED].Value.bValue ^= 1;

	if (GetAsyncKeyState(VK_F2) & 1)
		Settings[ESP_LOOT_ENABLED].Value.bValue ^= 1;

	if (!Settings[IS_AIMING].Value.bValue)
		Aimbot::ResetLock();

	ZZZ.BypassEAC();

	ZZZ.Unknown();
	ZZZ.Removal();
	ZZZ.Aimbot();
	ZZZ.Misc();
	ZZZ.Radar();

	if (Menu::MenuOpen)
	{
		Menu::Render();
	}

	ImGui::Render();
	pContext->OMSetRenderTargets(1, &pRenderTarget, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return spoof_call(oPresent, SwapChain, SyncInterval, Flags);
}

__int64 hkGetShotDir(SDK::ASolarPlayerWeapon* Weapon, uint64_t a2, bool NeedSpread)
{
	__int64 Result = spoof_call(GetShotDir, Weapon, a2, NeedSpread);

	if (Settings[AIM_ENABLED].Value.bValue && Settings[AIM_MODE].Value.iValue == 1 && a2 && !Aimbot::TargetPosition.IsValid()
		|| Settings[AIM_ENABLED].Value.bValue && Settings[AIM_MODE].Value.iValue == 2 && a2 && !Aimbot::TargetPosition.IsValid())
	{
		// Maybe from muzzle/GetShootingTraceStartLocation instead of camera location more accurate

		SDK::FVector Out = Math::GetDirectionUnitVector(ZZZ.CameraManager->GetCameraLocation() /*Weapon->GetShootingTraceStartLocation()*/, Aimbot::TargetPosition);

		*(SDK::FVector*)(Result) = Out;
	}

	return Result;
}

__int64 hkShotgunImpact(SDK::ASolarPlayerWeapon* Weapon)
{
	__int64 Result = spoof_call(ShotgunImpact, Weapon);
	if (Settings[SHOTGUN_DAMAGE].Value.bValue)
	{
		Result *= Result; // You can basically lower your dmg or maximize your dmg
	}
	return Result;
}

std::unordered_map<SDK::UClass*, ClassInfo> m_oRpcClassInfoMap;
void LogRPC(SDK::AActor* pActor, SDK::UFunction* pFunc)
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
void hkProcessRemoteFunction(SDK::UNetDriver* Driver, SDK::AActor* Actor, SDK::UFunction* Function, void* Parameters, SDK::FOutParmRec* OutParms, __int64 Stack, SDK::UObject* SubObject)
{
	LogRPC(Actor, Function);

	for (const auto& oClassInfoIt : m_oRpcClassInfoMap)
	{
		printf("Class: %s\n", oClassInfoIt.second.sClassName.c_str());

		for (const auto& oFuncInfoIt : oClassInfoIt.second.oRpcFuncInfoMap)
		{
			printf("\t%s | %d\n", oFuncInfoIt.second.sFuncName.c_str(), oFuncInfoIt.second.nCallCount);
		}
	}

	spoof_call(ProcessRemoteFunction, Driver, Actor, Function, Parameters, OutParms, Stack, SubObject);
}

int TargetFunctionIndex = -1;
void hkProcessEvent(void* Object, SDK::UFunction* Function, void* Params)
{
	if (TargetFunctionIndex == -1)
		if (Function->GetFullName().compare("Function Solarland.SolarPlayerController.AntiCheatDataSchedulerUpload") == 0)
			TargetFunctionIndex = Function->Index;

	if (Function->Index == TargetFunctionIndex)
	{
		if (SDK::UObject::FindObject<SDK::UScriptStruct>("ScriptStruct Solarland.FixedAntiCheatData") != nullptr)
			return;
	}

	return spoof_call(oProcessEvent, Object, Function, Params);
}

void Initialize()
{
	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);
	SetConsoleTitle(xorstr_(L"Zy4n0 Private Debug Mode"));

	printf(xorstr_("Injecting\n"));

	strcpy(ConfigDirectory, xorstr_("C:\\ZC\\"));
	CreateDirectoryA(ConfigDirectory, NULL);

	SDK::InitSDK();
	InitSettings();
	LoadSettings();

	uint64_t Module = reinterpret_cast<uint64_t>(LI_FN(GetModuleHandleW).safe()(xorstr_(L"SolarlandClient-Win64-Shipping.exe")));
	uint64_t hkPresent_Sig = Engine::FindPattern(xorstr_("GameOverlayRenderer64.dll"), xorstr_("48 89 6C 24 ? 48 89 74 24 ? 41 56 48 83 EC ? 41 8B E8"));
	uint64_t CreateHook_Sig = Engine::FindPattern(xorstr_("GameOverlayRenderer64.dll"), xorstr_("48 89 5C 24 ? 57 48 83 EC ? 33 C0"));
	//uint64_t GetBoneMatrix = Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "48 8B C4 48 89 58 ? 48 89 70 ? 57 48 81 EC ? ? ? ? F6 81");
	//uint64_t GetViewPointAddress = Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "48 8B C4 48 89 58 ? 48 89 68 ? 56 57 41 56 48 81 EC ? ? ? ? 0F 29 70 ? 0F 29 78 ? 48 8B 05");
	//uint64_t GetPlayerViewPointAddress = Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "48 89 5C 24 ? 48 89 7C 24 ? 55 41 56 41 57 48 8B EC 48 83 EC ? 48 8B FA");
	//uint64_t GetPlayerViewRotationAddress = Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "48 89 5C 24 ? 55 56 57 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 48 8B F2");

	//GWorld: 48 8B 1D ?? ?? ?? ?? 48 85 DB 74 ?? 41 B0 01
	//GNames: 4C 8D 05 ? ? ? ? EB ? 48 8D 0D ? ? ? ? E8
	//GObjects: 48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1
	//FuncGetObjectName: 48 8D 15 ? ? ? ? 41 B8 ? ? ? ? E8 ? ? ? ? 48 8B C3 48 83 C4 ? 5B C3 48 8B 42 18

	__int64(__fastcall * CreateHook)(unsigned __int64 pFuncAddress, __int64 pDetourFuncAddress, unsigned __int64* pOriginalFuncAddressOut, int a4);

	CreateHook = (decltype(CreateHook))CreateHook_Sig;
	CreateHook(hkPresent_Sig, (__int64)&hkPresent, (unsigned __int64*)&oPresent, 1);

	GetShotDir = reinterpret_cast<tGetShotDir>(Engine::FindPattern(xorstr_("SolarlandClient-Win64-Shipping.exe"), xorstr_("40 55 53 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 ? 48 8B D9")));
	Hook(GetShotDir, hkGetShotDir);

	ShotgunImpact = reinterpret_cast<tShotgunImpact>(Engine::FindPattern(xorstr_("SolarlandClient-Win64-Shipping.exe"), xorstr_("40 53 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 85 C0 74 ? 48 8B CB E8 ? ? ? ? F3 0F 10 98")));
	Hook(ShotgunImpact, hkShotgunImpact);

	oProcessEvent = reinterpret_cast<tProcessEvent>(Engine::FindPattern(xorstr_("SolarlandClient-Win64-Shipping.exe"), xorstr_("40 55 56 57 41 54 41 55 41 56 41 57 48 81 EC ? ? ? ? 48 8D 6C 24 ? 48 89 9D ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C5 48 89 85 ? ? ? ? 4C 8B E1")));
	Hook(oProcessEvent, hkProcessEvent);

#ifdef _DEBUG
	ProcessRemoteFunction = reinterpret_cast<tProcessRemoteFunction>(Engine::FindPattern(xorstr_("SolarlandClient-Win64-Shipping.exe"), xorstr_("4C 89 4C 24 ? 55 53 56 57 41 55 41 57")));
	Hook(ProcessRemoteFunction, hkProcessRemoteFunction);
#endif
	printf(xorstr_("Cheat Loaded!\n"));
#ifndef _DEBUG
	Sleep(3000);
	::ShowWindow(::GetConsoleWindow(), SW_HIDE);
#endif
}