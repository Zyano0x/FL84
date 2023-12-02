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
	 * WidgetBlueprintGeneratedClass UI_CreateRoom_Management_Team_OB.UI_CreateRoom_Management_Team_OB_C
	 * Size -> 0x0057 (FullSize[0x04E8] - InheritedSize[0x0491])
	 */
	class UUI_CreateRoom_Management_Team_OB_C : public UUI_CreateRoom_Management_Team_C
	{
	public:
		unsigned char                                              UnknownData_IU74[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            Panel_Spectator;                                         // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             UI_CreateRoom_Management_Player_Info_2;                  // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             UI_CreateRoom_Management_Player_Info_3;                  // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             UI_CreateRoom_Management_Player_Info_4;                  // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             UI_CreateRoom_Management_Player_Info_5;                  // 0x04C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             UI_CreateRoom_Management_Player_Info_6;                  // 0x04C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             UI_CreateRoom_Management_Player_Info_7;                  // 0x04D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             UI_CreateRoom_Management_Player_Info_8;                  // 0x04D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             UI_CreateRoom_Management_Player_Info_9;                  // 0x04E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void UpdateOB(TArray<class ASCMPlayerState*>* PlayerStateList);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_UI_CreateRoom_Management_Team_OB(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
