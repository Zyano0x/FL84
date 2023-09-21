#pragma once

#define Hook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourAttach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())
#define UnHook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourDetach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())

extern HWND window;
extern ID3D11Device* pDevice;
extern ID3D11DeviceContext* pContext;
extern ID3D11RenderTargetView* pRenderTarget;
extern int32_t ScreenWidth;
extern int32_t ScreenHeight;

typedef HRESULT(__stdcall* tPresent) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
extern tPresent oPresent;

typedef __int64(*tGetShotDir)(SDK::ASolarPlayerWeapon* Weapon, uint64_t a2, bool NeedSpread);
extern tGetShotDir GetShotDir;

void SwapVTable(void* Object, void* Hook, uint32_t Index);
void Initialize();