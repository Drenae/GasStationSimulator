#include "Switch.h"

ASwitch::ASwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartingSwitchState = ESwitchState::OFF;
    this->ActiveSwitchState = ESwitchState::OFF;
}

void ASwitch::SetSwitchState(ESwitchState NewState) {
}

void ASwitch::OnStateUpdated_Implementation(ESwitchState NewState) {
}

ESwitchState ASwitch::GetSwitchState() {
    return ESwitchState::ON;
}


