#include "DLCAirstripManager.h"

ADLCAirstripManager::ADLCAirstripManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObjectivesStartedSinceLoadingGame = 0;
    this->MainGameQuestToTriggerQuestline = NULL;
    this->bTryStartingQuestLine = true;
    this->bAirstripCampaingCompleted = false;
    this->JoeAirplane = NULL;
    this->JoeGraph = NULL;
    this->PlayerAreaLevelName = TEXT("CrashSite_Minigame");
    this->MinAirportSandstormHoursTime = 0;
    this->MaxAirportSandstormHoursTime = 0;
    this->SandstormDurationMinutes = 0;
    this->bIsSandstormActive = false;
    this->MaxDistanceToTriggerDialogue = 500.00f;
    this->BeardChance = 0.30f;
    this->FemaleTradingPilotsInfo = NULL;
    this->MaleTradingPilotsInfo = NULL;
}

void ADLCAirstripManager::TryLoadMissingLevel() {
}

void ADLCAirstripManager::SetIsSandstormActive(bool NewValue) {
}

void ADLCAirstripManager::SaveJoePlaneDEBUG() {
}

void ADLCAirstripManager::OnQuestsLoaded() {
}

void ADLCAirstripManager::OnObjectiveStarted(UObjectiveBase* ObjectiveStarted) {
}

void ADLCAirstripManager::OnGameLoaded(bool bGameLoaded) {
}

void ADLCAirstripManager::LoadJoePlaneDEBUG() {
}

TSoftObjectPtr<ATradeCenter> ADLCAirstripManager::GetTradeCenter() {
    return NULL;
}

TSoftObjectPtr<ATowysGarage> ADLCAirstripManager::GetTowysGarage() {
    return NULL;
}

TSoftObjectPtr<ATowy> ADLCAirstripManager::GetTowy() {
    return NULL;
}

TSoftObjectPtr<AAirstripRandomDialoguesManager> ADLCAirstripManager::GetRandomDialoguesManager() {
    return NULL;
}

TSoftObjectPtr<ARadioTower> ADLCAirstripManager::GetRadioTower() {
    return NULL;
}

UDataTable* ADLCAirstripManager::GetMaleTradingPilotsInfo() {
    return NULL;
}

FTradingPilots ADLCAirstripManager::GetMaleTradingPilots() {
    return FTradingPilots{};
}

TSoftObjectPtr<AActor> ADLCAirstripManager::GetJoeTaskTargetActor(EJoeTasksPlaces TaskPlace) {
    return NULL;
}

AGSSNPAICharacterBase* ADLCAirstripManager::GetJoeCharacter(UObject* WorldContextObject) {
    return NULL;
}

bool ADLCAirstripManager::GetIsSandstormActive() {
    return false;
}

UDataTable* ADLCAirstripManager::GetFemaleTradingPilotsInfo() {
    return NULL;
}

FTradingPilots ADLCAirstripManager::GetFemaleTradingPilots() {
    return FTradingPilots{};
}

TSoftObjectPtr<ADLCTradingSystemManager> ADLCAirstripManager::GetDLCTradingSystemManager() {
    return NULL;
}

TSoftObjectPtr<ACrashSiteManager> ADLCAirstripManager::GetCrashSiteManager() {
    return NULL;
}

float ADLCAirstripManager::GetBeardChance() {
    return 0.0f;
}

TSoftObjectPtr<ABarn> ADLCAirstripManager::GetBarn() {
    return NULL;
}

TArray<AActor*> ADLCAirstripManager::GetAirstripStuff() {
    return TArray<AActor*>();
}

TSoftObjectPtr<AAirstripStorage> ADLCAirstripManager::GetAirstripStorage() {
    return NULL;
}

TSoftObjectPtr<AAirport> ADLCAirstripManager::GetAirport() {
    return NULL;
}

void ADLCAirstripManager::AddToAirstripStuff(AActor* Actor) {
}

void ADLCAirstripManager::AddDLCItemsToInventory() {
}


