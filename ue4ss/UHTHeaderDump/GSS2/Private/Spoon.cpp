#include "Spoon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ASpoon::ASpoon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MainSkeletalMesh"));
    this->MainSkeletalMesh = (USkeletalMeshComponent*)RootComponent;
    this->ScoopMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ScoopMesh"));
    this->SoundSpoonInContainer = NULL;
    this->SoundSpoonOutContainer = NULL;
    this->SoundSpoonSqueeze = NULL;
    this->SoundSpoonRelease = NULL;
    this->SoundPlaceScoop = NULL;
    this->TraceMultiplier = 300.00f;
    this->ToContainerLerpStep = 300.00f;
    this->ToConeLerpStep = 150.00f;
    this->ToHandLerpStep = 150.00f;
    this->SqueezeStep = 150.00f;
    this->Cone = NULL;
    this->bSpoonVisible = false;
    this->Container = NULL;
    this->ScoopMesh->SetupAttachment(RootComponent);
}


