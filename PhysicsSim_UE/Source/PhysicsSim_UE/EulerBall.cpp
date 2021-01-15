// Fill out your copyright notice in the Description page of Project Settings.

#include "EulerBall.h"

// Sets default values
AEulerBall::AEulerBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEulerBall::BeginPlay()
{
	Super::BeginPlay();
	
	startPos = GetActorLocation();
	startVel = startVel / framerate;
	currentVel = startVel;
	g = g / framerate;
	currentPos = GetActorLocation();
	
	
}

// Called every frame
void AEulerBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	EulerianMethod();
}

//Eulers method of calculating.
void AEulerBall::EulerianMethod()
{
	newVel = currentVel + g;
	newPos = currentPos + newVel;
	currentVel = newVel;
	currentPos = newPos;

	if (currentPos.Z >= startPos.Z)
	{
		SetActorLocation(currentPos);
	}
}
