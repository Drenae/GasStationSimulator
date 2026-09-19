#include "DA_FuelData.h"

UDA_FuelData::UDA_FuelData() {
}

float UDA_FuelData::GetMinFuelPrice(EFuelMagazine FuelType) {
    return 0.0f;
}

float UDA_FuelData::GetMaxFuelPrice(EFuelMagazine FuelType) {
    return 0.0f;
}

float UDA_FuelData::GetDefaultFuelPrice(EFuelMagazine FuelType) {
    return 0.0f;
}

UCurveFloat* UDA_FuelData::GetBuyFuelPriceCurve(EFuelMagazine FuelType) {
    return NULL;
}


