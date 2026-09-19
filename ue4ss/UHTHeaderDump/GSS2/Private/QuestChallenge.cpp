#include "QuestChallenge.h"

FQuestChallenge::FQuestChallenge() {
    this->ChallengeType = EGSS_Stat::SHOP_CUSTOMER_SERVED;
    this->AmountNeeded = 0;
    this->TimeToFinish = 0.00f;
    this->ActiveAmount = 0;
    this->HappyAmountAwardOnComplete = 0;
}

