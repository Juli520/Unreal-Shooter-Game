// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SHOOTERGAME_ShooterGameProjectile_generated_h
#error "ShooterGameProjectile.generated.h already included, missing '#pragma once' in ShooterGameProjectile.h"
#endif
#define SHOOTERGAME_ShooterGameProjectile_generated_h

#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_SPARSE_DATA
#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterGameProjectile(); \
	friend struct Z_Construct_UClass_AShooterGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AShooterGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShooterGameProjectile(); \
	friend struct Z_Construct_UClass_AShooterGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AShooterGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterGame"), NO_API) \
	DECLARE_SERIALIZER(AShooterGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameProjectile(AShooterGameProjectile&&); \
	NO_API AShooterGameProjectile(const AShooterGameProjectile&); \
public:


#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterGameProjectile(AShooterGameProjectile&&); \
	NO_API AShooterGameProjectile(const AShooterGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterGameProjectile)


#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AShooterGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShooterGameProjectile, ProjectileMovement); }


#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_12_PROLOG
#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_RPC_WRAPPERS \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_INCLASS \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_SPARSE_DATA \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	ShooterGame_Source_ShooterGame_ShooterGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERGAME_API UClass* StaticClass<class AShooterGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_ShooterGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
