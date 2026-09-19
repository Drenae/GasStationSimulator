#include "CarPartData.h"

FCarPartData::FCarPartData() {
    this->Acceleration = 0.00f;
    this->TopSpeed = 0.00f;
    this->Handling = 0.00f;
    this->Strength = 0.00f;
    this->DirtyPercentage = 0.00f;
    this->PartRarity = EJunkyardPartRarity::FAKE;
}

