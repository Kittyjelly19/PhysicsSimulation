// Fill out your copyright notice in the Description page of Project Settings.

#include "NewtonBall.h"


//// Sets default values
//ANewtonBall::ANewtonBall(/*const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer*/)
//{
// //	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
//	//PrimaryActorTick.bCanEverTick = true;
//	n_BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaaaaalllllMessshhhh"));
//	n_BallMesh->SetupAttachment(RootComponent);
//}
//
//
//
//// Called when the game starts or when spawned
//void ANewtonBall::BeginPlay()
//{
//	Super::BeginPlay();
//	startPos = GetActorLocation();
//	newPos = startPos;
//	a = (-gravity * framerate);
//}
//
//// Called every frame
//void ANewtonBall::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//	
//	//Increase frame number each tick.
//	frame++;
//	
//	//Define time as frame number divided by frame rate.
//	t = frame / framerate;
//
//	NewtonianMethod();
//}
//
//void ANewtonBall::NewtonianMethod()
//{
//	newPos.X = startPos.X + (v * t);
//	newPos.Z = startPos.Z + (v * t) + (a * (FMath::Square(t)) / 2);
//
//	if (newPos.Z >= startPos.Z)
//	{
//		SetActorLocation(newPos);
//	}
 
//	
ANewtonBall::ANewtonBall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
void ANewtonBall::BeginPlay()
{
Super::BeginPlay();
	startPos = GetActorLocation();
	newPos = startPos;
	a = (-g * framerate);
}

void ANewtonBall::NewtonianMethod()
{
	newPos.X = startPos.X + (v * t);
	newPos.Z = startPos.Z + (v * t) + (a * (FMath::Square(t)) / 2);

	if (newPos.Z >= startPos.Z)
	{
		SetActorLocation(newPos);
	}
}

void ANewtonBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	frame++;
	t = frame / framerate;

	NewtonianMethod();
}
