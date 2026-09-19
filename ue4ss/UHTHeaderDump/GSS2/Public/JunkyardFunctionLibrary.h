#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CarPartReward.h"
#include "ECarWreckPlaceableAreaType.h"
#include "EJunkyardCarWreckType.h"
#include "EJunkyardFilters.h"
#include "EJunkyardSortings.h"
#include "StorageCarPart.h"
#include "JunkyardFunctionLibrary.generated.h"

class AActor;
class ACarWreckPlaceableArea;
class AExhibitionSpotSlot;
class AJunkyardCarWreck;
class AJunkyardManager;
class UDA_ContractRegions;
class UJunkyardWrecksDataAsset;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UJunkyardFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJunkyardFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FCarPartReward> SortPartsByVisibility(TArray<FCarPartReward> PartsToSort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ACarWreckPlaceableArea*> SortExhibitionSlots(TArray<ACarWreckPlaceableArea*> SlotsToSort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FStorageCarPart> SortCarParts_PlatformPanel(UObject* WorldContextObject, EJunkyardSortings SortType, TArray<FStorageCarPart> CarParts, EJunkyardCarWreckType WreckType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FStorageCarPart> SortCarParts(EJunkyardSortings SortType, TArray<FStorageCarPart> CarParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEnoughSpaceInExhibition(UObject* WorldContextObject, AExhibitionSpotSlot*& OutFreeSpot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<EJunkyardCarWreckType> GetUnlockedCarWrecks(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetSeanCar(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPlayerEquippedWrench(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AExhibitionSpotSlot* GetNextCarExhibitionSpotSlot(UObject* WorldContextObject, AExhibitionSpotSlot* CurrentExhibitionSpotSlot, bool bNext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UJunkyardWrecksDataAsset* GetJunkyardWrecksDataAsset(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AJunkyardManager* GetDLCJunkyardManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDA_ContractRegions* GetContractRegionsDataAsset(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetCarWreckPlaceableAreasByEnum(UObject* WorldContextObject, ECarWreckPlaceableAreaType AreaType, TArray<ACarWreckPlaceableArea*>& OutCarWreckAreas);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AExhibitionSpotSlot* FindPlacedCarExhibitionSpot(UObject* WorldContextObject, AJunkyardCarWreck* PlacedCar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FStorageCarPart> FilterCarParts(TArray<EJunkyardFilters> FilterType, TArray<FStorageCarPart> CarParts);
    
};

