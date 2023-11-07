﻿#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * WidgetBlueprintGeneratedClass UI_Lobby_Video_Hunt.UI_Lobby_Video_Hunt_C
	 * Size -> 0x0018 (FullSize[0x0418] - InheritedSize[0x0400])
	 */
	class UUI_Lobby_Video_Hunt_C : public USolarUserWidget
	{
	public:
		class UButton*                                             Btn_Close;                                               // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Img_VideoPlayer;                                         // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetModuleName();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif