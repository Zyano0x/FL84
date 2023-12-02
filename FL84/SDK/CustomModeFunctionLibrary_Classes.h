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
	 * BlueprintGeneratedClass CustomModeFunctionLibrary.CustomModeFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCustomModeFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_LetPlayerOut(class ASCMPlayerState* Player, class UObject* __WorldContext);
		void STATIC_ABindOnBasicSystemReady(const class FScriptDelegate& Event, class UObject* __WorldContext, bool* bReady);
		class UBPC_PlayerManager_C* STATIC_sGetPlayerManager(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
