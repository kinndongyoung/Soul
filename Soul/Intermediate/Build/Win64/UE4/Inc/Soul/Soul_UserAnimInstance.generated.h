// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOUL_Soul_UserAnimInstance_generated_h
#error "Soul_UserAnimInstance.generated.h already included, missing '#pragma once' in Soul_UserAnimInstance.h"
#endif
#define SOUL_Soul_UserAnimInstance_generated_h

#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_RPC_WRAPPERS
#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoul_UserAnimInstance(); \
	friend struct Z_Construct_UClass_USoul_UserAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USoul_UserAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(USoul_UserAnimInstance)


#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSoul_UserAnimInstance(); \
	friend struct Z_Construct_UClass_USoul_UserAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USoul_UserAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Soul"), NO_API) \
	DECLARE_SERIALIZER(USoul_UserAnimInstance)


#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoul_UserAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoul_UserAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoul_UserAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoul_UserAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoul_UserAnimInstance(USoul_UserAnimInstance&&); \
	NO_API USoul_UserAnimInstance(const USoul_UserAnimInstance&); \
public:


#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoul_UserAnimInstance(USoul_UserAnimInstance&&); \
	NO_API USoul_UserAnimInstance(const USoul_UserAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoul_UserAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoul_UserAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoul_UserAnimInstance)


#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(USoul_UserAnimInstance, CurrentPawnSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInAir() { return STRUCT_OFFSET(USoul_UserAnimInstance, IsInAir); }


#define Soul_Source_Soul_Soul_UserAnimInstance_h_7_PROLOG
#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_Soul_UserAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_Soul_UserAnimInstance_h_10_RPC_WRAPPERS \
	Soul_Source_Soul_Soul_UserAnimInstance_h_10_INCLASS \
	Soul_Source_Soul_Soul_UserAnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Soul_Source_Soul_Soul_UserAnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Soul_Source_Soul_Soul_UserAnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	Soul_Source_Soul_Soul_UserAnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Soul_Source_Soul_Soul_UserAnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	Soul_Source_Soul_Soul_UserAnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOUL_API UClass* StaticClass<class USoul_UserAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Soul_Source_Soul_Soul_UserAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
