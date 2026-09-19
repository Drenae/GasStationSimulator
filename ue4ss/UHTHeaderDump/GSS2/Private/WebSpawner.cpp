#include "WebSpawner.h"

AWebSpawner::AWebSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AWebSpawner::SetRequiredLevelMap(TArray<FSpiderWebPosition> InRequiredLevelMap) {
}

void AWebSpawner::SetArrayStructByIndex(ASpiderWebBase* SpawnedWeb, bool bIsOccupied, int32 Index) {
}




TArray<ASpiderWebBase*> AWebSpawner::GetSpawnedWebs() {
    return TArray<ASpiderWebBase*>();
}

TArray<FSpiderWebPosition> AWebSpawner::GetRequiredLevelMap() {
    return TArray<FSpiderWebPosition>();
}

void AWebSpawner::AddToSpawnedWebs(ASpiderWebBase* ToAdd) {
}


