// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EulerBall.h"
#include "MovingSphere.generated.h"

/**
 * 
 */
UCLASS()
class PHYSICSSIM_UE_API AMovingSphere : public AEulerBall
{
	GENERATED_BODY()


public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
		float movingSphereRadius = 50.0f;

	UPROPERTY(EditAnywhere)
		class AStaticSphere* statSphereInstance;

	UPROPERTY(EditAnywhere)
		class ACollisionPlane* planeInstance;

	void CollisionDetection();

	bool hasHitPlane();

	//The vector frpm the centre of moving sphere to centre of static sphere.
	FVector A = { 0, 0, 0 };

	//Velocity is in Euler ball

	FVector normalizedVelocity = { 0, 0, 0 };

	float q = 0.0f;
	float distanceOfClosestApproach = 0.0f;

	float qInDegrees = 0.0f;

	float e = 0.0f;

	float sumRadii = 0.0f;
	float sumRadiiSquared = 0.0f;

	FVector newVelocity = { 0,0,0 };
	FVector currentVelocity = newVelocity;

	FVector g = { 0,0,-9.8 };

	bool canMove = true;

};
