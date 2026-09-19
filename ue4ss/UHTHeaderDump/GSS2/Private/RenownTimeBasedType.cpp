#include "RenownTimeBasedType.h"

URenownTimeBasedType::URenownTimeBasedType() {
    this->ChangeAmount = 0;
}

void URenownTimeBasedType::RenownChangedByTime_Implementation() {
}

void URenownTimeBasedType::OnGameTimeUpdated(FTimeStruct Time) {
}

bool URenownTimeBasedType::AdditionalTimeAmountChangeConditions_Implementation() {
    return false;
}


