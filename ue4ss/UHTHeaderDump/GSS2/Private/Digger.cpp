#include "Digger.h"

ADigger::ADigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetHoldDistance = 0.00f;
    this->CurrentHoldDistance = 0.00f;
    this->OverlappedSandDune = NULL;
    this->bCanDiggerBeEmpty = false;
    this->DiggerWidgetInstance = NULL;
}


void ADigger::SetOverlappedSandDune(ARuins* InDune) {
}

void ADigger::SetIsFull(bool bNewValue) {
}


void ADigger::SetCanDiggerBeEmpty(bool InCanBeEmpty) {
}


ARuins* ADigger::GetOverlappedSandDune() {
    return NULL;
}

bool ADigger::GetIsFull() const {
    return false;
}

bool ADigger::GetCanDiggerBeEmpty() {
    return false;
}



