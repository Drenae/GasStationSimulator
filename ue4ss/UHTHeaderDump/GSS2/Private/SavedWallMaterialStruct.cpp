#include "SavedWallMaterialStruct.h"

FSavedWallMaterialStruct::FSavedWallMaterialStruct() {
    this->CurrentDurability = 0.00f;
    this->MaxDurability = 0.00f;
    this->WallSide = EWallSide::Front;
    this->ColorType = EColorType::BASIC;
}

