// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Soul/Soul_UserCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoul_UserCharacter() {}
// Cross Module References
	SOUL_API UClass* Z_Construct_UClass_ASoul_UserCharacter_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_ASoul_UserCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Soul();
	SOUL_API UClass* Z_Construct_UClass_ASoul_HUD_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SOUL_API UClass* Z_Construct_UClass_ASoul_UserWeaponBullet_NoRegister();
	SOUL_API UClass* Z_Construct_UClass_ASoul_UserWeapon_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SOUL_API UClass* Z_Construct_UClass_USoul_UserAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ASoul_UserCharacter::StaticRegisterNativesASoul_UserCharacter()
	{
	}
	UClass* Z_Construct_UClass_ASoul_UserCharacter_NoRegister()
	{
		return ASoul_UserCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASoul_UserCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angel_HUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Angel_HUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponBulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoulAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoulAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCameraArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserCameraArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASoul_UserCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Soul,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Soul_UserCharacter.h" },
		{ "ModuleRelativePath", "Soul_UserCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Angel_HUD_MetaData[] = {
		{ "Comment", "//// HUD ////\n// ?????? //\n" },
		{ "ModuleRelativePath", "Soul_UserCharacter.h" },
		{ "ToolTip", "/ HUD /\n ??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Angel_HUD = { "Angel_HUD", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_UserCharacter, Angel_HUD), Z_Construct_UClass_ASoul_HUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Angel_HUD_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Angel_HUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_WeaponBulletClass_MetaData[] = {
		{ "Category", "BulletClass" },
		{ "Comment", "// ???? ??\xc5\xb3 ?\xd1\xbe? \xc5\xac????\n" },
		{ "ModuleRelativePath", "Soul_UserCharacter.h" },
		{ "ToolTip", "???? ??\xc5\xb3 ?\xd1\xbe? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_WeaponBulletClass = { "WeaponBulletClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_UserCharacter, WeaponBulletClass), Z_Construct_UClass_ASoul_UserWeaponBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_WeaponBulletClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_WeaponBulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserWeapon_MetaData[] = {
		{ "Category", "BulletClass" },
		{ "Comment", "// ?\xd1\xbe??? ??????\xc5\xb3 ???? \xc5\xac????\n" },
		{ "ModuleRelativePath", "Soul_UserCharacter.h" },
		{ "ToolTip", "?\xd1\xbe??? ??????\xc5\xb3 ???? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserWeapon = { "UserWeapon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_UserCharacter, UserWeapon), Z_Construct_UClass_ASoul_UserWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "// \xc4\xab?\xde\xb6? ??\xc4\xa1?????? ?\xd1\xb1? ??????\n" },
		{ "ModuleRelativePath", "Soul_UserCharacter.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6? ??\xc4\xa1?????? ?\xd1\xb1? ??????" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_UserCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_MuzzleOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_SoulAnim_MetaData[] = {
		{ "Comment", "// ???? ?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????\n" },
		{ "ModuleRelativePath", "Soul_UserCharacter.h" },
		{ "ToolTip", "???? ?\xd6\xb4\xcf\xb8??\xcc\xbc? \xc5\xac????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_SoulAnim = { "SoulAnim", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_UserCharacter, SoulAnim), Z_Construct_UClass_USoul_UserAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_SoulAnim_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_SoulAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Soul_UserCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_UserCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Camera_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserCameraArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// \xc4\xab?\xde\xb6?\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Soul_UserCharacter.h" },
		{ "ToolTip", "\xc4\xab?\xde\xb6?" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserCameraArm = { "UserCameraArm", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASoul_UserCharacter, UserCameraArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserCameraArm_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserCameraArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoul_UserCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Angel_HUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_WeaponBulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_MuzzleOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_SoulAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_UserCharacter_Statics::NewProp_UserCameraArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASoul_UserCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoul_UserCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASoul_UserCharacter_Statics::ClassParams = {
		&ASoul_UserCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASoul_UserCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASoul_UserCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASoul_UserCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASoul_UserCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASoul_UserCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASoul_UserCharacter, 3397158249);
	template<> SOUL_API UClass* StaticClass<ASoul_UserCharacter>()
	{
		return ASoul_UserCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASoul_UserCharacter(Z_Construct_UClass_ASoul_UserCharacter, &ASoul_UserCharacter::StaticClass, TEXT("/Script/Soul"), TEXT("ASoul_UserCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASoul_UserCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
