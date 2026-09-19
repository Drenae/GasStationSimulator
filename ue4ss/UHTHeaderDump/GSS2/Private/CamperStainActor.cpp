#include "CamperStainActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ACamperStainActor::ACamperStainActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitArea = CreateDefaultSubobject<UBoxComponent>(TEXT("Hit Area"));
    this->bSoftened = false;
    this->bWashed = false;
    this->HitArea->SetupAttachment(RootComponent);
}

bool ACamperStainActor::IsWashed() const {
    return false;
}

void ACamperStainActor::EnableShowDirt_Implementation(bool bEnable) {
}


