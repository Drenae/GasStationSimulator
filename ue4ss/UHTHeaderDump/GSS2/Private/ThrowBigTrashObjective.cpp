#include "ThrowBigTrashObjective.h"

UThrowBigTrashObjective::UThrowBigTrashObjective() {
    this->bCountOnlyAirStripTrashAndContainers = false;
    this->bCountTrashPickedUpWithTrashBag = false;
    this->MaxTrashSize = 1000.00f;
    this->MinTrashSize = 0.00f;
    this->TrashCollisionProfile = TEXT("InteractableMeshThrow");
    this->DestroyedTrash = 0;
    this->StartingProgress = 0;
}

void UThrowBigTrashObjective::OnTrashContainerTrashAmountChanged(ATrashBin* TrashBin, TArray<AActor*> CurrentTrashInside, AItem* TrashItem, bool bAdded) {
}

void UThrowBigTrashObjective::OnActorDestroyed(AActor* DestroyedActor) {
}


