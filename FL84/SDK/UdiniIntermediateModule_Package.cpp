/**
 * Name: FL84
 * Version: 15.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01CE23E0
	 * 		Name   -> Function UdiniIntermediateModule.UdiniIntermediateModuleBPLibrary.UdiniIntermediateModuleSampleFunction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Param                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUdiniIntermediateModuleBPLibrary::STATIC_UdiniIntermediateModuleSampleFunction(float Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function UdiniIntermediateModule.UdiniIntermediateModuleBPLibrary.UdiniIntermediateModuleSampleFunction"));
		
		UUdiniIntermediateModuleBPLibrary_UdiniIntermediateModuleSampleFunction_Params params {};
		params.Param = Param;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniIntermediateModuleBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniIntermediateModuleBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniIntermediateModule.UdiniIntermediateModuleBPLibrary"));
		return ptr;
	}

}


