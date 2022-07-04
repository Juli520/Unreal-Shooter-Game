// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ETargetEnumerator : uint8
{
	Nothing				UMETA(DisplayName="Nothing"),
	MoveHorizontally	UMETA(DisplayName="MoveHorizontally"),
	MoveVertically		UMETA(DisplayName="MoveVertically"),
	AdjustScale			UMETA(DisplayName="AdjustScale")
};
