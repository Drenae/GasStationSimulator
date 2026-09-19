#include "ChunchumanchuSubsystem.h"

UChunchumanchuSubsystem::UChunchumanchuSubsystem() {
    this->SharkSpawner = NULL;
    this->bIsOnChunchumanchuIsland = false;
    this->bIsGiantWaveActive = false;
    this->WC = NULL;
    this->Shower = NULL;
    this->ScubaEquipmentRentalBuilding = NULL;
    this->SurfingEquipmentRentalBuilding = NULL;
    this->WeatherManager = NULL;
    this->TotalDeathsNumber = 0;
    this->CoconutCombo = 0;
    this->CoconutRecord = 0;
    this->WorldPtr = NULL;
    this->bSharkActive = false;
}

void UChunchumanchuSubsystem::TrySpawnFuelCustomer(bool ForceSpawn) {
}

void UChunchumanchuSubsystem::SpawnRandomFuelCustomer(AWaterMovementPoint* Target) {
}

void UChunchumanchuSubsystem::SpawnDeliveryBoat(TSoftClassPtr<AActor> DeliveryBoatClass, ECategoryFilter DeliveryCategory) {
}

void UChunchumanchuSubsystem::SharkDisappeared() {
}

void UChunchumanchuSubsystem::SharkComingEvent() {
}

void UChunchumanchuSubsystem::SetTotalDeathsNumber(int32 NewValue) {
}

void UChunchumanchuSubsystem::SetLastDeathTime(FTimeStruct NewLastDeathTime) {
}

void UChunchumanchuSubsystem::SetCoconutRecord(int32 InCoconutRecord) {
}

void UChunchumanchuSubsystem::SetCoconutCombo(int32 InCoconutCombo) {
}

void UChunchumanchuSubsystem::SendAllCustomersHome(EGlobalStationEvent StationEvent) {
}

void UChunchumanchuSubsystem::ScheduleFuelCustomerSpawn() {
}

void UChunchumanchuSubsystem::RespawnDeliveryBoats() {
}

void UChunchumanchuSubsystem::OnWorldBeginPlay() {
}

void UChunchumanchuSubsystem::OnVolcanoAngerChange(EChunchumanchuAnger AngerState, float RenownProgress, float ValueChanged) {
}

void UChunchumanchuSubsystem::OnDecorationCameraBought(EDecorationCameraType DecorationCameraType) {
}

void UChunchumanchuSubsystem::OnCloseOpenGasStation(bool IsOpen) {
}

void UChunchumanchuSubsystem::OnBuildingUpgraded(EBuildingType BuildingType, int32 BuildingLevel, bool bLoadedFromSave) {
}

bool UChunchumanchuSubsystem::IsSharkAttacking() {
    return false;
}

void UChunchumanchuSubsystem::HandleDeliveryBoatDeathWithCargo(TSoftClassPtr<AActor> DeliveryBoatClass, ECategoryFilter DeliveryCategory) {
}

int32 UChunchumanchuSubsystem::GetTotalDeathsNumber() {
    return 0;
}

FTimeStruct UChunchumanchuSubsystem::GetLastDeathTime() {
    return FTimeStruct{};
}

int32 UChunchumanchuSubsystem::GetDaysAfterAccident() {
    return 0;
}

int32 UChunchumanchuSubsystem::GetCustomersInWaterNumber() {
    return 0;
}

int32 UChunchumanchuSubsystem::GetCoconutRecord() {
    return 0;
}

int32 UChunchumanchuSubsystem::GetCoconutCombo() {
    return 0;
}

void UChunchumanchuSubsystem::DestroyAllBoats() {
}


