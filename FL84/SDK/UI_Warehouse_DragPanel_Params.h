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
	 * Function UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C.OnMouseButtonUp
	 */
	struct UUI_Warehouse_DragPanel_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C.OnMouseMove
	 */
	struct UUI_Warehouse_DragPanel_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C.Construct
	 */
	struct UUI_Warehouse_DragPanel_C_Construct_Params
	{	};

	/**
	 * Function UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C.OnMouseButtonDown
	 */
	struct UUI_Warehouse_DragPanel_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Warehouse_DragPanel.UI_Warehouse_DragPanel_C.GetModuleName
	 */
	struct UUI_Warehouse_DragPanel_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
