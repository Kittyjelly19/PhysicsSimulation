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

	/*UPROPERTY()
	FVector startPos = { 0, 0, 0 };
		
	UPROPERTY(EditAnywhere)
	float movingSphereRadius = 50.f;

	virtual void Tick(float DeltaTime)override;

	virtual void BeginPlay() override;*/
};
