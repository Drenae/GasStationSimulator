#include "RVUpgradeCostsSettings.h"

URVUpgradeCostsSettings::URVUpgradeCostsSettings() {
    this->GuestServicesData = NULL;
}

int32 URVUpgradeCostsSettings::GetServiceNumForCousinUpgrade(int32 CousinHouseLevel) {
    return 0;
}

bool URVUpgradeCostsSettings::GetRVServiceCost(UObject* WorldContextObject, FGameplayTag ServiceTag, FRVUpgradeCost& BuildingCost) {
    return false;
}

bool URVUpgradeCostsSettings::GetRVResourceUpgradeCost(UObject* WorldContextObject, ERVResource Resource, FRVUpgradeCost& BuildingCost) {
    return false;
}

bool URVUpgradeCostsSettings::GetRVParkingUpgradeCost(UObject* WorldContextObject, int32 ParkingSpotNumber, FRVUpgradeCost& BuildingCost) {
    return false;
}

bool URVUpgradeCostsSettings::GetRVCousinUpgradeCost(UObject* WorldContextObject, FRVUpgradeCost& BuildingCost) {
    return false;
}

bool URVUpgradeCostsSettings::GetRVConcertUpgradeCost(UObject* WorldContextObject, FRVUpgradeCost& BuildingCost) {
    return false;
}

bool URVUpgradeCostsSettings::GetBookingUpgradeCost(UObject* WorldContextObject, FRVUpgradeCost& BuildingCost) {
    return false;
}


