#include "SDTimedMinigameBase.h"

ASDTimedMinigameBase::ASDTimedMinigameBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimeOutDelay = 1200.00f;
    this->bTimedOut = false;
}

void ASDTimedMinigameBase::StartTimeOutTimer() {
}

void ASDTimedMinigameBase::OnMinigameTimeOut_Implementation() {
}

bool ASDTimedMinigameBase::IsTimedOut() const {
    return false;
}

void ASDTimedMinigameBase::ClearTimeOutTimer() {
}


