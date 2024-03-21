

#include "BaseCharActor.h"


ABaseCharActor::ABaseCharActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABaseCharActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseCharActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseCharActor::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

