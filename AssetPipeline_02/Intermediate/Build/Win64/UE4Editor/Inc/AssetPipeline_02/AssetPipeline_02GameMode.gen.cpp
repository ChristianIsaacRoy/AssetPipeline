// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetPipeline_02/AssetPipeline_02GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetPipeline_02GameMode() {}
// Cross Module References
	ASSETPIPELINE_02_API UClass* Z_Construct_UClass_AAssetPipeline_02GameMode_NoRegister();
	ASSETPIPELINE_02_API UClass* Z_Construct_UClass_AAssetPipeline_02GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AssetPipeline_02();
// End Cross Module References
	void AAssetPipeline_02GameMode::StaticRegisterNativesAAssetPipeline_02GameMode()
	{
	}
	UClass* Z_Construct_UClass_AAssetPipeline_02GameMode_NoRegister()
	{
		return AAssetPipeline_02GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAssetPipeline_02GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAssetPipeline_02GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPipeline_02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAssetPipeline_02GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AssetPipeline_02GameMode.h" },
		{ "ModuleRelativePath", "AssetPipeline_02GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAssetPipeline_02GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAssetPipeline_02GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAssetPipeline_02GameMode_Statics::ClassParams = {
		&AAssetPipeline_02GameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AAssetPipeline_02GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAssetPipeline_02GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAssetPipeline_02GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAssetPipeline_02GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAssetPipeline_02GameMode, 3945966345);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAssetPipeline_02GameMode(Z_Construct_UClass_AAssetPipeline_02GameMode, &AAssetPipeline_02GameMode::StaticClass, TEXT("/Script/AssetPipeline_02"), TEXT("AAssetPipeline_02GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAssetPipeline_02GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
