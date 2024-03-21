// Fill out your copyright notice in the Description page of Project Settings.


#include "AA.h"
#include "SteamText_oneProject/DebugMacros.h"



// Sets default values
AAA::AAA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAA::BeginPlay()
{
	Super::BeginPlay();
	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	DRAW_SPHERE(Location);
	int32 avg = TextAdd<int32>(10, 20);
	UE_LOG(LogTemp, Warning, TEXT("hello game"));
	if (GEngine) 
	{
		//GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("hello game :%d", avg));
	}
	//UE_LOG(LogTemp, Warning, TEXT("hello game :%d"),avg);
	SetActorLocation(FVector(0.f,0.f,50.f));



	
}

// Called every frame
void AAA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

