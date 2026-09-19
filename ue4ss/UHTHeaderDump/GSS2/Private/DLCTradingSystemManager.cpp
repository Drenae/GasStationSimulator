#include "DLCTradingSystemManager.h"

ADLCTradingSystemManager::ADLCTradingSystemManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentAirplane = NULL;
    this->CurrentSuccessfulTradesNumber = 0;
    this->CurrentChance = 0.00f;
    this->bIsTutorialItemsAdded = false;
    this->IndexOfSameDeniedOffer = -1;
}

bool ADLCTradingSystemManager::UseSkill(ETradingSkill SkillToUse, bool bDebug) {
    return false;
}

void ADLCTradingSystemManager::UpdatePickedProductAmount(FGeneratedItem Item, int32 NewValue, bool bPlayerItem, int32 ItemIndex) {
}

float ADLCTradingSystemManager::UpdateImpatienceMeter(float& AddedImpatience) {
    return 0.0f;
}

float ADLCTradingSystemManager::UpdateChanceValue() {
    return 0.0f;
}

bool ADLCTradingSystemManager::UnlockSkill(ETradingSkill SkillToUnlock, bool bDebug) {
    return false;
}

bool ADLCTradingSystemManager::TryToTrade(float& AddedImpatience, EInventoryType InventoryType) {
    return false;
}

void ADLCTradingSystemManager::SetUsedSkills(TArray<FUnlockedSkill> SkillsToSet) {
}

void ADLCTradingSystemManager::SetUnlockedTradingSkills(TArray<FUnlockedSkill> SkillsToSet) {
}

void ADLCTradingSystemManager::SetUnavailableBoosts(TArray<FTradingBoost> UnavailableBoostsToSet) {
}

void ADLCTradingSystemManager::SetSpawnedAirplanes(TArray<ATradingAirplane*> SpawnedAirplanesToSet) {
}

void ADLCTradingSystemManager::SetPlaneIfBoostActive(ATradingAirplane* AirplaneToSet) {
}

void ADLCTradingSystemManager::SetIsTutorialItemsAdded(bool NewValue) {
}

void ADLCTradingSystemManager::SetCurrentSuccessfulTradesNumber(int32 CurrentSuccessfulTradesNumberToSet) {
}

void ADLCTradingSystemManager::SetCurrentSuccessfulTradesLevel(FSuccessfulTradesLevel CurrentSuccessfulTradesLevelToSet) {
}

void ADLCTradingSystemManager::SetCurrentAirplane(ATradingAirplane* Airplane) {
}

void ADLCTradingSystemManager::SetActiveBoost(FTradingBoost BoostToSet) {
}

void ADLCTradingSystemManager::ResetSkillCooldown(FUnlockedSkill& SkillToReset) {
}

void ADLCTradingSystemManager::ResetAfterAirplaneTookOff(ATradingAirplane* Airplane) {
}

void ADLCTradingSystemManager::RemoveFromPickedTable(FGeneratedItem Item, bool bPlayerItem) {
}

void ADLCTradingSystemManager::OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated) {
}

void ADLCTradingSystemManager::LevelUpCurrentSuccessfulTradesLevel() {
}

bool ADLCTradingSystemManager::IsPlayerHasEnoughProduct(TSoftClassPtr<AItem> ItemToCheck, int32 NumberOfItemsNeeded) {
    return false;
}

TArray<FUnlockedSkill> ADLCTradingSystemManager::GetUsedSkills() {
    return TArray<FUnlockedSkill>();
}

TArray<FUnlockedSkill> ADLCTradingSystemManager::GetUnlockedTradingSkills() {
    return TArray<FUnlockedSkill>();
}

bool ADLCTradingSystemManager::GetUnlockedSkill(ETradingSkill SkillToGet, FUnlockedSkill& FoundSkill) {
    return false;
}

TArray<FTradingBoost> ADLCTradingSystemManager::GetUnavailableBoosts() {
    return TArray<FTradingBoost>();
}

TArray<FSuccessfulTradesLevel> ADLCTradingSystemManager::GetSuccessfulTradesLevels() {
    return TArray<FSuccessfulTradesLevel>();
}

TArray<ATradingAirplane*> ADLCTradingSystemManager::GetSpawnedAirplanes() {
    return TArray<ATradingAirplane*>();
}

bool ADLCTradingSystemManager::GetIsTutorialItemsAdded() {
    return false;
}

int32 ADLCTradingSystemManager::GetCurrentSuccessfulTradesNumber() {
    return 0;
}

FSuccessfulTradesLevel ADLCTradingSystemManager::GetCurrentSuccessfulTradesLevel() {
    return FSuccessfulTradesLevel{};
}

ATradingAirplane* ADLCTradingSystemManager::GetCurrentAirplane() {
    return NULL;
}

FTradingBoost ADLCTradingSystemManager::GetActiveBoost() {
    return FTradingBoost{};
}

void ADLCTradingSystemManager::CooldownsTimer(FTimeStruct TimeStruct) {
}

FText ADLCTradingSystemManager::CheckTierLevel(float ChanceValue) {
    return FText::GetEmpty();
}

bool ADLCTradingSystemManager::CheckIfTheSameItemsOfDeniedOffers() {
    return false;
}

bool ADLCTradingSystemManager::CheckIfSkillUsed(ETradingSkill SkillToCheck) {
    return false;
}

bool ADLCTradingSystemManager::CheckIfSkillUnlocked(ETradingSkill SkillToCheck) {
    return false;
}

void ADLCTradingSystemManager::CheckIfSkillUnlockAvailable() {
}

bool ADLCTradingSystemManager::CheckIfNewSuccessfulTradesLevelAvailable() {
    return false;
}

bool ADLCTradingSystemManager::CheckIfCanTrade() {
    return false;
}

void ADLCTradingSystemManager::CheckIfAllItemsLoaded(EInventoryType InventoryType, bool TutorialTrade) {
}

void ADLCTradingSystemManager::CancelBoost() {
}

void ADLCTradingSystemManager::AddTutorialItems() {
}

void ADLCTradingSystemManager::AddSpawnedAirplane(ATradingAirplane* SpawnedAirplaneToAdd) {
}

void ADLCTradingSystemManager::AddNewDeniedOffer() {
}

void ADLCTradingSystemManager::ActivateBoost() {
}

void ADLCTradingSystemManager::AcceptTrade(EInventoryType InventoryType, bool TutorialTrade) {
}


