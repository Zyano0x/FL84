#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x238 - 0x230)
// BlueprintGeneratedClass Lobby.Lobby_C
class ALobby_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ALobby_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Lobby(int32 EntryPoint, bool CallFunc_IsPlatformDesktop_ReturnValue, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class UClass* K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, class AActor* CallFunc_Array_Get_Item);
};

}


