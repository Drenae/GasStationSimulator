#include "PilotsAnimInstance.h"

UPilotsAnimInstance::UPilotsAnimInstance() {
    this->ActionRepeatAmount = 0;
    this->JoeSittingState = EJoeSittingState::Breathing;
    this->PilotMontageState = EMontagePilotState::Mounted;
    this->MontageCancelReason = EMontageCancelReason::NewTask;
    this->WaterMovementPlayRate = 1.00f;
}

void UPilotsAnimInstance::SetWaterMovementPlayRate(float NewSpeed) {
}

void UPilotsAnimInstance::SetJoeSittingState(EJoeSittingState NewState) {
}

void UPilotsAnimInstance::SetActionRepeatAmount(int32 NewInt) {
}



float UPilotsAnimInstance::GetWaterMovementPlayRate() {
    return 0.0f;
}

EMontagePilotState UPilotsAnimInstance::GetPilotMontageState() {
    return EMontagePilotState::Mounted;
}

EMontageCancelReason UPilotsAnimInstance::GetMontageCancleReason() {
    return EMontageCancelReason::NewTask;
}

EJoeSittingState UPilotsAnimInstance::GetJoeSittingState() {
    return EJoeSittingState::Breathing;
}

int32 UPilotsAnimInstance::GetActionRepeatAmount() {
    return 0;
}

void UPilotsAnimInstance::ChangePilotMontageState(EMontagePilotState NewPilotMontageState) {
}


