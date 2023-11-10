#pragma once

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
	 * WidgetBlueprintGeneratedClass UI_Component_NationalFlag.UI_Component_NationalFlag_C
	 * Size -> 0x001D (FullSize[0x044D] - InheritedSize[0x0430])
	 */
	class UUI_Component_NationalFlag_C : public UUIComponentNationalFlag
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0430(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            SizeBox_1;                                               // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Flag;                                     // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      Size;                                                    // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		E_FlagType                                                 FlagType;                                                // 0x044C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetDefaultNationalFlag();
		void LoadClanFlagByUrl();
		void Destruct();
		void Construct();
		bool IsBroadCastMode();
		void OnSolarUIClosed();
		void OnSolarUIOpened();
		void SetDefaultClanFlag();
		void OnInitialized();
		bool IsExclusiveFlagId(int32_t InFlagID);
		class FString GetModuleName();
		void SetEmptyClan();
		void SetFlagType(E_FlagType FlagType);
		void SetUIState();
		void PreConstruct(bool IsDesignTime);
		void SetNationalFlagType();
		void SetClanFlagType();
		void ExecuteUbergraph_UI_Component_NationalFlag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
