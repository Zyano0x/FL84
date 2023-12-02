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
	 * BlueprintGeneratedClass I_PickableItem.I_PickableItem_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UI_PickableItem_C : public UInterface
	{
	public:
		void iPickupItem(class ABP_PlayerState_Framework_C* Player);
		void iDiscardItem(class ABP_PlayerState_Framework_C* Player);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
