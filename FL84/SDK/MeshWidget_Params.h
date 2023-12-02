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
	 * Function MeshWidget.MeshRectangleWidget.SetInstanceNum
	 */
	struct UMeshRectangleWidget_SetInstanceNum_Params
	{
	public:
		int32_t                                                    NewNum;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshWidget.MeshRectangleWidget.ModifyInstanceNum
	 */
	struct UMeshRectangleWidget_ModifyInstanceNum_Params
	{
	public:
		int32_t                                                    dNum;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MeshWidget.MeshRectangleWidget.InitUnitTestProvider
	 */
	struct UMeshRectangleWidget_InitUnitTestProvider_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
