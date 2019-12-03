// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/Soul_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoul_GameMode() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_ASoul_GameMode_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_ASoul_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Soul();
// End Cross Module References
	void ASoul_GameMode::StaticRegisterNativesASoul_GameMode()
	{
	}
	UClass* Z_Construct_UClass_ASoul_GameMode_NoRegister()
	{
		return ASoul_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASoul_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoul_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Soul_GameMode.h" },
		{ "ModuleRelativePath", "Soul_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoul_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoul_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASoul_GameMode_Statics::ClassParams = {
		&ASoul_GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ASoul_GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASoul_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoul_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASoul_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASoul_GameMode, 1317497130);
	template<> SOUL_API UClass* StaticClass<ASoul_GameMode>()
	{
		return ASoul_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASoul_GameMode(Z_Construct_UClass_ASoul_GameMode, &ASoul_GameMode::StaticClass, TEXT("/Script/Soul"), TEXT("ASoul_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoul_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
