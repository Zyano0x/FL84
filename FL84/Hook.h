#pragma once

#define Hook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourAttach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())
#define UnHook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourDetach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())

#define HOOKCALL __fastcall

extern int32_t ScreenWidth;
extern int32_t ScreenHeight;

typedef HRESULT(WINAPI* tPresent)(_In_ IDXGISwapChain* SwapChain, _In_ UINT SyncInterval, _In_ UINT Flags);
extern tPresent oPresent;

typedef __int64(HOOKCALL* tGetShotDir)(SDK::ASolarPlayerWeapon* Weapon, uint64_t a2, bool NeedSpread);
extern tGetShotDir GetShotDir;

typedef __int64 (HOOKCALL* tShotgunImpact)(SDK::ASolarPlayerWeapon* Weapon);
extern tShotgunImpact ShotgunImpact;

typedef __int64(HOOKCALL* tProcessRemoteFunction)(SDK::UNetDriver* Driver, SDK::AActor* Actor, SDK::UFunction* Function, void* Parameters, SDK::FOutParmRec* OutParms, __int64 Stack, SDK::UObject* SubObject);
extern tProcessRemoteFunction ProcessRemoteFunction;

typedef void(HOOKCALL* tProcessEvent)(void* Object, SDK::UFunction* Function, void* Params);
extern tProcessEvent oProcessEvent;

void SwapVTable(void* Object, void* Hook, uint32_t Index);
void Initialize();
void Deallocate();