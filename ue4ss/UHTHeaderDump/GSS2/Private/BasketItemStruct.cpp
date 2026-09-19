#include "BasketItemStruct.h"

FBasketItemStruct::FBasketItemStruct() {
    this->Quantity = 0;
    this->RestockAmount = 0;
    this->Price = 0.00f;
    this->Icon = NULL;
    this->SlotMainCategory = ECategoryFilter::DECORATIONS;
    this->SubCategory = EItemTypeCategory::None;
}

