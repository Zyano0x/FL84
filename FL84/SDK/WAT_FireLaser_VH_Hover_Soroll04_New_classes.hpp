#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x238 - 0x230)
// BlueprintGeneratedClass WAT_FireLaser_VH_Hover_Soroll04_New.WAT_FireLaser_VH_Hover_Soroll04_New_C
class UWAT_FireLaser_VH_Hover_Soroll04_New_C : public USolarWeaponAT_FireLaser
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWAT_FireLaser_VH_Hover_Soroll04_New_C* GetDefaultObj();

	void K2_ActivateRealFire();
	void ExecuteUbergraph_WAT_FireLaser_VH_Hover_Soroll04_New(int32 EntryPoint, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UCameraShake* CallFunc_PlayCameraShake_ReturnValue);
};

}


