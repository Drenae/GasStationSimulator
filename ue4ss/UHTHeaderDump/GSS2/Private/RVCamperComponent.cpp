#include "RVCamperComponent.h"

URVCamperComponent::URVCamperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CustomerData = NULL;
    this->CampSpot = NULL;
    this->CamperVehicle = NULL;
    this->CamperDriver = NULL;
    this->bJustLeftCampSpot = false;
    this->IsCampSpotReached = false;
    this->bCanLeaveCampSpot = true;
    this->ServiceStreakBonuses = 0;
    this->bIsConcertCompleted = false;
    this->CamperState = ERVCamperState::ARRIVING;
    this->RVCampManager = NULL;
    this->GameState = NULL;
    this->ServiceUpgrader = NULL;
}

void URVCamperComponent::UpdateCurrentStayTime(FTimeStruct NewStayTime) {
}

void URVCamperComponent::TryStopReserveCampSpot() {
}

void URVCamperComponent::SpawnCustomersForServices() {
}

void URVCamperComponent::SetUpAfterSpawn(URVCustomerData* CamperCustomerData, AAICharacterBase* Driver) {
}

void URVCamperComponent::SetUpAfterLoad(URVCustomerData* CamperCustomerData, AAICharacterBase* Driver) {
}

void URVCamperComponent::SetIsConcertCompleted(bool IsConcertCompleted, FGameplayTag MusicType) {
}

void URVCamperComponent::OnTimeUpdated(const FTimeStruct UpdatedTime) {
}

void URVCamperComponent::OnConcertStopped(ERVCamperLeftReason CamperLeftReason) {
}

void URVCamperComponent::OnConcertStarted() {
}

void URVCamperComponent::OnCampSpotReached() {
}

void URVCamperComponent::LeaveCampSpot(ERVCamperLeftReason Reason) {
}

bool URVCamperComponent::IsServiceCompleted(FGameplayTag Service) {
    return false;
}

void URVCamperComponent::GetRemainingStayTimeInHours(int32& Hours, int32& Minutes) {
}

FTimeStruct URVCamperComponent::GetRemainingStayTime() {
    return FTimeStruct{};
}

bool URVCamperComponent::GetIsConcertCompleted() {
    return false;
}

void URVCamperComponent::GetCurrentStayTimeInHours(int32& Hours, int32& Minutes) {
}

FTimeStruct URVCamperComponent::GetCurrentStayTime() {
    return FTimeStruct{};
}

FGameplayTag URVCamperComponent::GetConcertCompletedMusicType() {
    return FGameplayTag{};
}

TArray<FRVCompletedService> URVCamperComponent::GetCompletedServices() {
    return TArray<FRVCompletedService>();
}

ERVCamperState URVCamperComponent::GetCamperState() {
    return ERVCamperState::ARRIVING;
}

void URVCamperComponent::CompleteService(FGameplayTag Service, EGuestServiceDifficulty Difficulty, bool bStreakBonus, bool bAutocomplete) {
}

void URVCamperComponent::ChangeCamperState(ERVCamperState NewState) {
}


