#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NewtonBall.generated.h"

UCLASS()
class PHYSICSSIM_UE_API ANewtonBall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANewtonBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector startPos = { 0,0,0 };
	FVector newPos = { 0,0,0 };
	FVector currentPos = newPos;

	UPROPERTY(EditAnywhere, Category = "Ball Properties")
	FVector startVel = { 0,0,0 };
	
	FVector newVel = { 0,0,0 };
	FVector currentVel = newVel;

	FVector g = { 0,0,-9.8 };

	float t = 0;



	int framerate = 60;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void NewtonianMethod();
};
