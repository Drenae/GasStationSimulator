#include "GarageVolume.h"

AGarageVolume::AGarageVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GarageRef = NULL;
}

void AGarageVolume::SetGarageRef(AGarage* NewGarageRef) {
}

void AGarageVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AGarageVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


