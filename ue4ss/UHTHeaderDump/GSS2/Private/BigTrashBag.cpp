#include "BigTrashBag.h"

ABigTrashBag::ABigTrashBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxTrashCapacity = 25.00f;
    this->MaxTrashBagCapacity = 250.00f;
}

float ABigTrashBag::RefreshMesh_Implementation() {
    return 0.0f;
}

bool ABigTrashBag::AddNewTrash(AProduct* Product, float& NewCapacity, bool& SpawnedTrash) {
    return false;
}


