#include "UnlockedSkill.h"

FUnlockedSkill::FUnlockedSkill() {
    this->TradingSkill = ETradingSkill::EXTRA_TIME;
    this->Value = 0.00f;
    this->CooldownTimeSeconds = 0;
}

