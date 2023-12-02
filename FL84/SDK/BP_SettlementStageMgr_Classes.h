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
	 * BlueprintGeneratedClass BP_SettlementStageMgr.BP_SettlementStageMgr_C
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UBP_SettlementStageMgr_C : public USettlementStageManager
	{
	public:
		void ShowDiePage();
		void CloseDiePage();
		void SkipToTarget();
		void ShowNextStage();
		void Init();
		class FString GetClassRelativePathName(class UClass* InClass);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
