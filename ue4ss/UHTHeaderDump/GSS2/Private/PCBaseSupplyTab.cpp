#include "PCBaseSupplyTab.h"

UPCBaseSupplyTab::UPCBaseSupplyTab() {
    this->Icon = NULL;
    this->bCreateOrderList = true;
    this->OrderListRef = NULL;
    this->MainCategory = ECategoryFilter::DECORATIONS;
    this->WBP_ShopOrder_Animation = NULL;
}

void UPCBaseSupplyTab::NativeConstruct() {
}

void UPCBaseSupplyTab::DirectBuy(FBasketItemStruct ItemToBuy) {
}


