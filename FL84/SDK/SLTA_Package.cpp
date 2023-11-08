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
	 * 		RVA    -> 0x01CFF4E0
	 * 		Name   -> Function SLTA.SLTA_BPL.WriteTxt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      saveString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USLTA_BPL::STATIC_WriteTxt(const class FString& saveString, const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.WriteTxt"));
		
		USLTA_BPL_WriteTxt_Params params {};
		params.saveString = saveString;
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CFF460
	 * 		Name   -> Function SLTA.SLTA_BPL.SLTA_SetDetailMode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class USceneComponent*                             _sceneComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USLTA_BPL::STATIC_SLTA_SetDetailMode(class USceneComponent* _sceneComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.SLTA_SetDetailMode"));
		
		USLTA_BPL_SLTA_SetDetailMode_Params params {};
		params._sceneComponent = _sceneComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CFF430
	 * 		Name   -> Function SLTA.SLTA_BPL.SLTA_GetPrimitivesRHI
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t USLTA_BPL::STATIC_SLTA_GetPrimitivesRHI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.SLTA_GetPrimitivesRHI"));
		
		USLTA_BPL_SLTA_GetPrimitivesRHI_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CFF3A0
	 * 		Name   -> Function SLTA.SLTA_BPL.SLTA_GetLightMapIndex
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        _ustaticMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USLTA_BPL::STATIC_SLTA_GetLightMapIndex(class UStaticMeshComponent* _ustaticMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.SLTA_GetLightMapIndex"));
		
		USLTA_BPL_SLTA_GetLightMapIndex_Params params {};
		params._ustaticMeshComponent = _ustaticMeshComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CFF310
	 * 		Name   -> Function SLTA.SLTA_BPL.SLTA_GetLightMapCoordinateBias
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UStaticMeshComponent*                        _ustaticMeshComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector4 USLTA_BPL::STATIC_SLTA_GetLightMapCoordinateBias(class UStaticMeshComponent* _ustaticMeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.SLTA_GetLightMapCoordinateBias"));
		
		USLTA_BPL_SLTA_GetLightMapCoordinateBias_Params params {};
		params._ustaticMeshComponent = _ustaticMeshComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CFF2E0
	 * 		Name   -> Function SLTA.SLTA_BPL.SLTA_GetDrawcalls
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	int32_t USLTA_BPL::STATIC_SLTA_GetDrawcalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.SLTA_GetDrawcalls"));
		
		USLTA_BPL_SLTA_GetDrawcalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CFF200
	 * 		Name   -> Function SLTA.SLTA_BPL.SLTA_GetCustomPrimitiveData
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         _primitive                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> USLTA_BPL::STATIC_SLTA_GetCustomPrimitiveData(class UPrimitiveComponent* _primitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.SLTA_GetCustomPrimitiveData"));
		
		USLTA_BPL_SLTA_GetCustomPrimitiveData_Params params {};
		params._primitive = _primitive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CFEE80
	 * 		Name   -> Function SLTA.SLTA_BPL.SLTA_ArrayToCSV
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      SaveDirectory                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      TitleName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              SaveText                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArrayIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AllowOverwriting                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USLTA_BPL::STATIC_SLTA_ArrayToCSV(const class FString& SaveDirectory, const class FString& Filename, const class FString& TitleName, TArray<class FString> SaveText, int32_t ArrayIndex, bool AllowOverwriting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.SLTA_ArrayToCSV"));
		
		USLTA_BPL_SLTA_ArrayToCSV_Params params {};
		params.SaveDirectory = SaveDirectory;
		params.Filename = Filename;
		params.TitleName = TitleName;
		params.SaveText = SaveText;
		params.ArrayIndex = ArrayIndex;
		params.AllowOverwriting = AllowOverwriting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01CFED50
	 * 		Name   -> Function SLTA.SLTA_BPL.ReadTxt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString USLTA_BPL::STATIC_ReadTxt(const class FString& Path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function SLTA.SLTA_BPL.ReadTxt"));
		
		USLTA_BPL_ReadTxt_Params params {};
		params.Path = Path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USLTA_BPL.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USLTA_BPL::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class SLTA.SLTA_BPL"));
		return ptr;
	}

}


