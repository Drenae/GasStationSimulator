#include "RVCampFunctionLibrary.h"

URVCampFunctionLibrary::URVCampFunctionLibrary() {
}

ARVServiceUpgrader* URVCampFunctionLibrary::GetServiceUpgrader(const UObject* WorldContextObject) {
    return NULL;
}

URVCamperComponent* URVCampFunctionLibrary::GetRVCamperComponent(AActor* Camper) {
    return NULL;
}

ARVCampManager* URVCampFunctionLibrary::GetDLCRVCampManager(const UObject* WorldContextObject) {
    return NULL;
}

ARVBuildingLocalizer* URVCampFunctionLibrary::GetBuildingLocalizer(UObject* WorldContextObject) {
    return NULL;
}

bool URVCampFunctionLibrary::GetActiveMinigameTag(UObject* WorldContextObject, FGameplayTag& OutTag) {
    return false;
}

URvMinigameBaseSettings* URVCampFunctionLibrary::FindSettings(UObject* WorldContextObject, const FGameplayTag& GuestServiceTag) {
    return NULL;
}


