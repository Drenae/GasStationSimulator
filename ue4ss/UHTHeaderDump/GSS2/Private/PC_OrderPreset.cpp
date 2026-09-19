#include "PC_OrderPreset.h"

UPC_OrderPreset::UPC_OrderPreset() {
    this->ButtonIndex = 0;
}


void UPC_OrderPreset::SetPreset(TArray<FBasketItemStruct> BasketItems) {
}

FOrderPreset UPC_OrderPreset::GetOrderPreset() {
    return FOrderPreset{};
}


