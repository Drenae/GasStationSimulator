#include "DA_SpecificBuildingUpgrade.h"

UDA_SpecificBuildingUpgrade::UDA_SpecificBuildingUpgrade() {
    this->BuildingType = EBuildingType::MAIN_STATION;
    this->bRefreshPathPoints = false;
    this->bStartWithTrashVolumeTickOn = false;
    this->AutomaticCarWashLevelTrigger = 0;
}


