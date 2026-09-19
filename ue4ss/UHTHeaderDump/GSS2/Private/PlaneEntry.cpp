#include "PlaneEntry.h"

FPlaneEntry::FPlaneEntry() {
    this->CountryOfOrigin = ECountryOfOrigin::NONE;
    this->Runway = ERunway::MiddleStrip;
    this->TimeToArrive = 0;
    this->CurrentStatus = ECurrentStatus::InQueue;
    this->AffectedByTradingBoost = ETradingBoosts::HOT_STUFF;
}

