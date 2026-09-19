#include "JunkyardManager.h"
#include "AuctionsManager.h"
#include "ContractsManager.h"
#include "FameManager.h"

AJunkyardManager::AJunkyardManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainGameQuestToTriggerQuestline = NULL;
    this->SeanGraph = NULL;
    this->ContractsManager = CreateDefaultSubobject<UContractsManager>(TEXT("ContractsManager"));
    this->AuctionsManager = CreateDefaultSubobject<UAuctionsManager>(TEXT("AuctionsManager"));
    this->FameManager = CreateDefaultSubobject<UFameManager>(TEXT("FameManager"));
    this->WrecksSettings = NULL;
    this->SeanCar = NULL;
    this->SeanTasks = NULL;
    this->DecalsInfo = NULL;
    this->ShortcutLevelName = TEXT("Junkyard_Trapdoor");
    this->InteractableChannel = ECC_WorldStatic;
    this->WreckReservedBySeanMessageDuration = 5.00f;
    this->WreckAttractErrorDuration = 3.00f;
    this->IsJunkyardCinematicPlaying = false;
    this->bShowRefreshWarning = true;
    this->WrecksSpot = NULL;
    this->Crane = NULL;
    this->Shredder = NULL;
    this->CurrentUncleTributeValue = 0.00f;
    this->WrenchCombo = 0;
    this->WrenchRecord = 0;
    this->StorageSorting = EJunkyardSortings::Alphabetical;
    this->ChemicalSorting = EJunkyardSortings::Alphabetical;
    this->PlayerOverlay = NULL;
}

void AJunkyardManager::TryLoadShortcutLevel() {
}

void AJunkyardManager::SpawnSean(FTransform SpawnTransform, TArray<FNPAITaskStruct> InTasksList, FLatentActionInfo LatentInfo) {
}

void AJunkyardManager::SpawnCarWreckWithSpecificPartsAsync(TSoftClassPtr<AJunkyardCarWreck> WreckClass, ACarWreckPlaceableArea* WreckArea, TArray<EJunkyardCarPartType> PartTypes, FLatentActionInfo LatentInfo, float EnablePhysicsDelay) {
}

AJunkyardCarWreck* AJunkyardManager::SpawnCarWreck(bool bSetupCarParts, FTransform TargetTransform, TSoftClassPtr<AJunkyardCarWreck> WreckClass, TSoftObjectPtr<ACarWreckPlaceableArea> WreckArea) {
    return NULL;
}

void AJunkyardManager::ShowAttractWreckError(EAttractWreckError Error) {
}

void AJunkyardManager::SetWrenchRecord(int32 InWrenchRecord) {
}

void AJunkyardManager::SetWrenchCombo(int32 InWrenchCombo) {
}

void AJunkyardManager::SetSortingStorage(EJunkyardSortings InSorting) {
}

void AJunkyardManager::SetSortingChemical(EJunkyardSortings InSorting) {
}

void AJunkyardManager::OnSaleFinished(float CarPrice) {
}

void AJunkyardManager::OnJunkyardActivationStateChanged(EDLCName DLCName, bool bActivated) {
}

void AJunkyardManager::OnGameLoaded(bool bGameLoaded) {
}

void AJunkyardManager::OnCrushFinished() {
}

bool AJunkyardManager::IsPlayerInsideJunkyardArea() {
    return false;
}

void AJunkyardManager::HandleQuestlineActivation(bool bMainQuestlineFinished) {
}

int32 AJunkyardManager::GetWrenchRecord() const {
    return 0;
}

int32 AJunkyardManager::GetWrenchMiniGameCombo() const {
    return 0;
}

EJunkyardSortings AJunkyardManager::GetStorageSorting() {
    return EJunkyardSortings::Alphabetical;
}

FText AJunkyardManager::GetStateTextFromEnum(EState StateEnum) {
    return FText::GetEmpty();
}

FSeanTaskRow AJunkyardManager::GetSeanTaskFromWreckMarking(ECarWreckMarking WreckMarking) {
    return FSeanTaskRow{};
}

AGSSNPAICharacterBase* AJunkyardManager::GetSeanCharacter(UObject* WorldContextObject) {
    return NULL;
}

FText AJunkyardManager::GetRarityTextFromEnum(EJunkyardPartRarity RarityEnum) {
    return FText::GetEmpty();
}

int32 AJunkyardManager::GetNumberOfWrecksOnAreaType(ECarWreckPlaceableAreaType AreaType) {
    return 0;
}

FText AJunkyardManager::GetFinishMaskTypeTextFromEnum(EFinishMaskType FinishMaskType) {
    return FText::GetEmpty();
}

FCarPartBasicInformation AJunkyardManager::GetDataTableInfoFromPartClass(TSoftClassPtr<UActorComponent> PartClass) {
    return FCarPartBasicInformation{};
}

FText AJunkyardManager::GetCustomizationMaskTypeTextFromEnum(ECustomizationPaintType CustomizationPaintType) {
    return FText::GetEmpty();
}

FText AJunkyardManager::GetCustomizationContractTypeTextFromEnum(ECustomizationContractType CustomizationContractType) {
    return FText::GetEmpty();
}

FText AJunkyardManager::GetContractDifficultyTextFromEnum(EContractDifficulty ContractDifficulty) {
    return FText::GetEmpty();
}

EJunkyardSortings AJunkyardManager::GetChemicalSorting() {
    return EJunkyardSortings::Alphabetical;
}

FText AJunkyardManager::GetCarPartSlotTextFromEnum(EJunkyardCarPartType SlotEnum) {
    return FText::GetEmpty();
}

void AJunkyardManager::FindAllWreckAreasOfType(ECarWreckPlaceableAreaType AreaType, TArray<ACarWreckPlaceableArea*>& OutputArray, bool OnlyAreasWithWrecks, bool OnlyAreasWithoutWrecks) {
}

bool AJunkyardManager::ArePartsTheSame(FStorageCarPart FirstPart, FStorageCarPart SecondPart) const {
    return false;
}


