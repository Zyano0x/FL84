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
	 * Function SLTA.SLTA_BPL.WriteTxt
	 */
	struct USLTA_BPL_WriteTxt_Params
	{
	public:
		class FString                                              saveString;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Path;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SLTA.SLTA_BPL.SLTA_SetDetailMode
	 */
	struct USLTA_BPL_SLTA_SetDetailMode_Params
	{
	public:
		class USceneComponent*                                     _sceneComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SLTA.SLTA_BPL.SLTA_GetPrimitivesRHI
	 */
	struct USLTA_BPL_SLTA_GetPrimitivesRHI_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SLTA.SLTA_BPL.SLTA_GetLightMapIndex
	 */
	struct USLTA_BPL_SLTA_GetLightMapIndex_Params
	{
	public:
		class UStaticMeshComponent*                                _ustaticMeshComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SLTA.SLTA_BPL.SLTA_GetLightMapCoordinateBias
	 */
	struct USLTA_BPL_SLTA_GetLightMapCoordinateBias_Params
	{
	public:
		class UStaticMeshComponent*                                _ustaticMeshComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_43IF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector4                                            ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SLTA.SLTA_BPL.SLTA_GetDrawcalls
	 */
	struct USLTA_BPL_SLTA_GetDrawcalls_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SLTA.SLTA_BPL.SLTA_GetCustomPrimitiveData
	 */
	struct USLTA_BPL_SLTA_GetCustomPrimitiveData_Params
	{
	public:
		class UPrimitiveComponent*                                 _primitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<float>                                              ReturnValue;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SLTA.SLTA_BPL.SLTA_ArrayToCSV
	 */
	struct USLTA_BPL_SLTA_ArrayToCSV_Params
	{
	public:
		class FString                                              SaveDirectory;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              TitleName;                                               // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      SaveText;                                                // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ArrayIndex;                                              // 0x0040(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       AllowOverwriting;                                        // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0045(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SLTA.SLTA_BPL.ReadTxt
	 */
	struct USLTA_BPL_ReadTxt_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
