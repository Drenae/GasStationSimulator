#include "SupplySlotStruct.h"

FSupplySlotStruct::FSupplySlotStruct() {
    this->Icon = NULL;
    this->Category = EItemTypeCategory::None;
    this->MainCategory = ECategoryFilter::DECORATIONS;
    this->RequiredDlc = EDLCName::NONE;
    this->bUseOtherBuilding = false;
    this->OtherBuildingRequiredLevel = 0;
}

