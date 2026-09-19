#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ERVChallengeTarget.h"
#include "ERVChallengeTimeTrackType.h"
#include "OnChallengeConditionFinishedDelegate.h"
#include "OnChallengeUpdatedDelegate.h"
#include "TimeStruct.h"
#include "RVChallengeCondition.generated.h"

class URVCamperComponent;
class UWorld;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GSS2_API URVChallengeCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct TimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConditionMet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChallengeUpdated OnChallengeUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChallengeConditionFinished OnChallengeFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CamperAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERVChallengeTimeTrackType TimeTrackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERVChallengeTarget ChallengeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeHours;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeStruct StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URVCamperComponent*> TrackedCampers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldPtr;
    
public:
    URVChallengeCondition();

    UFUNCTION(BlueprintCallable)
    void UpdateCondition();
    
    UFUNCTION(BlueprintCallable)
    void StartCondition(UWorld* World);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCamperLeft(URVCamperComponent* Camper);
    
    UFUNCTION(BlueprintCallable)
    void OnCamperArrived(URVCamperComponent* Camper);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishCondition(bool bSuccess);
    
};

