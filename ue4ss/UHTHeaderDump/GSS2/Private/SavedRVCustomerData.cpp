#include "SavedRVCustomerData.h"

FSavedRVCustomerData::FSavedRVCustomerData() {
    this->GuestType = ERVGuestType::SERVICE;
    this->CustomerState = ERVCustomerState::INTERESTED;
    this->CamperLeftReason = ERVCamperLeftReason::FULFILLED;
    this->ServiceStreakBonuses = 0;
}

