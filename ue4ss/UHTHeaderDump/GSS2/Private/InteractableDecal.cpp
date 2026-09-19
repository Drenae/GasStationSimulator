#include "InteractableDecal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent

AInteractableDecal::AInteractableDecal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapBox"));
    this->DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
    this->DecalLettersLength = 0;
    this->BoxOverlap = (UBoxComponent*)RootComponent;
    this->DecalType = EDecalType::DirtyDecal;
    this->bBeingCleaned = false;
    this->DecalComponent->SetupAttachment(RootComponent);
}

void AInteractableDecal::SetBeingCleaned(bool bNewCleaned) {
}

bool AInteractableDecal::GetBeingCleaned() {
    return false;
}


