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
	 * WidgetBlueprintGeneratedClass UI_OpeningShow_Player.UI_OpeningShow_Player_C
	 * Size -> 0x0058 (FullSize[0x04E0] - InheritedSize[0x0488])
	 */
	class UUI_OpeningShow_Player_C : public UUIDefenderPlaerShowWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0488(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_InfoBgLight;                                         // 0x0490(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_Target_Bussinesscard_Proficiency_C*              Proficiency;                                             // 0x0498(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_BusinessInfo_C*                                  UI_BusinessInfo;                                         // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FLinearColor>                                Color;                                                   // 0x04A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class UObject*>                                     TeamPosImg;                                              // 0x04B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FLinearColor                                        TargetColor;                                             // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             TargetImg;                                               // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetNameCardCharacterPathByCharacterIDAndCardPose(int32_t CharacterId, int32_t CardPoseID);
		void SetPlayerBusinessInfo(class ASolarPlayerState* ps, int32_t PlayerNumber, const struct FExpRankMedalData& ExpRankMedalData);
		void SetBusinessCard(int32_t PoseId, int32_t BackgroundId, int32_t SkinId, class UScaleBox* ParentPanel);
		class FString GetModuleName();
		void SetBGLight();
		void SetTeamPos(int32_t TeamPos);
		void Construct();
		void ExecuteUbergraph_UI_OpeningShow_Player(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
