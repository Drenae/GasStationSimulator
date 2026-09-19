#include "AuctionsManager.h"

UAuctionsManager::UAuctionsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SaleDuration = 8.00f;
    this->ViewersUpdateTime = 1.00f;
    this->CarBasePriceInterestDefaultPercentValue = 50.00f;
    this->InitialSlotsNumber = 4;
    this->AdditionalSlotsNumber = 4;
    this->TrySellCarNewViewersNumber = 8;
}

void UAuctionsManager::UpdateViewers(FSaleSlot& SaleSlot) {
}

void UAuctionsManager::SetSaleSlots(TArray<FSaleSlot> InSaleSlots) {
}

void UAuctionsManager::SetSaleSlot(AJunkyardCarWreck* CarWreck, FSaleSlot SaleSettings) {
}

bool UAuctionsManager::RemoveSale(FSaleSlot& SaleSlot) {
    return false;
}

void UAuctionsManager::OnGameTimeUpdated(FTimeStruct UpdatedTime) {
}

void UAuctionsManager::OnFinishGameLoaded(bool bGameLoaded) {
}

void UAuctionsManager::OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated) {
}

TArray<FSaleSlot> UAuctionsManager::GetSaleSlots() {
    return TArray<FSaleSlot>();
}

bool UAuctionsManager::FindMatchingInterestSettings(float CurrentInterest, FViewersIncreasePerInterest& OutInterestSettings) {
    return false;
}

bool UAuctionsManager::FindCarSaleSlot(AJunkyardCarWreckCustomizable* CarWreck, FSaleSlot& OutSaleSlot) {
    return false;
}

bool UAuctionsManager::ConfirmSale(FSaleSlot& SaleSlot) {
    return false;
}

float UAuctionsManager::CalculatePriceAfterUncleTribute(const float CarPrice) {
    return 0.0f;
}

float UAuctionsManager::CalculateCarSaleInterest(AExhibitionSpotSlot* ExhibitionSpotSlot, float CarSellPrice) {
    return 0.0f;
}

void UAuctionsManager::ActivateSale(AExhibitionSpotSlot* ExhibitionSpotSlot, float CarSellPrice) {
}


