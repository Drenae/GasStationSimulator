#include "SlotStruct.h"

FSlotStruct::FSlotStruct() {
    this->QuantityItem = 0;
    this->SubCategory = EItemTypeCategory::None;
    this->SlotMainCategory = ECategoryFilter::DECORATIONS;
    this->Capacity = 0;
    this->Price = 0.00f;
    this->bIsFavourites = false;
}

