#include "ItemStartStruct.h"

FItemStartStruct::FItemStartStruct() {
    this->Price = 0.00f;
    this->Weight = 0.00f;
    this->RestockAmount = 0;
    this->RestockPrice = 0.00f;
    this->ProductBuyPriceCurve = NULL;
    this->bDontAllowMultiples = false;
}

