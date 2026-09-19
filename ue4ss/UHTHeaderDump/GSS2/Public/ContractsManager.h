#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CarWreckPartsBasket.h"
#include "CarWrecksBasket.h"
#include "ContractSlot.h"
#include "CustomizationContractChancesBasket.h"
#include "EBuildingType.h"
#include "EContractType.h"
#include "EDLCName.h"
#include "EJunkyardCarPartType.h"
#include "EJunkyardPartRarity.h"
#include "EProgressState.h"
#include "EState.h"
#include "HireableDriver.h"
#include "OnContractsRefreshedDelegate.h"
#include "OnDeliveriesRefreshedDelegate.h"
#include "OnDriversRefreshDelegate.h"
#include "QuestContract.h"
#include "QuestDelivery.h"
#include "TimeStruct.h"
#include "UnlockableGameplayStuffState.h"
#include "UnlockedState.h"
#include "ContractsManager.generated.h"

class AGSSWheeledVehicle;
class AJunkyardCarWreck;
class UBasicContract;
class UContractBase;
class UDA_ContractRegions;
class UDA_HireableDriver;
class USpecialContract;
class UWrecksCollectionContract;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSS2_API UContractsManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeliveriesRefreshed OnDeliveriesRefreshed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContractsRefreshed OnContractsRefreshed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDriversRefresh OnDriversRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_ContractRegions* ContractRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDA_HireableDriver*> Drivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> AdditionalDriverSlotsPerOfficeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct DeliveriesDefaultRefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct ContractsDefaultRefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct DriversDefaultRefreshTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestDelivery> QuestDeliveries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestContract> QuestContracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGSSWheeledVehicle> WreckTowTruck_SoftPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EContractType, TSoftClassPtr<UContractBase>> ContractTypeSoftClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USpecialContract*> ContractsInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWrecksCollectionContract*> DeliveriesWithActiveTowTruckTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CheatSpawnedTowTrucks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUnlockedState> UnlockedStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHireableDriver> UnlockedDrivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWrecksBasket> CarWrecksBasket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfCarWrecksType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWreckPartsBasket> DedicatedCarParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarWreckPartsBasket> GarageCarParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EJunkyardCarPartType, int32> NumberOfModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct NextDeliveriesRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct NextContactsRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct NextDriversRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWrecksCollectionContract*> FinishedDeliveries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContractSlot> ContractSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationContractChancesBasket> ContractAppearance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeliveriesUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContractsUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInBoardMap;
    
public:
    UContractsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockStates(const int32 OfficeLevel);
    
    UFUNCTION(BlueprintCallable)
    void UnlockState(EState InState);
    
    UFUNCTION(BlueprintCallable)
    void UnlockDrivers(int32 OfficeLevel);
    
    UFUNCTION(BlueprintCallable)
    bool TryToCreateContract(const FContractSlot& ContractSlot, const int32& ContractSlotIndex, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    bool StartDelivery(UBasicContract* Contract, int32 DriverIndex);
    
    UFUNCTION(BlueprintCallable)
    bool StartContract(UContractBase* Contract);
    
    UFUNCTION(BlueprintCallable)
    void SpawnWreckTowTruck();
    
    UFUNCTION(BlueprintCallable)
    void SpawnQuestDeliveries();
    
    UFUNCTION(BlueprintCallable)
    void SpawnQuestContracts();
    
    UFUNCTION(BlueprintCallable)
    void SpawnDeliveryWreckCarParts(UWrecksCollectionContract* Delivery, AJunkyardCarWreck* CarWreck);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockedStates(TArray<FUnlockedState> InUnlockedStates);
    
    UFUNCTION(BlueprintCallable)
    void SetUnlockedDrivers(TArray<FHireableDriver> InUnlockedDrivers);
    
    UFUNCTION(BlueprintCallable)
    void SetStateAvailableContracts(TArray<UContractBase*> Contracts, EState State);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfModels(TMap<EJunkyardCarPartType, int32> InNumberOfModels);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberOfCarWrecksType(int32 InNumberOfCarWrecksType);
    
    UFUNCTION(BlueprintCallable)
    void SetNextDriversRefresh(FTimeStruct InNextRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetNextDeliveriesRefresh(FTimeStruct InNextRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetNextContractsRefresh(FTimeStruct InNextRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetGarageCarParts(TArray<FCarWreckPartsBasket> InGarageCarParts);
    
    UFUNCTION(BlueprintCallable)
    void SetFinishedDeliveries(TArray<UWrecksCollectionContract*> InFinishedDeliveries);
    
    UFUNCTION(BlueprintCallable)
    void SetDedicatedCarParts(TArray<FCarWreckPartsBasket> InDedicatedCarParts);
    
    UFUNCTION(BlueprintCallable)
    void SetContractSlots(TArray<FContractSlot> InContracts);
    
    UFUNCTION(BlueprintCallable)
    void SetContractAppearanceChances(TArray<FCustomizationContractChancesBasket> InContractAppearance);
    
    UFUNCTION(BlueprintCallable)
    void SetCarWrecksBasket(TArray<FCarWrecksBasket> InCarWrecksBasket);
    
    UFUNCTION(BlueprintCallable)
    void RefreshDrivers(int32 OfficeLevel);
    
    UFUNCTION(BlueprintCallable)
    void RefreshDeliveries();
    
    UFUNCTION(BlueprintCallable)
    void RefreshContracts();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RandomDeliveryTier(const TMap<EJunkyardPartRarity, float>& TierChances, UBasicContract* Delivery);
    
    UFUNCTION(BlueprintCallable)
    void RandomDeliveryRewards(UBasicContract* DeliveryContract);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUfoUsed();
    
    UFUNCTION(BlueprintCallable)
    void OnOfficeBuildingUpgraded(EBuildingType BuildingType, int32 NewBuildingLevel, bool bLoadedFromSave);
    
    UFUNCTION(BlueprintCallable)
    void OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState GameplayStuffUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void OnNewFameLevelUnlocked(const int32 NewLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnGameTimeUpdated(const FTimeStruct UpdatedTime);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishGameLoaded(bool bGameLoaded);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDLCActivationStateChanged(EDLCName DLCName, bool bActivated);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnContractTimeOver(UContractBase* TimeOverContract);
    
    UFUNCTION(BlueprintCallable)
    void OnBoardMapInteracted(bool bEntered);
    
    UFUNCTION(BlueprintCallable)
    bool IsStateUnlocked(EState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDriverAvailable(const FHireableDriver& Driver);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetWreckTowtruckTransformOffset(UWrecksCollectionContract* Delivery, AJunkyardCarWreck* CarWreck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUnlockedState> GetUnlockedStates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHireableDriver> GetUnlockedDrivers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EJunkyardCarPartType, int32> GetNumberOfModels();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfCarWrecksType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetNextDriversRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetNextDeliveriesRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTimeStruct GetNextContractsRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCarWreckPartsBasket> GetGarageCarParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UWrecksCollectionContract*> GetFinishedDeliveries();
    
    UFUNCTION(BlueprintCallable)
    bool GetDriverRequiresContractPoints(FHireableDriver DriverToCheck);
    
    UFUNCTION(BlueprintCallable)
    UWrecksCollectionContract* GetDeliveryToSpawnWreck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCarWreckPartsBasket> GetDedicatedCarParts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USpecialContract*> GetContractsWithProgress(EProgressState ProgressState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FContractSlot> GetContractSlots();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCustomizationContractChancesBasket> GetContractAppearanceChances();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCarWrecksBasket> GetCarWrecksBasket();
    
    UFUNCTION(BlueprintCallable)
    void GenerateAndPrintPartsBasket(EJunkyardPartRarity DeliveryTier, const bool bNonCustomizable);
    
    UFUNCTION(BlueprintCallable)
    void DestroyContract(UContractBase* ContractToDestroy);
    
    UFUNCTION(BlueprintCallable)
    void CreateContract(const int32& ContractSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void CheckForRewardsChanges();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreDeliveriesAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreContractsAvailable();
    
};

