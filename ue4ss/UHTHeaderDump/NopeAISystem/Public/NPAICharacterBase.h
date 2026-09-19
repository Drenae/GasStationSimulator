#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
#include "NPAITaskStruct.h"
#include "NPTaskFinishReason.h"
#include "OnNPAITaskFinishedDelegate.h"
#include "TargetPointStruct.h"
#include "NPAICharacterBase.generated.h"

class AActor;
class ANPAIControllerBase;
class ANPAISpawner;
class UNPAITaskBase;
class UNPCharacterMovementComponent;
class UNPSmartObjectComponent;
class UNPWidgetComponentFace;
class UObject;

UCLASS(Abstract, Blueprintable)
class NOPEAISYSTEM_API ANPAICharacterBase : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPWidgetComponentFace* WidgetCharacterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bSaveByAISubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentDistanceToUnload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldAttemptToUnstuck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnstuckDebugOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionCheckIntervalSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionCheckSpanSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnstuckDistanceTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnstuckTeleportDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnstuckTeleportRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnstuckFailTeleportDistanceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnstuckFailTeleportRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnstuckRepeatDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxUnstuckAttempts;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPAITaskFinished OnCurrentTaskFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWalkingToPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetPointStruct WalkToPointTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> ReachedWaypoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLatentActionInfo WalkToPointActionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CurrentWalkToCallbackTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPAIControllerBase* OwnerAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANPAISpawner* NPAISpawner;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPAITaskBase* CurrentActiveAITask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> DefaultTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNPAITaskBase> WalkToPointTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNPAITaskStruct> TasksList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockLoadAnimationsOnGameLoad;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InteractableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNPSmartObjectComponent* ReservedSmartObjectComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitingForWalkToPointTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> PreviousUnstuckLocations;
    
public:
    ANPAICharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    void WalkToPoint(FTargetPointStruct TargetPoint, TArray<FNPAITaskStruct> FollowingTasks, FLatentActionInfo LatentInfo, bool ForceEndCurrentTasks);
    
    UFUNCTION(BlueprintCallable)
    void TryUnstuckCharacter(FVector TargetLocation, bool& ReachedTarget);
    
    UFUNCTION(BlueprintCallable)
    void TryAdjustTargetPointToNavmesh();
    
    UFUNCTION(BlueprintCallable)
    FNPAITaskStruct SetNextRandomTask();
    
    UFUNCTION(BlueprintCallable)
    void SetInteractableActor(AActor* InInteractableActor);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceAITasks(FNPAITaskStruct AITaskStruct);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAITask(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnUnstuckReset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCurrentTaskFinishedCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaskScheduled(TSoftClassPtr<UNPAITaskBase> TaskToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNPSmartObjectComponent* GetReservedSmartObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNPCharacterMovementComponent* GetNPCharacterMovement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ANPAIControllerBase* GetNPAIControllerBase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FNPAITaskStruct GetNextAITask();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInteractableActor();
    
    UFUNCTION(BlueprintCallable)
    void FinishAITask(const FNPTaskFinishReason TaskStopReason);
    
    UFUNCTION(BlueprintCallable)
    void CancelWalkToPoint();
    
    UFUNCTION(BlueprintCallable)
    void AddAITask(FNPAITaskStruct AITaskStruct, int32 Index);
    
};

