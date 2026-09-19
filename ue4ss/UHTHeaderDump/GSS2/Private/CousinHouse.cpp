#include "CousinHouse.h"
#include "EBuildingType.h"

ACousinHouse::ACousinHouse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingType = EBuildingType::RV_CousinHouse;
}


