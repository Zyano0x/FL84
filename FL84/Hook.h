#pragma once

#define Hook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourAttach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())
#define UnHook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourDetach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())

extern HWND window;
extern ID3D11Device* pDevice;
extern ID3D11DeviceContext* pContext;
extern ID3D11RenderTargetView* pRenderTarget;
extern int32_t ScreenWidth;
extern int32_t ScreenHeight;

typedef HRESULT(__stdcall* tPresent)(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
extern tPresent oPresent;

typedef __int64(*tGetShotDir)(SDK::ASolarPlayerWeapon* Weapon, uint64_t a2, bool NeedSpread);
extern tGetShotDir GetShotDir;

typedef __int64 (*tShotgunImpact)(SDK::ASolarPlayerWeapon* Weapon);
extern tShotgunImpact ShotgunImpact;

typedef __int64(*tProcessRemoteFunction)(SDK::UNetDriver* Driver, SDK::AActor* Actor, SDK::UFunction* Function, void* Parameters, SDK::FOutParmRec* OutParms, __int64 Stack, SDK::UObject* SubObject);
extern tProcessRemoteFunction ProcessRemoteFunction;

typedef void(__stdcall* tProcessEvent)(void* Object, SDK::UFunction* Function, void* Params);
extern tProcessEvent oProcessEvent;

void SwapVTable(void* Object, void* Hook, uint32_t Index);
void Initialize();