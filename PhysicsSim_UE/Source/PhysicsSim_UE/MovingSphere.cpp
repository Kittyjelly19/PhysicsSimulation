// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingSphere.h"
#include "StaticSphere.h"
#include "CollisionPlane.h"
#include "Engine.h"
#include "Math/UnrealMathUtility.h"
#include <Kismet/KismetMathLibrary.h>

void AMovingSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CollisionDetection();

	/*if (canMove)
	{
		EulerianMethod();
	}*/
	

}

void AMovingSphere::CollisionDetection()
{
	A = statSphereInstance->startPos2 - newPos;

	
	currentVelocity.Normalize(1);
	normalizedVelocity = currentVelocity;

	q = FVector::DotProduct(A, currentVelocity);
	
	

	qInDegrees = q * (3.1415 / 180);

	FString qDegreeString = FString::SanitizeFloat(qInDegrees);
	GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Green, *qDegreeString);

	
	
	distanceOfClosestApproach = UKismetMathLibrary::DegSin(qInDegrees) * A.Size();
	
	FString distString = FString::SanitizeFloat(distanceOfClosestApproach);
	GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Red, *distString);

	//sumRadiiSquared = UKismetMathLibrary::Square(sumRadii);

	//e = UKismetMathLibrary::Sqrt((sumRadii * sumRadii) - (distanceOfClosestApproach * distanceOfClosestApproach));

	/*if (distanceOfClosestApproach <= sumRadii)
	{
		canMove = false;
		UE_LOG(LogTemp, Log, TEXT("collided"));
		this->SetActorLocation(newPos);
		
	}*/
	if (newPos.X >= statSphereInstance->startPos2.X + sumRadii && newPos.Z == 650&& newPos.Z >= statSphereInstance->startPos2.Z)
	{
		this->SetActorLocation(newPos);
		FString posString = FString::SanitizeFloat(newPos.X);
		GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Blue, *posString);
	}
}

bool AMovingSphere::hasHitPlane()
{
	if (newPos.Z - movingSphereRadius == planeInstance->planePos.Z)
	{
		return true;
		FString planeString = FString::SanitizeFloat(true);
		GEngine->AddOnScreenDebugMessage(-1, 1.0, FColor::Blue, *planeString);
	}
	return false;
}

void AMovingSphere::BeginPlay()
{
	Super::BeginPlay();
	currentVelocity = v;
	sumRadii = movingSphereRadius + statSphereInstance->r2;
}