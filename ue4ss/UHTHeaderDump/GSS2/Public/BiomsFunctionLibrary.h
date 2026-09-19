#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EBuildingType.h"
#include "BiomsFunctionLibrary.generated.h"

class AGSSWorldSettings;
class AItem;
class UDA_AITasksInfo;
class UDA_BuildingUpgrades;
class UDA_SpecificBuildingUpgrade;
class UEventDisplay;
class UGameAction;
class UObject;

UCLASS(Blueprintable)
class GSS2_API UBiomsFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBiomsFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDA_SpecificBuildingUpgrade* GetSpecificBuildingUpgradesInfo(const UObject* WorldContextObject, const EBuildingType BuildingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetRelevantUpgradeMaps(const UObject* WorldContextObject, const EBuildingType BuildingType, const int32 CurrentBuildingLevel, TArray<FName>& OUT_MapsToLoad, TArray<FName>& OUT_MapsToUnload, TSoftClassPtr<UEventDisplay>& OUT_EventToDisplay, TArray<TSoftClassPtr<AItem>>& OUT_ItemsToUnlock, TArray<UGameAction*>& UpgradeActions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSSWorldSettings* GetGSSWorldSettings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDA_AITasksInfo* GetCustomerTasks(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UDA_BuildingUpgrades* GetBuildingsUpgradesDataAsset(const UObject* WorldContextObject);
    
};

