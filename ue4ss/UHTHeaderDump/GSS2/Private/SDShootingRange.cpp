#include "SDShootingRange.h"
#include "EBuildingType.h"

ASDShootingRange::ASDShootingRange(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingType = EBuildingType::SHOOTING_RANGE;
}


