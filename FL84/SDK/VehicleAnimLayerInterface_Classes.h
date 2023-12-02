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
	 * DynamicClass VehicleAnimLayerInterface.VehicleAnimLayerInterface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVehicleAnimLayerInterface_C : public UAnimLayerInterface
	{
	public:
		void VehicleLocamotion(struct FPoseLink* bpp__VehicleLocamotion__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
