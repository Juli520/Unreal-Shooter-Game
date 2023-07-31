// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyTarget.h"

AEnemyTarget::AEnemyTarget()
{
	PrimaryActorTick.bCanEverTick = true;

	TargetMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TargetMeshComponent"));
	TargetMesh -> SetupAttachment(GetRootComponent());
	
	SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	SkeletalMesh -> SetupAttachment(GetRootComponent());
}

void AEnemyTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

void AEnemyTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyTarget::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

