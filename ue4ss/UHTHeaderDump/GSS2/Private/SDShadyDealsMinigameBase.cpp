#include "SDShadyDealsMinigameBase.h"

ASDShadyDealsMinigameBase::ASDShadyDealsMinigameBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GangActivityType = ESDGangActivityType::FightClub;
}

bool ASDShadyDealsMinigameBase::TryDetectFraud_Implementation() const {
    return false;
}

void ASDShadyDealsMinigameBase::ProcessFraudDetection_Implementation() {
}

void ASDShadyDealsMinigameBase::OnFraudDetected_Implementation() {
}

ESDGangActivityType ASDShadyDealsMinigameBase::GetGangActivity() const {
    return ESDGangActivityType::FightClub;
}


