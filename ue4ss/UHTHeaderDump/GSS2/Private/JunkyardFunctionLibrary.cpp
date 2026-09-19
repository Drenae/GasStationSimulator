#include "JunkyardFunctionLibrary.h"

UJunkyardFunctionLibrary::UJunkyardFunctionLibrary() {
}

TArray<FCarPartReward> UJunkyardFunctionLibrary::SortPartsByVisibility(TArray<FCarPartReward> PartsToSort) {
    return TArray<FCarPartReward>();
}

TArray<ACarWreckPlaceableArea*> UJunkyardFunctionLibrary::SortExhibitionSlots(TArray<ACarWreckPlaceableArea*> SlotsToSort) {
    return TArray<ACarWreckPlaceableArea*>();
}

TArray<FStorageCarPart> UJunkyardFunctionLibrary::SortCarParts_PlatformPanel(UObject* WorldContextObject, EJunkyardSortings SortType, TArray<FStorageCarPart> CarParts, EJunkyardCarWreckType WreckType) {
    return TArray<FStorageCarPart>();
}

TArray<FStorageCarPart> UJunkyardFunctionLibrary::SortCarParts(EJunkyardSortings SortType, TArray<FStorageCarPart> CarParts) {
    return TArray<FStorageCarPart>();
}

bool UJunkyardFunctionLibrary::IsEnoughSpaceInExhibition(UObject* WorldContextObject, AExhibitionSpotSlot*& OutFreeSpot) {
    return false;
}

TArray<EJunkyardCarWreckType> UJunkyardFunctionLibrary::GetUnlockedCarWrecks(UObject* WorldContextObject) {
    return TArray<EJunkyardCarWreckType>();
}

AActor* UJunkyardFunctionLibrary::GetSeanCar(UObject* WorldContextObject) {
    return NULL;
}

bool UJunkyardFunctionLibrary::GetPlayerEquippedWrench(UObject* WorldContextObject) {
    return false;
}

AExhibitionSpotSlot* UJunkyardFunctionLibrary::GetNextCarExhibitionSpotSlot(UObject* WorldContextObject, AExhibitionSpotSlot* CurrentExhibitionSpotSlot, bool bNext) {
    return NULL;
}

UJunkyardWrecksDataAsset* UJunkyardFunctionLibrary::GetJunkyardWrecksDataAsset(UObject* WorldContextObject) {
    return NULL;
}

AJunkyardManager* UJunkyardFunctionLibrary::GetDLCJunkyardManager(UObject* WorldContextObject) {
    return NULL;
}

UDA_ContractRegions* UJunkyardFunctionLibrary::GetContractRegionsDataAsset(UObject* WorldContextObject) {
    return NULL;
}

void UJunkyardFunctionLibrary::GetCarWreckPlaceableAreasByEnum(UObject* WorldContextObject, ECarWreckPlaceableAreaType AreaType, TArray<ACarWreckPlaceableArea*>& OutCarWreckAreas) {
}

AExhibitionSpotSlot* UJunkyardFunctionLibrary::FindPlacedCarExhibitionSpot(UObject* WorldContextObject, AJunkyardCarWreck* PlacedCar) {
    return NULL;
}

TArray<FStorageCarPart> UJunkyardFunctionLibrary::FilterCarParts(TArray<EJunkyardFilters> FilterType, TArray<FStorageCarPart> CarParts) {
    return TArray<FStorageCarPart>();
}


