#include "RV_ChallengeCondition_TrackRelax.h"
#include "ERVChallengeTarget.h"

URV_ChallengeCondition_TrackRelax::URV_ChallengeCondition_TrackRelax() {
    this->ChallengeTarget = ERVChallengeTarget::ECT_RelaxBelow;
    this->RelaxThreshold = 0.50f;
}

void URV_ChallengeCondition_TrackRelax::CheckRelax(float CurrentRelax) {
}


