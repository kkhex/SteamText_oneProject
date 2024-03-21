

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharActor.generated.h"

UCLASS()
class STEAMTEXT_ONEPROJECT_API ABaseCharActor : public ACharacter
{
	GENERATED_BODY()


public:
	
protected:



public:

	ABaseCharActor();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	
	virtual void BeginPlay() override;


};
