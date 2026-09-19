#pragma once
#include "CoreMinimal.h"
#include "GeneratedLootInfo.h"
#include "SaveGameDLCActorComponent.h"
#include "SavedAirport.h"
#include "SavedAirportInventory.h"
#include "SavedAirportScheduleManager.h"
#include "SavedAirstrip.h"
#include "SavedCrashSiteManager.h"
#include "SavedDLCTradingSystemManager.h"
#include "SavedJoePlane.h"
#include "SavedRandomDialoguesManager.h"
#include "SavedTowy.h"
#include "SavedTradingPilot.h"
#include "SaveGameAirstripActorComponent.generated.h"

class ATradingAirplane;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USaveGameAirstripActorComponent : public USaveGameDLCActorComponent {
    GENERATED_BODY()
public:
    USaveGameAirstripActorComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SaveTradingPilot(ATradingAirplane* Plane, FSavedTradingPilot& SavedTradingPilot);
    
    UFUNCTION(BlueprintCallable)
    void SaveTowy(FSavedTowy& SavedTowy, FSavedJoePlane& SavedJoePlane);
    
    UFUNCTION(BlueprintCallable)
    void SaveSpawnedAirplanes(FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager);
    
    UFUNCTION(BlueprintCallable)
    void SaveSequences(FSavedAirport& SavedAirport);
    
    UFUNCTION(BlueprintCallable)
    void SaveRunways(FSavedAirportScheduleManager& SavedAirportScheduleManager);
    
    UFUNCTION(BlueprintCallable)
    void SaveRandomDialoguesManager(FSavedRandomDialoguesManager& SavedRandomDialogues);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveJoePlane(FSavedJoePlane& SavedJoePlane);
    
private:
    UFUNCTION(BlueprintCallable)
    void SaveDLCTradingSystemManager(FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager);
    
    UFUNCTION(BlueprintCallable)
    void SaveCrashSiteManager(FSavedCrashSiteManager& SavedCrashSite);
    
    UFUNCTION(BlueprintCallable)
    void SaveAirstrip();
    
    UFUNCTION(BlueprintCallable)
    void SaveAirportInventory(FSavedAirportInventory& SavedAirport);
    
    UFUNCTION(BlueprintCallable)
    void SaveAirport(FSavedAirport& SavedAirport);
    
    UFUNCTION(BlueprintCallable)
    void LoadTradingPilot(ATradingAirplane* Plane, const FSavedTradingPilot& SavedTradingPilot);
    
    UFUNCTION(BlueprintCallable)
    void LoadTowy(const FSavedTowy SavedTowy);
    
    UFUNCTION(BlueprintCallable)
    void LoadSequences(const FSavedAirport& SavedAirport);
    
    UFUNCTION(BlueprintCallable)
    void LoadRunways(const FSavedAirport& SavedAirportScheduleManager);
    
    UFUNCTION(BlueprintCallable)
    void LoadRandomDialoguesManager(const FSavedRandomDialoguesManager SavedRandomDialogues);
    
    UFUNCTION(BlueprintCallable)
    void LoadNeededItems(TArray<FGeneratedLootInfo> ItemsToCheck);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadJoePlane(const FSavedJoePlane SavedJoePlane);
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadFixAirplanes();
    
    UFUNCTION(BlueprintCallable)
    void LoadDLCTradingSystemManager(const FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager);
    
    UFUNCTION(BlueprintCallable)
    void LoadCrashSiteManager(const FSavedCrashSiteManager SavedCrashSiteManager);
    
    UFUNCTION(BlueprintCallable)
    void LoadAirstrip();
    
    UFUNCTION(BlueprintCallable)
    void LoadAirportInventory(const FSavedAirstrip& SavedAirstrip, int32 SaveGameVersion);
    
    UFUNCTION(BlueprintCallable)
    void LoadAirport(const FSavedAirport& SavedAirport, const FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager);
    
    UFUNCTION(BlueprintCallable)
    void LoadAirplanes(const FSavedDLCTradingSystemManager& SavedDLCTradingSystemManager);
    
};

