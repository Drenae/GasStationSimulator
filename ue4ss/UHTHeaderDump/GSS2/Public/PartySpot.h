#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "AllNPCsStoppedDancingDelegate.h"
#include "EHumanType.h"
#include "InteractableBuilding.h"
#include "PartyFinishedDelegate.h"
#include "PartyNPCGotToDanceFloorDelegate.h"
#include "PartyNPCStoppedDancingDelegate.h"
#include "PartySpotClosedDelegate.h"
#include "PartySpotEnteredDelegate.h"
#include "PartySpotLeftDelegate.h"
#include "PartySpotLoadedDelegate.h"
#include "StartPartyDelegate.h"
#include "TimeStruct.h"
#include "PartySpot.generated.h"

class AAICharacterBase;
class AActor;
class ADanceFloor;
class ANoCarAISpawnPoint;
class APartySpotClock;
class APartySpotTable;
class UDA_PartySpotProducts;
class UGSSEvent;

UCLASS(Blueprintable)
class GSS2_API APartySpot : public AInteractableBuilding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySpotLoaded OnPartySpotLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartParty OnStartParty;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyFinished OnPartyFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyNPCGotToDanceFloor OnPartyNPCGotToDanceFloor;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyNPCStoppedDancing OnPartyNPCStoppedDancing;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllNPCsStoppedDancing OnAllNPCsStoppedDancing;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySpotEntered OnPartySpotEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySpotLeft OnPartySpotLeft;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartySpotClosed OnPartySpotClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APartySpotClock* PartySpotClock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APartySpotTable*> PartyTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADanceFloor* DanceFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSEvent> EventToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> PartyUfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform PartyUfoTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedPartyUfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedPartyBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AvailablePartyProductTypesIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfDancingNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfNotDancingNPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartyNPCAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct DancingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct DancingTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstTimeEntering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bisPartySpotOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MusicLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ANoCarAISpawnPoint> BushSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> NPCHome;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomersNumberToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnedCustomersNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle SpawnHandler;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDA_PartySpotProducts* PartySpotProducts;
    
    APartySpot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAvailablePartyProductType(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void StartSpawningPartyNPC();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPartyNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowConfirm(APartySpotTable* PartySpotTable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNPC(const AAICharacterBase* Customer);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPartySpotTableUnlocked();
    
    UFUNCTION(BlueprintCallable)
    void SetAllPartySpotTableBlocked();
    
    UFUNCTION(BlueprintCallable)
    void ResetPartyProductAvailibity();
    
    UFUNCTION(BlueprintCallable)
    void ResetNPCSpawningRelVars();
    
    UFUNCTION(BlueprintCallable)
    void OnSpecialNPCSpawn(const AAICharacterBase* Customer, const EHumanType HumanType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNPCDestroyed(AActor* Customer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPartyPopularityAmount(int32& NumberOfFullBaskets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyNPCAmount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfFullBaskets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FindOtherPartyCustomers();
    
    UFUNCTION(BlueprintCallable)
    void EmptyAllPartySpotTables();
    
};

