#include "DirtyDecal.h"

ADirtyDecal::ADirtyDecal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedOnWall = false;
    this->ArrayIndex = -1;
}

void ADirtyDecal::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ADirtyDecal::IsBarStain_Implementation() const {
    return false;
}


