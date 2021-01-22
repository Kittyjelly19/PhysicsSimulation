// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsSim_UE/MovingSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingSphere() {}
// Cross Module References
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_AMovingSphere_NoRegister();
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_AMovingSphere();
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_AEulerBall();
	UPackage* Z_Construct_UPackage__Script_PhysicsSim_UE();
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_ACollisionPlane_NoRegister();
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_AStaticSphere_NoRegister();
// End Cross Module References
	void AMovingSphere::StaticRegisterNativesAMovingSphere()
	{
	}
	UClass* Z_Construct_UClass_AMovingSphere_NoRegister()
	{
		return AMovingSphere::StaticClass();
	}
	struct Z_Construct_UClass_AMovingSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_planeInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_planeInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statSphereInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_statSphereInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingSphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movingSphereRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEulerBall,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsSim_UE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingSphere.h" },
		{ "ModuleRelativePath", "MovingSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSphere_Statics::NewProp_planeInstance_MetaData[] = {
		{ "Category", "MovingSphere" },
		{ "ModuleRelativePath", "MovingSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingSphere_Statics::NewProp_planeInstance = { UE4CodeGen_Private::EPropertyClass::Object, "planeInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMovingSphere, planeInstance), Z_Construct_UClass_ACollisionPlane_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingSphere_Statics::NewProp_planeInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMovingSphere_Statics::NewProp_planeInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSphere_Statics::NewProp_statSphereInstance_MetaData[] = {
		{ "Category", "MovingSphere" },
		{ "ModuleRelativePath", "MovingSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingSphere_Statics::NewProp_statSphereInstance = { UE4CodeGen_Private::EPropertyClass::Object, "statSphereInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AMovingSphere, statSphereInstance), Z_Construct_UClass_AStaticSphere_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingSphere_Statics::NewProp_statSphereInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMovingSphere_Statics::NewProp_statSphereInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingSphere_Statics::NewProp_movingSphereRadius_MetaData[] = {
		{ "Category", "MovingSphere" },
		{ "ModuleRelativePath", "MovingSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingSphere_Statics::NewProp_movingSphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "movingSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AMovingSphere, movingSphereRadius), METADATA_PARAMS(Z_Construct_UClass_AMovingSphere_Statics::NewProp_movingSphereRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMovingSphere_Statics::NewProp_movingSphereRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSphere_Statics::NewProp_planeInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSphere_Statics::NewProp_statSphereInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingSphere_Statics::NewProp_movingSphereRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingSphere_Statics::ClassParams = {
		&AMovingSphere::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMovingSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMovingSphere_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMovingSphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMovingSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingSphere, 1670244627);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingSphere(Z_Construct_UClass_AMovingSphere, &AMovingSphere::StaticClass, TEXT("/Script/PhysicsSim_UE"), TEXT("AMovingSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
