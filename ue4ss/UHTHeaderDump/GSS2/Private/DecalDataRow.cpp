#include "DecalDataRow.h"

FDecalDataRow::FDecalDataRow() {
    this->Price = 0.00f;
    this->DecalStationLevel = EDecalStationLevel::StationLvl_0;
    this->DecalUnlockType = EDecalUnlockType::All;
    this->DecalColor = EDecalColor::Generic;
    this->DecalFunctionality = EDecaFunctionality::DecalPaint;
    this->PaintType = ECustomizationPaintType::NONE;
    this->bDoesNeedDLC = false;
    this->RequiredDlc = EDLCName::NONE;
}

