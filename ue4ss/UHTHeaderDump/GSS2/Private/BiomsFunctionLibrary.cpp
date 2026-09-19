#include "BiomsFunctionLibrary.h"

UBiomsFunctionLibrary::UBiomsFunctionLibrary() {
}

UDA_SpecificBuildingUpgrade* UBiomsFunctionLibrary::GetSpecificBuildingUpgradesInfo(const UObject* WorldContextObject, const EBuildingType BuildingType) {
    return NULL;
}

void UBiomsFunctionLibrary::GetRelevantUpgradeMaps(const UObject* WorldContextObject, const EBuildingType BuildingType, const int32 CurrentBuildingLevel, TArray<FName>& OUT_MapsToLoad, TArray<FName>& OUT_MapsToUnload, TSoftClassPtr<UEventDisplay>& OUT_EventToDisplay, TArray<TSoftClassPtr<AItem>>& OUT_ItemsToUnlock, TArray<UGameAction*>& UpgradeActions) {
}

AGSSWorldSettings* UBiomsFunctionLibrary::GetGSSWorldSettings(const UObject* WorldContextObject) {
    return NULL;
}

UDA_AITasksInfo* UBiomsFunctionLibrary::GetCustomerTasks(const UObject* WorldContextObject) {
    return NULL;
}

UDA_BuildingUpgrades* UBiomsFunctionLibrary::GetBuildingsUpgradesDataAsset(const UObject* WorldContextObject) {
    return NULL;
}


