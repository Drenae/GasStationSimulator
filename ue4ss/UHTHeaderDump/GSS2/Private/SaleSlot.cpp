#include "SaleSlot.h"

FSaleSlot::FSaleSlot() {
    this->CarForSale = NULL;
    this->ExhibitionSlot = NULL;
    this->CarPrice = 0.00f;
    this->CurrentInterest = 0.00f;
    this->CurrentViewers = 0;
    this->bSold = false;
    this->bQuestSale = false;
    this->LastSaleCheckNumber = 0;
}

