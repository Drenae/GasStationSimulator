#include "RuinSpawner.h"

ARuinSpawner::ARuinSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RuinToSpawn = NULL;
    this->SpawnedRuin = NULL;
}

bool ARuinSpawner::TrySpawnRuin() {
    return false;
}

void ARuinSpawner::DestroyRuin(AActor* DestroyedActor) {
}


