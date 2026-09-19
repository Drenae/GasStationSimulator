#include "SavedVehicles.h"

FSavedVehicles::FSavedVehicles() {
    this->GSSWheeledVehicle = NULL;
    this->SimulatePhysics = false;
    this->bCanBeAttractedByMagnetSave = false;
    this->VehicleOptymalizeType = EVehicleOptymalizeType::Default;
    this->InteactionMode = false;
    this->bInVehicleWasFixed = false;
    this->MaskInventoryMoney = 0.00f;
    this->LockDifficulty = 0;
    this->AvailableLockPicks = 0;
    this->HoodState = EVehicleHoodState::CLOSED;
}

