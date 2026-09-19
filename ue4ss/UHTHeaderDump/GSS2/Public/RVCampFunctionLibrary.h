#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "RVCampFunctionLibrary.generated.h"

class AActor;
class ARVBuildingLocalizer;
class ARVCampManager;
class ARVServiceUpgrader;
class UObject;
class URVCamperComponent;
class URvMinigameBaseSettings;

UCLASS(Blueprintable)
class GSS2_API URVCampFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URVCampFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARVServiceUpgrader* GetServiceUpgrader(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static URVCamperComponent* GetRVCamperComponent(AActor* Camper);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARVCampManager* GetDLCRVCampManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARVBuildingLocalizer* GetBuildingLocalizer(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetActiveMinigameTag(UObject* WorldContextObject, FGameplayTag& OutTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static URvMinigameBaseSettings* FindSettings(UObject* WorldContextObject, const FGameplayTag& GuestServiceTag);
    
};

