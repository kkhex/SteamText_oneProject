// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AA.generated.h"

UCLASS()
class STEAMTEXT_ONEPROJECT_API AAA : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	template<typename T>
	T TextAdd(T one, T two);
};

template<typename T>
inline T AAA::TextAdd(T one, T two)
{
	return (one + two)/2;
}
