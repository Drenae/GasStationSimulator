#include "VehicleFuelData.h"

FVehicleFuelData::FVehicleFuelData() {
    this->FuelType = EFuelMagazine::GAS_STATION;
    this->FuelPriceCurve = NULL;
    this->DefaultFuelSellPrice = 0.00f;
    this->MinFuelSellPrice = 0.00f;
    this->MaxFuelSellPrice = 0.00f;
}

