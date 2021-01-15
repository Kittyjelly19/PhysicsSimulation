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


		UPROPERTY(VisibleAnywhere)
		int movingSphereRadius = 50.f;

		UPROPERTY(EditAnywhere)
		class AStaticSphere* statSphereInstance;

		UFUNCTION()
			void CollisionDetection();

		//The vector frpm the centre of moving sphere to centre of static sphere.
		FVector a = { 0, 0, 0 };

		//Velocity is in Euler ball

		float q = 0.f;
		float d;

		float qInDegrees = 0.f;

		//float dotOfAandV = 0;
};
