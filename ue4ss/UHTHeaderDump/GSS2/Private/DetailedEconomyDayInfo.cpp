#include "DetailedEconomyDayInfo.h"

FDetailedEconomyDayInfo::FDetailedEconomyDayInfo() {
    this->YieldType = EEconomyGeneralYieldType::REVENUE;
    this->DetailedYieldType = EEconomyDetailedYieldType::PRODUCTS;
    this->Value = 0.00f;
    this->Amount = 0.00f;
}

