// Fill out your copyright notice in the Description page of Project Settings.

#include "NewtonBall.h"

// Sets default values
ANewtonBall::ANewtonBall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANewtonBall::BeginPlay()
{
	Super::BeginPlay();

	startPos = GetActorLocation();
	startVel = startVel / framerate;
	currentVel = startVel;
	g = g / framerate;
	currentPos = GetActorLocation();


}

// Called every frame
void ANewtonBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	NewtonianMethod();
}

//Eulers method of calculating.
void ANewtonBall::NewtonianMethod()
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
