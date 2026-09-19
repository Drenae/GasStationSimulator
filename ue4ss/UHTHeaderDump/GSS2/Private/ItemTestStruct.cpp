#include "ItemTestStruct.h"

FItemTestStruct::FItemTestStruct() {
    this->Price = 0.00f;
    this->Weight = 0.00f;
    this->RestockAmount = 0;
    this->RestockPrice = 0.00f;
    this->ProductBuyPriceCurve = NULL;
    this->bDontAllowMultiples = false;
    this->Capacity = 0;
    this->MainCategory = ECategoryFilter::DECORATIONS;
    this->ItemSubCategory = EItemTypeCategory::None;
    this->DlcRequired = EDLCName::NONE;
    this->bIsOrderable = false;
}

