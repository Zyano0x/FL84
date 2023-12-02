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
	 * WidgetBlueprintGeneratedClass UI_Notice_Noya.UI_Notice_Noya_C
	 * Size -> 0x0198 (FullSize[0x0598] - InheritedSize[0x0400])
	 */
	class UUI_Notice_Noya_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetSwitcher*                                     TypeSelect;                                              // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUD_Notice_CutIn_Crash_C*                        UI_HUD_Notice_CutIn_Crash;                               // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_HUD_Notice_CutIn_Normal_C*                       UI_HUD_Notice_CutIn_Normal;                              // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<unsigned char, bool>                                  _;                                                       // 0x0470(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FS_NoyaNoticeInfo>                           NoticeList;                                              // 0x04C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		float                                                      __;                                                       // 0x04D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JA46[0x4];                                   // 0x04D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FS_NoyaNoticeInfo                                   currentInfo;                                             // 0x04D8(0x0070) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		TMap<unsigned char, bool>                                  TempConditionList;                                       // 0x0548(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Init();
		void Construct();
		void CD();
		void ExecuteUbergraph_UI_Notice_Noya(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
