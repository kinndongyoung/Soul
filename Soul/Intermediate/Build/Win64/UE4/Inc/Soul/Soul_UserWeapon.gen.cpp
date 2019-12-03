// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/Soul_UserWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoul_UserWeapon() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_ASoul_UserWeapon_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_ASoul_UserWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Soul();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void ASoul_UserWeapon::StaticRegisterNativesASoul_UserWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASoul_UserWeapon_NoRegister()
	{
		return ASoul_UserWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASoul_UserWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_SKAR4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapon_SKAR4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoul_UserWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Soul_UserWeapon.h" },
		{ "ModuleRelativePath", "Soul_UserWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserWeapon_Statics::NewProp_Weapon_SKAR4_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Soul_UserWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoul_UserWeapon_Statics::NewProp_Weapon_SKAR4 = { "Weapon_SKAR4", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_UserWeapon, Weapon_SKAR4), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoul_UserWeapon_Statics::NewProp_Weapon_SKAR4_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserWeapon_Statics::NewProp_Weapon_SKAR4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoul_UserWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_UserWeapon_Statics::NewProp_Weapon_SKAR4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoul_UserWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoul_UserWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASoul_UserWeapon_Statics::ClassParams = {
		&ASoul_UserWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASoul_UserWeapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASoul_UserWeapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASoul_UserWeapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoul_UserWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASoul_UserWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASoul_UserWeapon, 1202603881);
	template<> SOUL_API UClass* StaticClass<ASoul_UserWeapon>()
	{
		return ASoul_UserWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASoul_UserWeapon(Z_Construct_UClass_ASoul_UserWeapon, &ASoul_UserWeapon::StaticClass, TEXT("/Script/Soul"), TEXT("ASoul_UserWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoul_UserWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
