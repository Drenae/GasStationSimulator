#include "PC_FuelOrder.h"

UPC_FuelOrder::UPC_FuelOrder() {
    this->Button100 = NULL;
    this->Button200 = NULL;
    this->Button500 = NULL;
    this->WBP_ShopOrder_Animation = NULL;
    this->ReFuelButton = NULL;
    this->ResetOrderButton = NULL;
    this->PriceChartButton = NULL;
    this->GalonsAmmountTXT = NULL;
    this->ToPayAmmount_TXT = NULL;
    this->FuelAmmountAirport = NULL;
    this->FuelAmmountGasStation = NULL;
    this->TodayPrice_TXT = NULL;
    this->AmountToOrder = 0.00f;
    this->TodayCost = 1.00f;
    this->MagazineType = EFuelMagazine::GAS_STATION;
    this->TargetInventory = NULL;
}

void UPC_FuelOrder::UpdateTexts() {
}

void UPC_FuelOrder::UpdateStationFuel(float InValue) {
}

void UPC_FuelOrder::UpdateAirportFuel(float InValue) {
}

void UPC_FuelOrder::TryOrderFuel() {
}


void UPC_FuelOrder::SetTargetInventory() {
}

void UPC_FuelOrder::SetCurrentFuelType(EFuelMagazine InFuel) {
}

void UPC_FuelOrder::ResetOrder() {
}

void UPC_FuelOrder::OrderFuel(TSoftClassPtr<AActor> Vehicle) {
}

void UPC_FuelOrder::OnFuelAdded(float InValue) {
}

EFuelMagazine UPC_FuelOrder::GetCurentFuelType() {
    return EFuelMagazine::GAS_STATION;
}


