// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERGAME_TargetEnumerator_generated_h
#error "TargetEnumerator.generated.h already included, missing '#pragma once' in TargetEnumerator.h"
#endif
#define SHOOTERGAME_TargetEnumerator_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterGame_Source_ShooterGame_Public_TargetEnumerator_h


#define FOREACH_ENUM_ETARGETENUMERATOR(op) \
	op(ETargetEnumerator::Nothing) \
	op(ETargetEnumerator::MoveHorizontally) \
	op(ETargetEnumerator::MoveVertically) \
	op(ETargetEnumerator::AdjustScale) 

enum class ETargetEnumerator : uint8;
template<> SHOOTERGAME_API UEnum* StaticEnum<ETargetEnumerator>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
