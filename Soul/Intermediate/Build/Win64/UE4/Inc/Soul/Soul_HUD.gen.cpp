// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/Soul_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoul_HUD() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_ASoul_HUD_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_ASoul_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Soul();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void ASoul_HUD::StaticRegisterNativesASoul_HUD()
	{
	}
	UClass* Z_Construct_UClass_ASoul_HUD_NoRegister()
	{
		return ASoul_HUD::StaticClass();
	}
	struct Z_Construct_UClass_ASoul_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_InstallBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget_InstallBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_InstallBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass_InstallBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoul_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Soul_HUD.h" },
		{ "ModuleRelativePath", "Soul_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_HUD_Statics::NewProp_CurrentWidget_InstallBar_MetaData[] = {
		{ "Category", "Angel_UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Soul_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoul_HUD_Statics::NewProp_CurrentWidget_InstallBar = { "CurrentWidget_InstallBar", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_HUD, CurrentWidget_InstallBar), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoul_HUD_Statics::NewProp_CurrentWidget_InstallBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_HUD_Statics::NewProp_CurrentWidget_InstallBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_HUD_Statics::NewProp_WidgetClass_InstallBar_MetaData[] = {
		{ "Category", "Angel_UI" },
		{ "ModuleRelativePath", "Soul_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASoul_HUD_Statics::NewProp_WidgetClass_InstallBar = { "WidgetClass_InstallBar", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_HUD, WidgetClass_InstallBar), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASoul_HUD_Statics::NewProp_WidgetClass_InstallBar_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_HUD_Statics::NewProp_WidgetClass_InstallBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoul_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_HUD_Statics::NewProp_CurrentWidget_InstallBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_HUD_Statics::NewProp_WidgetClass_InstallBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoul_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoul_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASoul_HUD_Statics::ClassParams = {
		&ASoul_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASoul_HUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASoul_HUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASoul_HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASoul_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoul_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASoul_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASoul_HUD, 4267959351);
	template<> SOUL_API UClass* StaticClass<ASoul_HUD>()
	{
		return ASoul_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASoul_HUD(Z_Construct_UClass_ASoul_HUD, &ASoul_HUD::StaticClass, TEXT("/Script/Soul"), TEXT("ASoul_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoul_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
