// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyTarget.generated.h"

UCLASS()
class SHOOTERGAME_API AEnemyTarget : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyTarget();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable")
	float Health;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* TargetMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	USkeletalMeshComponent* SkeletalMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
