#include "InventoryWidget.h"

UInventoryWidget::UInventoryWidget() {
    this->CurrentSortType = ESortType::ALPHABETICAL;
    this->InventoryType = EInventoryChildType::BasicInventory;
}

TArray<FSlotStruct> UInventoryWidget::SortInventory(ESortType SortType, TArray<FSlotStruct> FilteredItems) {
    return TArray<FSlotStruct>();
}

void UInventoryWidget::SetCurrentSortType(ESortType InCurrentSortType) {
}

void UInventoryWidget::SetCurrentItems(TArray<FSlotStruct> InCurrentItems) {
}


void UInventoryWidget::RemoveCategory(EItemTypeCategory InItemTypeCategory) {
}



int32 UInventoryWidget::MoveItemBeetwenInventories(UInventoryComponent* SourceInventory, UInventoryComponent* TargetInventory, FSlotStruct Item, int32 Quantity) {
    return 0;
}

bool UInventoryWidget::IsItemInInventory(const TArray<FSlotStruct> ItemsToCheckIn, const FSlotStruct InItem) {
    return false;
}

ESortType UInventoryWidget::GetCurrentSortType() {
    return ESortType::ALPHABETICAL;
}

TArray<FSlotStruct> UInventoryWidget::GetCurrentItems() {
    return TArray<FSlotStruct>();
}

TArray<EItemTypeCategory> UInventoryWidget::GetCurrentCategories() {
    return TArray<EItemTypeCategory>();
}

TArray<FSlotStruct> UInventoryWidget::FilterInventory(ESortType SortType) {
    return TArray<FSlotStruct>();
}

void UInventoryWidget::ClearCategories() {
}

void UInventoryWidget::CheckAndGetItemFromInventory(const TArray<FSlotStruct> ItemsToCheckIn, const FSlotStruct InItem, FSlotStruct& Slot_out, bool& boo) {
}

void UInventoryWidget::AddToCategory(EItemTypeCategory InItemTypeCategory) {
}

TArray<FSlotStruct> UInventoryWidget::AddQuantityToItem(TArray<FSlotStruct> ItemsArray, FSlotStruct ToAdd, int32 QuantityToAdd) {
    return TArray<FSlotStruct>();
}


