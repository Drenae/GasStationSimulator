#include "RVChallenge.h"

URVChallenge::URVChallenge() {
    this->ChallengeFinished = false;
    this->bInitialized = false;
}

void URVChallenge::OnConditionUpdated(URVChallengeCondition* UpdatedCondition) {
}

void URVChallenge::OnConditionCompleted(URVChallengeCondition* FinishedCondition) {
}


