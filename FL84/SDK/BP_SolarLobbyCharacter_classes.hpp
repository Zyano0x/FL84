#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x448 - 0x438)
// BlueprintGeneratedClass BP_SolarLobbyCharacter.BP_SolarLobbyCharacter_C
class ABP_SolarLobbyCharacter_C : public ASolarLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMediaSoundComponent*                  MediaSound;                                        // 0x440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SolarLobbyCharacter_C* GetDefaultObj();

	bool IsCanOpenMirror();
	void ClearCharacterByLua();
	void InitCharacterByLua();
	bool IsCanOpenChangeAnim();
	class FString GetModuleName();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SolarLobbyCharacter(int32 EntryPoint);
};

}


