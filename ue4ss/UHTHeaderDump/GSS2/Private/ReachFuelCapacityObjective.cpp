#include "ReachFuelCapacityObjective.h"

UReachFuelCapacityObjective::UReachFuelCapacityObjective() {
    this->bInGasStation = false;
    this->AirStripFuel = false;
    this->DesiredFuelCapacity = 0.00f;
    this->FuelObjectiveType = ERefuelObjectiveType::NEARLY_EQUALS;
}

void UReachFuelCapacityObjective::OnFuelLevelReached(AGSSWheeledVehicle* PlayerVehicle, float CurrentFuel, bool bGasStation) {
}


