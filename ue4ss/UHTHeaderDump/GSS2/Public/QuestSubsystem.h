#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "EDLCName.h"
#include "OnAllQuestLinesFinishedDelegate.h"
#include "OnAnyQuestLoadedDelegate.h"
#include "OnCountableObjectiveProgressUpdatedDelegate.h"
#include "OnNewQuestLineFollowedDelegate.h"
#include "OnObjectiveFinishedDelegate.h"
#include "OnObjectiveStartedDelegate.h"
#include "OnQuestFinishedDelegate.h"
#include "OnQuestLineFinishedDelegate.h"
#include "OnQuestLineStartedDelegate.h"
#include "OnQuestStartedDelegate.h"
#include "OnQuestsLoadedDelegate.h"
#include "OnSystemInitializedDelegate.h"
#include "QuestSubsystem.generated.h"

class UActiveQuestLine;
class UObjectiveBase;
class UQuestBase;
class UQuestLineBase;
class UWorld;

UCLASS(Blueprintable)
class GSS2_API UQuestSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestLineStarted OnQuestLineStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestLineFinished OnQuestLineFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestStarted OnQuestStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestFinished OnQuestFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveStarted OnObjectiveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectiveFinished OnObjectiveFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCountableObjectiveProgressUpdated OnCountableObjectiveProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewQuestLineFollowed OnNewQuestLineFollowed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllQuestLinesFinished OnAllQuestLinesFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllQuestLinesFinished OnAllQuestLinesLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnQuestsLoaded OnQuestsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSystemInitialized OnSystemInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyQuestLoaded OnAnyQuestLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UActiveQuestLine*> ActiveQuestLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObjectiveBase>> FinishedObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UQuestBase>> RetroactiveQuestReturns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSystemInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMainQuestLineCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoingOnlyRetroactiveQuestLines;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestlinesToLoadAmount;
    
public:
    UQuestSubsystem();

    UFUNCTION(BlueprintCallable)
    bool TryToSetCurrentQuestLine();
    
    UFUNCTION(BlueprintCallable)
    void TryStartRetroactiveQuestLine(UQuestLineBase* QuestLineBase);
    
    UFUNCTION(BlueprintCallable)
    void TranslateQuestLineAfterFinished(UQuestLineBase* QuestLine, bool bRunStartQuestLineAction);
    
    UFUNCTION(BlueprintCallable)
    void SetAmountOfLoadedQuestlines(int32 InQuestlinesToLoad);
    
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnQuestStartedInternal(UQuestBase* QuestStarted);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnQuestsLoadedFromSave(TArray<FSoftObjectPath> NewSaveSystemQuestLinesToLoad);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnQuestFinishedInternal(UQuestBase* QuestFinished);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveStartedInternal(UObjectiveBase* ObjectiveStarted);
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveFinishedInternal(UObjectiveBase* ObjectiveFinished);
    
    UFUNCTION(BlueprintCallable)
    void OnGameLoadingStarted();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsQuestlineStarted(const EDLCName DlcQuestline);
    
    UFUNCTION(BlueprintCallable)
    bool IsQuestlineFinished(const EDLCName DlcQuestline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsQuestCurrentlyFollowed(UQuestBase* Quest);
    
    UFUNCTION(BlueprintCallable)
    bool IsObjectiveFollowedInAnyQuestline(UObjectiveBase* Objective);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveCurrentlyFollowed(UObjectiveBase* Objective);
    
    UFUNCTION(BlueprintCallable)
    bool HasQuestBeenCompletedNoHistory(UQuestBase* QuestToCheck);
    
    UFUNCTION(BlueprintCallable)
    bool HasQuestBeenCompleted(UQuestBase* QuestToCheck);
    
    UFUNCTION(BlueprintCallable)
    bool HasObjectiveBeenCompleted(TSoftClassPtr<UObjectiveBase> ObjectiveToCheck);
    
    UFUNCTION(BlueprintCallable)
    bool HasMainQuestBeenCompletedInThePast(UQuestBase* QuestToCheck);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleDLCsQuestLinesForFinishedGame(bool bQuestlineFinished);
    
public:
    UFUNCTION(BlueprintCallable)
    UActiveQuestLine* GetFollowedQuestLine();
    
    UFUNCTION(BlueprintCallable)
    UQuestBase* GetFollowedQuest();
    
    UFUNCTION(BlueprintCallable)
    UObjectiveBase* GetActiveObjective(UQuestBase* Quest);
    
    UFUNCTION(BlueprintCallable)
    bool FollowQuestLine(const EDLCName DlcQuestline);
    
    UFUNCTION(BlueprintCallable)
    void FollowObjectiveQuestline(UObjectiveBase* Objective);
    
    UFUNCTION(BlueprintCallable)
    bool FollowNextQuestLine();
    
    UFUNCTION(BlueprintCallable)
    void FollowActiveQuestLine(UQuestLineBase* QuestLineToFollow);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SkipQuest();
    
};

