#include "ScratchActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

AScratchActor::AScratchActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseHealth = 100.00f;
    this->DecalHitArea = CreateDefaultSubobject<UBoxComponent>(TEXT("DecalHitArea"));
    this->MDI = NULL;
    this->CurrentHealth = 100.00f;
    this->DecalHitArea->SetupAttachment(RootComponent);
}

float AScratchActor::GetHealth() {
    return 0.0f;
}

void AScratchActor::DamageScratch(float Damage) {
}


