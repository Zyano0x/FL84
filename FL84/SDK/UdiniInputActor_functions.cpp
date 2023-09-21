#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UdiniInputActor.UdiniInputActorBase
// (Actor)

class UClass* AUdiniInputActorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniInputActorBase");

	return Clss;
}


// UdiniInputActorBase UdiniInputActor.Default__UdiniInputActorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class AUdiniInputActorBase* AUdiniInputActorBase::GetDefaultObj()
{
	static class AUdiniInputActorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<AUdiniInputActorBase*>(AUdiniInputActorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.AInputStaticmeshActorRuntime
// (Actor)

class UClass* AAInputStaticmeshActorRuntime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AInputStaticmeshActorRuntime");

	return Clss;
}


// AInputStaticmeshActorRuntime UdiniInputActor.Default__AInputStaticmeshActorRuntime
// (Public, ClassDefaultObject, ArchetypeObject)

class AAInputStaticmeshActorRuntime* AAInputStaticmeshActorRuntime::GetDefaultObj()
{
	static class AAInputStaticmeshActorRuntime* Default = nullptr;

	if (!Default)
		Default = static_cast<AAInputStaticmeshActorRuntime*>(AAInputStaticmeshActorRuntime::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.EditorMeshComponet
// (SceneComponent, PrimitiveComponent)

class UClass* UEditorMeshComponet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditorMeshComponet");

	return Clss;
}


// EditorMeshComponet UdiniInputActor.Default__EditorMeshComponet
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditorMeshComponet* UEditorMeshComponet::GetDefaultObj()
{
	static class UEditorMeshComponet* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditorMeshComponet*>(UEditorMeshComponet::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.InputDataListAsset
// (None)

class UClass* UInputDataListAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputDataListAsset");

	return Clss;
}


// InputDataListAsset UdiniInputActor.Default__InputDataListAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputDataListAsset* UInputDataListAsset::GetDefaultObj()
{
	static class UInputDataListAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputDataListAsset*>(UInputDataListAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.IUdiniInputCoreInterface
// (None)

class UClass* IIUdiniInputCoreInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IUdiniInputCoreInterface");

	return Clss;
}


// IUdiniInputCoreInterface UdiniInputActor.Default__IUdiniInputCoreInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IIUdiniInputCoreInterface* IIUdiniInputCoreInterface::GetDefaultObj()
{
	static class IIUdiniInputCoreInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IIUdiniInputCoreInterface*>(IIUdiniInputCoreInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttribute
// (None)

class UClass* UUdiniAttribute::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttribute");

	return Clss;
}


// UdiniAttribute UdiniInputActor.Default__UdiniAttribute
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttribute* UUdiniAttribute::GetDefaultObj()
{
	static class UUdiniAttribute* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttribute*>(UUdiniAttribute::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutFloat
// (None)

class UClass* UUdiniAttaibutFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutFloat");

	return Clss;
}


// UdiniAttaibutFloat UdiniInputActor.Default__UdiniAttaibutFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutFloat* UUdiniAttaibutFloat::GetDefaultObj()
{
	static class UUdiniAttaibutFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutFloat*>(UUdiniAttaibutFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutVector3
// (None)

class UClass* UUdiniAttaibutVector3::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutVector3");

	return Clss;
}


// UdiniAttaibutVector3 UdiniInputActor.Default__UdiniAttaibutVector3
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutVector3* UUdiniAttaibutVector3::GetDefaultObj()
{
	static class UUdiniAttaibutVector3* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutVector3*>(UUdiniAttaibutVector3::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutVector2
// (None)

class UClass* UUdiniAttaibutVector2::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutVector2");

	return Clss;
}


// UdiniAttaibutVector2 UdiniInputActor.Default__UdiniAttaibutVector2
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutVector2* UUdiniAttaibutVector2::GetDefaultObj()
{
	static class UUdiniAttaibutVector2* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutVector2*>(UUdiniAttaibutVector2::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutVector4
// (None)

class UClass* UUdiniAttaibutVector4::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutVector4");

	return Clss;
}


// UdiniAttaibutVector4 UdiniInputActor.Default__UdiniAttaibutVector4
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutVector4* UUdiniAttaibutVector4::GetDefaultObj()
{
	static class UUdiniAttaibutVector4* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutVector4*>(UUdiniAttaibutVector4::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutIntBase
// (None)

class UClass* UUdiniAttaibutIntBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutIntBase");

	return Clss;
}


// UdiniAttaibutIntBase UdiniInputActor.Default__UdiniAttaibutIntBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutIntBase* UUdiniAttaibutIntBase::GetDefaultObj()
{
	static class UUdiniAttaibutIntBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutIntBase*>(UUdiniAttaibutIntBase::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutInt
// (None)

class UClass* UUdiniAttaibutInt::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutInt");

	return Clss;
}


// UdiniAttaibutInt UdiniInputActor.Default__UdiniAttaibutInt
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutInt* UUdiniAttaibutInt::GetDefaultObj()
{
	static class UUdiniAttaibutInt* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutInt*>(UUdiniAttaibutInt::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutTog
// (None)

class UClass* UUdiniAttaibutTog::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutTog");

	return Clss;
}


// UdiniAttaibutTog UdiniInputActor.Default__UdiniAttaibutTog
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutTog* UUdiniAttaibutTog::GetDefaultObj()
{
	static class UUdiniAttaibutTog* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutTog*>(UUdiniAttaibutTog::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutButton
// (None)

class UClass* UUdiniAttaibutButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutButton");

	return Clss;
}


// UdiniAttaibutButton UdiniInputActor.Default__UdiniAttaibutButton
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutButton* UUdiniAttaibutButton::GetDefaultObj()
{
	static class UUdiniAttaibutButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutButton*>(UUdiniAttaibutButton::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutString
// (None)

class UClass* UUdiniAttaibutString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutString");

	return Clss;
}


// UdiniAttaibutString UdiniInputActor.Default__UdiniAttaibutString
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutString* UUdiniAttaibutString::GetDefaultObj()
{
	static class UUdiniAttaibutString* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutString*>(UUdiniAttaibutString::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutStringChoiseList
// (None)

class UClass* UUdiniAttaibutStringChoiseList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutStringChoiseList");

	return Clss;
}


// UdiniAttaibutStringChoiseList UdiniInputActor.Default__UdiniAttaibutStringChoiseList
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutStringChoiseList* UUdiniAttaibutStringChoiseList::GetDefaultObj()
{
	static class UUdiniAttaibutStringChoiseList* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutStringChoiseList*>(UUdiniAttaibutStringChoiseList::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniAttaibutIntChoiselist
// (None)

class UClass* UUdiniAttaibutIntChoiselist::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniAttaibutIntChoiselist");

	return Clss;
}


// UdiniAttaibutIntChoiselist UdiniInputActor.Default__UdiniAttaibutIntChoiselist
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniAttaibutIntChoiselist* UUdiniAttaibutIntChoiselist::GetDefaultObj()
{
	static class UUdiniAttaibutIntChoiselist* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniAttaibutIntChoiselist*>(UUdiniAttaibutIntChoiselist::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniInputVolum
// (Actor)

class UClass* AUdiniInputVolum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniInputVolum");

	return Clss;
}


// UdiniInputVolum UdiniInputActor.Default__UdiniInputVolum
// (Public, ClassDefaultObject, ArchetypeObject)

class AUdiniInputVolum* AUdiniInputVolum::GetDefaultObj()
{
	static class AUdiniInputVolum* Default = nullptr;

	if (!Default)
		Default = static_cast<AUdiniInputVolum*>(AUdiniInputVolum::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniCollisionInputVolum
// (Actor)

class UClass* AUdiniCollisionInputVolum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniCollisionInputVolum");

	return Clss;
}


// UdiniCollisionInputVolum UdiniInputActor.Default__UdiniCollisionInputVolum
// (Public, ClassDefaultObject, ArchetypeObject)

class AUdiniCollisionInputVolum* AUdiniCollisionInputVolum::GetDefaultObj()
{
	static class AUdiniCollisionInputVolum* Default = nullptr;

	if (!Default)
		Default = static_cast<AUdiniCollisionInputVolum*>(AUdiniCollisionInputVolum::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniDataPart
// (None)

class UClass* UUdiniDataPart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniDataPart");

	return Clss;
}


// UdiniDataPart UdiniInputActor.Default__UdiniDataPart
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniDataPart* UUdiniDataPart::GetDefaultObj()
{
	static class UUdiniDataPart* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniDataPart*>(UUdiniDataPart::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniInputPin
// (None)

class UClass* UUdiniInputPin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniInputPin");

	return Clss;
}


// UdiniInputPin UdiniInputActor.Default__UdiniInputPin
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniInputPin* UUdiniInputPin::GetDefaultObj()
{
	static class UUdiniInputPin* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniInputPin*>(UUdiniInputPin::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniInputVolumActor
// (Actor)

class UClass* AUdiniInputVolumActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniInputVolumActor");

	return Clss;
}


// UdiniInputVolumActor UdiniInputActor.Default__UdiniInputVolumActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AUdiniInputVolumActor* AUdiniInputVolumActor::GetDefaultObj()
{
	static class AUdiniInputVolumActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AUdiniInputVolumActor*>(AUdiniInputVolumActor::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniOutputObjectBase
// (None)

class UClass* UUdiniOutputObjectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniOutputObjectBase");

	return Clss;
}


// UdiniOutputObjectBase UdiniInputActor.Default__UdiniOutputObjectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniOutputObjectBase* UUdiniOutputObjectBase::GetDefaultObj()
{
	static class UUdiniOutputObjectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniOutputObjectBase*>(UUdiniOutputObjectBase::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniInstanceOutput
// (None)

class UClass* UUdiniInstanceOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniInstanceOutput");

	return Clss;
}


// UdiniInstanceOutput UdiniInputActor.Default__UdiniInstanceOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniInstanceOutput* UUdiniInstanceOutput::GetDefaultObj()
{
	static class UUdiniInstanceOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniInstanceOutput*>(UUdiniInstanceOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniInstanceToFoliageOutput
// (None)

class UClass* UUdiniInstanceToFoliageOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniInstanceToFoliageOutput");

	return Clss;
}


// UdiniInstanceToFoliageOutput UdiniInputActor.Default__UdiniInstanceToFoliageOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniInstanceToFoliageOutput* UUdiniInstanceToFoliageOutput::GetDefaultObj()
{
	static class UUdiniInstanceToFoliageOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniInstanceToFoliageOutput*>(UUdiniInstanceToFoliageOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniInstanceToHierarchicalOutput
// (None)

class UClass* UUdiniInstanceToHierarchicalOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniInstanceToHierarchicalOutput");

	return Clss;
}


// UdiniInstanceToHierarchicalOutput UdiniInputActor.Default__UdiniInstanceToHierarchicalOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniInstanceToHierarchicalOutput* UUdiniInstanceToHierarchicalOutput::GetDefaultObj()
{
	static class UUdiniInstanceToHierarchicalOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniInstanceToHierarchicalOutput*>(UUdiniInstanceToHierarchicalOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniInstanceToStaticmeshComponentOutput
// (None)

class UClass* UUdiniInstanceToStaticmeshComponentOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniInstanceToStaticmeshComponentOutput");

	return Clss;
}


// UdiniInstanceToStaticmeshComponentOutput UdiniInputActor.Default__UdiniInstanceToStaticmeshComponentOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniInstanceToStaticmeshComponentOutput* UUdiniInstanceToStaticmeshComponentOutput::GetDefaultObj()
{
	static class UUdiniInstanceToStaticmeshComponentOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniInstanceToStaticmeshComponentOutput*>(UUdiniInstanceToStaticmeshComponentOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniLandmassOutput
// (None)

class UClass* UUdiniLandmassOutput::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniLandmassOutput");

	return Clss;
}


// UdiniLandmassOutput UdiniInputActor.Default__UdiniLandmassOutput
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniLandmassOutput* UUdiniLandmassOutput::GetDefaultObj()
{
	static class UUdiniLandmassOutput* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniLandmassOutput*>(UUdiniLandmassOutput::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniMeshDataPart
// (None)

class UClass* UUdiniMeshDataPart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniMeshDataPart");

	return Clss;
}


// UdiniMeshDataPart UdiniInputActor.Default__UdiniMeshDataPart
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniMeshDataPart* UUdiniMeshDataPart::GetDefaultObj()
{
	static class UUdiniMeshDataPart* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniMeshDataPart*>(UUdiniMeshDataPart::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniPointDataPart
// (None)

class UClass* UUdiniPointDataPart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniPointDataPart");

	return Clss;
}


// UdiniPointDataPart UdiniInputActor.Default__UdiniPointDataPart
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniPointDataPart* UUdiniPointDataPart::GetDefaultObj()
{
	static class UUdiniPointDataPart* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniPointDataPart*>(UUdiniPointDataPart::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniSnapGridComponent
// (None)

class UClass* UUdiniSnapGridComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniSnapGridComponent");

	return Clss;
}


// UdiniSnapGridComponent UdiniInputActor.Default__UdiniSnapGridComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniSnapGridComponent* UUdiniSnapGridComponent::GetDefaultObj()
{
	static class UUdiniSnapGridComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniSnapGridComponent*>(UUdiniSnapGridComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniSopAsset
// (None)

class UClass* UUdiniSopAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniSopAsset");

	return Clss;
}


// UdiniSopAsset UdiniInputActor.Default__UdiniSopAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniSopAsset* UUdiniSopAsset::GetDefaultObj()
{
	static class UUdiniSopAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniSopAsset*>(UUdiniSopAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniSplineComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UUdiniSplineComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniSplineComponent");

	return Clss;
}


// UdiniSplineComponent UdiniInputActor.Default__UdiniSplineComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniSplineComponent* UUdiniSplineComponent::GetDefaultObj()
{
	static class UUdiniSplineComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniSplineComponent*>(UUdiniSplineComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniSplineDataPart
// (None)

class UClass* UUdiniSplineDataPart::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniSplineDataPart");

	return Clss;
}


// UdiniSplineDataPart UdiniInputActor.Default__UdiniSplineDataPart
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniSplineDataPart* UUdiniSplineDataPart::GetDefaultObj()
{
	static class UUdiniSplineDataPart* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniSplineDataPart*>(UUdiniSplineDataPart::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.UdiniSSCoreComponet
// (None)

class UClass* UUdiniSSCoreComponet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UdiniSSCoreComponet");

	return Clss;
}


// UdiniSSCoreComponet UdiniInputActor.Default__UdiniSSCoreComponet
// (Public, ClassDefaultObject, ArchetypeObject)

class UUdiniSSCoreComponet* UUdiniSSCoreComponet::GetDefaultObj()
{
	static class UUdiniSSCoreComponet* Default = nullptr;

	if (!Default)
		Default = static_cast<UUdiniSSCoreComponet*>(UUdiniSSCoreComponet::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.HeightFieldTexture
// (None)

class UClass* UHeightFieldTexture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeightFieldTexture");

	return Clss;
}


// HeightFieldTexture UdiniInputActor.Default__HeightFieldTexture
// (Public, ClassDefaultObject, ArchetypeObject)

class UHeightFieldTexture* UHeightFieldTexture::GetDefaultObj()
{
	static class UHeightFieldTexture* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeightFieldTexture*>(UHeightFieldTexture::StaticClass()->DefaultObject);

	return Default;
}


// Class UdiniInputActor.VolumBoxShow
// (None)

class UClass* UVolumBoxShow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VolumBoxShow");

	return Clss;
}


// VolumBoxShow UdiniInputActor.Default__VolumBoxShow
// (Public, ClassDefaultObject, ArchetypeObject)

class UVolumBoxShow* UVolumBoxShow::GetDefaultObj()
{
	static class UVolumBoxShow* Default = nullptr;

	if (!Default)
		Default = static_cast<UVolumBoxShow*>(UVolumBoxShow::StaticClass()->DefaultObject);

	return Default;
}

}


