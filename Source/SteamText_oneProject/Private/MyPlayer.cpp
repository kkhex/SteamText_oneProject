

#include "MyPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"//��ǿ���������
#include "GameFramework/CharacterMovementComponent.h"

AMyPlayer::AMyPlayer()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// ��ɫ����ת�Ƿ��������ͬ������ͬ����
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// ��ɫ��תʹ���ƶ��������RotationRate����ת����ٶȷ���
	GetCharacterMovement()->bOrientRotationToMovement = true; //��תָ���˶�
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	//ʱroot�뵯�ɱ۵������ת�����ɱ۱�������ת��
	CameraBoom->bUsePawnControlRotation = true;//ʹ�ÿ�������ת
	FollowCamera->bUsePawnControlRotation = false;
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
}

void AMyPlayer::Tick(float DeltaTime)
{
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//����Ծ��Ϊ
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {

		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
	

}


