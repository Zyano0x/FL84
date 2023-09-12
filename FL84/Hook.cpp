#include "pch.h"

bool Initialized = false;
HWND window = 0;
WNDPROC oWndProc = 0;

tPresent oPresent;
tGetShotDir GetShotDir;

ID3D11Device* pDevice = 0;
ID3D11DeviceContext* pContext = 0;
ID3D11RenderTargetView* pRenderTarget = 0;

int32_t ScreenWidth = 0;
int32_t ScreenHeight = 0;

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
			return oPresent(SwapChain, SyncInterval, Flags);
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
	ZZZ.Radar();

	if (Menu::MenuOpen)
	{
		Menu::Render();
	}

	ImGui::Render();
	pContext->OMSetRenderTargets(1, &pRenderTarget, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(SwapChain, SyncInterval, Flags);
}

__int64 hkGetShotDir(CG::ASolarPlayerWeapon* Weapon, uint64_t a2, bool NeedSpread)
{
	__int64 Result = GetShotDir(Weapon, a2, NeedSpread);

	if (Settings[AIM_ENABLED].Value.bValue && Settings[AIM_MODE].Value.iValue == 1 && a2 && !Aimbot::TargetPosition.IsValid())
	{
		// Maybe from muzzle/GetShootingTraceStartLocation instead of camera location more accurate

		CG::FVector Out = Math::GetDirectionUnitVector(ZZZ.CameraManager->GetCameraLocation() /*Weapon->GetShootingTraceStartLocation()*/, Aimbot::TargetPosition);

		*(CG::FVector*)(Result) = Out;
	}

	return Result;
}

void Initialize()
{
#ifdef _DEBUG
	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);
	SetConsoleTitle(xorstr_(L"Zy4n0 Private Debug Mode"));
#endif
	printf("Injecting\n");

	strcpy(ConfigDirectory, "C:\\ZC\\");
	CreateDirectoryA(ConfigDirectory, NULL);

	CG::InitSDK();
	InitSettings();
	LoadSettings();

	uint64_t Module = reinterpret_cast<uint64_t>(GetModuleHandleW(L"SolarlandClient-Win64-Shipping.exe"));
	uint64_t hkPresent_Sig = Engine::FindPattern("GameOverlayRenderer64.dll", "48 89 6C 24 ? 48 89 74 24 ? 41 56 48 83 EC ? 41 8B E8");
	uint64_t CreateHook_Sig = Engine::FindPattern("GameOverlayRenderer64.dll", "48 89 5C 24 ? 57 48 83 EC ? 33 C0");
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

	GetShotDir = reinterpret_cast<tGetShotDir>(Engine::FindPattern("SolarlandClient-Win64-Shipping.exe", "40 55 53 57 41 56 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 ? 48 8B D9"));
	Hook(GetShotDir, hkGetShotDir);

	printf("Cheat Loaded!\n");
}