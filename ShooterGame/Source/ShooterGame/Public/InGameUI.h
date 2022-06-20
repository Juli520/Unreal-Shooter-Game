// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InGameUI.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERGAME_API UInGameUI : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	int currentScore;

	UPROPERTY(BlueprintReadWrite)
	int currentTime;

	UPROPERTY(BlueprintReadWrite)
	int totalTme;
};
