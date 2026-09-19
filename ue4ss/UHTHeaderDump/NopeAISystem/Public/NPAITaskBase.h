#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "ENPAIActionState.h"
#include "NPAITaskProgress.h"
#include "NPTaskFinishReason.h"
#include "NPAITaskBase.generated.h"

class AActor;
class ANPAICharacterBase;
class ANPAIControllerBase;

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API UNPAITaskBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPAICharacterBase* OwnerAICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPAIControllerBase* OwnerAIControllerBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepeatTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPAITaskProgress> ProgressOfTasks;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskName;
    
    UNPAITaskBase();

    UFUNCTION(BlueprintCallable)
    bool UpdateTaskProgress(const FString& ObjectiveName, int32 AddedProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartTask();
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitializeTask(ANPAICharacterBase* OwnerCharacter, AActor* InTargetActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetPointReached();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNPAITaskProgress GetTaskProgress(const FString& ObjectiveName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNPTaskFinishReason GetReasonToFinishAITask();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPAIActionState GetCurrentAIActionState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ForceEndTask();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishEndTask();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishBeginTask(const FNPTaskFinishReason TaskStopReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventTick(float DeltaTime, ENPAIActionState AIActionState);
    
private:
    UFUNCTION(BlueprintCallable)
    void EndPlayNPAITaskBase(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AddAITaskProgress(FNPAITaskProgress AITaskProgress);
    
};

