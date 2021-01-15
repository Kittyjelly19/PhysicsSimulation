// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticSphere.generated.h"

UCLASS()
class PHYSICSSIM_UE_API AStaticSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStaticSphere();

	int r2 = 50;

	UPROPERTY(VisibleAnywhere)
		int staticSphereRadius = 50;

	UPROPERTY()
		FVector startPos2 = { 0,0,0 };

	/*UPROPERTY(EditAnywhere)
		UStaticMeshComponent* statMesh;*/

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	/*AStaticSphere* statSphere;*/
	
	/*float GetSphere2Radius() { return r2; }*/
	
	/*FVector GetStartPos2() { return startPos2; }*/

};
