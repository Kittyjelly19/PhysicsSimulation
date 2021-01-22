// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollisionPlane.generated.h"

UCLASS()
class PHYSICSSIM_UE_API ACollisionPlane : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollisionPlane();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector planePos = { 0, 0, 0 };

	float planeWidth = 0.0f;
	float planeDepth = 0.0f;

};
