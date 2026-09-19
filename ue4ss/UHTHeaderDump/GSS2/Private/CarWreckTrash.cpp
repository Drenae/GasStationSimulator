#include "CarWreckTrash.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ACarWreckTrash::ACarWreckTrash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TowySnapBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->TowySnapBox->SetupAttachment(RootComponent);
}

bool ACarWreckTrash::ShouldActorRotate_Implementation() {
    return false;
}

void ACarWreckTrash::PlayEventOnDeattached_Implementation() {
}


UPrimitiveComponent* ACarWreckTrash::GetPrimitiveToApplyFore_Implementation() {
    return NULL;
}

UPrimitiveComponent* ACarWreckTrash::GetAttractedPrimitive_Implementation() {
    return NULL;
}

bool ACarWreckTrash::CanMagnetActivatePhysics_Implementation() {
    return false;
}

bool ACarWreckTrash::CanActorGetAttracted_Implementation() {
    return false;
}


