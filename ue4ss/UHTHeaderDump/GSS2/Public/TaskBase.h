#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BaseCharacterSkeletonMontage.h"
#include "ERenown_Reasons.h"
#include "ETaskAreaType.h"
#include "ETaskResult.h"
#include "NoCustomerToServeDelegate.h"
#include "TaskFinishedDelegate.h"
#include "TaskInterface.h"
#include "TaskProgress.h"
#include "TaskStartedDelegate.h"
#include "TaskStopReason.h"
#include "TaskStruct.h"
#include "TaskUpdateDelegate.h"
#include "TaskBase.generated.h"

class AAICharacterBase;
class AActor;
class ACharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class GSS2_API UTaskBase : public UObject, public ITaskInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAICharacterBase* AICharacterBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Assistant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> TargetActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETaskAreaType TaskAreaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETaskResult TaskResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaskUpdate OnTaskUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaskFinished OnTaskFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTaskStarted OnTaskStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoCustomerToServe OnNoCustomerToServe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGoHomeTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldFinishOnGameLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERenown_Reasons RenownReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBaseCharacterSkeletonMontage> MontagesBasedOnSkeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTaskProgress> TasksProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToAutoFInishTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TaskName;
    
    UTaskBase();

    UFUNCTION(BlueprintCallable)
    bool UpdateTaskProgress(FTaskProgress NewTaskProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickObject(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopAssistant();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartTask(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAssistant(ACharacter* Instaginator);
    
    UFUNCTION(BlueprintCallable)
    void SetTickEnabled(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetTaskTargetActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldFinishOnGameLoad(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void RemoveReasonToStopTask(const FTaskStopReason TaskStopReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeTask(AAICharacterBase* Character, const TArray<FTaskProgress>& NewTasksProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReasonToStopTask();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAssistant();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTaskTargetActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTaskProgress(const FString& ObjectiveName, int32& CurrentTaskProgress, int32& MaxTaskProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTaskInfoTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTaskStopReason GetReasonToStopTask();
    
    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetMontageBasedOnMesh(AAICharacterBase* CharacterBase);
    
    UFUNCTION(BlueprintCallable)
    void FinishEndTaskEmployeeWithNoAICustomer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishEndTask();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishBeginTask(const ETaskResult TaskState, const FString& FinishReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindCompatibileTask(TArray<FTaskStruct> Tasks, ETaskAreaType TaskType);
    
    UFUNCTION(BlueprintCallable)
    void AutoFinishTask();
    
    UFUNCTION(BlueprintCallable)
    void AddReasonToStopTask(const FTaskStopReason TaskStopReason);
    

    // Fix for true pure virtual functions not being implemented
};

