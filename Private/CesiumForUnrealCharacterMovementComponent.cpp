// Fill out your copyright notice in the Description page of Project Settings.


#include "CesiumForUnrealCharacterMovementComponent.h"


// Sets default values for this component's properties
UCesiumForUnrealCharacterMovementComponent::UCesiumForUnrealCharacterMovementComponent() : AutoUpdate(false)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UCesiumForUnrealCharacterMovementComponent::UpdateBasedMovement(float DeltaSeconds)
{
	if (AutoUpdate)
	{
		Super::UpdateBasedMovement(DeltaSeconds);
	}
	else
	{
		return;
	}
}


// Called when the game starts
void UCesiumForUnrealCharacterMovementComponent::BeginPlay()
{
		Super::BeginPlay();

		// ...
}


// Called every frame
void UCesiumForUnrealCharacterMovementComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                               FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
