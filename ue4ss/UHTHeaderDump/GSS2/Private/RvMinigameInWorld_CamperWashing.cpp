#include "RvMinigameInWorld_CamperWashing.h"

ARvMinigameInWorld_CamperWashing::ARvMinigameInWorld_CamperWashing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WashableCarMeshMID = NULL;
    this->CamperWashingSettings = NULL;
    this->CurrentWaterFlowDuration = 0.00f;
    this->CurrentEfficiency = ECamperWashingEfficiency::NORMAL;
    this->bPistolIsFiring = false;
}

void ARvMinigameInWorld_CamperWashing::UseWater(float Amount) {
}

void ARvMinigameInWorld_CamperWashing::OnShowDirtEnabled(bool bEnabled) {
}

void ARvMinigameInWorld_CamperWashing::OnReachedWashTarget(ETaskResult TaskResult) {
}

void ARvMinigameInWorld_CamperWashing::OnGuestServiceCompleted(FGameplayTag Tag, bool bAutocompleted) {
}

void ARvMinigameInWorld_CamperWashing::OnFiringStateChanged(bool bIsFiring) {
}

void ARvMinigameInWorld_CamperWashing::OnCleaningSolutionActivated() {
}

void ARvMinigameInWorld_CamperWashing::OnCarWashPistolDropped() {
}

void ARvMinigameInWorld_CamperWashing::OnCamperSpawned(URVCamperComponent* Camper) {
}

void ARvMinigameInWorld_CamperWashing::OnCamperLoaded(URVCamperComponent* Camper, bool IsParked) {
}

void ARvMinigameInWorld_CamperWashing::OnCamperLeft(URVCamperComponent* Camper) {
}

AWashableCamperMesh* ARvMinigameInWorld_CamperWashing::GetWashableCamperMesh() const {
    return NULL;
}

ARVCampSpot* ARvMinigameInWorld_CamperWashing::GetCampSpot() const {
    return NULL;
}

AGSSWheeledVehicle* ARvMinigameInWorld_CamperWashing::GetCamperVehicle() const {
    return NULL;
}

URVCamperComponent* ARvMinigameInWorld_CamperWashing::GetCamperComponent() const {
    return NULL;
}


