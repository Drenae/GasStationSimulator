#include "SpecificShoppingTypeTask.h"

FSpecificShoppingTypeTask::FSpecificShoppingTypeTask() {
    this->bDLCRequired = false;
    this->DLCRequiredName = EDLCName::NONE;
    this->InteractableTaskType = EInteractableTaskType::BUY_ICE_CREAM_STAND;
    this->RequiredBuilding = EBuildingType::MAIN_STATION;
    this->PercentChance = 0.00f;
}

