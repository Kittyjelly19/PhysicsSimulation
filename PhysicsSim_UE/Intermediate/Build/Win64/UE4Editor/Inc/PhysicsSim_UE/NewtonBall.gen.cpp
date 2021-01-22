// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsSim_UE/NewtonBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewtonBall() {}
// Cross Module References
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_ANewtonBall_NoRegister();
	PHYSICSSIM_UE_API UClass* Z_Construct_UClass_ANewtonBall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PhysicsSim_UE();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ANewtonBall::StaticRegisterNativesANewtonBall()
	{
	}
	UClass* Z_Construct_UClass_ANewtonBall_NoRegister()
	{
		return ANewtonBall::StaticClass();
	}
	struct Z_Construct_UClass_ANewtonBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startVel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startVel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewtonBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsSim_UE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewtonBall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NewtonBall.h" },
		{ "ModuleRelativePath", "NewtonBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewtonBall_Statics::NewProp_startVel_MetaData[] = {
		{ "Category", "Ball Properties" },
		{ "ModuleRelativePath", "NewtonBall.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANewtonBall_Statics::NewProp_startVel = { UE4CodeGen_Private::EPropertyClass::Struct, "startVel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000001, 1, nullptr, STRUCT_OFFSET(ANewtonBall, startVel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANewtonBall_Statics::NewProp_startVel_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANewtonBall_Statics::NewProp_startVel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewtonBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewtonBall_Statics::NewProp_startVel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewtonBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewtonBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewtonBall_Statics::ClassParams = {
		&ANewtonBall::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_ANewtonBall_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ANewtonBall_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ANewtonBall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANewtonBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewtonBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewtonBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewtonBall, 3555601793);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewtonBall(Z_Construct_UClass_ANewtonBall, &ANewtonBall::StaticClass, TEXT("/Script/PhysicsSim_UE"), TEXT("ANewtonBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewtonBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
