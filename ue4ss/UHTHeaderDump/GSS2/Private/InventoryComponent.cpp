#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsPlayerStateInventory = false;
    this->CurrentCapacity = 0;
    this->MaxCapacity = 2000;
    this->MaxFuelCapacity = 1000.00f;
    this->CurrentFuelCapacity = 0.00f;
    this->FuelState = EFuelState::IsOk;
    this->money = 0.00f;
}

void UInventoryComponent::UpdateFuelStatus() {
}

int32 UInventoryComponent::SellItem(const FSlotStruct ItemToSell, const int32 Quantity) {
    return 0;
}

int32 UInventoryComponent::RemoveSoftItem(TSoftClassPtr<AItem> ItemSoftClass, int32 Quantity) {
    return 0;
}

void UInventoryComponent::RemoveFromInventorySoft(TSoftClassPtr<AItem> Item, int32 Amount) {
}

void UInventoryComponent::LoadGameBeginPlay_Implementation(bool bGameLoaded) {
}

bool UInventoryComponent::IsEmpty() {
    return false;
}

bool UInventoryComponent::InventoryhasItem(FSlotStruct ItemStruct) {
    return false;
}

bool UInventoryComponent::HasKeyItem(TSoftClassPtr<AKeyItem> KeyItemClass) {
    return false;
}

TArray<TSoftClassPtr<AItem>> UInventoryComponent::GetItemsOfSubCategory(EItemTypeCategory SubCategory) {
    return TArray<TSoftClassPtr<AItem>>();
}

TArray<TSoftClassPtr<AItem>> UInventoryComponent::GetItemsOfCategory(ECategoryFilter Category) {
    return TArray<TSoftClassPtr<AItem>>();
}

FSlotStruct UInventoryComponent::GetItemFromInventory(FSlotStruct ItemToFind) {
    return FSlotStruct{};
}

int32 UInventoryComponent::GetItemCountOfCategory(ECategoryFilter Category) {
    return 0;
}

float UInventoryComponent::GetCapacityCondition() {
    return 0.0f;
}

int32 UInventoryComponent::GetAvailableCapacity() const {
    return 0;
}

int32 UInventoryComponent::GetAmountOfItemSoftClass(TSoftClassPtr<AItem> ItemClass) {
    return 0;
}

bool UInventoryComponent::FindSoftItem(TSoftClassPtr<AItem> ItemClass) {
    return false;
}

void UInventoryComponent::ExportInventoryItems(UInventoryComponent* OtherInventory, bool IgnoreLimit) {
}

void UInventoryComponent::CleanInventory() {
}

void UInventoryComponent::ChangeFavourite(FSlotStruct Slot, bool Change) {
}

int32 UInventoryComponent::CalculateAndGetCurrentCappacity() {
    return 0;
}

int32 UInventoryComponent::AddSoftItem(TSoftClassPtr<AItem> ItemSoftClass, int32 Quantity, const bool IgnoreLimit) {
    return 0;
}

void UInventoryComponent::AddMoneyInventory(float NewMoney) {
}

float UInventoryComponent::AddFuel(float Amount) {
    return 0.0f;
}


