#include "VehiclePart.h"

AVehiclePart::AVehiclePart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequirmentVehiclePartToFix = NULL;
    this->bNeedsFixing = false;
    this->bIsBroken = false;
    this->TimeToRepair = 15.00f;
    this->bReplacementFailed = false;
    this->IsAcumulatorVehiclePart = false;
}

void AVehiclePart::UpdateVehiclePart_Implementation(bool Broken, bool WasFixedSuccessfully) {
}

bool AVehiclePart::TryBroke(float ChanceToBroke, int32 RequirmentGarageLevel) {
    return false;
}

void AVehiclePart::StartVehicleMinigame_Implementation(APawn* Pawn, bool Success, const FString& FailReason) {
}

bool AVehiclePart::PlayerHasCompatibileItem() {
    return false;
}

bool AVehiclePart::IsConnectedToVehicle() {
    return false;
}

void AVehiclePart::InteractMode_Implementation(const bool Enabled) {
}

AActor* AVehiclePart::GetOwnerWaterVehicle() {
    return NULL;
}

AGSSWheeledVehicle* AVehiclePart::GetOwnerVehicle() {
    return NULL;
}

AActor* AVehiclePart::GetOwnerFlyingVehicle() {
    return NULL;
}

bool AVehiclePart::ConnectToVehicle(AGSSWheeledVehicle* NewGSSWheeledVehicle) {
    return false;
}


