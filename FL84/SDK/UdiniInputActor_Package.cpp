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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUdiniInputActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUdiniInputActorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniInputActorBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAInputStaticmeshActorRuntime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAInputStaticmeshActorRuntime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.AInputStaticmeshActorRuntime"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCurveModel_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCurveModel_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.CurveModel_Base"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEditorMeshComponet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEditorMeshComponet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.EditorMeshComponet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInputDataListAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInputDataListAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.InputDataListAsset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIUdiniInputCoreInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIUdiniInputCoreInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.IUdiniInputCoreInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniDataPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniDataPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniDataPart"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAreaDataPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAreaDataPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAreaDataPart"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttribute.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttribute::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttribute"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutFloat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutFloat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutFloat"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutVector3.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutVector3::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutVector3"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutVector2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutVector2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutVector2"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutVector4.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutVector4::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutVector4"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutIntBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutIntBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutIntBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutInt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutInt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutInt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutTog.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutTog::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutTog"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutButton.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutButton::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutButton"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutString.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutString::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutString"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutStringChoiseList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutStringChoiseList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutStringChoiseList"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniAttaibutIntChoiselist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniAttaibutIntChoiselist::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniAttaibutIntChoiselist"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUdiniInputVolum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUdiniInputVolum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniInputVolum"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUdiniCollisionInputVolum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUdiniCollisionInputVolum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniCollisionInputVolum"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniDecalComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniDecalComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniDecalComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniInputPin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniInputPin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniInputPin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUdiniInputVolumActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUdiniInputVolumActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniInputVolumActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniOutputObjectBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniOutputObjectBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniOutputObjectBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniInstanceOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniInstanceOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniInstanceOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniInstanceToFoliageOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniInstanceToFoliageOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniInstanceToFoliageOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniInstanceToHierarchicalOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniInstanceToHierarchicalOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniInstanceToHierarchicalOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniInstanceToStaticmeshComponentOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniInstanceToStaticmeshComponentOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniInstanceToStaticmeshComponentOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniLandmassOutput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniLandmassOutput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniLandmassOutput"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniMeshDataPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniMeshDataPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniMeshDataPart"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniPointDataPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniPointDataPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniPointDataPart"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniSnapGridComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniSnapGridComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniSnapGridComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniSopAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniSopAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniSopAsset"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniSplineComponent_Base.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniSplineComponent_Base::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniSplineComponent_Base"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniSplineComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniSplineComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniSplineComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniSplineDataPart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniSplineDataPart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniSplineDataPart"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUdiniSSCoreComponet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUdiniSSCoreComponet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.UdiniSSCoreComponet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeightFieldTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeightFieldTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.HeightFieldTexture"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVolumBoxShow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVolumBoxShow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xorstr_("Class UdiniInputActor.VolumBoxShow"));
		return ptr;
	}

}


