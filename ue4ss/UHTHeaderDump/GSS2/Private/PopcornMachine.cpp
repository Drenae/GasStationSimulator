#include "PopcornMachine.h"

APopcornMachine::APopcornMachine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MachineState = ePopcornMachineState::READY;
    this->CurrentCapacity = 0;
    this->MaximumCapacity = 20;
    this->ProductionTime = 10.00f;
    this->PopcornMaterial = NULL;
    this->ActualProductionTime = 0.00f;
}

void APopcornMachine::UpdateProductionTime() {
}


void APopcornMachine::StartProduction(bool bAfterGameLoading) {
}

void APopcornMachine::SetMachineState(ePopcornMachineState NewMachineState) {
}

void APopcornMachine::PopcornDeliveredActions(AActor* PopcornBox, AActor* Vehicle) {
}



void APopcornMachine::CheckForEmptyMachine() {
}


