// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUL_Soul_HUD_generated_h
#error "Soul_HUD.generated.h already included, missing '#pragma once' in Soul_HUD.h"
#endif
#define SOUL_Soul_HUD_generated_h

#define Soul_Source_Soul_Soul_HUD_h_10_RPC_WRAPPERS
#define Soul_Source_Soul_Soul_HUD_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Soul_Source_Soul_Soul_HUD_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASoul_HUD(); \
	friend struct Z_Construct_UClass_ASoul_HUD_Statics; \
public: \
	DECLARE_CLASS(ASoul_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(ASoul_HUD)


#define Soul_Source_Soul_Soul_HUD_h_10_INCLASS \
private: \
	static void StaticRegisterNativesASoul_HUD(); \
	friend struct Z_Construct_UClass_ASoul_HUD_Statics; \
public: \
	DECLARE_CLASS(ASoul_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(ASoul_HUD)


#define Soul_Source_Soul_Soul_HUD_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASoul_HUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASoul_HUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoul_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoul_HUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASoul_HUD(ASoul_HUD&&); \
	NO_API ASoul_HUD(const ASoul_HUD&); \
public:


#define Soul_Source_Soul_Soul_HUD_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASoul_HUD(ASoul_HUD&&); \
	NO_API ASoul_HUD(const ASoul_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASoul_HUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASoul_HUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASoul_HUD)


#define Soul_Source_Soul_Soul_HUD_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentWidget_InstallBar() { return STRUCT_OFFSET(ASoul_HUD, CurrentWidget_InstallBar); }


#define Soul_Source_Soul_Soul_HUD_h_7_PROLOG
#define Soul_Source_Soul_Soul_HUD_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_Soul_HUD_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_Soul_HUD_h_10_RPC_WRAPPERS \
	Soul_Source_Soul_Soul_HUD_h_10_INCLASS \
	Soul_Source_Soul_Soul_HUD_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_Soul_HUD_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_Soul_HUD_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_Soul_HUD_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_Soul_HUD_h_10_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_Soul_HUD_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class ASoul_HUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_Soul_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
