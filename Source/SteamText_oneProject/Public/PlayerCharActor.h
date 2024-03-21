
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
	//���ɱ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;
	//������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	//����ӳ��������
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	//��Ծ��Ϊ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;
	//�ƶ���Ϊ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;
	//�ۿ���Ϊ
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* LookAction;



public:

	APlayerCharActor();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//��������ȡ���ɱ�
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	//��������ȡ���
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

protected:

	virtual void BeginPlay() override;

	//�ƶ���Ϊ����ʱ����
	void Move(const FInputActionValue& Value);

	//�ۿ���Ϊ����ʱ����
	void Look(const FInputActionValue& Value);

};
	

