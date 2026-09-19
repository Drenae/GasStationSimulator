#include "RVChallengeCondition.h"

URVChallengeCondition::URVChallengeCondition() {
    this->TargetCurrent = 0;
    this->bConditionMet = false;
    this->CamperAmount = 1;
    this->TimeTrackType = ERVChallengeTimeTrackType::ETT_UNLIMITED;
    this->ChallengeTarget = ERVChallengeTarget::ECT_CampersAmount;
    this->UpdateInterval = 1;
    this->TimeHours = 24.00f;
    this->WorldPtr = NULL;
}

void URVChallengeCondition::UpdateCondition() {
}

void URVChallengeCondition::StartCondition(UWorld* World) {
}

void URVChallengeCondition::OnCamperLeft(URVCamperComponent* Camper) {
}

void URVChallengeCondition::OnCamperArrived(URVCamperComponent* Camper) {
}

void URVChallengeCondition::FinishCondition(bool bSuccess) {
}


