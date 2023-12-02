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
	 * BlueprintGeneratedClass FL_Mode_BattleRoyale.FL_Mode_BattleRoyale_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_Mode_BattleRoyale_C : public UBlueprintFunctionLibrary
	{
	public:
		int32_t STATIC_sUpdateTeamCountMax(class UObject* __WorldContext);
		void STATIC_OutputLog(E_BattleLog_BattleRoyale LogType, TMap<class FString, class FString> InputPin, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
