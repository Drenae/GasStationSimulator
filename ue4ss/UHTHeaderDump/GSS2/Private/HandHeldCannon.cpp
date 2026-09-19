#include "HandHeldCannon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AHandHeldCannon::AHandHeldCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("SkeletalMesh"))) {
    this->SkeletalMesh = (USkeletalMeshComponent*)RootComponent;
    this->FireAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("FireAudioComponent"));
    this->FireAudioComponent->SetupAttachment(RootComponent);
}


