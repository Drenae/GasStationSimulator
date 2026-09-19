#include "DecorationCamera.h"

ADecorationCamera::ADecorationCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsSpecialSlot = false;
}

void ADecorationCamera::UnloadEventDecorationLevel(FName LevelName, int32 UUID) {
}

void ADecorationCamera::UnloadDecorationLevel(FName LevelName, int32 UUID) {
}

void ADecorationCamera::UnloadCollidingLevels() {
}

void ADecorationCamera::ShowPreviouslyHiddenActors() {
}

void ADecorationCamera::ShowAllActorsOnSameSpotLandmarks(bool bShow) {
}

void ADecorationCamera::ShowActorsOnLevelVisible(bool bShow, ADecorationCamera* Camera) {
}

void ADecorationCamera::LoadEventDecorationLevel(FName LevelName, int32 UUID) {
}


bool ADecorationCamera::IsDecorationShown(FName LevelName) {
    return false;
}

bool ADecorationCamera::IsDecorationHidden(FName LevelName) {
    return false;
}

bool ADecorationCamera::IsDecorationAcquired(FName LevelName) {
    return false;
}

FDecorationMap ADecorationCamera::GetNextDecorationMapToUnlock(bool& bIsMaxUpgraded, int32& MinGasStationLvLToUnblock, EDLCName& RequiredDLCName, FName& MapDisplayName, FGameplayTag& RequiredTag) {
    return FDecorationMap{};
}

TArray<FDecorationMap> ADecorationCamera::GetAcquiredDecorations() {
    return TArray<FDecorationMap>();
}

void ADecorationCamera::CallDispatcherOnUnload() {
}


