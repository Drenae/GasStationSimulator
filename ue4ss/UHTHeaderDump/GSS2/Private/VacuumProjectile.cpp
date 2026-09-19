#include "VacuumProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

AVacuumProjectile::AVacuumProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
    this->ProjectileMesh = (UStaticMeshComponent*)RootComponent;
    this->MovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->PullTrashSphereArea = CreateDefaultSubobject<USphereComponent>(TEXT("SphereArea"));
    this->TrashClass = NULL;
    this->HomingTarget = CreateDefaultSubobject<USceneComponent>(TEXT("HomingTarget"));
    this->GravityScale = 0.60f;
    this->Acceleration = 3000.00f;
    this->TrashDestroyDistance = 25.00f;
    this->TrashDestroyPercentage = 10.00f;
    this->DestroyedTrashCounter = 0.00f;
    this->bTrashBinEmptied = false;
    this->bDirtyActorCleaned = false;
    this->FlyAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("FlyAudioComponent"));
    this->HitAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("HitAudioComponent"));
    this->FlyAudioComponent->SetupAttachment(RootComponent);
    this->HitAudioComponent->SetupAttachment(RootComponent);
    this->HomingTarget->SetupAttachment(RootComponent);
    this->PullTrashSphereArea->SetupAttachment(RootComponent);
}

void AVacuumProjectile::PullTrash() {
}

void AVacuumProjectile::DestroyTrashNotCloseEnough() {
}


