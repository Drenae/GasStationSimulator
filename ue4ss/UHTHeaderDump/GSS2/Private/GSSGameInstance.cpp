#include "GSSGameInstance.h"
#include "Templates/SubclassOf.h"

UGSSGameInstance::UGSSGameInstance() {
    this->bIsGameLoading = false;
    this->IsAnyBuildingLoading = false;
    this->bDebugMode = false;
    this->bIsGameLoadingScreenShown = false;
    this->bChangedMap = false;
    this->bUseNewNpcModels = false;
    this->SaveGameInstance = NULL;
    this->SaveSlots = NULL;
    this->bIsPCWidgetOpen = false;
    this->VIPTravelingTime = 4.00f;
    this->VIPHomeRestingTime = 10.00f;
    this->VIPAwaitingTime = 2.00f;
    this->VIPBonusDuration = 10.00f;
    this->VIPBonusPointsTriggerTreshold = 3;
    this->GSSGameState = NULL;
    this->LotteryMachine = NULL;
    this->SaveGameVersion = -1;
    this->LanguageFixApplied = 0;
    this->AirStripQuestLine = NULL;
    this->JunkyardQuestLine = NULL;
    this->CinemaQuestline = NULL;
    this->RVCampQuestline = NULL;
    this->NumberOfQuestLinesToLoad = 0;
    this->bDecorationsLoaded = false;
    this->bEnableInEditor = true;
    this->DLCCustomizationPluginName = TEXT("DLC001_Customization");
    this->DLCPartyTimePluginName = TEXT("DLC002_PartyTime");
    this->DLCAirstripPluginName = TEXT("DLC003_Airstrip");
    this->DLCParadiseIslandPluginName = TEXT("DLC004_ParadiseIsland");
    this->DLCCarJunkyardPluginName = TEXT("DLC006_CarJunkyard");
    this->DLCDriveInCinemaPluginName = TEXT("DLC007_DriveInCinema");
    this->DLCRVCampPluginName = TEXT("DLC008_RVCamp");
    this->bDLCCustomizationEnabled = false;
    this->bDLCPartyTimeEnabled = false;
    this->bDLCAirstripEnabled = false;
    this->bDLCParadiseIslandEnabled = false;
    this->bDLCShadyDealsEnabled = true;
    this->bDLCCarJunkyardEnabled = false;
    this->bDLCDriveInCinemaEnabled = false;
    this->bDLCRVCampEnabled = false;
    this->DA_LevelTeleporter = NULL;
    this->ActiveGamepadType = EGamePadType::GAMEPAD_XBOX;
    this->bShownAdvertMenuInThisSession = false;
}


bool UGSSGameInstance::TryRegenerateSaveSlots() {
    return false;
}


void UGSSGameInstance::TranslateOldQuestToNew(FSavedQuest SavedGSSQuest, bool bIgnoreStartingNewQuestLine) {
}

void UGSSGameInstance::StartLoadingGame() {
}

void UGSSGameInstance::SpawnEditedWall(TSubclassOf<ACustomizationHousePart> WallClass, FTransform Transform, FSavedWallInfo SavedWallInfo, ULevel* MoveToLevel) {
}


void UGSSGameInstance::SetGamepadType(EGamePadType NewGamepadType) {
}

void UGSSGameInstance::SaveWorldObjects() {
}

void UGSSGameInstance::SaveWidgetPlayerDecals() {
}

void UGSSGameInstance::SaveWalls() {
}

void UGSSGameInstance::SaveVIPData() {
}

void UGSSGameInstance::SaveTutorialManager() {
}

void UGSSGameInstance::SaveTrashBins() {
}

void UGSSGameInstance::SaveTrafficManager() {
}

void UGSSGameInstance::SaveSpawnedWebs() {
}

void UGSSGameInstance::SaveShelves() {
}

void UGSSGameInstance::SaveSettings() {
}

void UGSSGameInstance::SaveRVChallenges() {
}

void UGSSGameInstance::SaveRuins() {
}

void UGSSGameInstance::SaveRudy() {
}

void UGSSGameInstance::SaveRenownSystem() {
}

void UGSSGameInstance::SaveQuestProgress() {
}

void UGSSGameInstance::SavePlayerTools() {
}

void UGSSGameInstance::SavePlayerDecals() {
}

void UGSSGameInstance::SavePlayer() {
}

void UGSSGameInstance::SaveNPCs() {
}

void UGSSGameInstance::SaveNPAIData() {
}

void UGSSGameInstance::SaveNewTrash() {
}

void UGSSGameInstance::SaveNewQuestProgress() {
}

void UGSSGameInstance::SaveMoneyTransfer() {
}

void UGSSGameInstance::SaveMiniGames() {
}

void UGSSGameInstance::SaveMikeSection() {
}

void UGSSGameInstance::SaveMask(FSavedAICharacters& SavedAICharacter, AGSSWheeledVehicle* GSSWheeledVehicle, bool bIsSpawned) {
}

void UGSSGameInstance::SaveMarketProducts() {
}

void UGSSGameInstance::SaveMaps() {
}

void UGSSGameInstance::SaveItems() {
}

void UGSSGameInstance::SaveGasStation() {
}

void UGSSGameInstance::SaveGarageData() {
}

void UGSSGameInstance::SaveGameState() {
}

bool UGSSGameInstance::SaveGame(const FString& GameMapName, bool AutoSave) {
    return false;
}

void UGSSGameInstance::SaveEmployees() {
}

void UGSSGameInstance::SaveEconomySubsystemData() {
}

void UGSSGameInstance::SaveEconomyData() {
}

void UGSSGameInstance::SaveDecorations() {
}

void UGSSGameInstance::SaveDecals() {
}

void UGSSGameInstance::SaveCollectibleCards() {
}

void UGSSGameInstance::SaveChallenges() {
}

void UGSSGameInstance::SaveCashShop() {
}

void UGSSGameInstance::SaveCashMeshAndColor() {
}

void UGSSGameInstance::SaveCarWashData() {
}

void UGSSGameInstance::SaveAverageIncome() {
}

void UGSSGameInstance::SaveAdditionalUprades() {
}

void UGSSGameInstance::SaveActionManagerSubsystem() {
}

void UGSSGameInstance::SaveAchievementData() {
}

void UGSSGameInstance::RemoveDuplicatesOfUniqueCharacters() {
}

void UGSSGameInstance::RemoveDuplicatedCinemaQuestLines(TArray<FSavedActiveQuestLine>& SavedQuestLines) {
}

void UGSSGameInstance::RegisterLotteryMachine(ALotteryMachine* LotteryMachineToSet) {
}

void UGSSGameInstance::RebuildNavmesh() {
}


void UGSSGameInstance::OnLoginCompleted(bool bWasSuccessful, const FString& UserNickname) {
}

void UGSSGameInstance::LoadWorldObjects() {
}

void UGSSGameInstance::LoadWidgetPlayerDecals() {
}

void UGSSGameInstance::LoadWallStaticMesh(ACustomizationHousePart* CustomizationHousePart, UStaticMesh* StaticMeshRef, UMaterialInstance* Material0Ref, UMaterialInstance* Material1Ref, UMaterialInstance* WallPaperMaterial) {
}

void UGSSGameInstance::LoadWalls() {
}

void UGSSGameInstance::LoadVIPData(bool bMapChanged) {
}

void UGSSGameInstance::LoadTutorialManager() {
}

void UGSSGameInstance::LoadTrashBin(ATrashBin* TrashBin) {
}

void UGSSGameInstance::LoadTrafficManager() {
}

void UGSSGameInstance::LoadSpawnedWebs() {
}

void UGSSGameInstance::LoadShelves() {
}

void UGSSGameInstance::LoadSettings() {
}

void UGSSGameInstance::LoadRVChallenges() {
}

void UGSSGameInstance::LoadRuins() {
}

void UGSSGameInstance::LoadRudy() {
}

void UGSSGameInstance::LoadRenownSystem() {
}

void UGSSGameInstance::LoadQuestProgress() {
}

void UGSSGameInstance::LoadQuest() {
}

void UGSSGameInstance::LoadPlayerTools() {
}

TArray<ADecalToPaint*> UGSSGameInstance::LoadPlayerDecals(const TArray<FSavedPlayerDecals>& DecalsToLoad, bool bDeleteOldDecals) {
    return TArray<ADecalToPaint*>();
}

void UGSSGameInstance::LoadPlayer() {
}

void UGSSGameInstance::LoadNPCs() {
}

void UGSSGameInstance::LoadNPAIData() {
}

void UGSSGameInstance::LoadNewTrash() {
}

void UGSSGameInstance::LoadNewQuestProgress() {
}

void UGSSGameInstance::LoadMoneyTransfer() {
}

void UGSSGameInstance::LoadMiniGames() {
}

void UGSSGameInstance::LoadMikeSection() {
}

void UGSSGameInstance::LoadMask(FSavedAICharacters& SavedAICharacter, AGSSWheeledVehicle* GSSWheeledVehicle, bool bIsSpawned) {
}

void UGSSGameInstance::LoadMarketProducts() {
}

void UGSSGameInstance::LoadMaps() {
}

void UGSSGameInstance::LoadLastIndexMap() {
}

void UGSSGameInstance::LoadItems() {
}

void UGSSGameInstance::LoadGasStationSections(AInteractableBuilding* InteractableBuilding) {
}

void UGSSGameInstance::LoadGasStation() {
}

void UGSSGameInstance::LoadGarageData() {
}

void UGSSGameInstance::LoadGameState() {
}

void UGSSGameInstance::LoadFloorMaterial(TSoftObjectPtr<UMaterialInstance> FloorMaterial, TSoftObjectPtr<UMaterialInstance> ToiletFloorMaterial) {
}

void UGSSGameInstance::LoadEmployees(TArray<AAICharacterBase*> Employees) {
}

void UGSSGameInstance::LoadEconomySubsystemData() {
}

void UGSSGameInstance::LoadEconomyData() {
}

void UGSSGameInstance::LoadDecorations() {
}

void UGSSGameInstance::LoadDecals() {
}

void UGSSGameInstance::LoadCollectibleCards() {
}

void UGSSGameInstance::LoadChallenges() {
}

void UGSSGameInstance::LoadCashShop() {
}

void UGSSGameInstance::LoadCashMeshAndColor() {
}

void UGSSGameInstance::LoadCarWashData() {
}

void UGSSGameInstance::LoadAverageIncome() {
}

void UGSSGameInstance::LoadAdditionalUpgrades() {
}

void UGSSGameInstance::LoadActionManagerSubsystem() {
}

void UGSSGameInstance::LoadAchievementData() {
}

bool UGSSGameInstance::IsMainCampainFinishedInOldQuestSystem() {
    return false;
}

bool UGSSGameInstance::IsAlreadyLoading() const {
    return false;
}

void UGSSGameInstance::InitLoadGame(const FString& USaveGame) {
}

bool UGSSGameInstance::HasSaveConnectedToDLC(EDLCName DLCName) {
    return false;
}

int32 UGSSGameInstance::GetSaveSlotIndex(const FString& GameMapName) {
    return 0;
}

int32 UGSSGameInstance::GetSaveGameVersion() {
    return 0;
}

FString UGSSGameInstance::GetPathToLatestSave(bool bRelative) {
    return TEXT("");
}

FSavedSlotStruct UGSSGameInstance::GetLastSaveGame() {
    return FSavedSlotStruct{};
}

void UGSSGameInstance::FinishLoadingGame() {
}

bool UGSSGameInstance::DoesLevelFileExist(FName LevelName) {
    return false;
}

void UGSSGameInstance::DLCQueryFinished(bool bSuccesfull, const TArray<FDLCOwnershipData>& OwnershipData) {
}

void UGSSGameInstance::DeleteSaveGameInstance() {
}

int32 UGSSGameInstance::DeleteSaveGame(FSavedSlotStruct SavedSlot) {
    return 0;
}

FSavedPlayerDecals UGSSGameInstance::CreateSavedDecalData(ADecalToPaint* DecalActor) {
    return FSavedPlayerDecals{};
}

void UGSSGameInstance::ConvertInventoryToNewSystem(UInventoryComponent* InventoryComponent) {
}

void UGSSGameInstance::ConnectOtherLevelsToSaveSlot(const FString& LoadedGameMapName, const FString& LevelNameToAdd, const FString& GameMapNameToAdd) {
}

void UGSSGameInstance::CheckLevelsVisibility() {
}

void UGSSGameInstance::CheckForMissingPathStation() {
}

void UGSSGameInstance::CacheStreamingLevelsNames() {
}


