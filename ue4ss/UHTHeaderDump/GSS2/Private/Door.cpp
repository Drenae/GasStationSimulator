#include "Door.h"

ADoor::ADoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartingDoorState = EDoorState::CLOSED;
    this->ActiveDoorState = EDoorState::CLOSED;
}

void ADoor::SetDoorState(EDoorState NewState) {
}

void ADoor::OnStateUpdated_Implementation(EDoorState NewState) {
}

EDoorState ADoor::GetDoorState() {
    return EDoorState::OPEN;
}


