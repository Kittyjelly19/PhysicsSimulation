// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "NewtonBall.generated.h"

UCLASS()
class PHYSICSSIM_UE_API ANewtonBall : public AActor
{
	GENERATED_BODY()

protected:
	FVector startPos = { 0,0,0 };
	FVector newPos = { 0, 0, 0 };

	UPROPERTY(EditAnywhere, Category = "n_Ball")
		float v = 0.0f;
	float a = 0.0f;
	float g = 9.8f;
	float t = 0.0f;
	float frame = 0.0f;
	int framerate = 60;

public:
	ANewtonBall();

protected:
	virtual void BeginPlay()override;
	void NewtonianMethod();
public:
	virtual void Tick(float DeltaTime)override;
	
//public:	
//	// Sets default values for this actor's properties
//	/*ANewtonBall();*/
//
//	ANewtonBall(/*const FObjectInitializer& ObjectInitializer*/);
//
//	UPROPERTY(EditDefaultsOnly, Category = "n_Ball") 
//		UStaticMeshComponent* n_BallMesh;
//
//
//	////Property for *n_ball* mesh. 
//	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "n_Ball")
//	//	class UStaticMeshComponent* n_BallMesh;
//
//
///*
//	UPROPERTY(EditAnywhere, Category = "n_Ball")
//		UStaticMeshComponent* BallMesh;*/
//
//	//Property for *n_ball* start position (vector(x,y,z)).
//	/*UPROPERTY(EditAnywhere, Category = "n_Ball")*/
//	FVector startPos = {0,0,0};
//
//	//Property for *n_ball* finish position(vector(x,y,z)).
//	/*UPROPERTY(EditAnywhere, Category = "n_Ball")*/
//		FVector newPos = { 0,0,0 };
//
//	//Property for *n_ball* Velocity.
//	UPROPERTY(EditAnywhere, Category = "n_Ball")
//		float v = 500.f;
//
//	//Property for *n_ball* acceleration.
//	UPROPERTY(EditAnywhere, Category = "n_Ball")
//		float a = 0.0f;
//
//	//Property for gravtity acting on *n_ball*.
//	UPROPERTY(EditAnywhere, Category = "n_Ball")
//	float gravity = 9.8f;
//
//	//Property for time.
//	/*UPROPERTY(EditAnywhere, Category = "n_Ball")*/
//		float t = 0.0f;
//
//	//Property for single frame.
//	//UPROPERTY()
//		float frame = 0.0f;
//
//	//Property for frame rate.
//	float framerate = 60.0f;
//
//	UFUNCTION()
//		virtual void NewtonianMethod();
//
//
//
//
//protected:
//	// Called when the game starts or when spawned
//	virtual void BeginPlay() override;
//
//public:	
//	// Called every frame
//	virtual void Tick(float DeltaTime) override;

};
