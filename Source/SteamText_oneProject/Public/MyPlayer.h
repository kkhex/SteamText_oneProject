
#pragma once

#include "CoreMinimal.h"
#include "PlayerCharActor.h"
#include "MyPlayer.generated.h"

/**
 * 
 */
UCLASS()
class STEAMTEXT_ONEPROJECT_API AMyPlayer : public APlayerCharActor
{
	GENERATED_BODY()
	
public:

protected:



public:

	AMyPlayer();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	virtual void BeginPlay() override;


};
