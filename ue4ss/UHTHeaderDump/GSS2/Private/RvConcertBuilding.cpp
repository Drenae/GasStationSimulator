#include "RvConcertBuilding.h"
#include "EBuildingType.h"

ARvConcertBuilding::ARvConcertBuilding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BuildingType = EBuildingType::RV_Concert;
}

void ARvConcertBuilding::StopConcert_Implementation() {
}

void ARvConcertBuilding::StartConcert_Implementation() {
}

void ARvConcertBuilding::LoadConcert_Implementation() {
}


