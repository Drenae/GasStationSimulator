#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ChallengeCompletedDelegate.h"
#include "ChallengeObjectiveUpdatedDelegate.h"
#include "ChallengeStartedDelegate.h"
#include "EGSS_Stat.h"
#include "ObjectiveChallengeCompletedDelegate.h"
#include "ObjectiveChallengeStartedDelegate.h"
#include "PostGameChallengeCompleteDelegate.h"
#include "PostGameChallengeStartedDelegate.h"
#include "PostGameChallengeTimerUpdateDelegate.h"
#include "QuestChallenge.h"
#include "RVChallengeCompletedDelegate.h"
#include "RVChallengeStartedDelegate.h"
#include "RVChallengeUpdatedDelegate.h"
#include "QuestChallengeManager.generated.h"

class AGSSPlayerCharacter;
class UChallengeObjective;
class UGSSQuest;
class URVChallenge;
class URVChallengeCondition;

UCLASS(Blueprintable)
class GSS2_API AQuestChallengeManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeObjectiveUpdated OnChallengeObjectiveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeCompleted OnChallengeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeStarted OnChallengeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveChallengeCompleted ObjectiveChallengeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FObjectiveChallengeStarted ObjectiveChallengeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVChallengeStarted OnRVChallengeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVChallengeCompleted OnRVChallengeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRVChallengeUpdated OnRVChallengeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostGameChallengeComplete OnPostGameChallengeComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostGameChallengeStarted OnPostGameChallengeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostGameChallengeTimerUpdate OnPostGameChallengeTimerUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URVChallenge* RVObjective;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestChallenge> ActiveChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSSQuest* ActiveQuestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChallengeObjective* ActiveObjectiveData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilChallengeCompletitionCheck;
    
public:
    AQuestChallengeManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void VerifyIfChallengeStillSame();
    
    UFUNCTION(BlueprintCallable)
    void VerifyChallengeComplete();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StatUpdated(EGSS_Stat NewStatUpdated, int32 ValueUpdated);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartRVChallenge(URVChallenge* ObjectiveRef);
    
    UFUNCTION(BlueprintCallable)
    void StartPostGameChallenge(FQuestChallenge ChallengeToStart);
    
    UFUNCTION(BlueprintCallable)
    void StartObjectiveChallenges(UChallengeObjective* ObjectiveRef);
    
    UFUNCTION(BlueprintCallable)
    void StartChallenge(UGSSQuest* QuestRef);
    
    UFUNCTION(BlueprintCallable)
    void RVChallengeUpdated(URVChallenge* QuestRef, URVChallengeCondition* Condition);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetTimeUntilChallenge();
    
    UFUNCTION(BlueprintCallable)
    void OnQuestsLoadingStartLoadingChallenges();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGSSPlayerSpawned(AGSSPlayerCharacter* CharRef);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadActiveChallenges(TArray<FQuestChallenge> ChallengesToLoad, float LoadedTimeUntilChallenge, float LoadedTimeUntilChallengeComp, bool bIsTickEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRVChallengeComplete(URVChallenge* QuestRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRVChallengeActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsObjectiveChallengeComplete(UChallengeObjective* QuestRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeComplete(UGSSQuest* QuestRef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChallengeActive();
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsActiveChallengeComplete();
    
    UFUNCTION(BlueprintCallable)
    void GetValuesOfChallengePart(TArray<FQuestChallenge>& ChallengeToCheck, EGSS_Stat StatToCheck, float& ActiveAmount, float& NeededAmount);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetTimeUntilChallengeCompletitionCheck();
    
    UFUNCTION(BlueprintCallable)
    float GetTimeUntilChallenge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChallengeValue(EGSS_Stat StatToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FQuestChallenge> GetActiveChallenges();
    
    UFUNCTION(BlueprintCallable)
    void FinishRVChallenge(URVChallenge* ObjectiveRef, bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishPostGameChallenge(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void FinishChallenge();
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 FindActiveChallengeIndex(EGSS_Stat StatToCheck);
    
public:
    UFUNCTION(BlueprintCallable)
    void Debug_AddChallengeProgress(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePostGameChallenges();
    
};

