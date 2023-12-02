#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FL_Mode_Framework.FL_Mode_Framework_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_Mode_Framework_C : public UBlueprintFunctionLibrary
	{
	public:
		class FString STATIC_GetItemIconPath(int32_t Key, const class FString& BasePath, class UObject* __WorldContext);
		void STATIC_GetVehicleSkinList(class UObject* __WorldContext, TArray<int32_t>* OutKeys);
		struct FSolarTablesData_VehicleSkin GetVehicleSkinData(int32_t Key, class UObject* __WorldContext);
		void STATIC_GetVehicleTypeList(class UObject* __WorldContext, TArray<int32_t>* OutKeys);
		struct FSolarTablesData_VehicleType GetVehicleTypeData(int32_t Key, class UObject* __WorldContext);
		void STATIC_GetWeaponSkinList(class UObject* __WorldContext, TArray<int32_t>* OutKeys);
		struct FSolarTablesData_WeaponSkin GetWeaponSkinData(int32_t Key, class UObject* __WorldContext);
		void STATIC_GetWeaponList(class UObject* __WorldContext, TArray<int32_t>* OutKeys);
		struct FSolarTablesData_GunProperty GetWeaponData(int32_t Key, class UObject* __WorldContext);
		void STATIC_GetBroadcastPlayerName(const class FString& SolarPlayerID, class UObject* __WorldContext, class FString* BroadcastPlayerName);
		void STATIC_BindBroadcastModeChanged(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void STATIC_GetBroadcastHeroName(const class FString& SolarPlayerID, class UObject* __WorldContext, class FString* BroadcastHeroName);
		bool STATIC_IsTouchScreenLayout(class UObject* __WorldContext);
		void STATIC_GetPositionOfCircle(float Radius, float Angle, class UObject* __WorldContext, struct FVector2D* Position);
		void STATIC_sSetCanBeSpectate(class ASolarPlayerState* Target, bool CanbeSpectate, class UObject* __WorldContext);
		void STATIC_sSetCharacterSkill(class ASolarCharacter* Character, const struct FS_SkillState& SkillConfig, class UObject* __WorldContext);
		void STATIC_aGetCharacterIDBySkinID(int32_t SkinId, class UObject* __WorldContext, int32_t* CharacterId);
		void STATIC_SetSkillState(class ASolarCharacter* Character, E_CharacterSkillType SkillType, ERoleSkillOperation NewSate, class UObject* __WorldContext);
		bool STATIC_HasTeammatesAI(const class FString& Team, class UObject* __WorldContext);
		void STATIC_SetSkillStateforEverybody(E_CharacterSkillType SkillType, ERoleSkillOperation NewSate, class UObject* __WorldContext);
		void STATIC_SetWeaponPartByPartID(class ASolarWeapon* TargetWeapon, int32_t PartID, class UObject* __WorldContext, bool* Success);
		void STATIC_DistributeExperiencetoSide(int32_t InExp, EExpBehaviorType InType, class UObject* __WorldContext);
		void STATIC_GetRandomCharacter(class UObject* __WorldContext, int32_t* Output);
		int32_t STATIC_RandomIntInRange(const struct FInt32Range& Range, class UObject* __WorldContext);
		class FString STATIC_GetLocText(const struct FSolarTablesLocalText& InData, class UObject* __WorldContext);
		void STATIC_GetCharacterList(class UObject* __WorldContext, TArray<int32_t>* OutKeys);
		void STATIC_GetBackpackList(class UObject* __WorldContext, TArray<int32_t>* OutKeys);
		void STATIC_GetTrailList(class UObject* __WorldContext, TArray<int32_t>* OutKeys);
		void STATIC_GetCharacterSkinList(class UObject* __WorldContext, TArray<int32_t>* OutKeys);
		struct FSolarTablesData_BackpackTrailProperty STATIC_GetTrailData(int32_t Key, class UObject* __WorldContext);
		struct FSolarTablesData_BackpackProperty STATIC_GetBackpackData(int32_t Key, class UObject* __WorldContext);
		struct FSolarTablesData_UnitCharacter STATIC_GetCharacterData(int32_t Key, class UObject* __WorldContext);
		class UObject* GetTextureByPath(const class FString& Path, class UObject* __WorldContext);
		struct FSolarTablesData_Skin GetCharacterSkinData(int32_t Key, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
