#include "RVCustomerData.h"

URVCustomerData::URVCustomerData() {
    this->GuestType = ERVGuestType::SERVICE;
    this->CustomerState = ERVCustomerState::INTERESTED;
    this->CamperLeftReason = ERVCamperLeftReason::FULFILLED;
    this->ServiceStreakBonuses = 0;
}

bool URVCustomerData::IsServiceCompleted(FGameplayTag Service) {
    return false;
}

void URVCustomerData::GetMaxIncome(UObject* WorldContextObject, int32& MoneyIncome, int32& TrustPointsIncome) {
}

FRVCamperData URVCustomerData::GetCamperData(UObject* WorldContextObject) {
    return FRVCamperData{};
}


