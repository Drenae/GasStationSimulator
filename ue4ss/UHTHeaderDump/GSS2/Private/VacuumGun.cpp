#include "VacuumGun.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AVacuumGun::AVacuumGun(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("SkeletalMesh"))) {
    this->SkeletalMesh = (USkeletalMeshComponent*)RootComponent;
    this->ProjectilesSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
    this->FireAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("FireAudioComponent"));
    this->FireAudioComponent->SetupAttachment(RootComponent);
    this->ProjectilesSpawnPoint->SetupAttachment(RootComponent);
}


