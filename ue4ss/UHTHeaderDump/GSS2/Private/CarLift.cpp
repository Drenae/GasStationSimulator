#include "CarLift.h"

ACarLift::ACarLift(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentVehicle = NULL;
    this->bIsLiftedUp = false;
    this->bIsBlockedLiftedDown = false;
}



void ACarLift::PutOutCar_Implementation(AGSSWheeledVehicle* GSSWheeledVehicle) {
}

void ACarLift::PutInCar_Implementation(AGSSWheeledVehicle* GSSWheeledVehicle) {
}


float ACarLift::GetMiniGameTimeRemaining() {
    return 0.0f;
}

void ACarLift::FinishCarLiftGame() {
}


