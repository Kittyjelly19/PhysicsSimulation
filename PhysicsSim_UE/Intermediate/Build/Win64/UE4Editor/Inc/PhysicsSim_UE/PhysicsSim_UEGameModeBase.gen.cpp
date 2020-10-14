// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsSim_UE/PhysicsSim_UEGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSim_UEGameModeBase() {}
// Cross Module References
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_APhysicsSim_UEGameModeBase_NoRegister();
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_APhysicsSim_UEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PhysicsSim_UE();
// End Cross Module References
	void APhysicsSim_UEGameModeBase::StaticRegisterNativesAPhysicsSim_UEGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APhysicsSim_UEGameModeBase_NoRegister()
	{
		return APhysicsSim_UEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsSim_UEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsSim_UEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsSim_UE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsSim_UEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PhysicsSim_UEGameModeBase.h" },
		{ "ModuleRelativePath", "PhysicsSim_UEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsSim_UEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsSim_UEGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APhysicsSim_UEGameModeBase_Statics::ClassParams = {
		&APhysicsSim_UEGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsSim_UEGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APhysicsSim_UEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsSim_UEGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APhysicsSim_UEGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APhysicsSim_UEGameModeBase, 2505327871);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APhysicsSim_UEGameModeBase(Z_Construct_UClass_APhysicsSim_UEGameModeBase, &APhysicsSim_UEGameModeBase::StaticClass, TEXT("/Script/PhysicsSim_UE"), TEXT("APhysicsSim_UEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsSim_UEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
