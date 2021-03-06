// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetSpawner.h"

// Sets default values
ATargetSpawner::ATargetSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	Root -> SetupAttachment(GetRootComponent());
	
	SpawnArea = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	SpawnArea -> SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ATargetSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

