#include "JunkyardStorage.h"

AJunkyardStorage::AJunkyardStorage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Cappacity = 0.00f;
    this->MaxCappacity = 0.00f;
}

void AJunkyardStorage::SetOwnedParts(TArray<FStorageCarPart> InParts) {
}

bool AJunkyardStorage::RemovePart_Struct(FStorageCarPart CarPartStruct) {
    return false;
}

bool AJunkyardStorage::RemovePart(UActorComponent* PartClass) {
    return false;
}

bool AJunkyardStorage::InventoryContainsItem(FStorageCarPart PartToCheck, bool CheckChemicalBath, bool bCountBetterQuality) {
    return false;
}

void AJunkyardStorage::IncreaseMaxcappacity(float AditionalCappacityAmount) {
}

FStorageCarPart AJunkyardStorage::GetSpawnedPartAsStorageStruct(UActorComponent* PartClass) {
    return FStorageCarPart{};
}

TArray<FStorageCarPart> AJunkyardStorage::GetOwnedParts() {
    return TArray<FStorageCarPart>();
}

float AJunkyardStorage::GetMaxCappacity() {
    return 0.0f;
}

bool AJunkyardStorage::GetIsStorageFull() {
    return false;
}

float AJunkyardStorage::GetCurrentCappacity() {
    return 0.0f;
}

void AJunkyardStorage::CalcaulateCurrentCappacity() {
}

int32 AJunkyardStorage::AddPart_Struct(FStorageCarPart PartToAdd, bool bIgnoreLimit) {
    return 0;
}

bool AJunkyardStorage::AddPart(UActorComponent* PartClass) {
    return false;
}


