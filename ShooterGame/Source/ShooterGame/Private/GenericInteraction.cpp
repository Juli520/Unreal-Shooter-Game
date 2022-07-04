// Fill out your copyright notice in the Description page of Project Settings.


#include "GenericInteraction.h"

// Sets default values
AGenericInteraction::AGenericInteraction()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	Root -> SetupAttachment(GetRootComponent());
	
	EnableInteract = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	EnableInteract -> SetupAttachment(GetRootComponent());
	
	Text = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComponent"));
	Text -> SetupAttachment(GetRootComponent());
	
	InteractionMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("InteractionMeshComponent"));
	InteractionMesh -> SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AGenericInteraction::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGenericInteraction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

