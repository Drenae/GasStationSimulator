#include "CinemaMuteMusicVolume.h"

ACinemaMuteMusicVolume::ACinemaMuteMusicVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CinemaManager = NULL;
}

void ACinemaMuteMusicVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACinemaMuteMusicVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}


