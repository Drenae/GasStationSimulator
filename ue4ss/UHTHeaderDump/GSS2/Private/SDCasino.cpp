#include "SDCasino.h"

ASDCasino::ASDCasino(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOpened = false;
}

void ASDCasino::SetOpened_Implementation(bool bInOpened) {
}

bool ASDCasino::IsOpened() const {
    return false;
}


