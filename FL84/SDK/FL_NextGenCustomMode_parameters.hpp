#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
	namespace Params
	{
		//---------------------------------------------------------------------------------------------------------------------
		// PARAMETERS
		//---------------------------------------------------------------------------------------------------------------------

		// 0x31 (0x31 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[ A]BindOnBasicSystemReady
		struct UFL_NextGenCustomMode_C___A_BindOnBasicSystemReady_Params
		{
		public:
			FDelegateProperty_                           Event;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         bReady;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsServer_ReturnValue;                     // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_240B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class AGameStateBase* CallFunc_GetGameState_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x20 (0x20 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.UseNewAiComp
		struct UFL_NextGenCustomMode_C_UseNewAiComp_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
			uint8                                        Pad_240D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class AGameModeBase* CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UCGMLogicComponent* CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x20 (0x20 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetAiComp
		struct UFL_NextGenCustomMode_C_GetAiComp_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USBattleRoyaleGameModeAIComp* AiComp;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AGameModeBase* CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USBattleRoyaleGameModeAIComp* CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x1B0 (0x1B0 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.SortMap
		struct UFL_NextGenCustomMode_C_SortMap_Params
		{
		public:
			TMap<class FString, float>                   MapIn;                                             // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
			bool                                         Ascending;                                         // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2413[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TMap<class FString, float>                   Sorted;                                            // 0x60(0x50)(Parm, OutParm)
			TMap<class FString, float>                   SortResult;                                        // 0xB0(0x50)(Edit, BlueprintVisible)
			TArray<class FString>                        KeyMap;                                            // 0x100(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2414[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x118(0x10)(ReferenceParm, HasGetValueTypeHash)
			int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable;                                // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2415[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Variable;                                 // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2416[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Variable_1;                               // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2417[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Array_Get_Item;                           // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Map_Find_Value;                           // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2418[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Array_Get_Item_1;                         // 0x178(0x10)(ZeroConstructor, HasGetValueTypeHash)
			float                                        CallFunc_Map_Find_Value_1;                         // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2419[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_241A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Array_Get_Item_2;                         // 0x198(0x10)(ZeroConstructor, HasGetValueTypeHash)
			float                                        CallFunc_Map_Find_Value_2;                         // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_Select_Default;                             // 0x1AF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x38 (0x38 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]ShowWidget
		struct UFL_NextGenCustomMode_C__c_ShowWidget_Params
		{
		public:
			class UClass* WidgetClass;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_UI_Root                         Layer;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_241C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UUserWidget* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_UI_Root                         Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_1;                              // 0x21(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_2;                              // 0x22(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_3;                              // 0x23(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_4;                              // 0x24(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_5;                              // 0x25(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_6;                              // 0x26(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_7;                              // 0x27(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_8;                              // 0x28(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           K2Node_Select_Default;                             // 0x29(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_241F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UUserWidget* CallFunc_ShowSolarWidget_ReturnValue;              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x38 (0x38 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]CreateWidget
		struct UFL_NextGenCustomMode_C__c_CreateWidget_Params
		{
		public:
			class UClass* WidgetClass;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_UI_Root                         Layer;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2422[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UUserWidget* WidgetObject;                                      // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_UI_Root                         Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_1;                              // 0x21(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_2;                              // 0x22(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_3;                              // 0x23(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_4;                              // 0x24(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_5;                              // 0x25(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_6;                              // 0x26(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_7;                              // 0x27(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_8;                              // 0x28(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           K2Node_Select_Default;                             // 0x29(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2424[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UUserWidget* CallFunc_CreateSolarWidget_ReturnValue;            // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0xB9 (0xB9 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetRandomKeyInWidget
		struct UFL_NextGenCustomMode_C_GetRandomKeyInWidget_Params
		{
		public:
			TMap<int32, int32>                           KeyMinusWeight;                                    // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
			class UObject* __WorldContext;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        HitKey;                                            // 0x58(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        SumWeight;                                         // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_242B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                CallFunc_Map_Keys_Keys;                            // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_242C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                CallFunc_Map_Values_Values;                        // 0x90(0x10)(ReferenceParm, HasGetValueTypeHash)
			int32                                        CallFunc_SumOfIntArray_Sum;                        // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Get_Item;                           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Map_Find_Value;                           // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_242D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x3C (0x3C - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.SumOfIntArray
		struct UFL_NextGenCustomMode_C_SumOfIntArray_Params
		{
		public:
			TArray<int32>                                Array;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Sum;                                               // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        NewLocalVar_0;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Get_Item;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2431[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x91 (0x91 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetTeamPlayerCount
		struct UFL_NextGenCustomMode_C_GetTeamPlayerCount_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Num_Mode;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2433[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_GetMatchRuleID_ReturnValue;               // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2434[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSolarTablesData_MatchRule            CallFunc_GetRowData_ReturnValue;                   // 0x20(0x70)(ConstParm)
			bool                                         CallFunc_HasRowKey_ReturnValue;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x30 (0x30 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetModeConfig
		struct UFL_NextGenCustomMode_C__A_GetModeConfig_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UCGMGameplayConfig* ModeConfig;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AGameStateBase* CallFunc_GetGameState_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State;           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2437[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UCGMGameplayConfig* CallFunc_GetCGMGameplayConfig_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x70 (0x70 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]SetWidgetVisibility
		struct UFL_NextGenCustomMode_C__C_SetWidgetVisibility_Params
		{
		public:
			enum class E_BattleControlWidgets            Widget;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Visibility;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_243B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_243C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USolarGlobalEventSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_ByteToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable;                              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_1;                            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                K2Node_Select_Default;                             // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x60(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
		};

		// 0x11 (0x11 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetDSTime
		struct UFL_NextGenCustomMode_C__A_GetDSTime_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Time;                                              // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_GetDataInt_OutValue;                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_GetDataInt_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x14 (0x14 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetBattleTime
		struct UFL_NextGenCustomMode_C__A_GetBattleTime_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Time;                                              // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_GetCurBattleTime_ReturnValue;             // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x1C (0x1C - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.ToBool
		struct UFL_NextGenCustomMode_C_ToBool_Params
		{
		public:
			class FString                                String;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Bool;                                              // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x160 (0x160 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]PrintLog
		struct UFL_NextGenCustomMode_C__A_PrintLog_Params
		{
		public:
			class FString                                Prefix;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			TMap<class FString, class FString>           InputPin;                                          // 0x10(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			class UObject* __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                Temp;                                              // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_GetGameModeID_ReturnValue;                // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2443[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x80(0x10)(ReferenceParm, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2444[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2445[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Array_Get_Item;                           // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Map_Find_Value;                           // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2447[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2448[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable;                              // 0x110(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0xA3 (0xA3 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetCharacters
		struct UFL_NextGenCustomMode_C__A_GetCharacters_Params
		{
		public:
			bool                                         OnlyRealPlayers;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2451[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<class ASolarCharacter*>               Characters;                                        // 0x10(0x10)(Parm, OutParm, HasGetValueTypeHash)
			TArray<class ASolarCharacter*>               Temp;                                              // 0x20(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
			TArray<uint8>                                Temp_byte_Variable;                                // 0x30(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2454[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        Temp_string_Variable;                              // 0x50(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
			TArray<enum class ESCMPlayerState>           Temp_byte_Variable_1;                              // 0x60(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
			TArray<class ASCMPlayerState*>               CallFunc_FindPlayers_ReturnValue;                  // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
			class ASCMPlayerState* CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2455[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class ASolarCharacter* CallFunc_GetSolarCharacter_ReturnValue;            // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2456[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsOBPlayer_ReturnValue;                   // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x11 (0x11 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetTeamCountMax
		struct UFL_NextGenCustomMode_C__A_GetTeamCountMax_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        OutValue;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_GetDataInt_OutValue;                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_GetDataInt_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x11 (0x11 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]SetTeamCountMax
		struct UFL_NextGenCustomMode_C__S_SetTeamCountMax_Params
		{
		public:
			int32                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2457[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_SetDataInt_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x11 (0x11 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetPlayerCountMax
		struct UFL_NextGenCustomMode_C__A_GetPlayerCountMax_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        OutValue;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_GetDataInt_OutValue;                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_GetDataInt_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x11 (0x11 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]SetPlayerCountMax
		struct UFL_NextGenCustomMode_C__S_SetPlayerCountMax_Params
		{
		public:
			int32                                        InValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_245C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_SetDataInt_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x34 (0x34 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]FillInCanvas
		struct UFL_NextGenCustomMode_C__c_FillInCanvas_Params
		{
		public:
			class UCanvasPanelSlot* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_245F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x14(0x10)(NoDestructor)
			struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x24(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x2D (0x2D - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]UpdateTeamsCount
		struct UFL_NextGenCustomMode_C__S_UpdateTeamsCount_Params
		{
		public:
			int32                                        Change;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Set;                                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2468[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Current;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        NewLocalVar_0;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_246A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_GetDataInt_OutValue;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_GetDataInt_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_246B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        K2Node_Select_Default;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_SetDataInt_ReturnValue;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x31 (0x31 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBigMapUI
		struct UFL_NextGenCustomMode_C__C_RemoveAllWidgetsFromBigMapUI_Params
		{
		public:
			enum class E_BigMapSlot                      Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2473[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2477[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_ClearMapUISlot_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x49 (0x49 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBigMapUI
		struct UFL_NextGenCustomMode_C__C_InsertWidgetToBigMapUI_Params
		{
		public:
			class UUserWidget* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_BigMapSlot                      Slot;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         bReplaceOldWidget;                                 // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_247A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPanelSlot* OutResultSlot;                                     // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Success;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_247B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPanelSlot* CallFunc_InsertWidgetToMapUISlot_OutResultSlot;    // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_InsertWidgetToMapUISlot_ReturnValue;      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x31 (0x31 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBackpackUI
		struct UFL_NextGenCustomMode_C__C_RemoveAllWidgetsFromBackpackUI_Params
		{
		public:
			enum class E_BackPackSlot                    Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_247F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2480[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_ClearBackpackUISlot_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x49 (0x49 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBackpackUI
		struct UFL_NextGenCustomMode_C__C_InsertWidgetToBackpackUI_Params
		{
		public:
			class UUserWidget* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_BackPackSlot                    Slot;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         bReplaceOldWidget;                                 // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2482[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPanelSlot* OutResultSlot;                                     // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Success;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2483[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPanelSlot* CallFunc_InsertWidgetToBackpackUISlot_OutResultSlot; // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_InsertWidgetToBackpackUISlot_ReturnValue; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x20 (0x20 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s]IsTesting
		struct UFL_NextGenCustomMode_C__s_IsTesting_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Testing;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2484[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class AGameStateBase* CallFunc_GetGameState_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarGameplayConfigComponent* CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x8C (0x8C - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetAllRealPlayers
		struct UFL_NextGenCustomMode_C__A_GetAllRealPlayers_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<class ASCMPlayerState*>               RealPlayers;                                       // 0x8(0x10)(Parm, OutParm, HasGetValueTypeHash)
			TArray<class ASCMPlayerState*>               NewLocalVar_0;                                     // 0x18(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
			TArray<uint8>                                Temp_byte_Variable;                                // 0x28(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2485[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        Temp_string_Variable;                              // 0x48(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
			TArray<enum class ESCMPlayerState>           Temp_byte_Variable_1;                              // 0x58(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
			TArray<class ASCMPlayerState*>               CallFunc_FindPlayers_ReturnValue;                  // 0x68(0x10)(ReferenceParm, HasGetValueTypeHash)
			class ASCMPlayerState* CallFunc_Array_Get_Item;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2488[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0xB8 (0xB8 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]PrintStringArray
		struct UFL_NextGenCustomMode_C__A_PrintStringArray_Params
		{
		public:
			class FString                                Prefix;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			TArray<class FString>                        Array;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                Final;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_248E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_248F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Array_Get_Item;                           // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2490[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2492[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x45 (0x45 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]DataInt++
		struct UFL_NextGenCustomMode_C__A_DataIntPlusPlus_Params
		{
		public:
			enum class ESCMHostType                      HostType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2493[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                HostID;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                DataName;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			int32                                        InValue;                                           // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2494[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_GetDataInt_OutValue;                      // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_GetDataInt_ReturnValue;                   // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2495[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_SetDataInt_ReturnValue;                   // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x33C (0x33C - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetRandomLocationNearby
		struct UFL_NextGenCustomMode_C__A_GetRandomLocationNearby_Params
		{
		public:
			struct FVector                               Center;                                            // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        Radius;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               TargetLocation1;                                   // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               TargetLocation;                                    // 0x24(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<struct FVector>                       ValidTarget;                                       // 0x30(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
			TArray<class ASolarCharacter*>               Ignore;                                            // 0x40(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2498[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class ASolarCharacter*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x58(0x10)(ReferenceParm, HasGetValueTypeHash)
			int32                                        Temp_int_Variable;                                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2499[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_249A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_BreakVector_X;                            // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Y;                            // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Z;                            // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x94(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x9C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_GetRotated2D_ReturnValue;                 // 0xA4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_249B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0xB0(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_Normal2D_ReturnValue;                     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_X_1;                          // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Y_1;                          // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Z_1;                          // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0xDC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xE4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector2D_X;                          // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector2D_Y;                          // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0xF8(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
			bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_249C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x184(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FHitResult                            CallFunc_LineTraceSingleForObjects_OutHit;         // 0x194(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
			bool                                         CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x21D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x21E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_249D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_BreakHitResult_Time;                      // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakHitResult_Distance;                  // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x228(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x234(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x240(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x24C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;                   // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AActor* CallFunc_BreakHitResult_HitActor;                  // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;              // 0x268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x280(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x28C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_X_2;                          // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Y_2;                          // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Z_2;                          // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BreakHitResult_bBlockingHit_1;            // 0x2A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x2A5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_249E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_BreakHitResult_Time_1;                    // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakHitResult_Distance_1;                // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_Location_1;                // 0x2B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_ImpactPoint_1;             // 0x2BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_Normal_1;                  // 0x2C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_ImpactNormal_1;            // 0x2D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1;                 // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AActor* CallFunc_BreakHitResult_HitActor_1;                // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1;            // 0x2F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FName                                  CallFunc_BreakHitResult_HitBoneName_1;             // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_HitItem_1;                 // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_FaceIndex_1;               // 0x304(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_TraceStart_1;              // 0x308(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_TraceEnd_1;                // 0x314(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x324(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               K2Node_Select_Default;                             // 0x330(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x2D (0x2D - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.UpdatePlayerCount
		struct UFL_NextGenCustomMode_C_UpdatePlayerCount_Params
		{
		public:
			int32                                        Change;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Set;                                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Current;                                           // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        NewLocalVar_0;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_GetDataInt_OutValue;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_GetDataInt_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24A4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        K2Node_Select_Default;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_SetDataInt_ReturnValue;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x8 (0x8 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.BattleOver
		struct UFL_NextGenCustomMode_C_BattleOver_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x1B8 (0x1B8 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.DeathReason2String
		struct UFL_NextGenCustomMode_C_DeathReason2String_Params
		{
		public:
			enum class ESCMDamageType                    DamageType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                TraceString;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_ByteToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			enum class ESCMDamageType                    Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Temp_string_Variable;                              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_1;                            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_2;                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_3;                            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_4;                            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_5;                            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_6;                            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_7;                            // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_8;                            // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_9;                            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_10;                           // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_11;                           // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_12;                           // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_13;                           // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_14;                           // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_15;                           // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_16;                           // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_17;                           // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_18;                           // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_19;                           // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_20;                           // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                K2Node_Select_Default;                             // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                K2Node_Select_Default_1;                           // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x2D (0x2D - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetPlayerType
		struct UFL_NextGenCustomMode_C__A_GetPlayerType_Params
		{
		public:
			class ASCMPlayerState* Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_PlayerType                      PlayerType;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EBotAIType                        Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class AAIController* CallFunc_GetAIController_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ASolarBotAIController* K2Node_DynamicCast_AsSolar_Bot_AIController;       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			enum class E_PlayerType                      Temp_byte_Variable_1;                              // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_PlayerType                      Temp_byte_Variable_2;                              // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_PlayerType                      Temp_byte_Variable_3;                              // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_PlayerType                      K2Node_Select_Default;                             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x105 (0x105 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetOutcomIDByChestID
		struct UFL_NextGenCustomMode_C__S_GetOutcomIDByChestID_Params
		{
		public:
			int32                                        Key;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        OutcomeID;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        NewLocalVar_1;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        NewLocalVar_0;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader;      // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_HasRowKey_ReturnValue;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSolarTablesData_ChestSpawn           CallFunc_GetRowData_ReturnValue;                   // 0x30(0x40)(ConstParm)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSolarTablesData_Chest                CallFunc_GetRowData_ReturnValue_1;                 // 0x78(0x88)(ConstParm)
			int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_HasRowKey_ReturnValue_1;                  // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xA8 (0xA8 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2DArray2String
		struct UFL_NextGenCustomMode_C_Vector2DArray2String_Params
		{
		public:
			TArray<struct FVector2D>                     Vector;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                Str;                                               // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_Array_Get_Item;                           // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Vector2D2String_Str;                      // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Len_ReturnValue;                          // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24B6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Mid_ReturnValue;                          // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0xA8 (0xA8 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.VectorArray2String
		struct UFL_NextGenCustomMode_C_VectorArray2String_Params
		{
		public:
			TArray<struct FVector>                       Vector;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                Str;                                               // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_Array_Get_Item;                           // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Vector2String_Str;                        // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Len_ReturnValue;                          // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Mid_ReturnValue;                          // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x68 (0x68 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2D2String
		struct UFL_NextGenCustomMode_C_Vector2D2String_Params
		{
		public:
			struct FVector2D                             Vector;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                Str;                                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector2D_X;                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector2D_Y;                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x52 (0x52 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.�	�:pW
		struct UFL_NextGenCustomMode_C_____pW_Params
		{
		public:
			int32                                        _P;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        _O;                                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<int32>                                _d;                                                // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Result;                                            // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                LOCAL___pW_;                                       // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
			int32                                        Temp_int_Variable;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24D2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Get_Item;                           // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xA (0xA - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetBuildPackageType
		struct UFL_NextGenCustomMode_C__S_GetBuildPackageType_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class ESolarBuildConfiguration          S___;                                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class ESolarBuildConfiguration          CallFunc_GetBuildConfiguration_ReturnValue;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x1F0 (0x1F0 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]Number2Letter
		struct UFL_NextGenCustomMode_C__S_Number2Letter_Params
		{
		public:
			int32                                        Number;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                Letter;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         Valid;                                             // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Variable;                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_InRange_IntInt_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Temp_string_Variable;                              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_1;                            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_2;                            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_3;                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_4;                            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_5;                            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_6;                            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_7;                            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_8;                            // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_9;                            // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_10;                           // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_11;                           // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_12;                           // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_13;                           // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_14;                           // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_15;                           // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_16;                           // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_17;                           // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_18;                           // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_19;                           // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_20;                           // 0x170(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_21;                           // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_22;                           // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_23;                           // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_24;                           // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_25;                           // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_26;                           // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                K2Node_Select_Default;                             // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0xA8 (0xA8 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2String
		struct UFL_NextGenCustomMode_C_Vector2String_Params
		{
		public:
			struct FVector                               Vector;                                            // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                Str;                                               // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_X;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Y;                            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Z;                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x58 (0x58 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Bool2String
		struct UFL_NextGenCustomMode_C_Bool2String_Params
		{
		public:
			bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                String;                                            // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Temp_string_Variable;                              // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_1;                            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                K2Node_Select_Default;                             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x199 (0x199 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.��0bئ
		struct UFL_NextGenCustomMode_C___0b___Params
		{
		public:
			struct FVector                               Mn;                                                // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         __0_;                                              // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               ZerobMn;                                           // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        Z;                                                 // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         __4Minus;                                          // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         Temp_bool_Variable;                                // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24E9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_BreakVector_X;                            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Y;                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Z;                            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable_1;                              // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               K2Node_Select_Default;                             // 0x54(0xC)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<class AActor*>                        Temp_object_Variable;                              // 0x60(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
			struct FVector                               K2Node_Select_Default_1;                           // 0x70(0xC)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x7C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
			bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24EB[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_BreakHitResult_Time;                      // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakHitResult_Distance;                  // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x110(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x11C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x128(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x134(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;                   // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AActor* CallFunc_BreakHitResult_HitActor;                  // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;              // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x168(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x174(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_X_1;                          // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Y_1;                          // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakVector_Z_1;                          // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24EC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class ABP_SolarWaterActor_C* K2Node_DynamicCast_AsBP_Solar_Water_Actor;         // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x68 (0x68 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.ToInt(StringArray)
		struct UFL_NextGenCustomMode_C_ToInt_StringArray__Params
		{
		public:
			TArray<class FString>                        Str;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<int32>                                Int;                                               // 0x18(0x10)(Parm, OutParm, HasGetValueTypeHash)
			TArray<int32>                                Temp;                                              // 0x28(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Array_Get_Item;                           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0xF4 (0xF4 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetMiniMapSize
		struct UFL_NextGenCustomMode_C__A_GetMiniMapSize_Params
		{
		public:
			int32                                        MapId;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             Size;                                              // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader;      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FSolarTablesData_GameMap              CallFunc_GetRowData_ReturnValue;                   // 0x20(0xC0)(ConstParm)
			bool                                         CallFunc_HasRowKey_ReturnValue;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_Array_Get_Item;                           // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Array_Get_Item_1;                         // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0xEC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x38 (0x38 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetMapIDByName
		struct UFL_NextGenCustomMode_C__S_GetMapIDByName_Params
		{
		public:
			class FString                                LevelName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        MapId;                                             // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24F5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class AGameStateBase* CallFunc_GetGameState_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ASCustomGameState* K2Node_DynamicCast_AsSCustom_Game_State;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_GetMapIDByName_ReturnValue;               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x20 (0x20 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetModeMainLogic
		struct UFL_NextGenCustomMode_C__S_GetModeMainLogic_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UCGMLogicComponent* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AGameModeBase* CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UCGMLogicComponent* CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0xD9 (0xD9 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]DeployPlayer
		struct UFL_NextGenCustomMode_C__S_DeployPlayer_Params
		{
		public:
			class ASolarPlayerState* TargetPlayer;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class APlayerStart* PlayerStart;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         ClearPlayerItems;                                  // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class ASolarCharacter* K2Node_DynamicCast_AsSolar_Character;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
			struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x40(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_24FC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x50(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
			bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x30 (0x30 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]WorldLocationToMiniMap
		struct UFL_NextGenCustomMode_C__A_WorldLocationToMiniMap_Params
		{
		public:
			struct FVector                               WorldLocation;                                     // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             MiniMapPosition;                                   // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarMapManager* CallFunc__A_GetMapManager_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_WorldLocationToMiniMap_ReturnValue;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x3C (0x3C - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]MiniMapToWorldLocation
		struct UFL_NextGenCustomMode_C__A_MiniMapToWorldLocation_Params
		{
		public:
			struct FVector2D                             MiniMapPosition;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        Z;                                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_24FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               WorldLocation;                                     // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2500[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USolarMapManager* CallFunc__A_GetMapManager_ReturnValue;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_MiniMapToWorldLocation_ReturnValue;       // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x41 (0x41 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c] Create Widget And Display
		struct UFL_NextGenCustomMode_C__c__Create_Widget_And_Display_Params
		{
		public:
			class UClass* WidgetClass;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_UI_Root                         DisplayLayer;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2502[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarUserWidget* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_UI_Root                         Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_1;                              // 0x21(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_2;                              // 0x22(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_3;                              // 0x23(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_4;                              // 0x24(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_5;                              // 0x25(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_6;                              // 0x26(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_7;                              // 0x27(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           Temp_byte_Variable_8;                              // 0x28(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class EUIRoot                           K2Node_Select_Default;                             // 0x29(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_2503[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UUserWidget* CallFunc_ShowSolarWidget_ReturnValue;              // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarUserWidget* K2Node_DynamicCast_AsSolar_User_Widget;            // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x30 (0x30 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetMapManager
		struct UFL_NextGenCustomMode_C__A_GetMapManager_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarMapManager* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarGameInstanceBase* K2Node_DynamicCast_AsSolar_Game_Instance_Base;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2505[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USolarMapManager* CallFunc_GetSolarMapManager_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x20 (0x20 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]GetLocalCharacter
		struct UFL_NextGenCustomMode_C__C_GetLocalCharacter_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ASolarCharacter* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ASCMPlayerState* CallFunc_GetLocalPlayer_ReturnValue;               // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ASolarCharacter* CallFunc_GetSolarCharacter_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x159 (0x159 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s]GetWarmGameInfo
		struct UFL_NextGenCustomMode_C__s_GetWarmGameInfo_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         bIsWarmGame;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2506[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSolarTablesData_WarmGameMode         WarmGameInfo;                                      // 0x10(0x68)(ConstParm, Parm, OutParm)
			struct FSolarTablesData_WarmGameMode         K2Node_MakeStruct_SolarTablesData_WarmGameMode;    // 0x78(0x68)(None)
			int32                                        CallFunc_GetWramGameType_ReturnValue;              // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2507[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USolarTables_TablesReader* CallFunc__A_GetExcelTableReader_TablesReader;      // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FSolarTablesData_WarmGameMode         CallFunc_GetRowData_ReturnValue;                   // 0xF0(0x68)(ConstParm)
			bool                                         CallFunc_HasRowKey_ReturnValue;                    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1A (0x1A - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]PlayInEditor
		struct UFL_NextGenCustomMode_C__S_PlayInEditor_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         bIsEditor;                                         // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         Temp_bool_Variable;                                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         Temp_bool_Variable_1;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsPackagedForDistribution_ReturnValue;    // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2508[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USolarGameInstanceBase* CallFunc_GetSolarGameInstanceBase_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsGIsEditor_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_Select_Default;                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xF8 (0xF8 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetBotTemplete
		struct UFL_NextGenCustomMode_C__A_GetBotTemplete_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TMap<int32, int32>                           Templete;                                          // 0x8(0x50)(Parm, OutParm)
			TMap<int32, int32>                           NewLocalVar_0;                                     // 0x58(0x50)(Edit, BlueprintVisible)
			TMap<int32, int32>                           K2Node_MakeVariable_MakeVariableOutput;            // 0xA8(0x50)(None)
		};

		// 0x18 (0x18 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetExcelTableReader
		struct UFL_NextGenCustomMode_C__A_GetExcelTableReader_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarTables_TablesReader* TablesReader;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USolarTables* CallFunc_GetInstance_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x18 (0x18 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s] Set Global Damage Enable
		struct UFL_NextGenCustomMode_C__s__Set_Global_Damage_Enable_Params
		{
		public:
			bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_250A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UGameModeGlobalSetting* CallFunc_GetGameModeSetting_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x21 (0x21 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s] Get Logic Component
		struct UFL_NextGenCustomMode_C__s__Get_Logic_Component_Params
		{
		public:
			class UObject* __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UCGMLogicComponent* Logic_Component;                                   // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AGameModeBase* CallFunc_GetGameMode_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ASCustomGameMode* K2Node_DynamicCast_AsSCustom_Game_Mode;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x31 (0x31 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBattleUI
		struct UFL_NextGenCustomMode_C__C_RemoveAllWidgetsFromBattleUI_Params
		{
		public:
			enum class E_BattleControllerSlot            Slot;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_250B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_250C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_ClearBattleUISlot_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x49 (0x49 - 0x0)
		// Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBattleUI
		struct UFL_NextGenCustomMode_C__C_InsertWidgetToBattleUI_Params
		{
		public:
			class UUserWidget* Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class E_BattleControllerSlot            Slot;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         bReplaceOldWidget;                                 // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_250F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UObject* __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPanelSlot* OutResultSlot;                                     // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Success;                                           // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_2510[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPanelSlot* CallFunc_InsertWidgetToBattleUISlot_OutResultSlot; // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_InsertWidgetToBattleUISlot_ReturnValue;   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

	}
}


