#include "SharkSpawner.h"

ASharkSpawner::ASharkSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnedShark = NULL;
    this->bSharkInPreparation = false;
}



void ASharkSpawner::SetSpawnedShark(AShark* NewShark) {
}

AShark* ASharkSpawner::GetSpawnedShark() {
    return NULL;
}


