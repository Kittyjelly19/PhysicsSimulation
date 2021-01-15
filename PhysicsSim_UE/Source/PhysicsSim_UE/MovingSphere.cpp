// Fill out your copyright notice in the Description page of Project Settings.

#include "MovingSphere.h"
#include <Kismet/KismetMathLibrary.h>
#include "StaticSphere.h"

void AMovingSphere::CollisionDetection()
{
	a = startPos - statSphereInstance->r2;

	q = FVector::DotProduct(a, currentVel);

	qInDegrees = q * (3.1415 / 180);
	
	d = sin(qInDegrees) * a.Size();

	

	if (d < movingSphereRadius + statSphereInstance->r2)
	{
		UE_LOG(LogTemp, Log, TEXT("Collision possible"));
		
		
	}
	
	/*if (d = movingSphereRadius + statSphereInstance->r2)
	{
		SetActorLocation(newPos);
	}*/

	
}


void AMovingSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	CollisionDetection();
}