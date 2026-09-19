#include "CraneShredder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ACraneShredder::ACraneShredder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldCloseOnExitFromCrane = false;
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->MagnetTargetPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("MagnetTargetPosition"));
    this->MagnetWaitPosition = CreateDefaultSubobject<UArrowComponent>(TEXT("MagnetWaitPosition"));
    this->SlipForceDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("SlipForceDirection"));
    this->CraneBindingLocation = CreateDefaultSubobject<UArrowComponent>(TEXT("CraneBindingLocation"));
    this->LidSlipForce = 5.00f;
    this->DisableLidOverlapTime = 5.00f;
    this->CrusherLockedErrorDuration = 3.00f;
    this->ClosedLidCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("ClosedLidCollision"));
    this->OpenLidCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("OpenLidCollision"));
    this->OpenLidOverlap = CreateDefaultSubobject<UBoxComponent>(TEXT("OpenLidOverlap"));
    this->ShreddedWreck = NULL;
    this->ShreddingTime = 3.00f;
    this->ShredderAnimInstance = NULL;
    this->LoadedWreck = NULL;
    this->ClosedLidCollision->SetupAttachment(RootComponent);
    this->CraneBindingLocation->SetupAttachment(RootComponent);
    this->MagnetTargetPosition->SetupAttachment(RootComponent);
    this->MagnetWaitPosition->SetupAttachment(RootComponent);
    this->OpenLidCollision->SetupAttachment(RootComponent);
    this->OpenLidOverlap->SetupAttachment(OpenLidCollision);
    this->SkeletalMesh->SetupAttachment(RootComponent);
    this->SlipForceDirection->SetupAttachment(OpenLidCollision);
}

void ACraneShredder::OpenShredder() {
}

void ACraneShredder::OpenCloseShredder(bool IgnoreLocked) {
}

void ACraneShredder::OnOpenAnimationCompleted() {
}

void ACraneShredder::OnCrushingCompleted() {
}

void ACraneShredder::OnCloseAnimationCompleted() {
}

bool ACraneShredder::IsOpen() {
    return false;
}

bool ACraneShredder::IsCrushingCar() {
    return false;
}

UCarCrusher_AnimInstance* ACraneShredder::GetAnimInstance() {
    return NULL;
}


void ACraneShredder::CloseShredder() {
}


