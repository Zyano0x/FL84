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
	 * WidgetBlueprintGeneratedClass SolarRedHint_General.SolarRedHint_General_C
	 * Size -> 0x0023 (FullSize[0x0423] - InheritedSize[0x0400])
	 */
	class USolarRedHint_General_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Img_HintPoint;                                           // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_HintNum;                                            // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int64_t                                                    HintKey;                                                 // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERedHintPath                                               HintPath;                                                // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAutoRefresh;                                           // 0x0421(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		E_Type_RedHint                                             Type;                                                    // 0x0422(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnSetHintDataCompleteCopy();
		void ConstructCopy();
		void Destruct();
		void OnInitialized();
		class FString GetModuleName();
		void OnSetHintDataComplete();
		void SetStyle(E_Type_RedHint Type);
		void SetHintData(int64_t Key, ERedHintPath Path, bool bAutoRefresh, E_Type_RedHint Type);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_SolarRedHint_General(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
