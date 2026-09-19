#include "CarWashTrashVolume.h"

ACarWashTrashVolume::ACarWashTrashVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviousAmount = -1;
    this->UpdatePreasue = true;
}

void ACarWashTrashVolume::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACarWashTrashVolume::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

void ACarWashTrashVolume::OnGameLoaded(bool bGameLoaded) {
}

TArray<ACarWashTrash*> ACarWashTrashVolume::GetTrashInVolume() {
    return TArray<ACarWashTrash*>();
}

int32 ACarWashTrashVolume::GetAmountOfTrashItemsInVolume() {
    return 0;
}


