#include "DA_SpecificAITask.h"

UDA_SpecificAITask::UDA_SpecificAITask() {
    this->CustomerType = ECustomerType::FUEL;
    this->bCanNeedParkingSpot = false;
    this->bNeedsVehicle = false;
    this->VehicleOptymalizeType = EVehicleOptymalizeType::Default;
    this->bDLCRequired = false;
    this->DLCRequiredName = EDLCName::NONE;
}


