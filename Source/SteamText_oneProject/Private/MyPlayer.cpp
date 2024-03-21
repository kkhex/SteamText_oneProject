

#include "MyPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"//增强输入组件类
#include "GameFramework/CharacterMovementComponent.h"

AMyPlayer::AMyPlayer()
{
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// 角色的旋转是否与控制器同步（不同步）
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// 角色旋转使用移动组件，以RotationRate速率转向加速度方向
	GetCharacterMovement()->bOrientRotationToMovement = true; //旋转指向运动
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
	//时root与弹簧臂的相对旋转（弹簧臂本身不会旋转）
	CameraBoom->bUsePawnControlRotation = true;//使用控制器旋转
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
	//绑定跳跃行为
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


