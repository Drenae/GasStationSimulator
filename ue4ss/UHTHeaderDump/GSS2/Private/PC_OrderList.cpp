#include "PC_OrderList.h"
#include "Templates/SubclassOf.h"

UPC_OrderList::UPC_OrderList() {
    this->OrderListScroll = NULL;
    this->BuyButton = NULL;
    this->OrderCost = NULL;
    this->CappacityRef = NULL;
    this->TotalSpaceRef = NULL;
    this->MagazineCapacityRef = NULL;
    this->AirportTotalSpaceRef = NULL;
    this->AirportMagazineCapacityRef = NULL;
    this->DeliveryCost = 0;
    this->DeliveryTreshold = 0;
    this->Category = ECategoryFilter::DECORATIONS;
}


void UPC_OrderList::UpdateCardScroll() {
}

void UPC_OrderList::UpdateBasket() {
}

void UPC_OrderList::TryOrderProducts() {
}

void UPC_OrderList::SavePreset(UPC_OrderPreset* OrderPresetButton) {
}

void UPC_OrderList::RemoveCard(FCollectibleCardStruct CardStruct) {
}

void UPC_OrderList::OrderProducts(TSoftClassPtr<AActor> Vehicle, AGSSPlayerState* PlayerState, AGSSPlayerCharacter* Player) {
}

void UPC_OrderList::NativeDestruct() {
}

void UPC_OrderList::NativeConstruct() {
}

void UPC_OrderList::LoadPreviousPreset() {
}

void UPC_OrderList::LoadPreset(UPC_OrderPreset* OrderPresetButton) {
}

TArray<FBasketItemStruct> UPC_OrderList::GetItemsInBasket() {
    return TArray<FBasketItemStruct>();
}

TArray<FCollectibleCardStruct> UPC_OrderList::GetCardsBasket() {
    return TArray<FCollectibleCardStruct>();
}

int32 UPC_OrderList::GetBasketCost(bool& WasFeeAdded) {
    return 0;
}

int32 UPC_OrderList::GetBasketCapacity() {
    return 0;
}

void UPC_OrderList::BuyCards() {
}

void UPC_OrderList::AddToShoppingBasket(FBasketItemStruct ItemToAdd) {
}

void UPC_OrderList::AddNewBasketPosition() {
}

void UPC_OrderList::AddCardToShopingBasket(FCollectibleCardStruct CardStruct, TSubclassOf<ACollectible> Collectible) {
}


