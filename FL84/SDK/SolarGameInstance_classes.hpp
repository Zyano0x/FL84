#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x9D0 - 0x9B8)
// BlueprintGeneratedClass SolarGameInstance.SolarGameInstance_C
class USolarGameInstance_C : public USolarGameInstanceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            OnBroadcastModeChanged;                            // 0x9C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class USolarGameInstance_C* GetDefaultObj();

	void LuaOnBroadcastModeChanged();
	void LuaGetBroadcastPlayerName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void LuaGetBroadcastHeroName(const class FString& SolarPlayerID, class FString* BroadcastPlayerName);
	void SolarGM_TestCrashWithBP();
	void SolarGM_TestEnsureMsgWithBP();
	void ExecuteUbergraph_SolarGameInstance(int32 EntryPoint);
	void OnBroadcastModeChanged__DelegateSignature();
};

}


