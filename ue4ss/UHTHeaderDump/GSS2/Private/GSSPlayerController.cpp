#include "GSSPlayerController.h"

AGSSPlayerController::AGSSPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->GSSPlayerCharacter = NULL;
    this->PlayerOverlapActor = NULL;
    this->PlayerTargetActor = NULL;
    this->VehiclePlayerIsIn = NULL;
    this->TabEnabled = false;
    this->bIngameMenuActive = false;
    this->bGamepadModeActive = false;
}





void AGSSPlayerController::SetRVDebugBoardsVisibility(bool IsVisible) {
}

void AGSSPlayerController::SetPlayerTargetActor(AActor* NewTargetActor) {
}

void AGSSPlayerController::PrintIsEpicLoggedIn() {
}

FKey AGSSPlayerController::GetKeyBindingForAxis(FName Action, float AxisScale, bool bGamepad) {
    return FKey{};
}

FKey AGSSPlayerController::GetKeyBindingForAction(FName Action, bool bGamepad) {
    return FKey{};
}

FText AGSSPlayerController::GetKeyAxisString(FName Action, float AxisScale) {
    return FText::GetEmpty();
}

FText AGSSPlayerController::GetKeyActionString(FName Action) {
    return FText::GetEmpty();
}

bool AGSSPlayerController::GetGamepadModeActive() {
    return false;
}

void AGSSPlayerController::GamepadModeCheck(const FKey& Key) {
}

void AGSSPlayerController::FlushPressedKeys() {
}

void AGSSPlayerController::EnableCircularMenuBinding_Implementation(const bool Enable) {
}

void AGSSPlayerController::Cheat_UnlockRVUpgrades() {
}

void AGSSPlayerController::Cheat_UnlockRVShortcut() {
}

void AGSSPlayerController::Cheat_UnlockRVParking() {
}

void AGSSPlayerController::Cheat_UnlockRVGuestBook() {
}

void AGSSPlayerController::Cheat_UnlockJunkyardStuff() {
}

void AGSSPlayerController::Cheat_UnlockContractsManagerFunctionalityFully() {
}


void AGSSPlayerController::Cheat_UnlockAllServices() {
}

void AGSSPlayerController::Cheat_UnlockAchievement(FName AchievementId) {
}

void AGSSPlayerController::Cheat_ToggleCampers3DWidget() {
}




void AGSSPlayerController::Cheat_SpawnTaskCustomer(ECustomerType TaskForCustomer) {
}

void AGSSPlayerController::Cheat_SpawnRVEvent(ERVEventType EventType) {
}


void AGSSPlayerController::Cheat_SpawnJunkyardWreck(EJunkyardCarWreckType CarWreckType, int32 JunkyardPartCount, int32 GaragePartCount) {
}

void AGSSPlayerController::Cheat_SpawnItemBox(const FString& RowName, int32 Quantity) {
}




void AGSSPlayerController::Cheat_ShowRVDebugBoards() {
}

void AGSSPlayerController::Cheat_SetMaxAmountOfVehicles(float Amount) {
}

void AGSSPlayerController::Cheat_SetDLCActivated(const FString& DLCName, bool bNewActivated) {
}

void AGSSPlayerController::Cheat_SetCarWashWaterPressure(float NewWaterPressureValue) {
}

void AGSSPlayerController::Cheat_ResetAchievement(FName AchievementId) {
}


void AGSSPlayerController::Cheat_ReadLeaderboard(FName LeaderboardName, FName StatName, ELeaderboardStatDataType StatType) {
}

void AGSSPlayerController::Cheat_ReadFile(const FString& Filename) {
}

void AGSSPlayerController::Cheat_LoginWithTokenDev(const FString& Token) {
}

void AGSSPlayerController::Cheat_LoginWithAccountPortal() {
}

void AGSSPlayerController::Cheat_IgnoreQuestProgressForUpgrades(bool bIgnore) {
}

void AGSSPlayerController::Cheat_HideWholeUI() {
}

void AGSSPlayerController::Cheat_HideUI() {
}

void AGSSPlayerController::Cheat_HideRVDebugBoards() {
}

void AGSSPlayerController::Cheat_GenerateJunkyardPartsBasket(EJunkyardPartRarity DeliveryTier, bool bGarageParts) {
}

void AGSSPlayerController::Cheat_FilePickerNew() {
}

void AGSSPlayerController::Cheat_EnableRVAutoBooking() {
}

void AGSSPlayerController::Cheat_DisableRVAutoBooking() {
}

void AGSSPlayerController::Cheat_DebugDeactivatedDLCs() {
}

void AGSSPlayerController::Cheat_CacheFileByTag(const FString& TagName) {
}

void AGSSPlayerController::Cheat_AddTimeHours(int32 HoursAdded) {
}

void AGSSPlayerController::Cheat_AddRVTrustPoints(int32 Amount) {
}

void AGSSPlayerController::Cheat_AddRVResources(int32 Resource1, int32 Resource2, int32 Resource3) {
}


void AGSSPlayerController::Cheat_AddLeaderboardStat(FName StatName, ELeaderboardStatDataType StatType, const FString& Value) {
}

void AGSSPlayerController::Cheat_AddItemToInventory(const FString& RowName, int32 Quantity) {
}



void AGSSPlayerController::Cheat_AddFameExperience(float Value) {
}

void AGSSPlayerController::Cheat_AddContractPoints(int32 Amount) {
}

void AGSSPlayerController::Cheat_AddCinemaRenown(int32 Amount) {
}

void AGSSPlayerController::Cheat_AddChallengeProgress(int32 Value) {
}

void AGSSPlayerController::Cheat_AddAirstripBlueprints(int32 Amount) {
}



