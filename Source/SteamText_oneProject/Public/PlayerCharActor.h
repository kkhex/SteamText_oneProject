
#pragma once

#include "CoreMinimal.h"
#include "BaseCharActor.h"
#include "PlayerCharActor.generated.h"


class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

/**
 * 
 */
UCLASS()
class STEAMTEXT_ONEPROJECT_API APlayerCharActor : public ABaseCharActor
{
	GENERATED_BODY()

public:

protected:
	//弹簧臂组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;
	//相机组件
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	//按键映射上下文
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	//跳跃行为
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	//移动行为
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	//观看行为
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;



public:

	APlayerCharActor();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//内联：获取弹簧臂
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	//内联：获取相机
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:

	virtual void BeginPlay() override;

	//移动行为输入时调用
	void Move(const FInputActionValue& Value);

	//观看行为输入时调用
	void Look(const FInputActionValue& Value);

};
	

