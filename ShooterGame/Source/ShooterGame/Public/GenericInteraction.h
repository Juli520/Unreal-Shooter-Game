// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "Components/TextRenderComponent.h"
#include "GameFramework/Actor.h"
#include "GenericInteraction.generated.h"

UCLASS()
class SHOOTERGAME_API AGenericInteraction : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenericInteraction();
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	USceneComponent* Root; 
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	USphereComponent* EnableInteract;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UTextRenderComponent* Text;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* InteractionMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
