#include "RVConcertSettings.h"

URVConcertSettings::URVConcertSettings() {
    this->Duration = 0;
    this->Cost = 0;
    this->MoneyGain[0] = 0.00f;
    this->MoneyGain[1] = 0.00f;
    this->MoneyGain[2] = 0.00f;
    this->MoneyGain[3] = 0.00f;
    this->MoneyGain[4] = 0.00f;
    this->MoneyGain[5] = 0.00f;
    this->MoneyGain[6] = 0.00f;
    this->MoneyGain[7] = 0.00f;
    this->MoneyGain[8] = 0.00f;
    this->TrustPointsGain[0] = 0;
    this->TrustPointsGain[1] = 0;
    this->TrustPointsGain[2] = 0;
    this->TrustPointsGain[3] = 0;
    this->TrustPointsGain[4] = 0;
    this->TrustPointsGain[5] = 0;
    this->TrustPointsGain[6] = 0;
    this->TrustPointsGain[7] = 0;
    this->TrustPointsGain[8] = 0;
}

bool URVConcertSettings::IsConcertAvailable(UObject* WorldContextObject, const FGameplayTag& Tag) {
    return false;
}

TArray<FGameplayTag> URVConcertSettings::GetConcertTypesUnlockedAtLevel(int32 ConcertLevel) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> URVConcertSettings::GetAvailableConcertTypes(UObject* WorldContextObject) {
    return TArray<FGameplayTag>();
}

int32 URVConcertSettings::GetAmountOfTrustPointsGained(int32 AmountOfCustomers) {
    return 0;
}

float URVConcertSettings::GetAmountOfCashToGain(int32 AmountOfCustomers) {
    return 0.0f;
}

TArray<FGameplayTag> URVConcertSettings::GetAllConcertTypes() {
    return TArray<FGameplayTag>();
}


