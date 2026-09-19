#include "RVBookingSettings.h"

URVBookingSettings::URVBookingSettings() {
    this->GuestCampers = NULL;
    this->InterestedGuestsRefreshTimeHours = 12;
    this->RefreshCustomersCost = 100;
    this->DismissCustomersPenalty = 50;
    this->RubyTributePercentage = 0.30f;
    this->FullServiceMoneyBonus = 0;
    this->FullServiceTrustPointsBonus = 0;
    this->BaseConcertMoneyReward = 20;
}

int32 URVBookingSettings::GetMaxGuestCountLevel() {
    return 0;
}

int32 URVBookingSettings::GetMaxGuestCount() {
    return 0;
}

FRVGuestTypeProperties URVBookingSettings::GetGuestTypeProperties(ERVGuestType GuestType) {
    return FRVGuestTypeProperties{};
}

int32 URVBookingSettings::GetGuestCountAtLevel(int32 Level) {
    return 0;
}


