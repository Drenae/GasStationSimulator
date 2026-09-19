#include "PathPoint.h"

APathPoint::APathPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleTypes.AddDefaulted(3);
    this->Parent = NULL;
    this->PathCost = 999999999;
    this->PathCostMultipler = 1.00f;
    this->IsExhausted = false;
    this->IsOccupied = false;
    this->IsUnlimited = false;
    this->IsUnLocked = true;
}

void APathPoint::StopReservePathPoint(AActor* Actor) {
}

void APathPoint::StartReservePathPoint(AActor* Actor) {
}

void APathPoint::SetLockState(bool Enabled) {
}

void APathPoint::DestroyRuin(AActor* DestroyedActor) {
}

bool APathPoint::CanBeUnblocked() {
    return false;
}


