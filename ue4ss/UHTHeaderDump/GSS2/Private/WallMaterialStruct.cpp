#include "WallMaterialStruct.h"

FWallMaterialStruct::FWallMaterialStruct() {
    this->DynamicMaterial = NULL;
    this->CurrentDurability = 0.00f;
    this->MaxDurability = 0.00f;
    this->WallSide = EWallSide::Front;
    this->ColorType = EColorType::BASIC;
}

