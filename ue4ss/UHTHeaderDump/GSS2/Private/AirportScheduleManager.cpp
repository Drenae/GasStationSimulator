#include "AirportScheduleManager.h"

UAirportScheduleManager::UAirportScheduleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DT_TradingAirplanesData = NULL;
    this->DT_DefaultPilotRegulars = NULL;
    this->DT_PlayerRegulars = NULL;
    this->SpecialItemChance = 0.01f;
    this->AdditionalStackChance = 0.01f;
    this->GasStationRegularsStack = 0.01f;
    this->OtherPlaneExclusiveChance = 0.01f;
    this->DefaultTimeToTakeOff = 180;
    this->NumberOfEntriesPerRunway = 0;
    this->NumberOfCallSignNumbers = 0;
    this->DenyCooldown = 420;
    this->CurrentDenyCooldown = 0;
    this->RevealCargoNumber = 0;
    this->PlaneLifeCycleTime = 360;
    this->MaxTimeToArrive = 1140;
    this->TimeDecrease = 0.00f;
    this->MinCancelFlightTimeMinutes = 0;
    this->MaxCancelFlightTimeMinutes = 0;
    this->CurrentCancelFlightTime = 0;
    this->ChancesOfFlightCanceling = 0.00f;
    this->bIsAS_Quest25Passed = false;
    this->bIsAS_Quest29Passed = false;
}

void UAirportScheduleManager::TimeToArriveCounter(FTimeStruct TimeStruct) {
}

void UAirportScheduleManager::StartCounterIfPossible() {
}

void UAirportScheduleManager::SortPlanes(int32 RunwayIndex) {
}

void UAirportScheduleManager::SortCountryToProperRegion(const FName& CountryOrigin, const FTradingPlanesInfo& PlaneInfo) {
}

void UAirportScheduleManager::ShowRunwayCargoItems(ARunway* Runway) {
}

void UAirportScheduleManager::ShowCargoItems() {
}

void UAirportScheduleManager::ShowCargoItem(ARunway* Runway, int32 PlaneIndex, int32& ItemIndex) {
}

void UAirportScheduleManager::SetTimeToTakeOff(int32 TimeToSet) {
}

void UAirportScheduleManager::SetSpawnPilot(ATradingAirplane* Plane) {
}

void UAirportScheduleManager::SetRevealCargoNumber(int32 RevealCargoNumberToSet) {
}

void UAirportScheduleManager::SetPlaneData(ATradingAirplane* Plane, FSavedAirplane& SavedAirplane) {
}

void UAirportScheduleManager::SetPlane(ATradingAirplane* Plane, ERunway Runway, bool bLoadedFromSave) {
}

void UAirportScheduleManager::SetOwnedRunways(TArray<TSoftObjectPtr<ARunway>> OwnedRunwaysToSet) {
}

int32 UAirportScheduleManager::SetItemToBuyActualAmount(ERunway Runway, ECountryOfOrigin Country, TSoftClassPtr<AItem> Item, int32 Amount) {
    return 0;
}

void UAirportScheduleManager::SetIsAS_Quest29Passed(bool NewValue) {
}

void UAirportScheduleManager::SetIsAS_Quest25Passed(bool NewValue) {
}

void UAirportScheduleManager::SetExcludedPlanes(TArray<FPlaneEntry> ExcludedPlanesToSet) {
}

void UAirportScheduleManager::SetDenyCooldown(int32 DenyCooldownToSet) {
}

void UAirportScheduleManager::SetCurrentDenyCooldown(int32 DenyCooldownToSet) {
}

void UAirportScheduleManager::SetCurrentCancelFlightTime(int32 TimeToSet) {
}

void UAirportScheduleManager::SetCancelFlightEvent() {
}

void UAirportScheduleManager::SetAirplanesReadyToLand(TArray<FSavedAirplane> AirplanesReadyToLandToSet) {
}

void UAirportScheduleManager::ResetCurrentDenyCooldown() {
}

void UAirportScheduleManager::RandomPlayerRandoms(TArray<FGeneratedLootInfo>& GeneratedSellLootInfo, TArray<FName>& GeneratedPilotRegulars, TArray<FSoftObjectPath>& ItemsToLoad) {
}

int32 UAirportScheduleManager::RandomPlaneToCancel(int32 RunwayIndex) {
    return 0;
}

void UAirportScheduleManager::RandomPlaneRandoms(FName CountryOrigin, ECountryRegion CountryRegion, TArray<FGeneratedLootInfo>& GeneratedBuyLootInfo, TArray<FGeneratedLootInfo>& GeneratedSellLootInfo, TArray<FSoftObjectPath>& ItemsToLoad) {
}

void UAirportScheduleManager::RandomPlaneExclusives(TArray<FItemRange>& PlaneExclusives, TArray<FGeneratedLootInfo>& GeneratedExclusives, TArray<FSoftObjectPath>& ItemsToLoad) {
}

void UAirportScheduleManager::RandomPilotRandoms(FName CountryOrigin, ECountryRegion CountryRegion, TArray<FGeneratedLootInfo>& GeneratedBuyLootInfo, TArray<FName>& GeneratedPilotRegulars, TArray<FSoftObjectPath>& ItemsToLoad) {
}

FGeneratedLootInfo UAirportScheduleManager::RandomCountrySpecific(const FTradingPlanesInfo& Info, TArray<FSoftObjectPath>& ItemsToLoad) {
    return FGeneratedLootInfo{};
}

FString UAirportScheduleManager::RandomCallSign(ECountryOfOrigin CountryOfOrigin, const FString& CountryShortCut) {
    return TEXT("");
}

bool UAirportScheduleManager::PlayerDenyPlane(int32 RunwayIndex, int32 PlaneIndex, bool bLandedPlane) {
    return false;
}

void UAirportScheduleManager::OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState) {
}

void UAirportScheduleManager::OnGameLoaded(bool bIsLoaded) {
}

void UAirportScheduleManager::OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated) {
}

void UAirportScheduleManager::OnAirportSandstormStarted() {
}

void UAirportScheduleManager::OnAirportSandstormFinished() {
}

int32 UAirportScheduleManager::GetTimeToTakeOff() {
    return 0;
}

TArray<TSoftObjectPtr<ARunway>> UAirportScheduleManager::GetRunways() {
    return TArray<TSoftObjectPtr<ARunway>>();
}

TSoftObjectPtr<ARunway> UAirportScheduleManager::GetRunway(ERunway Runway) {
    return NULL;
}

int32 UAirportScheduleManager::GetRevealCargoNumber() {
    return 0;
}

int32 UAirportScheduleManager::GetPlaneLifeCycleTime() {
    return 0;
}

TArray<TSoftObjectPtr<ARunway>> UAirportScheduleManager::GetOwnedRunways() {
    return TArray<TSoftObjectPtr<ARunway>>();
}

int32 UAirportScheduleManager::GetNumberOfEntriesPerRunway() {
    return 0;
}

bool UAirportScheduleManager::GetIsAS_Quest29Passed() {
    return false;
}

bool UAirportScheduleManager::GetIsAS_Quest25Passed() {
    return false;
}

TArray<FPlaneEntry> UAirportScheduleManager::GetExcludedPlanes() {
    return TArray<FPlaneEntry>();
}

int32 UAirportScheduleManager::GetDenyCooldown() {
    return 0;
}

int32 UAirportScheduleManager::GetCurrentDenyCooldown() {
    return 0;
}

int32 UAirportScheduleManager::GetCurrentCancelFlightTime() {
    return 0;
}

TArray<FName> UAirportScheduleManager::GetAvailableCountries() {
    return TArray<FName>();
}

TArray<FSavedAirplane> UAirportScheduleManager::GetAirplanesReadyToLand() {
    return TArray<FSavedAirplane>();
}

bool UAirportScheduleManager::DenyPlane(int32 RunwayIndex, int32 PlaneIndex, bool bLandedPlane) {
    return false;
}

void UAirportScheduleManager::CreateQuestEntries(ERunway RunwayToSet, TArray<ECountryOfOrigin> Countries) {
}

FPlaneEntry UAirportScheduleManager::CreatePlaneEntry(FName CountryOrigin, int32 RunwayIndexToSet, TArray<FSoftObjectPath>& ItemsToLoad, bool bShuffleGeneratedItems) {
    return FPlaneEntry{};
}

FPlaneEntry UAirportScheduleManager::CreatePlaneEntries(int32 RunwayIndexToSet, int32 NumberOfEntriesToCreate) {
    return FPlaneEntry{};
}

void UAirportScheduleManager::ContinueShowCargoItem(ARunway* Runway, int32 PlaneIndex, int32 ItemIndex) {
}

void UAirportScheduleManager::CheckRevealCargoStage(FPlaneEntry& PlaneEntry) {
}

void UAirportScheduleManager::CheckIfNewRunwayAvailable() {
}

void UAirportScheduleManager::CancelFlightEvent() {
}

bool UAirportScheduleManager::CalculateRevealBar(FCargoRevealPercentage& CargoRevealPercentage, int32 TimeToArrive) {
    return false;
}

void UAirportScheduleManager::AllItemsNeededLoaded(int32 NumberOfEntriesCreated, int32 RunwayIndex) {
}

void UAirportScheduleManager::AddTimeToAirplanes(int32 Runway, float TimeToAdd) {
}

void UAirportScheduleManager::AddOwnedRunway(TSoftObjectPtr<ARunway> OwnedRunwayToAdd) {
}

void UAirportScheduleManager::AddLine(ARunway* Runaway) {
}


