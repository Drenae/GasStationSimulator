#include "TrashBin.h"

ATrashBin::ATrashBin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentCapacity = 0.00f;
    this->SingleTrashMax = 25.00f;
    this->MaxCapacity = 250.00f;
    this->bIsFullTrashBin = false;
}

bool ATrashBin::UpdateTrashBinCapacity(float TrashCapacity, float& TrashBinCapacityInPercent, bool IgnoreLimit) {
    return false;
}

void ATrashBin::UpdateThrowDistance(AProduct* Product) {
}


void ATrashBin::EmptyTrash() {
}


