#include "RVChallengeCondition_EarnSomeMoney.h"
#include "ERVChallengeTarget.h"

URVChallengeCondition_EarnSomeMoney::URVChallengeCondition_EarnSomeMoney() {
    this->ChallengeTarget = ERVChallengeTarget::ECT_MoneyEarn;
    this->MoneyNeeded = 0.00f;
}

void URVChallengeCondition_EarnSomeMoney::TrackAqquiredMoney(const float CharacterMoney, const float Difference, EEconomyDetailedYieldType YieldType) {
}


