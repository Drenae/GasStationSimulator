#include "SDApplyPenaltyAction.h"

USDApplyPenaltyAction::USDApplyPenaltyAction() {
    this->PenaltyType = ESDPenaltyType::LastDayIncomePercent;
    this->PenaltyPercent = 10;
    this->FixedPenalty = 200.00f;
}


