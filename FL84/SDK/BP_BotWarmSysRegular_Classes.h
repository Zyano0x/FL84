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
	 * BlueprintGeneratedClass BP_BotWarmSysRegular.BP_BotWarmSysRegular_C
	 * Size -> 0x0000 (FullSize[0x0270] - InheritedSize[0x0270])
	 */
	class UBP_BotWarmSysRegular_C : public USolarBotWarmSystemRegular
	{
	public:
		int32_t GetActivePlayerNumBP(int32_t PlayerNum, int32_t PlayerTeamNum);
		float GetWarmScoreByEvent(class ASolarPlayerState* InPS, EUpdateWarmServiceEventType InEventType);
		float GetTargetTickValue(class ASolarPlayerState* InPS, const struct FWarmTargetState& InState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
