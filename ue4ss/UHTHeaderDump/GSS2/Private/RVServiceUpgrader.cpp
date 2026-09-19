#include "RVServiceUpgrader.h"

ARVServiceUpgrader::ARVServiceUpgrader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UpgradeCosts = NULL;
    this->MapsAndEventsData = NULL;
    this->CampManager = NULL;
    this->RVLoadingUUID = 0;
    this->RVUnloadingUUID = 100;
}

void ARVServiceUpgrader::UnlockFullParking() {
}

void ARVServiceUpgrader::UnlockAllServices() {
}

void ARVServiceUpgrader::UnloadRVBuildingMaps() {
}

bool ARVServiceUpgrader::TryUpgradeRVResource(ERVResource Resource) {
    return false;
}

bool ARVServiceUpgrader::TryUpgradeRVParking(int32 SpotNumber) {
    return false;
}

bool ARVServiceUpgrader::TryUpgradeRVCousinHouse() {
    return false;
}

bool ARVServiceUpgrader::TryUpgradeRVConcert() {
    return false;
}

bool ARVServiceUpgrader::TryUpgradeBooking() {
    return false;
}

bool ARVServiceUpgrader::TryUnlockRVService(FGameplayTag UnlockedMinigameTag) {
    return false;
}

bool ARVServiceUpgrader::PayUpgradeCost(const FRVUpgradeCost& CostToPay) {
    return false;
}

void ARVServiceUpgrader::OnServiceFinished(const FGameplayTag& ServiceTag, EGuestServiceDifficulty DifficultySelected, bool WasSuccess) {
}

void ARVServiceUpgrader::OnBuildingUpgraded(TSoftClassPtr<UEventDisplay> EventDisplayToLoad) {
}

void ARVServiceUpgrader::LockService(const FGameplayTag& ServiceTag, bool bLocked) {
}

void ARVServiceUpgrader::LoadRVServices(const TArray<FRVServiceData>& ServicesToLoad) {
}

void ARVServiceUpgrader::LoadRVBuildingMaps() {
}

void ARVServiceUpgrader::LoadMapAndEventData(const FMapIndependentBuildingSublevels& MapBuildingSublevelsPtr) {
}

bool ARVServiceUpgrader::IsServiceUnlocked(const FGameplayTag& CheckedTag) {
    return false;
}

bool ARVServiceUpgrader::IsServiceLockedFromQuest(const FGameplayTag& CheckedTag) {
    return false;
}

bool ARVServiceUpgrader::IsBuildingLockedByQuest(FRVUpgradeInputData InputData) {
    return false;
}

bool ARVServiceUpgrader::IsBuildingFullyUpgraded(FRVUpgradeInputData InputData) {
    return false;
}

void ARVServiceUpgrader::InitServiceUpgrader() {
}

TArray<FGameplayTag> ARVServiceUpgrader::GetUnlockedServices() {
    return TArray<FGameplayTag>();
}

int32 ARVServiceUpgrader::GetServiceWinStreak(const FGameplayTag& ServiceTag) {
    return 0;
}

TArray<EGuestServiceDifficulty> ARVServiceUpgrader::GetServiceUnlockedDifficulties(const FGameplayTag& GuestServiceTag) {
    return TArray<EGuestServiceDifficulty>();
}

TArray<FDetailedServiceQueueData> ARVServiceUpgrader::GetServiceQueueData() {
    return TArray<FDetailedServiceQueueData>();
}

int32 ARVServiceUpgrader::GetNumberOfUnlockedServices() {
    return 0;
}

int32 ARVServiceUpgrader::GetExperienceThreshold(const FGameplayTag& ServiceTag) {
    return 0;
}

int32 ARVServiceUpgrader::GetAmountOfServiceCompletedPerDifficulty(const FGameplayTag& ServiceTag, EGuestServiceDifficulty Difficulty) {
    return 0;
}

int32 ARVServiceUpgrader::GetAmountOfServiceCompleted(const FGameplayTag& ServiceTag) {
    return 0;
}

void ARVServiceUpgrader::CanUpgradeRVResource(ERVResource Resource, bool& bCanBeUpgraded, bool& bCanPay) {
}

void ARVServiceUpgrader::CanUpgradeRVParking(int32 ParkingSpotNumber, bool& bCanBeUpgraded, bool& bCanPay) {
}

void ARVServiceUpgrader::CanUpgradeRVCousinHouse(bool& bCanBeUpgraded, bool& bCanPay, bool& bEnoughServices) {
}

void ARVServiceUpgrader::CanUpgradeRVConcert(bool& bCanBeUpgraded, bool& bCanPay) {
}

void ARVServiceUpgrader::CanUpgradeRVBooking(bool& bCanBeUpgraded, bool& bCanPay) {
}

void ARVServiceUpgrader::CanUnlockRVService(FGameplayTag UnlockedMinigameTag, bool& IsUnLocked, bool& bCanPay) {
}

bool ARVServiceUpgrader::bCanPayCost(const FRVUpgradeCost& CostToPay, bool ShowErrorMessage) {
    return false;
}

void ARVServiceUpgrader::AddServiceWinStreak(const FGameplayTag& ServiceTag) {
}


