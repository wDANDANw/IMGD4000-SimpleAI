// Fill out your copyright notice in the Description page of Project Settings.


#include "SampleCharacter.h"

// Sets default values
ASampleCharacter::ASampleCharacter(const FObjectInitializer& ObjectInitializer)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	primaryAttackStarted = false;

	// Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshContainer(TEXT("SkeletalMesh'/Game/Raccoon/Base.Base'"));
	if (MeshContainer.Succeeded()) {

		GetMesh()->SetSkeletalMesh(MeshContainer.Object);
		GetMesh()->SetRelativeLocation(FVector(0, 0, -87));

	}

	static ConstructorHelpers::FObjectFinder<UClass> AnimationBlueprint(TEXT("AnimBlueprint'/Game/Raccoon/SampleAnimBP.SampleAnimBP_C'"));
	if (AnimationBlueprint.Object != NULL)
	GetMesh()->AnimClass = AnimationBlueprint.Object;


}

// Called when the game starts or when spawned
void ASampleCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASampleCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASampleCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("PrimaryAttack", IE_Pressed, this, &ASampleCharacter::PrimaryAttack);
	PlayerInputComponent->BindAxis("MoveForward", this, &ASampleCharacter::MovingForward);

}

void ASampleCharacter::PrimaryAttack() {

	if (primaryAttackStarted == true) return;
	
	primaryAttackStarted = true;
	UE_LOG(LogTemp, Warning, TEXT("Primary Attacked"));
	
	GetWorld()->GetTimerManager().SetTimer(PrimaryAttackTimeHandle, this, &ASampleCharacter::stopPrimaryAttack, 0.2f);
}

void ASampleCharacter::stopPrimaryAttack() {

	primaryAttackStarted = false;
	UE_LOG(LogTemp, Warning, TEXT("Stopped Primary Attack"));
}

void ASampleCharacter::MovingForward(float Amount) {

	AddMovementInput(GetActorForwardVector(), Amount);
}