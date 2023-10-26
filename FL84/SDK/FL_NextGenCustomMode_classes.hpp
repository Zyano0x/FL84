#pragma once

// Dumped with Dumper-7!


namespace SDK
{
	//---------------------------------------------------------------------------------------------------------------------
	// CLASSES
	//---------------------------------------------------------------------------------------------------------------------

	// 0x0 (0x28 - 0x28)
	// BlueprintGeneratedClass FL_NextGenCustomMode.FL_NextGenCustomMode_C
	class UFL_NextGenCustomMode_C : public UBlueprintFunctionLibrary
	{
	public:

		static class UClass* StaticClass();
		static class UFL_NextGenCustomMode_C* GetDefaultObj();

		void __A_BindOnBasicSystemReady(FDelegateProperty_& Event, class UObject* __WorldContext, bool* bReady, bool CallFunc_IsServer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State, bool K2Node_DynamicCast_bSuccess);
		bool UseNewAiComp(class UObject* __WorldContext, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UCGMLogicComponent* CallFunc_GetComponentByClass_ReturnValue);
		void GetAiComp(class UObject* __WorldContext, class USBattleRoyaleGameModeAIComp** AiComp, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class USBattleRoyaleGameModeAIComp* CallFunc_GetComponentByClass_ReturnValue);
		void SortMap(TMap<class FString, float> MapIn, bool Ascending, class UObject* __WorldContext, TMap<class FString, float>* Sorted, TMap<class FString, float> SortResult, const TArray<class FString>& KeyMap, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Map_Length_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item_1, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, const class FString& CallFunc_Array_Get_Item_2, float CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Select_Default);
		class UUserWidget* _c_ShowWidget(class UClass* WidgetClass, enum class E_UI_Root Layer, class UObject* __WorldContext, enum class E_UI_Root Temp_byte_Variable, enum class EUIRoot Temp_byte_Variable_1, enum class EUIRoot Temp_byte_Variable_2, enum class EUIRoot Temp_byte_Variable_3, enum class EUIRoot Temp_byte_Variable_4, enum class EUIRoot Temp_byte_Variable_5, enum class EUIRoot Temp_byte_Variable_6, enum class EUIRoot Temp_byte_Variable_7, enum class EUIRoot Temp_byte_Variable_8, enum class EUIRoot K2Node_Select_Default, class UUserWidget* CallFunc_ShowSolarWidget_ReturnValue);
		void _c_CreateWidget(class UClass* WidgetClass, enum class E_UI_Root Layer, class UObject* __WorldContext, class UUserWidget** WidgetObject, enum class E_UI_Root Temp_byte_Variable, enum class EUIRoot Temp_byte_Variable_1, enum class EUIRoot Temp_byte_Variable_2, enum class EUIRoot Temp_byte_Variable_3, enum class EUIRoot Temp_byte_Variable_4, enum class EUIRoot Temp_byte_Variable_5, enum class EUIRoot Temp_byte_Variable_6, enum class EUIRoot Temp_byte_Variable_7, enum class EUIRoot Temp_byte_Variable_8, enum class EUIRoot K2Node_Select_Default, class UUserWidget* CallFunc_CreateSolarWidget_ReturnValue);
		void GetRandomKeyInWidget(TMap<int32, int32> KeyMinusWeight, class UObject* __WorldContext, int32* HitKey, int32 SumWeight, int32 Temp_int_Loop_Counter_Variable, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, int32 CallFunc_SumOfIntArray_Sum, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
		void SumOfIntArray(TArray<int32>& Array, class UObject* __WorldContext, int32* Sum, int32 NewLocalVar_0, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
		void GetTeamPlayerCount(class UObject* __WorldContext, int32* Num_Mode, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, int32 CallFunc_GetMatchRuleID_ReturnValue, const struct FSolarTablesData_MatchRule& CallFunc_GetRowData_ReturnValue, bool CallFunc_HasRowKey_ReturnValue);
		void _A_GetModeConfig(class UObject* __WorldContext, class UCGMGameplayConfig** ModeConfig, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State, bool K2Node_DynamicCast_bSuccess, class UCGMGameplayConfig* CallFunc_GetCGMGameplayConfig_ReturnValue);
		void _C_SetWidgetVisibility(enum class E_BattleControlWidgets Widget, bool Visibility, class UObject* __WorldContext, bool Temp_bool_Variable, class USolarGlobalEventSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_Conv_ByteToString_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default, TArray<class FString>& K2Node_MakeArray_Array);
		void _A_GetDSTime(class UObject* __WorldContext, int32* Time, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue);
		void _A_GetBattleTime(class UObject* __WorldContext, int32* Time, float CallFunc_GetCurBattleTime_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
		void ToBool(const class FString& String, class UObject* __WorldContext, bool* Bool, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
		void _A_PrintLog(const class FString& Prefix, TMap<class FString, class FString>& InputPin, class UObject* __WorldContext, const class FString& Temp, int32 CallFunc_GetGameModeID_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& Temp_string_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6);
		void _A_GetCharacters(bool OnlyRealPlayers, class UObject* __WorldContext, TArray<class ASolarCharacter*>* Characters, const TArray<class ASolarCharacter*>& Temp, TArray<uint8>& Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& Temp_string_Variable, TArray<enum class ESCMPlayerState>& Temp_byte_Variable_1, TArray<class ASCMPlayerState*>& CallFunc_FindPlayers_ReturnValue, class ASCMPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASolarCharacter* CallFunc_GetSolarCharacter_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsOBPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1);
		void _A_GetTeamCountMax(class UObject* __WorldContext, int32* OutValue, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue);
		void _S_SetTeamCountMax(int32 InValue, class UObject* __WorldContext, bool CallFunc_SetDataInt_ReturnValue);
		void _A_GetPlayerCountMax(class UObject* __WorldContext, int32* OutValue, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue);
		void _S_SetPlayerCountMax(int32 InValue, class UObject* __WorldContext, bool CallFunc_SetDataInt_ReturnValue);
		void _c_FillInCanvas(class UCanvasPanelSlot* Slot, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FMargin& K2Node_MakeStruct_Margin);
		void _S_UpdateTeamsCount(int32 Change, bool Set, class UObject* __WorldContext, int32* Current, int32 NewLocalVar_0, bool Temp_bool_Variable, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_SetDataInt_ReturnValue);
		void _C_RemoveAllWidgetsFromBigMapUI(enum class E_BigMapSlot Slot, class UObject* __WorldContext, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_ClearMapUISlot_ReturnValue);
		void _C_InsertWidgetToBigMapUI(class UUserWidget* Widget, enum class E_BigMapSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UPanelSlot* CallFunc_InsertWidgetToMapUISlot_OutResultSlot, bool CallFunc_InsertWidgetToMapUISlot_ReturnValue);
		void _C_RemoveAllWidgetsFromBackpackUI(enum class E_BackPackSlot Slot, class UObject* __WorldContext, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_ClearBackpackUISlot_ReturnValue);
		void _C_InsertWidgetToBackpackUI(class UUserWidget* Widget, enum class E_BackPackSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UPanelSlot* CallFunc_InsertWidgetToBackpackUISlot_OutResultSlot, bool CallFunc_InsertWidgetToBackpackUISlot_ReturnValue);
		void _s_IsTesting(class UObject* __WorldContext, bool* Testing, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class USolarGameplayConfigComponent* CallFunc_GetComponentByClass_ReturnValue);
		void _A_GetAllRealPlayers(class UObject* __WorldContext, TArray<class ASCMPlayerState*>* RealPlayers, const TArray<class ASCMPlayerState*>& NewLocalVar_0, TArray<uint8>& Temp_byte_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& Temp_string_Variable, TArray<enum class ESCMPlayerState>& Temp_byte_Variable_1, TArray<class ASCMPlayerState*>& CallFunc_FindPlayers_ReturnValue, class ASCMPlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
		void _A_PrintStringArray(const class FString& Prefix, TArray<class FString>& Array, class UObject* __WorldContext, const class FString& Final, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
		void _A_DataIntPlusPlus(enum class ESCMHostType HostType, const class FString& HostID, const class FString& DataName, int32 InValue, class UObject* __WorldContext, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetDataInt_ReturnValue);
		void _A_GetRandomLocationNearby(const struct FVector& Center, float Radius, class UObject* __WorldContext, struct FVector* TargetLocation1, const struct FVector& TargetLocation, const TArray<struct FVector>& ValidTarget, const TArray<class ASolarCharacter*>& Ignore, bool Temp_bool_Variable, TArray<class ASolarCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FVector2D& CallFunc_Normal2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& K2Node_Select_Default);
		void UpdatePlayerCount(int32 Change, bool Set, class UObject* __WorldContext, int32* Current, int32 NewLocalVar_0, bool Temp_bool_Variable, int32 CallFunc_GetDataInt_OutValue, bool CallFunc_GetDataInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_SetDataInt_ReturnValue);
		void BattleOver(class UObject* __WorldContext);
		void DeathReason2String(enum class ESCMDamageType DamageType, class UObject* __WorldContext, class FString* TraceString, bool Temp_bool_Variable, const class FString& CallFunc_Conv_ByteToString_ReturnValue, enum class ESCMDamageType Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& Temp_string_Variable_11, const class FString& Temp_string_Variable_12, const class FString& Temp_string_Variable_13, const class FString& Temp_string_Variable_14, const class FString& Temp_string_Variable_15, const class FString& Temp_string_Variable_16, const class FString& Temp_string_Variable_17, const class FString& Temp_string_Variable_18, const class FString& Temp_string_Variable_19, const class FString& Temp_string_Variable_20, const class FString& K2Node_Select_Default, bool CallFunc_IsEmpty_ReturnValue, const class FString& K2Node_Select_Default_1);
		void _A_GetPlayerType(class ASCMPlayerState* Player, class UObject* __WorldContext, enum class E_PlayerType* PlayerType, enum class EBotAIType Temp_byte_Variable, class AAIController* CallFunc_GetAIController_ReturnValue, class ASolarBotAIController* K2Node_DynamicCast_AsSolar_Bot_AIController, bool K2Node_DynamicCast_bSuccess, enum class E_PlayerType Temp_byte_Variable_1, enum class E_PlayerType Temp_byte_Variable_2, enum class E_PlayerType Temp_byte_Variable_3, enum class E_PlayerType K2Node_Select_Default);
		void _S_GetOutcomIDByChestID(int32 Key, class UObject* __WorldContext, int32* OutcomeID, int32 NewLocalVar_1, int32 NewLocalVar_0, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, bool CallFunc_HasRowKey_ReturnValue, const struct FSolarTablesData_ChestSpawn& CallFunc_GetRowData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FSolarTablesData_Chest& CallFunc_GetRowData_ReturnValue_1, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_HasRowKey_ReturnValue_1);
		void Vector2DArray2String(TArray<struct FVector2D>& Vector, class UObject* __WorldContext, class FString* Str, const class FString& Temp, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FVector2D& CallFunc_Array_Get_Item, const class FString& CallFunc_Vector2D2String_Str, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Mid_ReturnValue);
		void VectorArray2String(TArray<struct FVector>& Vector, class UObject* __WorldContext, class FString* Str, const class FString& Temp, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Array_Get_Item, const class FString& CallFunc_Vector2String_Str, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_Mid_ReturnValue);
		void Vector2D2String(const struct FVector2D& Vector, class UObject* __WorldContext, class FString* Str, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
		void ____pW(int32 _P, int32 _O, TArray<int32>& _d, class UObject* __WorldContext, int32* Result, const TArray<int32>& LOCAL___pW_, int32 Temp_int_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
		void _S_GetBuildPackageType(class UObject* __WorldContext, enum class ESolarBuildConfiguration* S___, enum class ESolarBuildConfiguration CallFunc_GetBuildConfiguration_ReturnValue);
		void _S_Number2Letter(int32 Number, class UObject* __WorldContext, class FString* Letter, bool* Valid, int32 Temp_int_Variable, bool CallFunc_InRange_IntInt_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& Temp_string_Variable_11, const class FString& Temp_string_Variable_12, const class FString& Temp_string_Variable_13, const class FString& Temp_string_Variable_14, const class FString& Temp_string_Variable_15, const class FString& Temp_string_Variable_16, const class FString& Temp_string_Variable_17, const class FString& Temp_string_Variable_18, const class FString& Temp_string_Variable_19, const class FString& Temp_string_Variable_20, const class FString& Temp_string_Variable_21, const class FString& Temp_string_Variable_22, const class FString& Temp_string_Variable_23, const class FString& Temp_string_Variable_24, const class FString& Temp_string_Variable_25, const class FString& Temp_string_Variable_26, const class FString& K2Node_Select_Default);
		void Vector2String(const struct FVector& Vector, class UObject* __WorldContext, class FString* Str, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
		void Bool2String(bool Bool, class UObject* __WorldContext, class FString* String, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default);
		void __0b__(const struct FVector& Mn, bool __0_, class UObject* __WorldContext, struct FVector* ZerobMn, float* Z, bool* __4Minus, bool Temp_bool_Variable, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool Temp_bool_Variable_1, const struct FVector& K2Node_Select_Default, TArray<class AActor*>& Temp_object_Variable, const struct FVector& K2Node_Select_Default_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, class ABP_SolarWaterActor_C* K2Node_DynamicCast_AsBP_Solar_Water_Actor, bool K2Node_DynamicCast_bSuccess);
		void ToInt_StringArray_(TArray<class FString>& Str, class UObject* __WorldContext, TArray<int32>* Int, const TArray<int32>& Temp, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
		void _A_GetMiniMapSize(int32 MapId, class UObject* __WorldContext, struct FVector2D* Size, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, const struct FSolarTablesData_GameMap& CallFunc_GetRowData_ReturnValue, bool CallFunc_HasRowKey_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
		void _S_GetMapIDByName(const class FString& LevelName, class UObject* __WorldContext, int32* MapId, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMapIDByName_ReturnValue);
		class UCGMLogicComponent* _S_GetModeMainLogic(class UObject* __WorldContext, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UCGMLogicComponent* CallFunc_GetComponentByClass_ReturnValue);
		void _S_DeployPlayer(class ASolarPlayerState* TargetPlayer, class APlayerStart* PlayerStart, bool ClearPlayerItems, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
		void _A_WorldLocationToMiniMap(const struct FVector& WorldLocation, class UObject* __WorldContext, struct FVector2D* MiniMapPosition, class USolarMapManager* CallFunc__A_GetMapManager_ReturnValue, const struct FVector2D& CallFunc_WorldLocationToMiniMap_ReturnValue);
		void _A_MiniMapToWorldLocation(const struct FVector2D& MiniMapPosition, float Z, class UObject* __WorldContext, struct FVector* WorldLocation, class USolarMapManager* CallFunc__A_GetMapManager_ReturnValue, const struct FVector& CallFunc_MiniMapToWorldLocation_ReturnValue);
		class USolarUserWidget* _c__Create_Widget_And_Display(class UClass* WidgetClass, enum class E_UI_Root DisplayLayer, class UObject* __WorldContext, enum class E_UI_Root Temp_byte_Variable, enum class EUIRoot Temp_byte_Variable_1, enum class EUIRoot Temp_byte_Variable_2, enum class EUIRoot Temp_byte_Variable_3, enum class EUIRoot Temp_byte_Variable_4, enum class EUIRoot Temp_byte_Variable_5, enum class EUIRoot Temp_byte_Variable_6, enum class EUIRoot Temp_byte_Variable_7, enum class EUIRoot Temp_byte_Variable_8, enum class EUIRoot K2Node_Select_Default, class UUserWidget* CallFunc_ShowSolarWidget_ReturnValue, class USolarUserWidget* K2Node_DynamicCast_AsSolar_User_Widget, bool K2Node_DynamicCast_bSuccess);
		class USolarMapManager* _A_GetMapManager(class UObject* __WorldContext, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USolarGameInstanceBase* K2Node_DynamicCast_AsSolar_Game_Instance_Base, bool K2Node_DynamicCast_bSuccess, class USolarMapManager* CallFunc_GetSolarMapManager_ReturnValue);
		class ASolarCharacter* _C_GetLocalCharacter(class UObject* __WorldContext, class ASCMPlayerState* CallFunc_GetLocalPlayer_ReturnValue, class ASolarCharacter* CallFunc_GetSolarCharacter_ReturnValue);
		void _s_GetWarmGameInfo(class UObject* __WorldContext, bool* bIsWarmGame, struct FSolarTablesData_WarmGameMode* WarmGameInfo, const struct FSolarTablesData_WarmGameMode& K2Node_MakeStruct_SolarTablesData_WarmGameMode, int32 CallFunc_GetWramGameType_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader, const struct FSolarTablesData_WarmGameMode& CallFunc_GetRowData_ReturnValue, bool CallFunc_HasRowKey_ReturnValue);
		void _S_PlayInEditor(class UObject* __WorldContext, bool* bIsEditor, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsPackagedForDistribution_ReturnValue, class USolarGameInstanceBase* CallFunc_GetSolarGameInstanceBase_ReturnValue, bool CallFunc_IsGIsEditor_ReturnValue, bool K2Node_Select_Default);
		void _A_GetBotTemplete(class UObject* __WorldContext, TMap<int32, int32>* Templete, TMap<int32, int32> NewLocalVar_0, TMap<int32, int32> K2Node_MakeVariable_MakeVariableOutput);
		void _A_GetExcelTableReader(class UObject* __WorldContext, class USolarTables_TablesReader** TablesReader, class USolarTables* CallFunc_GetInstance_ReturnValue);
		void _s__Set_Global_Damage_Enable(bool Enabled, class UObject* __WorldContext, class UGameModeGlobalSetting* CallFunc_GetGameModeSetting_ReturnValue);
		void _s__Get_Logic_Component(class UObject* __WorldContext, class UCGMLogicComponent** Logic_Component, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ASCustomGameMode* K2Node_DynamicCast_AsSCustom_Game_Mode, bool K2Node_DynamicCast_bSuccess);
		void _C_RemoveAllWidgetsFromBattleUI(enum class E_BattleControllerSlot Slot, class UObject* __WorldContext, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_ClearBattleUISlot_ReturnValue);
		void _C_InsertWidgetToBattleUI(class UUserWidget* Widget, enum class E_BattleControllerSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UPanelSlot* CallFunc_InsertWidgetToBattleUISlot_OutResultSlot, bool CallFunc_InsertWidgetToBattleUISlot_ReturnValue);
	};

}


