#include "EconomyProduct.h"

FEconomyProduct::FEconomyProduct() {
    this->EconomyType = EEconomyType::CASH_SHOP_PRODUCT;
    this->AmountBought = 0;
    this->AmountSold = 0;
    this->BuyValue = 0.00f;
    this->SellValue = 0.00f;
}

