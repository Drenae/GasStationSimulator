#include "CustomizationPart.h"

FCustomizationPart::FCustomizationPart() {
    this->bCanBeOneSided = false;
    this->StructureType = EStructureType::WALL;
    this->Price = 0;
    this->bIsRoofPaintable = false;
}

