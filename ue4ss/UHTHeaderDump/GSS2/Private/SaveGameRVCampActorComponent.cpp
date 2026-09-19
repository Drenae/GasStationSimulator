#include "SaveGameRVCampActorComponent.h"

USaveGameRVCampActorComponent::USaveGameRVCampActorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USaveGameRVCampActorComponent::SaveRVSpawner() {
}

void USaveGameRVCampActorComponent::SaveRVManagers() {
}

void USaveGameRVCampActorComponent::SaveRVEmployees() {
}

void USaveGameRVCampActorComponent::SaveRVCampSpots() {
}

void USaveGameRVCampActorComponent::SaveRVCampers() {
}

void USaveGameRVCampActorComponent::SaveRVBuildingsToUpgrade() {
}

void USaveGameRVCampActorComponent::SaveRuby() {
}

void USaveGameRVCampActorComponent::LoadRVSpawner() {
}

void USaveGameRVCampActorComponent::LoadRVManagers() {
}

void USaveGameRVCampActorComponent::LoadRVEmployees() {
}

void USaveGameRVCampActorComponent::LoadRVCampSpots() {
}

void USaveGameRVCampActorComponent::LoadRVCampers() {
}

void USaveGameRVCampActorComponent::LoadRVBuildingsToUpgrade() {
}

void USaveGameRVCampActorComponent::LoadRuby() {
}

FSavedRVCustomerData USaveGameRVCampActorComponent::GetSavedRVCustomerData(URVCustomerData* CustomerData) {
    return FSavedRVCustomerData{};
}

URVCustomerData* USaveGameRVCampActorComponent::GetLoadedRVCustomerData(FSavedRVCustomerData CustomerDataStruct) {
    return NULL;
}


