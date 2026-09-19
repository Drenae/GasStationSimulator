#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AirportSandstormFinishedDelegate.h"
#include "AirportSandstormStartedDelegate.h"
#include "AirstripLoadedDelegate.h"
#include "EJoeTasksPlaces.h"
#include "JoePlaces.h"
#include "SavedJoePlane.h"
#include "TradingPilots.h"
#include "DLCAirstripManager.generated.h"

class AAirplane_TapingMinigame;
class AAirport;
class AAirstripRandomDialoguesManager;
class AAirstripStorage;
class ABarn;
class ACrashSiteManager;
class ADLCTradingSystemManager;
class AGSSNPAICharacterBase;
class AJoeCharacter;
class APlaneDropPlace;
class ARadioTower;
class ATowy;
class ATowysGarage;
class ATradeCenter;
class AWebSpawner;
class UDataTable;
class UDialogueGraph;
class UGSSEvent;
class UObject;
class UObjectiveBase;
class UQuestBase;

UCLASS(Blueprintable)
class GSS2_API ADLCAirstripManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectivesStartedSinceLoadingGame;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CanStartAirstripTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestBase* MainGameQuestToTriggerQuestline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FinishedAirStripCampain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryStartingQuestLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAirstripCampaingCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAirplane_TapingMinigame* JoeAirplane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AJoeCharacter> JoeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJoePlaces> JoePlaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueGraph* JoeGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> JoeDialoguesPlayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> HighlightActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGSSEvent> JoeCrashingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerAreaLevelName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AAirport> Airport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABarn> Barn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATradeCenter> TradeCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATowysGarage> TowysGarage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AAirstripStorage> AirstripStorage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ARadioTower> RadioTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADLCTradingSystemManager> DLCTradingSystemManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ACrashSiteManager> CrashSiteManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AWebSpawner> SpidersWebSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AAirstripRandomDialoguesManager> RandomDialoguesManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ATowy> Towy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APlaneDropPlace> PlaneDropSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AirstripStuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAirportSandstormHoursTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAirportSandstormHoursTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SandstormDurationMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSandstormActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AAirplane_TapingMinigame> JoeAirplaneSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BackupGameplayTagsToUnlockAfterCompletingAirstripCampain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BackupUITagsToUnlockAfterCompletingAirstripCampain;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirportSandstormStarted OnAirportSandstormStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirportSandstormFinished OnAirportSandstormFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirstripLoaded OnAirstripLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSavedJoePlane SavedJoePlaneDEBUG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToTriggerDialogue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradingPilots FemaleTradingPilots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTradingPilots MaleTradingPilots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeardChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FemaleTradingPilotsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MaleTradingPilotsInfo;
    
public:
    ADLCAirstripManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryLoadMissingLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsSandstormActive(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SaveJoePlaneDEBUG();
    
    UFUNCTION(BlueprintCallable)
    void OnQuestsLoaded();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStarted(UObjectiveBase* ObjectiveStarted);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoaded(bool bGameLoaded);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadJoePlaneDEBUG();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<ATradeCenter> GetTradeCenter();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<ATowysGarage> GetTowysGarage();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<ATowy> GetTowy();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<AAirstripRandomDialoguesManager> GetRandomDialoguesManager();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<ARadioTower> GetRadioTower();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetMaleTradingPilotsInfo();
    
    UFUNCTION(BlueprintCallable)
    FTradingPilots GetMaleTradingPilots();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<AActor> GetJoeTaskTargetActor(EJoeTasksPlaces TaskPlace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AGSSNPAICharacterBase* GetJoeCharacter(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsSandstormActive();
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetFemaleTradingPilotsInfo();
    
    UFUNCTION(BlueprintCallable)
    FTradingPilots GetFemaleTradingPilots();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<ADLCTradingSystemManager> GetDLCTradingSystemManager();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<ACrashSiteManager> GetCrashSiteManager();
    
    UFUNCTION(BlueprintCallable)
    float GetBeardChance();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<ABarn> GetBarn();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAirstripStuff();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<AAirstripStorage> GetAirstripStorage();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<AAirport> GetAirport();
    
    UFUNCTION(BlueprintCallable)
    void AddToAirstripStuff(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddDLCItemsToInventory();
    
};

