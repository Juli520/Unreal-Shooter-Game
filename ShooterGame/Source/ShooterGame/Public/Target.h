// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TargetEnumerator.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Target.generated.h"

UCLASS()
class SHOOTERGAME_API ATarget : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATarget();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	USceneComponent* Root;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* TargetMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UBoxComponent* BoxCollider;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable")
	float ActorScale;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable")
	float Health;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable")
	FVector DestinationLocation;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable")
	ETargetEnumerator TargetEnumerator;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
