#include "SDWarehouseGangActivity.h"
#include "ESDGangActivityType.h"

USDWarehouseGangActivity::USDWarehouseGangActivity() {
    this->ActivityType = ESDGangActivityType::Warehouse;
    this->OrderPickupDelayMin = 10;
    this->OrderPickupDelayMax = 120;
    this->BoxNum = 5;
    this->PickUpVanClass = NULL;
}

void USDWarehouseGangActivity::StartSpawnPickUpVanTimer() {
}

void USDWarehouseGangActivity::OnPickUpVanSpawned() {
}

void USDWarehouseGangActivity::OnPickUpVanLoaded() {
}

void USDWarehouseGangActivity::OnDeliveryVanUnloaded() {
}

void USDWarehouseGangActivity::OnDeliveryVanSpawned() {
}

void USDWarehouseGangActivity::ClearSpawnPickUpVanTimer() {
}


