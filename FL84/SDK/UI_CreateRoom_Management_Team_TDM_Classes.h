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
	 * WidgetBlueprintGeneratedClass UI_CreateRoom_Management_Team_TDM.UI_CreateRoom_Management_Team_TDM_C
	 * Size -> 0x002F (FullSize[0x04C0] - InheritedSize[0x0491])
	 */
	class UUI_CreateRoom_Management_Team_TDM_C : public UUI_CreateRoom_Management_Team_C
	{
	public:
		unsigned char                                              UnknownData_EC2X[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUI_CreateRoom_Management_Player_Info_C*             Player_2;                                                // 0x04A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             Player_3;                                                // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             Player_4;                                                // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUI_CreateRoom_Management_Player_Info_C*             Player_5;                                                // 0x04B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Construct();
		void ExecuteUbergraph_UI_CreateRoom_Management_Team_TDM(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
