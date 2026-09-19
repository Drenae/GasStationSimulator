#include "ContractsManager.h"

UContractsManager::UContractsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ContractRegions = NULL;
    this->CheatSpawnedTowTrucks = 0;
    this->NumberOfCarWrecksType = 0;
    this->bDeliveriesUnlocked = false;
    this->bContractsUnlocked = false;
    this->bInBoardMap = false;
}

void UContractsManager::UnlockStates(const int32 OfficeLevel) {
}

void UContractsManager::UnlockState(EState InState) {
}

void UContractsManager::UnlockDrivers(int32 OfficeLevel) {
}

bool UContractsManager::TryToCreateContract(const FContractSlot& ContractSlot, const int32& ContractSlotIndex, bool bForce) {
    return false;
}

bool UContractsManager::StartDelivery(UBasicContract* Contract, int32 DriverIndex) {
    return false;
}

bool UContractsManager::StartContract(UContractBase* Contract) {
    return false;
}

void UContractsManager::SpawnWreckTowTruck() {
}

void UContractsManager::SpawnQuestDeliveries() {
}

void UContractsManager::SpawnQuestContracts() {
}

void UContractsManager::SpawnDeliveryWreckCarParts(UWrecksCollectionContract* Delivery, AJunkyardCarWreck* CarWreck) {
}

void UContractsManager::SetUnlockedStates(TArray<FUnlockedState> InUnlockedStates) {
}

void UContractsManager::SetUnlockedDrivers(TArray<FHireableDriver> InUnlockedDrivers) {
}

void UContractsManager::SetStateAvailableContracts(TArray<UContractBase*> Contracts, EState State) {
}

void UContractsManager::SetNumberOfModels(TMap<EJunkyardCarPartType, int32> InNumberOfModels) {
}

void UContractsManager::SetNumberOfCarWrecksType(int32 InNumberOfCarWrecksType) {
}

void UContractsManager::SetNextDriversRefresh(FTimeStruct InNextRefresh) {
}

void UContractsManager::SetNextDeliveriesRefresh(FTimeStruct InNextRefresh) {
}

void UContractsManager::SetNextContractsRefresh(FTimeStruct InNextRefresh) {
}

void UContractsManager::SetGarageCarParts(TArray<FCarWreckPartsBasket> InGarageCarParts) {
}

void UContractsManager::SetFinishedDeliveries(TArray<UWrecksCollectionContract*> InFinishedDeliveries) {
}

void UContractsManager::SetDedicatedCarParts(TArray<FCarWreckPartsBasket> InDedicatedCarParts) {
}

void UContractsManager::SetContractSlots(TArray<FContractSlot> InContracts) {
}

void UContractsManager::SetContractAppearanceChances(TArray<FCustomizationContractChancesBasket> InContractAppearance) {
}

void UContractsManager::SetCarWrecksBasket(TArray<FCarWrecksBasket> InCarWrecksBasket) {
}

void UContractsManager::RefreshDrivers(int32 OfficeLevel) {
}

void UContractsManager::RefreshDeliveries() {
}

void UContractsManager::RefreshContracts() {
}

void UContractsManager::RandomDeliveryTier(const TMap<EJunkyardPartRarity, float>& TierChances, UBasicContract* Delivery) {
}

void UContractsManager::RandomDeliveryRewards(UBasicContract* DeliveryContract) {
}

void UContractsManager::OnUfoUsed() {
}

void UContractsManager::OnOfficeBuildingUpgraded(EBuildingType BuildingType, int32 NewBuildingLevel, bool bLoadedFromSave) {
}

void UContractsManager::OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState GameplayStuffUnlocked) {
}

void UContractsManager::OnNewFameLevelUnlocked(const int32 NewLevel) {
}

void UContractsManager::OnGameTimeUpdated(const FTimeStruct UpdatedTime) {
}

void UContractsManager::OnFinishGameLoaded(bool bGameLoaded) {
}

void UContractsManager::OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated) {
}

void UContractsManager::OnContractTimeOver(UContractBase* TimeOverContract) {
}

void UContractsManager::OnBoardMapInteracted(bool bEntered) {
}

bool UContractsManager::IsStateUnlocked(EState InState) {
    return false;
}

bool UContractsManager::IsDriverAvailable(const FHireableDriver& Driver) {
    return false;
}

FTransform UContractsManager::GetWreckTowtruckTransformOffset(UWrecksCollectionContract* Delivery, AJunkyardCarWreck* CarWreck) {
    return FTransform{};
}

TArray<FUnlockedState> UContractsManager::GetUnlockedStates() {
    return TArray<FUnlockedState>();
}

TArray<FHireableDriver> UContractsManager::GetUnlockedDrivers() {
    return TArray<FHireableDriver>();
}

TMap<EJunkyardCarPartType, int32> UContractsManager::GetNumberOfModels() {
    return TMap<EJunkyardCarPartType, int32>();
}

int32 UContractsManager::GetNumberOfCarWrecksType() {
    return 0;
}

FTimeStruct UContractsManager::GetNextDriversRefresh() {
    return FTimeStruct{};
}

FTimeStruct UContractsManager::GetNextDeliveriesRefresh() {
    return FTimeStruct{};
}

FTimeStruct UContractsManager::GetNextContractsRefresh() {
    return FTimeStruct{};
}

TArray<FCarWreckPartsBasket> UContractsManager::GetGarageCarParts() {
    return TArray<FCarWreckPartsBasket>();
}

TArray<UWrecksCollectionContract*> UContractsManager::GetFinishedDeliveries() {
    return TArray<UWrecksCollectionContract*>();
}

bool UContractsManager::GetDriverRequiresContractPoints(FHireableDriver DriverToCheck) {
    return false;
}

UWrecksCollectionContract* UContractsManager::GetDeliveryToSpawnWreck() {
    return NULL;
}

TArray<FCarWreckPartsBasket> UContractsManager::GetDedicatedCarParts() {
    return TArray<FCarWreckPartsBasket>();
}

TArray<USpecialContract*> UContractsManager::GetContractsWithProgress(EProgressState ProgressState) {
    return TArray<USpecialContract*>();
}

TArray<FContractSlot> UContractsManager::GetContractSlots() {
    return TArray<FContractSlot>();
}

TArray<FCustomizationContractChancesBasket> UContractsManager::GetContractAppearanceChances() {
    return TArray<FCustomizationContractChancesBasket>();
}

TArray<FCarWrecksBasket> UContractsManager::GetCarWrecksBasket() {
    return TArray<FCarWrecksBasket>();
}

void UContractsManager::GenerateAndPrintPartsBasket(EJunkyardPartRarity DeliveryTier, const bool bNonCustomizable) {
}

void UContractsManager::DestroyContract(UContractBase* ContractToDestroy) {
}

void UContractsManager::CreateContract(const int32& ContractSlotIndex) {
}

void UContractsManager::CheckForRewardsChanges() {
}

bool UContractsManager::AreDeliveriesAvailable() {
    return false;
}

bool UContractsManager::AreContractsAvailable() {
    return false;
}


