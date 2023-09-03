#pragma once

extern HWND window;
extern ID3D11Device* pDevice;
extern ID3D11DeviceContext* pContext;
extern ID3D11RenderTargetView* pRenderTarget;
extern int32_t ScreenWidth;
extern int32_t ScreenHeight;

typedef HRESULT(__stdcall* tPresent) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
extern tPresent oPresent;

typedef void(*tGetViewPoint)(CG::ULocalPlayer*, CG::FMinimalViewInfo*, CG::EStereoscopicPass);
extern tGetViewPoint GetViewPoint;

typedef void(*tGetPlayerViewPoint)(CG::APlayerController*, CG::FVector*, CG::FRotator*);
extern tGetPlayerViewPoint GetPlayerViewPoint;

extern void Initialize();