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
	 * BlueprintGeneratedClass BP_WheeledVehicleBase.BP_WheeledVehicleBase_C
	 * Size -> 0x0008 (FullSize[0x13F0] - InheritedSize[0x13E8])
	 */
	class ABP_WheeledVehicleBase_C : public ASolarWheeledVehicle
	{
	public:
		unsigned char                                              UnknownData_04CE[0x8];                                   // 0x13E8(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
