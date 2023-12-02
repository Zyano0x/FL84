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
	 * 		Name   -> Function BPI_Notice_Noya.BPI_Notice_Noya_C.Close
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_Notice_Noya_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPI_Notice_Noya.BPI_Notice_Noya_C.Close"));
		
		UBPI_Notice_Noya_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function BPI_Notice_Noya.BPI_Notice_Noya_C.Show
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                                                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBPI_Notice_Noya_C::Show(const class FString& )
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function BPI_Notice_Noya.BPI_Notice_Noya_C.Show"));
		
		UBPI_Notice_Noya_C_Show_Params params {};
		params. = ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_Notice_Noya_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_Notice_Noya_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass BPI_Notice_Noya.BPI_Notice_Noya_C"));
		return ptr;
	}

}


