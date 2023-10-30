#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x50 - 0x50)
// BlueprintGeneratedClass BP_SettlementStageMgr.BP_SettlementStageMgr_C
class UBP_SettlementStageMgr_C : public USettlementStageManager
{
public:

	static class UClass* StaticClass();
	static class UBP_SettlementStageMgr_C* GetDefaultObj();

	void CloseDiePage();
	void ShowDiePage();
	void Init();
	void ShowNextStage();
	void SkipToTarget();
	class FString GetClassRelativePathName(class UClass* InClass);
};

}


