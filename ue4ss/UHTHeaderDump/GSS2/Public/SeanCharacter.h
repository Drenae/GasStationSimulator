#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EBuildingType.h"
#include "ECarWreckMarking.h"
#include "ECarWreckPlaceableAreaType.h"
#include "ENPCConversationType.h"
#include "ESeanTaskBark.h"
#include "GSSNPAICharacterBase.h"
#include "Interaction.h"
#include "OnSeanResetDelegate.h"
#include "OnWreckProcessingEndedDelegate.h"
#include "OnWreckProcessingStartedDelegate.h"
#include "SaleSlot.h"
#include "SeanTaskRow.h"
#include "TalkWithPlayerDelegate.h"
#include "UnlockableGameplayStuffState.h"
#include "SeanCharacter.generated.h"

class AActor;
class ACarWreckPlaceableArea;
class AJunkyardCarWreck;
class AJunkyardManager;
class APawn;
class UActionManagerSubsystem;
class UNPAITaskBase;
class UPrimitiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class GSS2_API ASeanCharacter : public AGSSNPAICharacterBase, public IInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkWithPlayer OnTalkWithPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeanReset OnSeanReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckProcessingStarted OnWreckProcessingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWreckProcessingEnded OnWreckProcessingEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBarkDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInsideCrane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExitingCrane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDancingInWorkshop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWorkingOnWreck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWreckPickedUpWithCrane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWreckDroppedWithCrane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJustFinishedDefaultSubtask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarWreckPlaceableArea* CurrentWreckArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACarWreckPlaceableArea* CurrentMoveTargetArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardCarWreck* CurrentWreck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSeanTaskRow CurrentTaskStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WreckMarkingEnabledTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckForWorkInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsInWorkshopYLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> EnterCraneTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> ExitCraneTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> DanceAtWorkshopTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ResetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENPCConversationType> PendingSpecialBarks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESeanTaskBark CurrentTaskBark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastBarkSystemTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasLastBarkSystemTimeRecorded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerLeftJunkyard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSinceLastBark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentBarkInterval;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinBarkInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBarkInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinGreetingBarkInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxGreetingBarkInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarkDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CraneBarkDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLeftJunkyardDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GreetingTimeThresholdSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LongGreetingTimeThresholdHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarkCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCarSalePriceToBark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EBuildingType> BuildingTypesForBark;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle BarkCheckTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AJunkyardManager* JunkyardManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActionManagerSubsystem* ActionManagerSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckForWorkTimer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CanBeTalkedToTag;
    
    ASeanCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryTeleportToDanceAtPlatform(ACarWreckPlaceableArea* TargetArea);
    
    UFUNCTION(BlueprintCallable)
    bool TryProcessNextWreck(bool& CurrentTasksCancelled);
    
    UFUNCTION(BlueprintCallable)
    void TalkToSean();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SimpleInteraction(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void ResetSean(bool QueueBark);
    
    UFUNCTION(BlueprintCallable)
    void QueueSpecialBark(ENPCConversationType BarkType);
    
    UFUNCTION(BlueprintCallable)
    void ProcessSpecificWreck(ECarWreckMarking TaskType, ACarWreckPlaceableArea* WreckArea, bool ReplaceCurrentTasks);
    
    UFUNCTION(BlueprintCallable)
    void OnWreckProcessingStart();
    
    UFUNCTION(BlueprintCallable)
    void OnWreckProcessingEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWreckPlayerProcessingStarted(AJunkyardCarWreck* Wreck);
    
    UFUNCTION(BlueprintCallable)
    void OnWreckPlacedOnArea(ACarWreckPlaceableArea* Area, AJunkyardCarWreck* Wreck);
    
    UFUNCTION(BlueprintCallable)
    void OnWreckMarked(AJunkyardCarWreck* MarkedWreck, ECarWreckMarking NewMarking);
    
    UFUNCTION(BlueprintCallable)
    void OnWreckAttractedToMagnet(AJunkyardCarWreck* Wreck);
    
    UFUNCTION(BlueprintCallable)
    void OnUfoUsed();
    
    UFUNCTION(BlueprintCallable)
    void OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState GameplayStuffUnlocked);
    
    UFUNCTION(BlueprintCallable)
    void OnNewFameLevelUnlocked(int32 NewLevel);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDefaultTaskStarted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCraneEntered(bool EnteredByPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnCarSaleFinished(const FSaleSlot& SaleSlot, const bool bCarSold);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingUpgraded(EBuildingType BuildingType, int32 BuildingLevel, bool bLoadedFromSave);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWreckMarkingEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsProcessingPossible(FSeanTaskRow ProcessingTask, ACarWreckPlaceableArea* TargetWreckArea);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWorkshop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACarWreckPlaceableArea* FindFreeWreckAreaOfType(ECarWreckPlaceableAreaType AreaType, AActor* DistanceReferenceActor);
    
    UFUNCTION(BlueprintCallable)
    void FindClosestWreckToProcess(bool& WreckFound, ACarWreckPlaceableArea*& OutputWreckArea, FSeanTaskRow& OutputTaskStruct);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool DisplayInteractionInfo(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent, UStaticMeshComponent*& StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableInteractionInfo(APawn* Pawn);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckForWorkToDo();
    
    UFUNCTION(BlueprintCallable)
    void CheckForBark();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelCurrentTask();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeInteractable(APawn* Pawn, UPrimitiveComponent* UPrimitiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void BarkDialog(ENPCConversationType BarkType, bool IgnoreBarkDistance);
    

    // Fix for true pure virtual functions not being implemented
};

