#include "GSSGameState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CollectibleItems -ObjectName=CollectibleItemsManager -FallbackName=CollectibleItemsManager
#include "InventoryComponent.h"
#include "Templates/SubclassOf.h"

AGSSGameState::AGSSGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TutorialManager = NULL;
    this->bIsGameStarted = false;
    this->GameVersion = EGameVersion::NormalVersion;
    this->UI_QuestManager = NULL;
    this->ProductsInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("ProductsInventory"));
    this->AirportFuel = 0.00f;
    this->CarPartsInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("CarPartsInventory"));
    this->IceCreamStandInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("IceCreamStandInventory"));
    this->AIManager = NULL;
    this->BindingsDataTable = NULL;
    this->CashShopRef = NULL;
    this->CollectibleItemsManager = CreateDefaultSubobject<UCollectibleItemsManager>(TEXT("CollectibleItemsManager"));
    this->bGasStationEnabled = false;
    this->bMagazineEnabled = false;
    this->DTHappyAngryThreshold = NULL;
    this->DTMovementGroundSpeed = NULL;
    this->DTAllItems = NULL;
    this->bIgnoreQuestProgressForUpgrades = false;
    this->IsDisableControllers = true;
    this->GasStationDoorCount = 0;
    this->RoofDecorationBox = NULL;
    this->CopiedCategory = EItemTypeCategory::None;
    this->CopiedRestockThreshold = 50.00f;
    this->CopiedProductRestockFilling = 0.00f;
    this->CopiedbAutoRestock = false;
    this->DecorationMapDataTable = NULL;
    this->bSpawnNewVehiclesIsBlocked = false;
    this->bUsing24HTimeFormat = true;
    this->bVIPCanActivate = true;
    this->bDennisCanActivate = true;
    this->bSharkCanActivate = true;
    this->bSandstormCanActivate = true;
    this->bBusEventCanActivate = true;
    this->bElvisCanActivate = true;
    this->bSantasSleighCanActivate = true;
    this->bChristmasHatsCanActivate = false;
    this->bWarehouseStealingCanActivate = true;
    this->bPostGameChallengesCanActivate = true;
    this->bJunkyardCustomizationEffects = true;
    this->bJunkyardCustomizationMusic = true;
    this->bCashRegisterSoundActive = true;
    this->bHeadBobEnabled = true;
    this->bStreamerMode = false;
    this->NewTaskAmount = 0;
    this->QuestActive = NULL;
    this->ActiveEventDisplay = NULL;
    this->Strike = 0;
    this->PreviousStrike = 0;
    this->LastDistance = 0.00f;
    this->ThrowDistanceRecord = 0.00f;
    this->FuelStrike = 0;
    this->FuelLast = 0.00f;
    this->NumberOfFuelRecords = 0.00f;
    this->MinFuelRecordVal = 0.10f;
    this->RepairGameStrike = 0;
    this->RepairGameLastResult = 0.00f;
    this->RepairGameBestResult = 0.00f;
    this->CashMoney = 0.00f;
    this->FuelEarnedMoney = 0.00f;
    this->FuelSpendMoney = 0.00f;
    this->GarageMoney = 0.00f;
    this->LastDesertCarTime = 0.00f;
    this->BestDesertCarTime = 1000.00f;
    this->BoughtDecorationAmount = 0;
    this->TrashBagCapacity = 0.00f;
    this->JerryCanFuel = 0.00f;
    this->TotalGameSessionTime = 0.00f;
    this->HappyAmount = 0;
    this->PopularityLevel = 1;
    this->CentralShop = NULL;
    this->Garage = NULL;
    this->Magazine = NULL;
    this->CarWash = NULL;
    this->IceCreamBuilding = NULL;
    this->PartySpot = NULL;
    this->PartyTime = NULL;
    this->ActiveBuilding = NULL;
    this->TrashDropChance = 10.00f;
    this->FuelingTuTDone = false;
    this->DiggerTUTDone = false;
    this->CashTuTDone = false;
    this->RCTuTDone = false;
    this->JerCanTuTDone = false;
    this->CarPartsTut = false;
    this->ProductsTut = false;
    this->GarageGameIsStillOn = false;
    this->ProductDatabase = NULL;
    this->ChallengeManager = NULL;
    this->AchievementManager = NULL;
    this->UIQuickAccess = NULL;
    this->LeaderboardManager = NULL;
    this->ActiveWidget = NULL;
    this->CollectibleItemsPluginActivated = true;
    this->DTAdditionalUpgrades = NULL;
    this->bOverrideCarAmount = false;
    this->CarOverrideAmount = 0;
    this->TutorialInfoDT = NULL;
}


void AGSSGameState::UpdatePlayerDecal(FName DecalName, bool bIsFavourite) {
}

int32 AGSSGameState::UpdateHappyAngry(int32 Count, UObject* Instaginator, ERenown_Reasons SourceOfRenown, const FString& HappyReason) {
    return 0;
}

void AGSSGameState::UnblockItem(TSoftClassPtr<AItem> ItemClass) {
}

void AGSSGameState::StartGame_Implementation() {
}

void AGSSGameState::ShowGroundDecorationAreas(bool bShow) {
}

void AGSSGameState::SetPickedCategory(EDecalUnlockType UnlockType) {
}

void AGSSGameState::SetMaxVehiclesOnMap(int32 Amount) {
}

void AGSSGameState::SetIsInShop(bool NewIsInShop) {
}

void AGSSGameState::SetGenericOrArtistic(EDecalColor NewGenericOrArtistic) {
}

void AGSSGameState::SetDecalUnlockType(EDecalUnlockType NewDecalUnlockType) {
}

void AGSSGameState::SetDecalColor(FLinearColor NewColor) {
}

void AGSSGameState::SetChallengeManager(AQuestChallengeManager* NewChallengeManager) {
}



void AGSSGameState::SetActiveBuilding(AInteractableBuilding* NewActiveBuilding) {
}

void AGSSGameState::SendAllNpcsHome(FName Reason, bool bResetCarLifts, bool bDennis, bool bEmployees, bool bDelivery) {
}

void AGSSGameState::OnGameLoaded(bool IsLoaded) {
}


bool AGSSGameState::IsUnlockTypeUnlocked(EDecalUnlockType UnlockType) {
    return false;
}

bool AGSSGameState::IsPlayerDecalUnblocked(FName DecalName, bool& bIsFavourite) {
    return false;
}

AUIQuickAccess* AGSSGameState::GetUIQuickAccess() {
    return NULL;
}

UDataTable* AGSSGameState::GetTutorialInfoDT() const {
    return NULL;
}

float AGSSGameState::GetTrashDropChance() {
    return 0.0f;
}

AInteractableBuilding* AGSSGameState::GetStationSectionByTag(FName Tag) {
    return NULL;
}

TSubclassOf<ATrashItemBase> AGSSGameState::GetRandomTrashItemClass() {
    return NULL;
}

TSubclassOf<ATrashItemBase> AGSSGameState::GetRandomToiletTrashItemClass() {
    return NULL;
}

TSoftClassPtr<UGSSQuest> AGSSGameState::GetQuestByTitle(FText InQuestTitle) {
    return NULL;
}

float AGSSGameState::GetProductSellPrice(FName ProductName, bool bSingle) {
    return 0.0f;
}

TArray<float> AGSSGameState::GetProductPricesData(float SellPrice, UCurveFloat* ProductPriceCurve, int32 StartPoint, int32 EndPoint, float& LowestPoint, float& HighestPoint) {
    return TArray<float>();
}

TArray<float> AGSSGameState::GetProductPrices(FName ProductName, UCurveFloat* ProductPriceCurve, int32 StartPoint, int32 EndPoint, float& LowestPoint, float& HighestPoint) {
    return TArray<float>();
}

void AGSSGameState::GetProductHighestLowestValue(UCurveFloat* ProductPriceCurve, int32 StartPoint, int32 EndPoint, float& HighestPoint, float& LowestPoint) {
}

float AGSSGameState::GetProductCurrentPriceToAverageRatio(UCurveFloat* ProductPriceCurve) {
    return 0.0f;
}

float AGSSGameState::GetProductBuyPrice(UCurveFloat* ProductPriceCurve, int32 DayOffset) {
    return 0.0f;
}

float AGSSGameState::GetProductAverageBuyPrice(UCurveFloat* ProductPriceCurve) {
    return 0.0f;
}

EDecalUnlockType AGSSGameState::GetPickedCategory() {
    return EDecalUnlockType::All;
}

void AGSSGameState::GetNumberOfLandmarks(int32& OwnedLandmarks, int32& TotalLandmarks, bool IsInteractable, bool CountHidden) {
}

AUpgradeStationCamera* AGSSGameState::GetNextUpgradeCamera(AUpgradeStationCamera* UpgradeStationCamera, bool Next) {
    return NULL;
}

ADecorationCamera* AGSSGameState::GetManagementCamera() {
    return NULL;
}

ALeaderboardManager* AGSSGameState::GetLeaderboardManager() {
    return NULL;
}

bool AGSSGameState::GetLastShelfRestockPreset(EItemTypeCategory& ShelfCategory, TSoftClassPtr<AShelf>& OutShelfClass, float& OutRestockThreshold, float& OutProductRestockFilling, bool& OutbAutoRestock, TArray<FRestockProductData>& OutRestockingData) const {
    return false;
}

bool AGSSGameState::GetIsInShop() {
    return false;
}

TArray<AInteractableActor*> AGSSGameState::GetInteractableBuildings() {
    return TArray<AInteractableActor*>();
}

EDecalColor AGSSGameState::GetGenericOrArtistic() {
    return EDecalColor::Generic;
}

float AGSSGameState::GetFuelSellPrice(EFuelMagazine FuelType) {
    return 0.0f;
}

TArray<float> AGSSGameState::GetFuelPrices(EFuelMagazine FuelType, int32 StartPoint, int32 EndPoint, float& LowestPoint, float& HighestPoint) {
    return TArray<float>();
}

UCurveFloat* AGSSGameState::GetFuelBuyPriceCurve(EFuelMagazine FuelType) {
    return NULL;
}

float AGSSGameState::GetFuelBuyPrice(EFuelMagazine FuelType, int32 DayOffset) {
    return 0.0f;
}

void AGSSGameState::GetDirtyStatus(float& PercentHouseDirty, float& PercentToiletDirty, float& PercentShowerDirty) {
}

EDecalUnlockType AGSSGameState::GetDecalUnlockType() {
    return EDecalUnlockType::All;
}

FLinearColor AGSSGameState::GetDecalColor() {
    return FLinearColor{};
}

UCollectibleItemsManager* AGSSGameState::GetCollectibleItemsManager_Implementation() {
    return NULL;
}

AQuestChallengeManager* AGSSGameState::GetChallengeManager() {
    return NULL;
}

TArray<FDialogueGraphOwner> AGSSGameState::GetAllDialogueOwners() const {
    return TArray<FDialogueGraphOwner>();
}

AInteractableBuilding* AGSSGameState::GetActiveBuilding() {
    return NULL;
}

void AGSSGameState::FinishEvent(UGSSEvent* GSSEvent) {
}

TSoftObjectPtr<UDialogueGraph> AGSSGameState::FindDialogueOwnerGraph(UDialogueGraph* DialogueGraph) {
    return NULL;
}

UDialogueGraph* AGSSGameState::FindDialogueOwnerGameplayGraphBySoft(TSoftObjectPtr<UDialogueGraph> DialogueGraph) {
    return NULL;
}

UDialogueGraph* AGSSGameState::FindDialogueOwnerGameplayGraph(UDialogueGraph* DialogueGraph) {
    return NULL;
}

void AGSSGameState::EnableGastStation_Implementation(const bool Enabled) {
}


void AGSSGameState::CopyShelfRestockPreset(EItemTypeCategory ShelfCategory, TSoftClassPtr<AShelf> InShelfClass, const float InRestockThreshold, const float InProductRestockFilling, const bool InbAutoRestock, const TArray<FRestockProductData>& InRestockingData) {
}

bool AGSSGameState::CheckIfFeatureOwned(FName FeatureName) {
    return false;
}

void AGSSGameState::AddInteractableBuilding(AInteractableActor* Building) {
}

void AGSSGameState::AddGarageMoney(float Count) {
}

void AGSSGameState::AddFuelMoney(float Count) {
}

void AGSSGameState::AddEventDisplay(TSubclassOf<UEventDisplay> NewEventDisplay) {
}

void AGSSGameState::AddCashMoney(float Count) {
}

void AGSSGameState::AddBoughtActor(TSubclassOf<AActor> BoughtActor, const int32 Amount) {
}


