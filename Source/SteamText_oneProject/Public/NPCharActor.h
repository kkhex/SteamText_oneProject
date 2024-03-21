
#pragma once

#include "CoreMinimal.h"
#include "BaseCharActor.h"
#include "NPCharActor.generated.h"

/**
 * 
 */
UCLASS()
class STEAMTEXT_ONEPROJECT_API ANPCharActor : public ABaseCharActor
{
	GENERATED_BODY()
	
public:

protected:



public:

	ANPCharActor();
	virtual void Tick(float DeltaTime) override;

protected:

	virtual void BeginPlay() override;


};
