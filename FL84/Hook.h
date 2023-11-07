#pragma once

#define Hook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourAttach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())
#define UnHook(original, hook) (DetourTransactionBegin(), DetourUpdateThread(GetCurrentThread()), DetourDetach((LPVOID*)&original, (LPVOID)hook), DetourTransactionCommit())

#define HOOKCALL __fastcall

extern int32_t ScreenWidth;
extern int32_t ScreenHeight;

typedef HRESULT(WINAPI* tPresent)(_In_ IDXGISwapChain* SwapChain, _In_ UINT SyncInterval, _In_ UINT Flags);
extern tPresent oPresent;

typedef HRESULT(WINAPI* tResizeBuffers)(_In_ IDXGISwapChain* SwapChain, _In_ UINT BufferCount, _In_ UINT Width, _In_ UINT Height, _In_ DXGI_FORMAT NewFormat, _In_ UINT SwapChainFlags);
extern tResizeBuffers oResizeBuffers;

typedef __int64(HOOKCALL* tGetShotDir)(CG::ASolarPlayerWeapon* Weapon, uint64_t Result, bool NeedSpread);
extern tGetShotDir GetShotDir;

typedef __int64(HOOKCALL* tGetBulletSocketLocation)(CG::ASolarPlayerWeapon* Weapon, uint64_t Result);
extern tGetBulletSocketLocation GetBulletSocketLocation;

typedef __int64(HOOKCALL* tProcessRemoteFunction)(CG::UNetDriver* Driver, CG::AActor* Actor, CG::UFunction* Function, void* Parameters, CG::FOutParmRec* OutParms, __int64 Stack, CG::UObject* SubObject);
extern tProcessRemoteFunction ProcessRemoteFunction;

typedef void(HOOKCALL* tSetAppearance)(CG::ASolarCharacter* Character, int SkinID);
extern tSetAppearance SetAppearance;

typedef void(HOOKCALL* tProcessEvent)(void* Object, CG::UFunction* Function, void* Params);
extern tProcessEvent ProcessEvent;

void Initialize();
void Deallocate();