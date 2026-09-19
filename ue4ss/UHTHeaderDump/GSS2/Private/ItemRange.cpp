#include "ItemRange.h"

FItemRange::FItemRange() {
    this->MinTradeValue = 0.00f;
    this->MaxTradeValue = 0.00f;
    this->MinItemNumber = 0;
    this->MaxItemNumber = 0;
    this->bExceptionalItem = false;
    this->GasStationLevelNeeded = 0;
}

