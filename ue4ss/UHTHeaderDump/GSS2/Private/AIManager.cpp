#include "AIManager.h"
#include "Templates/SubclassOf.h"

UAIManager::UAIManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanGenerateCashRegisterTask = false;
    this->ChanceCarWash = 30.00f;
    this->ChanceFuel = 100.00f;
    this->ChanceRepair = 20.00f;
    this->ToiletPercent = 10.00f;
    this->LotteryPercent = 75.00f;
    this->AlcoholPercent = 10.00f;
    this->FoodPercent = 10.00f;
    this->DrugsPercent = 10.00f;
    this->GlassesPercent = 10.00f;
    this->IceCreamPercent = 10.00f;
    this->NewspaperPercent = 10.00f;
    this->PastriesPercent = 10.00f;
    this->SoftDrinksPercent = 10.00f;
    this->HatPercent = 10.00f;
    this->CarCarePercent = 10.00f;
    this->SoftToyPercent = 10.00f;
    this->ToyPercent = 10.00f;
    this->DLCAirstrip_AlcoholPercent = 10.00f;
    this->DLCAirstrip_HatPercent = 10.00f;
    this->DLCAirstrip_GlassesPercent = 10.00f;
    this->DLCAirstrip_CigarettesPercent = 10.00f;
    this->DLCAirstrip_FoodPercent = 10.00f;
    this->DLCAirstrip_SoftDrinkPercent = 10.00f;
    this->DLCAirstrip_PastryPercent = 10.00f;
    this->DLCAirstrip_ToyPercent = 10.00f;
    this->DLCAirstrip_PremiumDrinkPercent = 10.00f;
    this->DLCAirstrip_SoftToyPercent = 10.00f;
    this->TakeShowerPercent = 10.00f;
    this->MaxVehiclesOnMap = 30;
    this->MaxCinemaVehiclesOnMap = 8;
    this->CurrentSpawnPoint = NULL;
}

bool UAIManager::TrySpawnVehicleForCustomerType(AAISpawnPoint* SpawnPoint, ECustomerType CustomerType, bool bIgnoreLimit) {
    return false;
}

void UAIManager::TrySpawnVehicle_Implementation(AAISpawnPoint* SpawnPoint) {
}

void UAIManager::TrySpawnRvCustomer(FTransform SpawnTransform, AActor* Home, EInteractableTaskType MainTask) {
}

void UAIManager::TrySpawnNoCarCustomer(ANoCarAISpawnPoint* SpawnPoint) {
}

TSubclassOf<AAICharacterBase> UAIManager::TryMapCharacterClass(TSubclassOf<AAICharacterBase> CharacterClass) {
    return NULL;
}

void UAIManager::SpawnVIPCustomer() {
}

void UAIManager::SpawnTaskCustomer(ECustomerType TaskTypeToGenerate) {
}

void UAIManager::SpawnPanickingCustomer(ANoCarAISpawnPoint* SpawnPoint) {
}

void UAIManager::SpawnAICharacterSynchronously(AAICharacterBase*& OutCharacter, AGSSWheeledVehicle*& OutVehicle, TSoftClassPtr<AAICharacterBase> CharacterClass, FTransform CharacterTransform, TSoftClassPtr<AGSSWheeledVehicle> VehicleClass, FTransform VehicleTransform, AActor* Home, EVehicleOptymalizeType VehicleOptymalizeType) {
}

void UAIManager::SpawnAICharacter(AAICharacterBase*& OutCharacter, AGSSWheeledVehicle*& OutVehicle, TSoftClassPtr<AAICharacterBase> CharacterClass, FTransform CharacterTransform, TSoftClassPtr<AGSSWheeledVehicle> VehicleClass, FTransform VehicleTransform, AActor* Home, TArray<FTaskStruct> Tasks, bool bIsParkingSpotCustomer, bool bNoCarCustomer, bool bSpecialVehicle, EVehicleOptymalizeType VehicleOptymalizeType, EHumanType HumanType) {
}

bool UAIManager::SetupDeliveryCars_Implementation(AAICharacterBase* InICharacterBase, AGSSWheeledVehicle* GSSWheeledVehicle) {
    return false;
}

void UAIManager::SetMaxVehiclesOnMap(int32 NewMax) {
}

void UAIManager::SetCurrentSpawnPoint(AAISpawnPoint* InSpawnPoint) {
}


void UAIManager::RandomVehicle(TSoftClassPtr<AGSSWheeledVehicle>& OutVehicle, EVehicleOptymalizeType VehicleType) {
}

int32 UAIManager::RandomMachine(const TArray<float> Values) {
    return 0;
}

void UAIManager::RandomCustomerVehicleAndCharacter_Implementation(TSoftClassPtr<AGSSWheeledVehicle>& OutVehicle, EVehicleOptymalizeType VehicleType, TSoftClassPtr<AAICharacterBase>& OutCharacter) {
}

void UAIManager::RandomCharacter_Implementation(const TSoftClassPtr<AGSSWheeledVehicle>& InitVehicle, TSoftClassPtr<AAICharacterBase>& OutCharacter, const EHumanType HumanType) {
}

void UAIManager::LoadVIPCarAsync(TSoftClassPtr<AGSSWheeledVehicle> VIPCarToLoad) {
}

bool UAIManager::IsBuildingQueueFree(ECustomerType TaskType) {
    return false;
}

void UAIManager::HandleGenerateBuyDLCProductsTasks(EDLCName RequiredDLCName, FSpecificShoppingTypeTask& ShoppingTaskType, TArray<TSoftClassPtr<UIteractableActorTask>>& GeneratedTasks, TArray<FSoftObjectPath>& TasksToLoad) {
}

int32 UAIManager::GetMaxVehiclesOnMap() {
    return 0;
}

AAISpawnPoint* UAIManager::GetCurrentSpawnPoint() {
    return NULL;
}

bool UAIManager::GetCharacterRequiredByVehicle(TSoftClassPtr<AGSSWheeledVehicle> InVehicle, TSoftClassPtr<AAICharacterBase>& OutCharacter) {
    return false;
}

TArray<FTaskStruct> UAIManager::GenerateVehicleTask_Implementation(TArray<FTaskStruct>& InTask) {
    return TArray<FTaskStruct>();
}

TArray<FTaskStruct> UAIManager::GenerateTasks_Implementation(ECustomerType TaskTypeToGenerate, EVehicleOptymalizeType& OutOptymalizeType, bool& OutbIsParkingSpotCustomer, bool bNoCarCustomer) {
    return TArray<FTaskStruct>();
}

ECustomerType UAIManager::GenerateRandomTaskType(bool bNoCarCustomer, bool bIsVipCustomer) {
    return ECustomerType::FUEL;
}

TArray<FTaskStruct> UAIManager::GenerateRandomTasks_Implementation(bool bNoCarCustomer, EVehicleOptymalizeType& OutOptymalizeType, bool& OutbIsParkingSpotCustomer, bool bIsVipCustomer) {
    return TArray<FTaskStruct>();
}

TArray<FTaskStruct> UAIManager::GenerateCustomerTask_Implementation(TArray<FTaskStruct>& InTask) {
    return TArray<FTaskStruct>();
}

void UAIManager::GenerateBuyProductsTasks_Implementation(TArray<FTaskStruct>& InTask) {
}

FTaskStruct UAIManager::CreateTaskStruct(const EInteractableTaskType TaskType) {
    return FTaskStruct{};
}


