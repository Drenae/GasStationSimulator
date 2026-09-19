#include "UpgradeStationCamera.h"

AUpgradeStationCamera::AUpgradeStationCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void AUpgradeStationCamera::TryUnlockPathPoints(FName MapName) {
}

void AUpgradeStationCamera::GetUnlockMapInfo(FName MapName, bool& bIsExtraFeature, bool& bIsUnlocked, int32& MinGasStationLvLToUnblock) {
}

FUpgradingMap AUpgradeStationCamera::GetNextUpgradedMapToUnlock(bool& bIsMaxUpgraded, int32& MinGasStationLvLToUnblock, EDLCName& RequiredDLCName, FName UpgradeActorTag) {
    return FUpgradingMap{};
}

FUpgradingMap AUpgradeStationCamera::GetMapToUpgrade(FName MapName) {
    return FUpgradingMap{};
}

TArray<FUpgradingMap> AUpgradeStationCamera::GetMapsToUnblock() {
    return TArray<FUpgradingMap>();
}

void AUpgradeStationCamera::DestroyRuin(AActor* DestroyedActor) {
}


