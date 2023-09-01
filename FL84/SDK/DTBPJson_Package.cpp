/**
 * Name: FL84
 * Version: 1.14.4.6.511026
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x016CC290
	 * 		Name   -> Function DTBPJson.DTBPJsonBPLib.StructToJson
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDTStruct                                   Struct                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Json                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               PrettyPrint                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDTBPJsonBPLib::STATIC_StructToJson(const struct FDTStruct& Struct, class FString* Json, bool PrettyPrint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DTBPJson.DTBPJsonBPLib.StructToJson");
		
		UDTBPJsonBPLib_StructToJson_Params params {};
		params.Struct = Struct;
		params.PrettyPrint = PrettyPrint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Json != nullptr)
			*Json = params.Json;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x016CC190
	 * 		Name   -> Function DTBPJson.DTBPJsonBPLib.JsonToStruct
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDTStruct                                   Struct                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      Json                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDTBPJsonBPLib::STATIC_JsonToStruct(struct FDTStruct* Struct, const class FString& Json)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DTBPJson.DTBPJsonBPLib.JsonToStruct");
		
		UDTBPJsonBPLib_JsonToStruct_Params params {};
		params.Json = Json;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Struct != nullptr)
			*Struct = params.Struct;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDTBPJsonBPLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDTBPJsonBPLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DTBPJson.DTBPJsonBPLib");
		return ptr;
	}

}


