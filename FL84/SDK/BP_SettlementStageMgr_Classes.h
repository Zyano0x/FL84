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
	 * BlueprintGeneratedClass BP_SettlementStageMgr.BP_SettlementStageMgr_C
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UBP_SettlementStageMgr_C : public USettlementStageManager
	{
	public:
		class FString GetClassRelativePathName(class UClass* InClass);
		void SkipToTarget();
		void CloseDiePage();
		void ShowDiePage();
		void Init();
		void ShowNextStage();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
