#include "WaterVehicleSpawnData.h"

FWaterVehicleSpawnData::FWaterVehicleSpawnData() {
    this->DeliveryCategory = ECategoryFilter::DECORATIONS;
    this->CustomDestination = NULL;
    this->IsLoadedFromSave = false;
}

