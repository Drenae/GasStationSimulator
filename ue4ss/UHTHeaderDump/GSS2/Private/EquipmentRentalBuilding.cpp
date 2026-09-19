#include "EquipmentRentalBuilding.h"

AEquipmentRentalBuilding::AEquipmentRentalBuilding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeathsNumber = 0;
    this->ReplacementTresholdValue = 50.00f;
    this->RentalServiceValues = NULL;
}

bool AEquipmentRentalBuilding::TryToReplaceEquipment_BoxOrInventory(ARentalSpot* RentalSpot, bool bForce) {
    return false;
}

bool AEquipmentRentalBuilding::TryToReplaceEquipment(ARentalSpot* SpotToCheck, bool bForce) {
    return false;
}

void AEquipmentRentalBuilding::SetUnlockedRentalSpots(TArray<ARentalSpot*> NewUnlockedRentalSpots) {
}

void AEquipmentRentalBuilding::SetReplacementTresholdValue(float NewReplacementTresholdValue) {
}

void AEquipmentRentalBuilding::SetDeathsNumber(int32 NewDeathsNumber) {
}

void AEquipmentRentalBuilding::RefreshRentalSpots() {
}

void AEquipmentRentalBuilding::RefreshBuilding() {
}

void AEquipmentRentalBuilding::OnVolcanoAngerChange(EChunchumanchuAnger AngerState, float RenownProgress, float ValueChanged) {
}

void AEquipmentRentalBuilding::OnRentalEquipmentBroken(AInteractableActor* Building, ARentalSpot* Spot, AAICharacterBase* Customer) {
}

void AEquipmentRentalBuilding::OnEquipmentRentalSpotFree(AInteractableActor* Building, ARentalSpot* Spot) {
}

void AEquipmentRentalBuilding::OnEquipmentAddedToQueue(int32 EquipmentRef) {
}

void AEquipmentRentalBuilding::OnCloseOpenGasStation(bool IsOpen) {
}

void AEquipmentRentalBuilding::LoadSetEqMesh(TSoftObjectPtr<UStaticMesh> EqMeshToLoad, ARentalSpot* SpotToSetEqMesh) {
}

void AEquipmentRentalBuilding::LoadSetEqMaterial(TSoftObjectPtr<UMaterialInstance> EqMaterialToLoad, ARentalSpot* SpotToSetEqMesh) {
}

void AEquipmentRentalBuilding::LoadSetEqIcon(TSoftObjectPtr<UTexture2D> EqIconToLoad, ARentalSpot* SpotToSetEqIcon) {
}

bool AEquipmentRentalBuilding::IsAnyEqAvailable() {
    return false;
}

void AEquipmentRentalBuilding::HandleCustomerService(ARentalSpot* Spot) {
}

TArray<ARentalSpot*> AEquipmentRentalBuilding::GetUnlockedRentalSpots() {
    return TArray<ARentalSpot*>();
}

float AEquipmentRentalBuilding::GetReplacementTresholdValue() {
    return 0.0f;
}

TSoftObjectPtr<ARentalEquipmentContainer> AEquipmentRentalBuilding::GetRentalEqContainer() {
    return NULL;
}

int32 AEquipmentRentalBuilding::GetDeathsNumber() {
    return 0;
}

void AEquipmentRentalBuilding::ForceFinishRentalService() {
}

ARentalSpot* AEquipmentRentalBuilding::FindSpotWithoutEq() {
    return NULL;
}

ARentalSpot* AEquipmentRentalBuilding::FindFreeSpot() {
    return NULL;
}

ARentalSpot* AEquipmentRentalBuilding::FindClosestSpotToCustomer(AAICharacterBase* AssignedCustomer) {
    return NULL;
}

ARentalSpot* AEquipmentRentalBuilding::FindAssignedSpot(AAICharacterBase* AssignedCustomer) {
    return NULL;
}

void AEquipmentRentalBuilding::DeleteEquipmentInRentalSpot(ARentalSpot* SpotToRemoveEquipment) {
}

void AEquipmentRentalBuilding::CreateNotification(bool bShow) {
}

void AEquipmentRentalBuilding::AddUnlockedRentalSpot(ARentalSpot* NewRentalSpot) {
}

void AEquipmentRentalBuilding::AddEquipmentToRentalSpot(ARentalSpot* RentalSpot) {
}


