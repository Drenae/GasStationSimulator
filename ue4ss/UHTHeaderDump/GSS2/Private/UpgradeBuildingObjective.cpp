#include "UpgradeBuildingObjective.h"

UUpgradeBuildingObjective::UUpgradeBuildingObjective() {
    this->BuildingType = EBuildingType::MAIN_STATION;
    this->DesiredBuildingLevel = 0;
}

void UUpgradeBuildingObjective::OnBuildingUpgraded(EBuildingType _BuildingType, int32 NewBuildingLevel, bool bLoadedFromSave) {
}


