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
	 * DynamicClass SpecABP_Vehicle.SpecABP_Vehicle_C
	 * Size -> 0x4C00 (FullSize[0x4FB0] - InheritedSize[0x03B0])
	 */
	class USpecABP_Vehicle_C : public USolarSpecABP_Vehicle
	{
	public:
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x03B0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x03E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x0408(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x0430(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x0458(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x0480(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x04A8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x04D0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x04F8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0520(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_6;                   // 0x0548(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAZ6[0x8];                                   // 0x0568(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_3;                               // 0x0570(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6;                   // 0x0750(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_11;                                   // 0x0770(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x07B8(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x07E0(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x0808(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x0830(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x0858(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x0880(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_19;                       // 0x08A8(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x0988(0x00A8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x0A30(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0AA8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_10;                                   // 0x0AD8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_18;                       // 0x0B20(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_9;                                    // 0x0C00(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_17;                       // 0x0C48(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_8;                                    // 0x0D28(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_7;                                    // 0x0D70(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_6;                                    // 0x0DB8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MultiWayBlend                             AnimGraphNode_MultiWayBlend_2;                           // 0x0E00(0x0050) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_16;                       // 0x0E50(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_15;                       // 0x0F30(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_14;                       // 0x1010(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x10F0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x1120(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x1198(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_13;                       // 0x11C8(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_5;                                    // 0x12A8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_12;                       // 0x12F0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_11;                       // 0x13D0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_10;                       // 0x14B0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_9;                        // 0x1590(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_4;                                    // 0x1670(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x16B8(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1700(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x1748(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_MultiWayBlend                             AnimGraphNode_MultiWayBlend;                             // 0x1790(0x0050) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x17E0(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_8;                        // 0x1810(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x18F0(0x00A8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_7;                        // 0x1998(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1A78(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x1AA8(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1B58(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x1B88(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x1C00(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x1C30(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x1CA8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x1D20(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x1D98(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x1E10(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x1E88(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x1F00(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x1F78(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_12;                        // 0x1FF0(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x20A8(0x00C0) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_6;                // 0x2168(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_5;                // 0x22F0(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_4;                // 0x2478(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_3;                // 0x2600(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_11;                        // 0x2788(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_5;                   // 0x2840(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_5;                   // 0x2860(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x2880(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x2988(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x2A00(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_10;                        // 0x2B88(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x2C40(0x0188) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x2DC8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2E40(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4;                   // 0x2E70(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x2E90(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_4;                   // 0x2F98(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_3;                   // 0x2FB8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x2FD8(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x30E0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x3158(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x31D0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_9;                         // 0x3248(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x3300(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_8;                         // 0x3378(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x3430(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x34A8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3;                   // 0x3520(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x3540(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x35B8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x3630(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x3710(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x37F0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_7;                         // 0x38D0(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x3988(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x3A00(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x3A78(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_6;                         // 0x3AF0(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x3BA8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x3C20(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x3C98(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_5;                         // 0x3D10(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x3DC8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x3E40(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x3EB8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_4;                         // 0x3F30(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x3FE8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_2;                   // 0x4018(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_2;                   // 0x4038(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x4058(0x0108) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x4160(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x41D8(0x00A8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x4280(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x42F8(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x43D8(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x43F8(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERK9[0x8];                                   // 0x4418(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK_2;                               // 0x4420(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_TwoBoneIK                                 AnimGraphNode_TwoBoneIK;                                 // 0x4600(0x01E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x47E0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x48C0(0x00E0) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x49A0(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_4;                       // 0x4A18(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_3;                       // 0x4A60(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_3;                         // 0x4AA8(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x4B60(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator_2;                       // 0x4C18(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_SequenceEvaluator                         AnimGraphNode_SequenceEvaluator;                         // 0x4C60(0x0048) NativeAccessSpecifierPublic
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x4CA8(0x00B8) NativeAccessSpecifierPublic
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x4D60(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x4DD8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x4E08(0x0028) NativeAccessSpecifierPublic
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x4E30(0x00B0) NativeAccessSpecifierPublic
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x4EE0(0x0030) NativeAccessSpecifierPublic
		struct FVector                                             BlazingInfantryRiderOffset;                              // 0x4F10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MotorBikeDriverOffset;                                   // 0x4F1C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X;                                // 0x4F28(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y;                                // 0x4F2C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_2;                              // 0x4F30(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_2;                              // 0x4F34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_3;                              // 0x4F38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_3;                              // 0x4F3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_4;                              // 0x4F40(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_4;                              // 0x4F44(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_5;                              // 0x4F48(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_5;                              // 0x4F4C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_6;                              // 0x4F50(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_6;                              // 0x4F54(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_7;                              // 0x4F58(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_7;                              // 0x4F5C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_8;                              // 0x4F60(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_8;                              // 0x4F64(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_9;                              // 0x4F68(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_9;                              // 0x4F6C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_10;                             // 0x4F70(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_10;                             // 0x4F74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_11;                             // 0x4F78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_11;                             // 0x4F7C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_12;                             // 0x4F80(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_12;                             // 0x4F84(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_13;                             // 0x4F88(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_13;                             // 0x4F8C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_14;                             // 0x4F90(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_14;                             // 0x4F94(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_15;                             // 0x4F98(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_15;                             // 0x4F9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_16;                             // 0x4FA0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_16;                             // 0x4FA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_X_17;                             // 0x4FA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CallFunc_BreakVector2D_Y_17;                             // 0x4FAC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void VehicleLocamotion(struct FPoseLink* bpp__VehicleLocamotion__pf);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TwoBoneIK_F5F948B24895D518310532A77D67A56C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TwoBoneIK_72F9137D41CA9D7FA79887A6A79E7AF5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TwoBoneIK_2F835BAA4D173726DBC2F3B96015EEEA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_F4723ADD4AA947DC1294A99E4FC4A171();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_D677C00945E71C30C03881B3F3791B76();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_D5D7698743D98473A591B398F0318DEB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_B556C8FB44EB284ABDC197B21446D0FA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_B2B3C4D04EBBACBF28F384A24DB94D26();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_A41BFA1D439AF315717DA0BABC1C363D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_96C9884440FCBAF8D8FA0C9C5C84E18A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_9675DB2443FF99F00F649E98D13D6E91();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_95F42B514D5E3E04946D2B94055EF956();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_42092C794B43C321620EEFADCCA15C7C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_35034AA7485F327C1889E7B9106CCDDF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_0F4023F341DE5B95FE773BA275825F6F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_0BA4BEC7408D64678BC4369B651D1E59();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_0667AFD44BE2EA0A6774E0AA2FE2C72B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_TransitionResult_0161E461448EF1E4D23F6A992B7B5C30();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_SequenceEvaluator_D3E868134287EB51919A618F35FE7E1B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_SequenceEvaluator_5FCEC9C74B7AA7EDFB24A8B85C653678();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_SequenceEvaluator_34A426DD4561007BA44B93B2C729336E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_SequenceEvaluator_11BCD0B5483922F670C11BACECBB4AF7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_RotationOffsetBlendSpace_F201154C422F6DF3F8D671A1746AD81A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_RotationOffsetBlendSpace_C93BBD6F4E4E408950E3EEB0B2ABCF4D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_RotationOffsetBlendSpace_ACCB41014C7BA03EC73E9C851E78CDB5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_RotationOffsetBlendSpace_954ACDF547A5FD23C4716D9612E86F46();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_RotationOffsetBlendSpace_68F8463149C6AB5FD10161B50DAC43D3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_RotationOffsetBlendSpace_1B661D9040003F4C7A9E1EA2929F5BD0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_MultiWayBlend_8F5D66904DCBA740F5ACBCACBE17DB04();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_MultiWayBlend_20930588403BA211DB5840B65D62A86D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_ModifyBone_8D47F0534DB2AD98BC7DA39AC1255B1F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_ModifyBone_8D12E28049DD9CB2F8A7CDBD4BF4098D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_ModifyBone_6D2BC14A487EBE5CBDF7488BEA364B3B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_ModifyBone_49AF83784D544682F3B5D79CC4623D48();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_F1D53BE74B3582B719235D97CEB01024();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_F1A7EFCF4D3CCDD4FD70C9B516658E37();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_EDD0AF7B46D55462B24312B62E2EFC90();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_E95C9CA54C44F724CB95EC8F11A87489();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_D4318FF84EF2D17633DDA9A2D2E5A533();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_CC8CF8434B7DBAFE2DDF6A883713FC15();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_C2B780A3470FF33E90C343AABCB908EB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_B07BAB8E4C0DE2191B1E1383A947931D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_AD7F7D7A43AB65D3BF022BADADCA471A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_AAB977C945C99954E681D58E1EE7204D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_84685D214BA481F42FB2A58F202B7BDD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_7362EA5E4ABCB217F344359A557CA439();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_6D12CC854A8A4EC58EDED098500FA1B3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_643A40EA48DA47EE66905E8E0336E51A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_58402FBC41C07F9EA92CEC9898DFEEFF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_56BFEF4B4C3E3EDD47B896A88EC316AA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_36649B2148A532C2E45046A32DC5599B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_2618A2234D2E868647C7EAA02D2792EE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendSpacePlayer_1BF2799B495CA840C075E9A16D547713();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_F0F440C04F0A4132B39741BBB3EC2CFD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_EF3F614D44265BD4FB16AAB350D61377();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_E44DDCE942EF746B7D29328C1E136FE2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_E0A02960419F6121F45D1AA8CB63B48B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_DEA6A8A54C6770746FDD24B92C910704();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_DE68AE1549E1E9F8B545D3B31289231D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_C1DCC6374D3E2494D8A36CA9D1EBE34E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_8613B2DF4C5D25916CCE4F826C4489F6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_803525AE49F66BA1BE0A858C938EB8CD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_6ED2DE8A40BF6371727EBAA21F775201();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_571A583444F829CC670BAD95425B78C9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByEnum_0C0D1DC74A85E3EA544598A0B00DCDDF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByBool_5AC86A344A0A103389969CAE00B75B98();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByBool_3F2622DB40EB4E393E7482B3D396E87E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_SpecABP_Vehicle_AnimGraphNode_BlendListByBool_1883EB8A4F7D581A300CD98232E84D73();
		void AnimNotify_EnterIronManBrakeState();
		void AnimGraph(struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
