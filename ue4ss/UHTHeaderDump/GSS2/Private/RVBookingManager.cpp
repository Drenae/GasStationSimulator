#include "RVBookingManager.h"

URVBookingManager::URVBookingManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentBookingLevel = 1;
    this->bIsSummaryWindowOpen = false;
    this->bWereCustomerNamesLoaded = false;
    this->bWasBookingToolInitiated = false;
    this->bIsAutoCheckoutEnabled = false;
    this->bCanAutorefreshcustomers = false;
    this->bSkipDismissPopup = false;
    this->bCanGenerateNewCustomers = true;
    this->bCanGenerateNewCustomersAfterBooking = true;
    this->SummaryCustomerData = NULL;
    this->SummaryCampSpot = NULL;
    this->CurrentBookingView = ERVBookingView::BOOKING;
    this->RVCampManager = NULL;
    this->BookingSettings = NULL;
    this->PlayerState = NULL;
    this->AutoBookingLoopInterval = 10.00f;
}

void URVBookingManager::TryRefreshInterestedCustomers(bool& Success) {
}

void URVBookingManager::TryPerformCheckOut() {
}

void URVBookingManager::TryInitBookingTool() {
}

void URVBookingManager::TryDismissCustomer(URVCustomerData* CustomerData, ARVCampSpot* CampSpot, bool& Success, bool bSkipPenalty) {
}

void URVBookingManager::TryDismissAllCustomers(bool& Success, bool bSkipPenalty) {
}

void URVBookingManager::TryBookCustomer(URVCustomerData* CustomerData, ARVCampSpot* CampSpot, bool& Success) {
}

void URVBookingManager::SetCurrentBookingView(ERVBookingView NewBookingView) {
}

void URVBookingManager::SendAllCampersHome() {
}

void URVBookingManager::ScheduleCamperSpawn(URVCustomerData* CustomerData, ARVCampSpot* CampSpot) {
}

void URVBookingManager::OnTimeUpdated(const FTimeStruct UpdatedTime) {
}

void URVBookingManager::OnDLCActivationStateChanged(EDLCName DLCName, bool bNewActivated) {
}

bool URVBookingManager::IsCheckOutNeeded() {
    return false;
}

void URVBookingManager::HandleCamperLeft(URVCustomerData* CustomerData, ARVCampSpot* CampSpot, URVCamperComponent* Camper, ERVCamperLeftReason Reason) {
}

void URVBookingManager::HandleCamperArrived(URVCustomerData* CustomerData, ARVCampSpot* CampSpot, URVCamperComponent* Camper) {
}

void URVBookingManager::HandleBookingUpgraded() {
}

ERVBookingView URVBookingManager::GetCurrentBookingView() {
    return ERVBookingView::BOOKING;
}

TArray<URVCustomerData*> URVBookingManager::GenerateSpecificCustomers(TArray<FRVSpecificCustomer> SpecificCustomers, bool FillRandomCustomers) {
    return TArray<URVCustomerData*>();
}

URVCustomerData* URVBookingManager::GenerateSpecificCustomer(FRVSpecificCustomer SpecificCustomer) {
    return NULL;
}

TMap<ERVResource, int32> URVBookingManager::GenerateRandomResourceCosts(FRVSleepoverGuestData SleepoverGuestData) {
    return TMap<ERVResource, int32>();
}

TArray<FGameplayTag> URVBookingManager::GenerateRandomMusicTypes(int32 MusicCount) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> URVBookingManager::GenerateRandomGuestServices(int32 ServiceCount) {
    return TArray<FGameplayTag>();
}

void URVBookingManager::GenerateRandomCustomers() {
}

URVCustomerData* URVBookingManager::GenerateRandomCustomer() {
    return NULL;
}

ERVGuestType URVBookingManager::GenerateGuestType() {
    return ERVGuestType::SERVICE;
}

FName URVBookingManager::GenerateGuestName() {
    return NAME_None;
}

void URVBookingManager::EnableDebugAutoBooking() {
}

void URVBookingManager::DisableDebugAutoBooking() {
}

void URVBookingManager::CollectSummaryData(FRvSummaryData& SummaryData, bool& IsSummaryValid) {
}

void URVBookingManager::ClaimSummary(FRvSummaryData SummaryData) {
}

bool URVBookingManager::CanBookCustomer(URVCustomerData* CustomerData, ARVCampSpot* CampSpot) {
    return false;
}

void URVBookingManager::AutoBookingLoop() {
}


