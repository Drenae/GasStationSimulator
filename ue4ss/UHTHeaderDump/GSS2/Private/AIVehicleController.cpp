#include "AIVehicleController.h"

AAIVehicleController::AAIVehicleController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterBase = NULL;
    this->BehaviorTree = NULL;
    this->VehicleState = EVehicleState::Idle;
    this->VehicleMoveState = EVehicleMoveState::Driving;
}


