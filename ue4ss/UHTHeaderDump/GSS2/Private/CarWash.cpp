#include "CarWash.h"

ACarWash::ACarWash(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MoneyPerCarWashed = 50.00f;
    this->MoneyPerCarWashedAutomatic = 50.00f;
    this->PressureLossPerSecond = 5.00f;
    this->StartingWaterPressure = 6.00f;
    this->AutomaticCarWashPressureCostMultiplier = 100.00f;
    this->bFirstCustomerServed = false;
    this->PressureSinceLastSpawn = 0.00f;
    this->CarWashTrashVolume = NULL;
    this->PreviousWaterPressureValue = -1.00f;
    this->CurrentWaterPressure = 6.00f;
    this->CurrentMaximumWaterPressure = 1000.00f;
}

void ACarWash::StationUpgraded(const int32 NewLevel) {
}

void ACarWash::SpawnTrash() {
}

void ACarWash::SetWaterPressure(float NewValue) {
}


void ACarWash::SetupAutomaticCarWash(int32 ActorLevel) {
}

void ACarWash::SetPressureSinceLastSpawn(float NewValue) {
}

void ACarWash::OnTrashRemovedFromPump(int32 TrashChange, int32 Count) {
}


bool ACarWash::IsAutomaticUnlocked() {
    return false;
}

float ACarWash::GetWaterPressurePercentage() {
    return 0.0f;
}

float ACarWash::GetPresssureSinceTrash() {
    return 0.0f;
}

float ACarWash::GetMaximumWaterPressure() {
    return 0.0f;
}

float ACarWash::GetCurrentWaterPressure() {
    return 0.0f;
}

void ACarWash::CarWashUsageNotification(float DeltaTime) {
}


