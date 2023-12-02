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
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetItemIconPath
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BasePath                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UFL_Mode_Framework_C::STATIC_GetItemIconPath(int32_t Key, const class FString& BasePath, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetItemIconPath"));
		
		UFL_Mode_Framework_C_GetItemIconPath_Params params {};
		params.Key = Key;
		params.BasePath = BasePath;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleSkinList
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutKeys                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetVehicleSkinList(class UObject* __WorldContext, TArray<int32_t>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleSkinList"));
		
		UFL_Mode_Framework_C_GetVehicleSkinList_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleSkinData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSolarTablesData_VehicleSkin UFL_Mode_Framework_C::GetVehicleSkinData(int32_t Key, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleSkinData"));
		
		UFL_Mode_Framework_C_GetVehicleSkinData_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleTypeList
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutKeys                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetVehicleTypeList(class UObject* __WorldContext, TArray<int32_t>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleTypeList"));
		
		UFL_Mode_Framework_C_GetVehicleTypeList_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleTypeData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSolarTablesData_VehicleType UFL_Mode_Framework_C::GetVehicleTypeData(int32_t Key, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleTypeData"));
		
		UFL_Mode_Framework_C_GetVehicleTypeData_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponSkinList
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutKeys                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetWeaponSkinList(class UObject* __WorldContext, TArray<int32_t>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponSkinList"));
		
		UFL_Mode_Framework_C_GetWeaponSkinList_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponSkinData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSolarTablesData_WeaponSkin UFL_Mode_Framework_C::GetWeaponSkinData(int32_t Key, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponSkinData"));
		
		UFL_Mode_Framework_C_GetWeaponSkinData_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponList
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutKeys                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetWeaponList(class UObject* __WorldContext, TArray<int32_t>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponList"));
		
		UFL_Mode_Framework_C_GetWeaponList_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSolarTablesData_GunProperty UFL_Mode_Framework_C::GetWeaponData(int32_t Key, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponData"));
		
		UFL_Mode_Framework_C_GetWeaponData_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetBroadcastPlayerName
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BroadcastPlayerName                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetBroadcastPlayerName(const class FString& SolarPlayerID, class UObject* __WorldContext, class FString* BroadcastPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetBroadcastPlayerName"));
		
		UFL_Mode_Framework_C_GetBroadcastPlayerName_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BroadcastPlayerName != nullptr)
			*BroadcastPlayerName = params.BroadcastPlayerName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.BindBroadcastModeChanged
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_BindBroadcastModeChanged(const class FScriptDelegate& Event, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.BindBroadcastModeChanged"));
		
		UFL_Mode_Framework_C_BindBroadcastModeChanged_Params params {};
		params.Event = Event;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetBroadcastHeroName
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SolarPlayerID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BroadcastHeroName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetBroadcastHeroName(const class FString& SolarPlayerID, class UObject* __WorldContext, class FString* BroadcastHeroName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetBroadcastHeroName"));
		
		UFL_Mode_Framework_C_GetBroadcastHeroName_Params params {};
		params.SolarPlayerID = SolarPlayerID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BroadcastHeroName != nullptr)
			*BroadcastHeroName = params.BroadcastHeroName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.IsTouchScreenLayout
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFL_Mode_Framework_C::STATIC_IsTouchScreenLayout(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.IsTouchScreenLayout"));
		
		UFL_Mode_Framework_C_IsTouchScreenLayout_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetPositionOfCircle
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetPositionOfCircle(float Radius, float Angle, class UObject* __WorldContext, struct FVector2D* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetPositionOfCircle"));
		
		UFL_Mode_Framework_C_GetPositionOfCircle_Params params {};
		params.Radius = Radius;
		params.Angle = Angle;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.[s]SetCanBeSpectate
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarPlayerState*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CanbeSpectate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_sSetCanBeSpectate(class ASolarPlayerState* Target, bool CanbeSpectate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.[s]SetCanBeSpectate"));
		
		UFL_Mode_Framework_C_sSetCanBeSpectate_Params params {};
		params.Target = Target;
		params.CanbeSpectate = CanbeSpectate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.[s]SetCharacterSkill
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FS_SkillState                               SkillConfig                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_sSetCharacterSkill(class ASolarCharacter* Character, const struct FS_SkillState& SkillConfig, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.[s]SetCharacterSkill"));
		
		UFL_Mode_Framework_C_sSetCharacterSkill_Params params {};
		params.Character = Character;
		params.SkillConfig = SkillConfig;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.[a]GetCharacterIDBySkinID
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            SkinId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CharacterId                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_aGetCharacterIDBySkinID(int32_t SkinId, class UObject* __WorldContext, int32_t* CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.[a]GetCharacterIDBySkinID"));
		
		UFL_Mode_Framework_C_aGetCharacterIDBySkinID_Params params {};
		params.SkinId = SkinId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharacterId != nullptr)
			*CharacterId = params.CharacterId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.SetSkillState
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_CharacterSkillType                               SkillType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERoleSkillOperation                                NewSate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_SetSkillState(class ASolarCharacter* Character, E_CharacterSkillType SkillType, ERoleSkillOperation NewSate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.SetSkillState"));
		
		UFL_Mode_Framework_C_SetSkillState_Params params {};
		params.Character = Character;
		params.SkillType = SkillType;
		params.NewSate = NewSate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.HasTeammatesAI
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Team                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UFL_Mode_Framework_C::STATIC_HasTeammatesAI(const class FString& Team, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.HasTeammatesAI"));
		
		UFL_Mode_Framework_C_HasTeammatesAI_Params params {};
		params.Team = Team;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.Set Skill State for Everybody
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_CharacterSkillType                               SkillType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ERoleSkillOperation                                NewSate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_SetSkillStateforEverybody(E_CharacterSkillType SkillType, ERoleSkillOperation NewSate, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.Set Skill State for Everybody"));
		
		UFL_Mode_Framework_C_SetSkillStateforEverybody_Params params {};
		params.SkillType = SkillType;
		params.NewSate = NewSate;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.SetWeaponPartByPartID
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASolarWeapon*                                TargetWeapon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PartID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFL_Mode_Framework_C::STATIC_SetWeaponPartByPartID(class ASolarWeapon* TargetWeapon, int32_t PartID, class UObject* __WorldContext, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.SetWeaponPartByPartID"));
		
		UFL_Mode_Framework_C_SetWeaponPartByPartID_Params params {};
		params.TargetWeapon = TargetWeapon;
		params.PartID = PartID;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.Distribute Experience to Side
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InExp                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EExpBehaviorType                                   InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_DistributeExperiencetoSide(int32_t InExp, EExpBehaviorType InType, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.Distribute Experience to Side"));
		
		UFL_Mode_Framework_C_DistributeExperiencetoSide_Params params {};
		params.InExp = InExp;
		params.InType = InType;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetRandomCharacter
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetRandomCharacter(class UObject* __WorldContext, int32_t* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetRandomCharacter"));
		
		UFL_Mode_Framework_C_GetRandomCharacter_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.RandomIntInRange
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FInt32Range                                 Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UFL_Mode_Framework_C::STATIC_RandomIntInRange(const struct FInt32Range& Range, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.RandomIntInRange"));
		
		UFL_Mode_Framework_C_RandomIntInRange_Params params {};
		params.Range = Range;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetLocText
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FSolarTablesLocalText                       InData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UFL_Mode_Framework_C::STATIC_GetLocText(const struct FSolarTablesLocalText& InData, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetLocText"));
		
		UFL_Mode_Framework_C_GetLocText_Params params {};
		params.InData = InData;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterList
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutKeys                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetCharacterList(class UObject* __WorldContext, TArray<int32_t>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterList"));
		
		UFL_Mode_Framework_C_GetCharacterList_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetBackpackList
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutKeys                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetBackpackList(class UObject* __WorldContext, TArray<int32_t>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetBackpackList"));
		
		UFL_Mode_Framework_C_GetBackpackList_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetTrailList
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutKeys                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetTrailList(class UObject* __WorldContext, TArray<int32_t>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetTrailList"));
		
		UFL_Mode_Framework_C_GetTrailList_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterSkinList
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    OutKeys                                                    (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UFL_Mode_Framework_C::STATIC_GetCharacterSkinList(class UObject* __WorldContext, TArray<int32_t>* OutKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterSkinList"));
		
		UFL_Mode_Framework_C_GetCharacterSkinList_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutKeys != nullptr)
			*OutKeys = params.OutKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetTrailData
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSolarTablesData_BackpackTrailProperty UFL_Mode_Framework_C::STATIC_GetTrailData(int32_t Key, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetTrailData"));
		
		UFL_Mode_Framework_C_GetTrailData_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetBackpackData
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSolarTablesData_BackpackProperty UFL_Mode_Framework_C::STATIC_GetBackpackData(int32_t Key, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetBackpackData"));
		
		UFL_Mode_Framework_C_GetBackpackData_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterData
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSolarTablesData_UnitCharacter UFL_Mode_Framework_C::STATIC_GetCharacterData(int32_t Key, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterData"));
		
		UFL_Mode_Framework_C_GetCharacterData_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetTextureByPath
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Path                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UObject* UFL_Mode_Framework_C::GetTextureByPath(const class FString& Path, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetTextureByPath"));
		
		UFL_Mode_Framework_C_GetTextureByPath_Params params {};
		params.Path = Path;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02D0DF90
	 * 		Name   -> Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterSkinData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FSolarTablesData_Skin UFL_Mode_Framework_C::GetCharacterSkinData(int32_t Key, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xorstr_("Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterSkinData"));
		
		UFL_Mode_Framework_C_GetCharacterSkinData_Params params {};
		params.Key = Key;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFL_Mode_Framework_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFL_Mode_Framework_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("BlueprintGeneratedClass FL_Mode_Framework.FL_Mode_Framework_C"));
		return ptr;
	}

}


