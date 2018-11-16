// Fill out your copyright notice in the Description page of Project Settings.

#include "AntiTilt.h"
#include "GameFramework/Actor.h"

float xRotationLimit = 20;
float yRotationLimit = 20;
float zRotationLimit = 20;

AActor* ParentActor;


// Sets default values for this component's properties
UAntiTilt::UAntiTilt()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAntiTilt::BeginPlay()
{
	Super::BeginPlay();

	// ...
	ParentActor = this->GetOwner();
}


// Called every frame
void UAntiTilt::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	FRotator ParentRotation = ParentActor->GetActorRotation();
	ParentRotation.Pitch;
	UE_LOG(LogTemp, Warning, TEXT("Pitch is: %f"), ParentRotation.Pitch);
}
