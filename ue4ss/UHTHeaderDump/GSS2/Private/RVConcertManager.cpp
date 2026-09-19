#include "RVConcertManager.h"

URVConcertManager::URVConcertManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSkipConcertCancelPopup = false;
    this->RVCampManager = NULL;
    this->ConcertSettings = NULL;
}

void URVConcertManager::StopConcert(ERVCamperLeftReason CamperLeftReason) {
}

void URVConcertManager::StartConcert(FGameplayTag ConcertType) {
}

void URVConcertManager::OnGameTimeUpdated(const FTimeStruct GameTime) {
}

void URVConcertManager::OnDLCActivationStateChanged(EDLCName DLCName, bool bNewActivated) {
}

bool URVConcertManager::IsConcertActive() const {
    return false;
}

int32 URVConcertManager::GetHighestAmountOfCustomersForAnyMusicTypes(FGameplayTag& MusicType) {
    return 0;
}

int32 URVConcertManager::GetAmountOfMusicCampersOfType(FGameplayTag MusicType) {
    return 0;
}

void URVConcertManager::BindConcertToGameUpdate() {
}


