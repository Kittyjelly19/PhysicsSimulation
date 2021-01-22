// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsSim_UE/StaticSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticSphere() {}
// Cross Module References
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_AStaticSphere_NoRegister();
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_AStaticSphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PhysicsSim_UE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AStaticSphere::StaticRegisterNativesAStaticSphere()
	{
	}
	UClass* Z_Construct_UClass_AStaticSphere_NoRegister()
	{
		return AStaticSphere::StaticClass();
	}
	struct Z_Construct_UClass_AStaticSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startPos2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startPos2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_staticSphereRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_staticSphereRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsSim_UE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StaticSphere.h" },
		{ "ModuleRelativePath", "StaticSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticSphere_Statics::NewProp_startPos2_MetaData[] = {
		{ "ModuleRelativePath", "StaticSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AStaticSphere_Statics::NewProp_startPos2 = { UE4CodeGen_Private::EPropertyClass::Struct, "startPos2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AStaticSphere, startPos2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AStaticSphere_Statics::NewProp_startPos2_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStaticSphere_Statics::NewProp_startPos2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticSphere_Statics::NewProp_staticSphereRadius_MetaData[] = {
		{ "Category", "StaticSphere" },
		{ "ModuleRelativePath", "StaticSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStaticSphere_Statics::NewProp_staticSphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "staticSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(AStaticSphere, staticSphereRadius), METADATA_PARAMS(Z_Construct_UClass_AStaticSphere_Statics::NewProp_staticSphereRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStaticSphere_Statics::NewProp_staticSphereRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticSphere_Statics::NewProp_startPos2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticSphere_Statics::NewProp_staticSphereRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStaticSphere_Statics::ClassParams = {
		&AStaticSphere::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AStaticSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStaticSphere_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStaticSphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStaticSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStaticSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStaticSphere, 287726019);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticSphere(Z_Construct_UClass_AStaticSphere, &AStaticSphere::StaticClass, TEXT("/Script/PhysicsSim_UE"), TEXT("AStaticSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
