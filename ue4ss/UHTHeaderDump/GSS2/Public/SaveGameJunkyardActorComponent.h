#pragma once
#include "CoreMinimal.h"
#include "CarSpawnedFromSaveDelegate.h"
#include "ContractSlot.h"
#include "SaveGameDLCActorComponent.h"
#include "SavedCarWreck.h"
#include "SavedContractSlot.h"
#include "SavedSaleSlot.h"
#include "SavedState.h"
#include "UnlockedState.h"
#include "SaveGameJunkyardActorComponent.generated.h"

class AJunkyardCarWreck;
class UContractBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API USaveGameJunkyardActorComponent : public USaveGameDLCActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCarSpawnedFromSave OnCarSpawnedFromSave;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AJunkyardCarWreck*, int32> PartsLoadedCount;
    
public:
    USaveGameJunkyardActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnCarWreckFromSavedData(FSavedCarWreck SavedData);
    
private:
    UFUNCTION(BlueprintCallable)
    void SaveWrenchComboRecord();
    
    UFUNCTION(BlueprintCallable)
    void SaveWreckAreas();
    
    UFUNCTION(BlueprintCallable)
    void SaveSean();
    
    UFUNCTION(BlueprintCallable)
    void SaveSaleSlots(TArray<FSavedSaleSlot>& SavedSaleSlots);
    
    UFUNCTION(BlueprintCallable)
    void SaveJunkyardStorage();
    
    UFUNCTION(BlueprintCallable)
    void SaveJunkyardManager();
    
    UFUNCTION(BlueprintCallable)
    void SaveFameManager();
    
    UFUNCTION(BlueprintCallable)
    void SaveCrane();
    
    UFUNCTION(BlueprintCallable)
    void SaveContractsStates(TArray<FSavedState>& SavedStatesData, const TArray<FUnlockedState>& UnlockedStates);
    
    UFUNCTION(BlueprintCallable)
    void SaveContractsManager();
    
    UFUNCTION(BlueprintCallable)
    void SaveContractSlots(TArray<FSavedContractSlot>& SavedContractSlots, const TArray<FContractSlot>& ContractSlots);
    
    UFUNCTION(BlueprintCallable)
    void SaveContracts(TArray<UContractBase*> Contracts, FSavedState& SavedState);
    
    UFUNCTION(BlueprintCallable)
    void SaveChemicalBaths();
    
    UFUNCTION(BlueprintCallable)
    void SaveCarWrecks();
    
    UFUNCTION(BlueprintCallable)
    void SaveCarParts(AJunkyardCarWreck* CarWreck, FSavedCarWreck& SavedCarWreckData);
    
    UFUNCTION(BlueprintCallable)
    void SaveBuildings();
    
    UFUNCTION(BlueprintCallable)
    void SaveAuctionsManager();
    
    UFUNCTION(BlueprintCallable)
    void OnCarWreckPartLoaded(AJunkyardCarWreck* LoadedWreck, FSavedCarWreck WreckData);
    
    UFUNCTION(BlueprintCallable)
    void OnCarWreckFullyLoaded(AJunkyardCarWreck* LoadedWreck, FSavedCarWreck WreckData);
    
    UFUNCTION(BlueprintCallable)
    void LoadWrenchComboRecord();
    
    UFUNCTION(BlueprintCallable)
    void LoadWreckAreas();
    
    UFUNCTION(BlueprintCallable)
    void LoadSean();
    
    UFUNCTION(BlueprintCallable)
    void LoadSaleSlots(const TArray<FSavedSaleSlot>& SavedSaleSlots);
    
    UFUNCTION(BlueprintCallable)
    void LoadJunkyardStorage();
    
    UFUNCTION(BlueprintCallable)
    void LoadJunkyardManager();
    
    UFUNCTION(BlueprintCallable)
    void LoadFameManager();
    
    UFUNCTION(BlueprintCallable)
    void LoadCrane();
    
    UFUNCTION(BlueprintCallable)
    void LoadContractsStates(TArray<FUnlockedState>& UnlockedStates, const TArray<FSavedState>& SavedStatesData);
    
    UFUNCTION(BlueprintCallable)
    void LoadContractsManager();
    
    UFUNCTION(BlueprintCallable)
    void LoadContractSlots(TArray<FContractSlot>& ContractSlots, const TArray<FSavedContractSlot>& SavedContractSlots);
    
    UFUNCTION(BlueprintCallable)
    void LoadContracts(const FSavedState& SavedState);
    
    UFUNCTION(BlueprintCallable)
    void LoadChemicalBaths();
    
    UFUNCTION(BlueprintCallable)
    void LoadCarWrecks();
    
    UFUNCTION(BlueprintCallable)
    void LoadCarParts(AJunkyardCarWreck* CarWreck, const FSavedCarWreck& SavedCarWreckData);
    
    UFUNCTION(BlueprintCallable)
    void LoadBuildings();
    
    UFUNCTION(BlueprintCallable)
    void LoadAuctionsManager();
    
public:
    UFUNCTION(BlueprintCallable)
    FSavedCarWreck GetSavedCarWreck(AJunkyardCarWreck* CarWreck);
    
};

