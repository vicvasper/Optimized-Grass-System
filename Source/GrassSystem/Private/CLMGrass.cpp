// Fill out your copyright notice in the Description page of Project Settings.


#include "CLMGrass.h"

// Sets default values
ACLMGrass::ACLMGrass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	GrassMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GrassMesh"));
	GrassMesh->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void ACLMGrass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACLMGrass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

