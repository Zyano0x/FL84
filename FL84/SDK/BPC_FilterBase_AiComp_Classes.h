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
	 * BlueprintGeneratedClass BPC_FilterBase_AiComp.BPC_FilterBase_AiComp_C
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UBPC_FilterBase_AiComp_C : public UActorComponent
	{
	public:
		bool CheckFilter(class ABP_PlayerState_Framework_C* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
