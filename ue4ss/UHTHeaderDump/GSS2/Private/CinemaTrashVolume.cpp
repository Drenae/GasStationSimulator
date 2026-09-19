#include "CinemaTrashVolume.h"

ACinemaTrashVolume::ACinemaTrashVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CinemaHUDWidget = NULL;
    this->HUD = NULL;
    this->bIsPlayerInsideVolume = false;
    this->bIsTrashHighlighted = false;
    this->bAreStainsHighlighted = false;
    this->bIsPlayerHoldingShowButton = false;
    this->bIsHoldingTrashBag = false;
    this->bIsHoldingBroom = false;
    this->CinemaManager = NULL;
}

void ACinemaTrashVolume::UpdateTrashHighlight() {
}

void ACinemaTrashVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACinemaTrashVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACinemaTrashVolume::OnItemEquipped(const AActor* ItemActor) {
}

void ACinemaTrashVolume::OnHighlightCinemaTrash(const bool IsPressed) {
}


