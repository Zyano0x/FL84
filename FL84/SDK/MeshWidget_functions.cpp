#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MeshWidget.MeshWidgetUWidget
// (None)

class UClass* UMeshWidgetUWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshWidgetUWidget");

	return Clss;
}


// MeshWidgetUWidget MeshWidget.Default__MeshWidgetUWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshWidgetUWidget* UMeshWidgetUWidget::GetDefaultObj()
{
	static class UMeshWidgetUWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshWidgetUWidget*>(UMeshWidgetUWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshWidget.ParticleWidget
// (None)

class UClass* UParticleWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleWidget");

	return Clss;
}


// ParticleWidget MeshWidget.Default__ParticleWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleWidget* UParticleWidget::GetDefaultObj()
{
	static class UParticleWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleWidget*>(UParticleWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshWidget.MeshRectangleWidget
// (None)

class UClass* UMeshRectangleWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshRectangleWidget");

	return Clss;
}


// MeshRectangleWidget MeshWidget.Default__MeshRectangleWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UMeshRectangleWidget* UMeshRectangleWidget::GetDefaultObj()
{
	static class UMeshRectangleWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeshRectangleWidget*>(UMeshRectangleWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MeshWidget.MeshRectangleWidget.SetInstanceNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewNum                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshRectangleWidget::SetInstanceNum(int32 NewNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshRectangleWidget", "SetInstanceNum");

	Params::UMeshRectangleWidget_SetInstanceNum_Params Parms{};

	Parms.NewNum = NewNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshWidget.MeshRectangleWidget.ModifyInstanceNum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              DNum                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMeshRectangleWidget::ModifyInstanceNum(int32 DNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshRectangleWidget", "ModifyInstanceNum");

	Params::UMeshRectangleWidget_ModifyInstanceNum_Params Parms{};

	Parms.DNum = DNum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function MeshWidget.MeshRectangleWidget.InitUnitTestProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMeshRectangleWidget::InitUnitTestProvider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MeshRectangleWidget", "InitUnitTestProvider");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class MeshWidget.TextMeshWidget
// (None)

class UClass* UTextMeshWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextMeshWidget");

	return Clss;
}


// TextMeshWidget MeshWidget.Default__TextMeshWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextMeshWidget* UTextMeshWidget::GetDefaultObj()
{
	static class UTextMeshWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextMeshWidget*>(UTextMeshWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class MeshWidget.ProgressBarMeshWidget
// (None)

class UClass* UProgressBarMeshWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressBarMeshWidget");

	return Clss;
}


// ProgressBarMeshWidget MeshWidget.Default__ProgressBarMeshWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UProgressBarMeshWidget* UProgressBarMeshWidget::GetDefaultObj()
{
	static class UProgressBarMeshWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressBarMeshWidget*>(UProgressBarMeshWidget::StaticClass()->DefaultObject);

	return Default;
}

}


