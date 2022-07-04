// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "TargetSpawner.generated.h"

UCLASS()
class SHOOTERGAME_API ATargetSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetSpawner();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	USceneComponent* Root;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UBoxComponent* SpawnArea;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable")
	FVector InBoxExtent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable")
	FVector SpawnLocation;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
