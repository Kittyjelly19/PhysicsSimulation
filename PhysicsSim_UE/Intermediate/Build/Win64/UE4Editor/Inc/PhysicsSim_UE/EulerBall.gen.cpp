// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsSim_UE/EulerBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEulerBall() {}
// Cross Module References
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_AEulerBall_NoRegister();
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_AEulerBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PhysicsSim_UE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AEulerBall::StaticRegisterNativesAEulerBall()
	{
	}
	UClass* Z_Construct_UClass_AEulerBall_NoRegister()
	{
		return AEulerBall::StaticClass();
	}
	struct Z_Construct_UClass_AEulerBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_v_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_v;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEulerBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsSim_UE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEulerBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EulerBall.h" },
		{ "ModuleRelativePath", "EulerBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEulerBall_Statics::NewProp_v_MetaData[] = {
		{ "Category", "n_Ball" },
		{ "ModuleRelativePath", "EulerBall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEulerBall_Statics::NewProp_v = { UE4CodeGen_Private::EPropertyClass::Struct, "v", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(AEulerBall, v), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEulerBall_Statics::NewProp_v_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEulerBall_Statics::NewProp_v_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEulerBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEulerBall_Statics::NewProp_v,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEulerBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEulerBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEulerBall_Statics::ClassParams = {
		&AEulerBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AEulerBall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AEulerBall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEulerBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEulerBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEulerBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEulerBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEulerBall, 2758597456);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEulerBall(Z_Construct_UClass_AEulerBall, &AEulerBall::StaticClass, TEXT("/Script/PhysicsSim_UE"), TEXT("AEulerBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEulerBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
