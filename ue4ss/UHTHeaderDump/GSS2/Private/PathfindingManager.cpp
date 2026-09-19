#include "PathfindingManager.h"

APathfindingManager::APathfindingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void APathfindingManager::ResetNodes(TArray<APathPoint*> ClosedNodes) {
}

void APathfindingManager::GenerateNavLinks() {
}

TArray<APathPoint*> APathfindingManager::FindPath(APathPoint* StartPoint, APathPoint* EndPoint, AGSSWheeledVehicle* GSSVehicle) {
    return TArray<APathPoint*>();
}


