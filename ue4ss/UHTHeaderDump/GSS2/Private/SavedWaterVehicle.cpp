#include "SavedWaterVehicle.h"

FSavedWaterVehicle::FSavedWaterVehicle() {
    this->ClassSaveIndex = 0;
    this->DeliveryCategory = ECategoryFilter::DECORATIONS;
    this->CurrentTargetPointIndex = 0;
    this->IsComingIn = false;
}

