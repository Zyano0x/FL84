﻿#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * WidgetBlueprintGeneratedClass UI_MicroPhoneOperation_Item.UI_MicroPhoneOperation_Item_C
	 * Size -> 0x00AC (FullSize[0x04AC] - InheritedSize[0x0400])
	 */
	class UUI_MicroPhoneOperation_Item_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BackBG;                                                  // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_TeamPos;                                             // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            Overlay_PosInTeam;                                       // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USolarCheckBox*                                      SolarCheckBox_Switch;                                    // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        Color1;                                                  // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color2;                                                  // 0x0438(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color3;                                                  // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        Color4;                                                  // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColorBG1;                                                // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColorBG2;                                                // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColorBG3;                                                // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ColorBG4;                                                // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OrderId;                                                 // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnCheckStateChanged_8D02BC17411802C87D3167BC763A51E6(bool bIsChecked);
		void OnCheckStateChanged_05FA2A6B4F362C855DEC518E17550FB8(bool bIsChecked);
		void OnCheckStateChanged_8858158048D94E151A37A9BBA990B490(bool bIsChecked);
		void OnCheckStateChanged_8E0EBE2A44428FDC3F9881833E7F260D(bool bIsChecked);
		void Destruct();
		void Construct();
		class FString GetModuleName();
		void SetOrder(int32_t OrderId);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_MicroPhoneOperation_Item(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif