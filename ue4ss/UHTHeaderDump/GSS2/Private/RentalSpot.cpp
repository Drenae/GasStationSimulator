#include "RentalSpot.h"

ARentalSpot::ARentalSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RentalServiceDuration = 0;
    this->CurrentRentalDutation = 0;
    this->WearOffPerSec = 0.00f;
    this->PricePerSec = 0.00f;
    this->RentingCustomerSpawner = NULL;
    this->EqMesh = NULL;
}

void ARentalSpot::StartRentalService(int32 RentalDuration, float PricePerSecond, float EqWearOffPerSecond) {
}

void ARentalSpot::SetRentalEquipmentShelf(ARentalEquipmentShelf* NewRentalEquipmentShelf) {
}

void ARentalSpot::SetEquipment(FRentableEquipmentSlot NewEquipment) {
}

void ARentalSpot::SetEqMeshVisibility() {
}

void ARentalSpot::SetEqMeshRef(TSoftObjectPtr<UStaticMesh> EqMeshToSet) {
}

void ARentalSpot::SetEqMesh(UStaticMesh* NewStaticMesh) {
}

void ARentalSpot::SetEqMaterialRef(TSoftObjectPtr<UMaterialInstance> EqMaterialToSet) {
}

void ARentalSpot::SetEqMaterial(UMaterialInstance* NewEqMaterial) {
}

void ARentalSpot::SetEqIcon(UTexture2D* Icon) {
}

void ARentalSpot::SetDeathChanceMultipliers(TArray<FDeathChanceMultipliers>& NewValue) {
}

void ARentalSpot::OnRentalTimeUpdated(FTimeStruct UpdatedTime) {
}

void ARentalSpot::OnCustomerEaten(AShark* Shark, AWaterVehicle* EatenCustomer) {
}

void ARentalSpot::OnBoatSpawned(AWaterVehicle* SpawnedVehicle) {
}

bool ARentalSpot::IsEquipmentGoingToBreak() {
    return false;
}

ARentalEquipmentShelf* ARentalSpot::GetRentalEquipmentShelf() {
    return NULL;
}

FRentableEquipmentSlot ARentalSpot::GetEquipment() {
    return FRentableEquipmentSlot{};
}

AStaticMeshActor* ARentalSpot::GetEqMesh() {
    return NULL;
}

UTexture2D* ARentalSpot::GetEqIcon() {
    return NULL;
}

float ARentalSpot::GetEqCurrentDurability() {
    return 0.0f;
}

TArray<FDeathChanceMultipliers> ARentalSpot::GetDeathChanceMultipliers() {
    return TArray<FDeathChanceMultipliers>();
}

float ARentalSpot::GetDeathChanceMultiplier(float CurrentEqDurability) {
    return 0.0f;
}

void ARentalSpot::FinishRentalService() {
}

void ARentalSpot::FillEquipment() {
}

void ARentalSpot::DestroyEquipment() {
}

void ARentalSpot::DestroyEqMesh() {
}

void ARentalSpot::DeactivateRentingVisuals(bool bIsEqBroken) {
}

void ARentalSpot::CreateEqMesh() {
}

void ARentalSpot::CheckIfSharkActiveBeforeBreakEq() {
}

void ARentalSpot::BreakEquipment(const FString& Reason) {
}

void ARentalSpot::ActivateRentingVisuals() {
}


