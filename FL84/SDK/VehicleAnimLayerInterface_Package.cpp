/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLocamotion
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__VehicleLocamotion__pf                                 (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVehicleAnimLayerInterface_C::VehicleLocamotion(struct FPoseLink* bpp__VehicleLocamotion__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLocamotion"));
		
		UVehicleAnimLayerInterface_C_VehicleLocamotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__VehicleLocamotion__pf != nullptr)
			*bpp__VehicleLocamotion__pf = params.bpp__VehicleLocamotion__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVehicleAnimLayerInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVehicleAnimLayerInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("DynamicClass VehicleAnimLayerInterface.VehicleAnimLayerInterface_C"));
		return ptr;
	}

}


