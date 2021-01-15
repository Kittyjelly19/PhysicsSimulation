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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingSphere_Statics::ClassParams = {
		&AMovingSphere::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AMovingSphere, 2502193663);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingSphere(Z_Construct_UClass_AMovingSphere, &AMovingSphere::StaticClass, TEXT("/Script/PhysicsSim_UE"), TEXT("AMovingSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
