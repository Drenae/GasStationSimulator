#include "UnblockMapStruct.h"

FUnblockMapStruct::FUnblockMapStruct() {
    this->Price = 0.00f;
    this->MinLevelToUnlock = 0;
    this->NameOfDLC = EDLCName::NONE;
    this->CameraType = ECameraType::FEATURE;
    this->bIsExtraFeature = false;
    this->BuildingBlueprintsNumber = 0;
    this->bIsInteractable = false;
}

