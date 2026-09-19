#pragma once
#include "CoreMinimal.h"
#include "SaveGameDLCActorComponent.h"
#include "SavedRVCustomerData.h"
#include "SaveGameRVCampActorComponent.generated.h"

class URVCustomerData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USaveGameRVCampActorComponent : public USaveGameDLCActorComponent {
    GENERATED_BODY()
public:
    USaveGameRVCampActorComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SaveRVSpawner();
    
    UFUNCTION(BlueprintCallable)
    void SaveRVManagers();
    
    UFUNCTION(BlueprintCallable)
    void SaveRVEmployees();
    
    UFUNCTION(BlueprintCallable)
    void SaveRVCampSpots();
    
    UFUNCTION(BlueprintCallable)
    void SaveRVCampers();
    
    UFUNCTION(BlueprintCallable)
    void SaveRVBuildingsToUpgrade();
    
    UFUNCTION(BlueprintCallable)
    void SaveRuby();
    
    UFUNCTION(BlueprintCallable)
    void LoadRVSpawner();
    
    UFUNCTION(BlueprintCallable)
    void LoadRVManagers();
    
    UFUNCTION(BlueprintCallable)
    void LoadRVEmployees();
    
    UFUNCTION(BlueprintCallable)
    void LoadRVCampSpots();
    
    UFUNCTION(BlueprintCallable)
    void LoadRVCampers();
    
    UFUNCTION(BlueprintCallable)
    void LoadRVBuildingsToUpgrade();
    
    UFUNCTION(BlueprintCallable)
    void LoadRuby();
    
    UFUNCTION(BlueprintCallable)
    FSavedRVCustomerData GetSavedRVCustomerData(URVCustomerData* CustomerData);
    
    UFUNCTION(BlueprintCallable)
    URVCustomerData* GetLoadedRVCustomerData(FSavedRVCustomerData CustomerDataStruct);
    
};

