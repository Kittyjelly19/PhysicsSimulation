// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticSphere.h"

// Sets default values
AStaticSphere::AStaticSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	/*statMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticBall Mesh"));*/
	/*SetActorLocation() = { 900, 470, 640 };*/
}

// Called when the game starts or when spawned
void AStaticSphere::BeginPlay()
{
	Super::BeginPlay();
	startPos2 = this->GetActorLocation();

}

// Called every frame
void AStaticSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

