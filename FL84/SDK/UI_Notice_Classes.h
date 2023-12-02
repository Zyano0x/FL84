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
	 * WidgetBlueprintGeneratedClass UI_Notice.UI_Notice_C
	 * Size -> 0x0068 (FullSize[0x0468] - InheritedSize[0x0400])
	 */
	class UUI_Notice_C : public USolarUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0400(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Out;                                                     // 0x0408(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    In;                                                      // 0x0410(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Img_Icon_3;                                              // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_Icon_Bg_3;                                           // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      Text;                                                    // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FS_Notice>                                   Queue;                                                   // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       QueueFinished;                                           // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SVJQ[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)

	public:
		void SetStyle(const struct FS_Notice& S_Notice);
		void ShowNext();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_UI_Notice(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
