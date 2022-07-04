// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define SHOOTERGAME_Target_generated_h

#define ShooterGame_Source_ShooterGame_Public_Target_h_14_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_Public_Target_h_14_RPC_WRAPPERS
#define ShooterGame_Source_ShooterGame_Public_Target_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterGame_Source_ShooterGame_Public_Target_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define ShooterGame_Source_ShooterGame_Public_Target_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define ShooterGame_Source_ShooterGame_Public_Target_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public:


#define ShooterGame_Source_ShooterGame_Public_Target_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATarget)


#define ShooterGame_Source_ShooterGame_Public_Target_h_14_PRIVATE_PROPERTY_OFFSET
#define ShooterGame_Source_ShooterGame_Public_Target_h_11_PROLOG
#define ShooterGame_Source_ShooterGame_Public_Target_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_INCLASS \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_Public_Target_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_Public_Target_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class ATarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
