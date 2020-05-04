// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SampleCharacter.generated.h"

UCLASS()
class PRESENTATION_API ASampleCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASampleCharacter(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(BlueprintReadWrite)
	bool primaryAttackStarted;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FTimerHandle PrimaryAttackTimeHandle;
	UFUNCTION(BLUEPRINTCALLABLE, Category = "Raccoon Actions")
	void stopPrimaryAttack();
	UFUNCTION(BLUEPRINTCALLABLE, Category = "Raccoon Actions")
	void PrimaryAttack();

	UFUNCTION(BLUEPRINTCALLABLE, Category = "Raccoon Actions")
	void MovingForward(float Amount);

};
