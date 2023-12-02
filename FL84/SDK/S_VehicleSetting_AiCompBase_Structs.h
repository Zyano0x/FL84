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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_VehicleSetting_AiCompBase.S_VehicleSetting_AiCompBase
	 * Size -> 0x0058
	 */
	struct FS_VehicleSetting_AiCompBase
	{
	public:
		bool                                                       HasVehicle_1_65D3F5CB42EABC653978A3BB187614F1;           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8H70[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, int32_t>                                     VehicleId_6_1DD8025A4E78B76EFC5B37B83362D226;            // 0x0008(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
