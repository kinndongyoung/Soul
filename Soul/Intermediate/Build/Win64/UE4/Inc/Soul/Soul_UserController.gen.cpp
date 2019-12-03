// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/Soul_UserController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoul_UserController() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_ASoul_UserController_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_ASoul_UserController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Soul();
// End Cross Module References
	void ASoul_UserController::StaticRegisterNativesASoul_UserController()
	{
	}
	UClass* Z_Construct_UClass_ASoul_UserController_NoRegister()
	{
		return ASoul_UserController::StaticClass();
	}
	struct Z_Construct_UClass_ASoul_UserController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoul_UserController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Soul_UserController.h" },
		{ "ModuleRelativePath", "Soul_UserController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoul_UserController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoul_UserController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASoul_UserController_Statics::ClassParams = {
		&ASoul_UserController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASoul_UserController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoul_UserController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASoul_UserController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASoul_UserController, 418534219);
	template<> SOUL_API UClass* StaticClass<ASoul_UserController>()
	{
		return ASoul_UserController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASoul_UserController(Z_Construct_UClass_ASoul_UserController, &ASoul_UserController::StaticClass, TEXT("/Script/Soul"), TEXT("ASoul_UserController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoul_UserController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
