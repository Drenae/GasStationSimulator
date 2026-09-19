#include "GSSWorldSettings.h"

AGSSWorldSettings::AGSSWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainMapDLC = EDLCName::NONE;
    this->bStartWithCameraDisabled = false;
    this->bStartWithMovementDisabled = false;
    this->PostProcessSettings = NULL;
    this->DayNightCycleElecricityCurve = NULL;
    this->BuildingUpgrades = NULL;
    this->EmployeeTasksInfo = NULL;
    this->PartyBusEventClass = NULL;
    this->DT_Cameras = NULL;
    this->CustomizationCategories = NULL;
    this->DTKeyItemsUnlocks = NULL;
    this->DTDeliveryTrucks = NULL;
    this->MoreInfoUpgrades = NULL;
    this->Buttons = NULL;
    this->PopularityWidgetClass = NULL;
    this->DirtyWidgetClass = NULL;
    this->StationMoreInfoPopularity = NULL;
    this->CampersData = NULL;
    this->StartingQuestLine = NULL;
    this->PostGameChallenges = NULL;
    this->MapSpecificSettings = NULL;
    this->CheatTeleportLocations = NULL;
    this->TrafficSettings = NULL;
    this->PopularityAwardsData = NULL;
    this->VehiclesFuelData = NULL;
    this->CustomerTasks = NULL;
    this->QuestCompletedWidget = NULL;
    this->MaxAcceptableWalkingDistance = 7000.00f;
    this->TutorialData = NULL;
    this->JourneyTime = 4.00f;
    this->HomeRestingTime = 10.00f;
}


