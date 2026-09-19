#include "CarLiftVolume.h"

ACarLiftVolume::ACarLiftVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CarLiftReference = NULL;
    this->GarageRef = NULL;
}

void ACarLiftVolume::SetGarageRef(AGarage* NewGarageRef) {
}

void ACarLiftVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACarLiftVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


