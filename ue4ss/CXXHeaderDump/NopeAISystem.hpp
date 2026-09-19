#ifndef UE4SS_SDK_NopeAISystem_HPP
#define UE4SS_SDK_NopeAISystem_HPP

#include "NopeAISystem_enums.hpp"

struct FAnimationSaveStruct
{
    TSoftObjectPtr<class UAnimMontage> AnimMontageSoft;                               // 0x0000 (size: 0x28)
    float PlayRate;                                                                   // 0x0028 (size: 0x4)
    float StartingPosition;                                                           // 0x002C (size: 0x4)
    FName StartingSection;                                                            // 0x0030 (size: 0x8)
    uint8 VisibilityBasedAnimTickOption;                                              // 0x0038 (size: 0x1)
    FTransform StartCharacterTransform;                                               // 0x0040 (size: 0x30)
    FTransform EndCharacterTransform;                                                 // 0x0070 (size: 0x30)

}; // Size: 0xA0

struct FNPAIData
{
    TArray<FSaveDataNPAICharacter> SpawnedAICharacters;                               // 0x0000 (size: 0x10)
    TArray<FSaveDataNPAICharacter> PlacedAICharacters;                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNPAITaskProgress
{
    FString TaskName;                                                                 // 0x0000 (size: 0x10)
    float LeftTaskTime;                                                               // 0x0010 (size: 0x4)
    float StartTaskTime;                                                              // 0x0014 (size: 0x4)
    int32 CurProgress;                                                                // 0x0018 (size: 0x4)
    int32 MaxProgress;                                                                // 0x001C (size: 0x4)
    int32 LeftRepeatCount;                                                            // 0x0020 (size: 0x4)
    TArray<ENPAIActionState> RequirmentState;                                         // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNPAITaskStruct
{
    TSoftClassPtr<UNPAITaskBase> AITaskBaseClass;                                     // 0x0000 (size: 0x28)
    TSoftObjectPtr<class AActor> TargetActor;                                         // 0x0028 (size: 0x28)
    ENPAIMovementSpeed AIMovementSpeed;                                               // 0x0050 (size: 0x1)
    TArray<FNPAITaskProgress> TasksProgress;                                          // 0x0058 (size: 0x10)
    TArray<FNPTaskFinishReason> TaskFinishReasons;                                    // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FNPTaskFinishReason
{
    ENPTaskResult TaskResult;                                                         // 0x0000 (size: 0x1)
    ENPTaskFinishReason FinishReason;                                                 // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FNPTimeStruct
{
    int32 Days;                                                                       // 0x0000 (size: 0x4)
    int32 Hours;                                                                      // 0x0004 (size: 0x4)
    int32 Minutes;                                                                    // 0x0008 (size: 0x4)
    float TotalTime;                                                                  // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSaveDataNPAICharacter
{
    TSoftClassPtr<ANPAICharacterBase> AICharacterClass;                               // 0x0000 (size: 0x28)
    TSoftObjectPtr<class ANPAICharacterBase> AICharacterSoft;                         // 0x0028 (size: 0x28)
    FGuid CharacterID;                                                                // 0x0050 (size: 0x10)
    bool bIsValid;                                                                    // 0x0060 (size: 0x1)
    bool bIsLoadedByDistance;                                                         // 0x0061 (size: 0x1)
    float DistanceToLoad;                                                             // 0x0064 (size: 0x4)
    float PercentDistanceToUnload;                                                    // 0x0068 (size: 0x4)
    FTransform Transform;                                                             // 0x0070 (size: 0x30)
    TArray<FNPAITaskStruct> AITasks;                                                  // 0x00A0 (size: 0x10)
    TArray<FName> Tags;                                                               // 0x00B0 (size: 0x10)
    bool bCollisionEnabled;                                                           // 0x00C0 (size: 0x1)
    uint8 MovementMode;                                                               // 0x00C1 (size: 0x1)
    bool bBlockLoadAnimationsOnGameLoad;                                              // 0x00C2 (size: 0x1)
    FAnimationSaveStruct AnimationSaveStruct;                                         // 0x00D0 (size: 0xA0)
    bool bIsWalkingToPoint;                                                           // 0x0170 (size: 0x1)
    FTransform WalkToPointTargetTransform;                                            // 0x0180 (size: 0x30)
    bool WalkToPointTargetCanRotateToPoint;                                           // 0x01B0 (size: 0x1)
    ENPAIMovementSpeed WalkToPointTargetAIMovementSpeed;                              // 0x01B1 (size: 0x1)
    float WalkToPointTargetAcceptableRadius;                                          // 0x01B4 (size: 0x4)
    TArray<FVector> WalkToPointTargetWaypoints;                                       // 0x01B8 (size: 0x10)
    TArray<bool> ReachedWaypoints;                                                    // 0x01C8 (size: 0x10)

}; // Size: 0x1E0

struct FSmartPoint
{
    class ANPAICharacterBase* CurrentCharacter;                                       // 0x0000 (size: 0x8)
    FTransform PositionTransform;                                                     // 0x0010 (size: 0x30)
    FTransform WorldPositionTransform;                                                // 0x0040 (size: 0x30)
    FTransform MontageTransform;                                                      // 0x0070 (size: 0x30)
    FTransform WorldMontageTransform;                                                 // 0x00A0 (size: 0x30)

}; // Size: 0xD0

struct FTargetPointStruct
{
    FTransform Transform;                                                             // 0x0000 (size: 0x30)
    bool bCanRotateToPoint;                                                           // 0x0030 (size: 0x1)
    ENPAIMovementSpeed AIMovementSpeed;                                               // 0x0031 (size: 0x1)
    float AcceptableRadius;                                                           // 0x0034 (size: 0x4)
    TArray<FVector> Waypoints;                                                        // 0x0038 (size: 0x10)

}; // Size: 0x50

class AChicken : public ANPAnimalBase
{
}; // Size: 0x650

class ACow : public ANPAnimalBase
{
}; // Size: 0x650

class AGoat : public ANPAnimalBase
{
}; // Size: 0x650

class ANPAICharacterBase : public ACharacter
{
    class UNPWidgetComponentFace* WidgetCharacterInfo;                                // 0x04B8 (size: 0x8)
    FGuid CharacterID;                                                                // 0x04C0 (size: 0x10)
    float bSaveByAISubsystem;                                                         // 0x04D0 (size: 0x4)
    float DistanceToLoad;                                                             // 0x04D4 (size: 0x4)
    float PercentDistanceToUnload;                                                    // 0x04D8 (size: 0x4)
    bool ShouldAttemptToUnstuck;                                                      // 0x04DC (size: 0x1)
    bool UnstuckDebugOnly;                                                            // 0x04DD (size: 0x1)
    float PositionCheckIntervalSeconds;                                               // 0x04E0 (size: 0x4)
    float PositionCheckSpanSeconds;                                                   // 0x04E4 (size: 0x4)
    float UnstuckDistanceTreshold;                                                    // 0x04E8 (size: 0x4)
    float UnstuckTeleportDistance;                                                    // 0x04EC (size: 0x4)
    float UnstuckTeleportRadius;                                                      // 0x04F0 (size: 0x4)
    float UnstuckFailTeleportDistanceMultiplier;                                      // 0x04F4 (size: 0x4)
    float UnstuckFailTeleportRadiusMultiplier;                                        // 0x04F8 (size: 0x4)
    float UnstuckRepeatDistance;                                                      // 0x04FC (size: 0x4)
    int32 MaxUnstuckAttempts;                                                         // 0x0500 (size: 0x4)
    FNPAICharacterBaseOnCurrentTaskFinished OnCurrentTaskFinished;                    // 0x0508 (size: 0x10)
    void OnNPAITaskFinished();
    bool bIsWalkingToPoint;                                                           // 0x0518 (size: 0x1)
    FTargetPointStruct WalkToPointTarget;                                             // 0x0520 (size: 0x50)
    TArray<bool> ReachedWaypoints;                                                    // 0x0570 (size: 0x10)
    FLatentActionInfo WalkToPointActionInfo;                                          // 0x0580 (size: 0x18)
    class UObject* CurrentWalkToCallbackTarget;                                       // 0x0598 (size: 0x8)
    class ANPAIControllerBase* OwnerAIController;                                     // 0x05A0 (size: 0x8)
    class ANPAISpawner* NPAISpawner;                                                  // 0x05A8 (size: 0x8)
    class UNPAITaskBase* CurrentActiveAITask;                                         // 0x05B0 (size: 0x8)
    TSoftClassPtr<UNPAITaskBase> DefaultTask;                                         // 0x05B8 (size: 0x28)
    TSoftClassPtr<UNPAITaskBase> WalkToPointTask;                                     // 0x05E0 (size: 0x28)
    TArray<FNPAITaskStruct> TasksList;                                                // 0x0608 (size: 0x10)
    bool bBlockLoadAnimationsOnGameLoad;                                              // 0x0618 (size: 0x1)
    class AActor* InteractableActor;                                                  // 0x0620 (size: 0x8)
    class UNPSmartObjectComponent* ReservedSmartObjectComponent;                      // 0x0628 (size: 0x8)
    bool bWaitingForWalkToPointTask;                                                  // 0x0630 (size: 0x1)
    TArray<FVector> PreviousUnstuckLocations;                                         // 0x0638 (size: 0x10)

    void WalkToPoint(FTargetPointStruct TargetPoint, TArray<FNPAITaskStruct> FollowingTasks, FLatentActionInfo LatentInfo, bool ForceEndCurrentTasks);
    void TryUnstuckCharacter(FVector TargetLocation, bool& ReachedTarget);
    void TryAdjustTargetPointToNavmesh();
    FNPAITaskStruct SetNextRandomTask();
    void SetInteractableActor(class AActor* InInteractableActor);
    void ReplaceAITasks(FNPAITaskStruct AITaskStruct);
    void RemoveAITask(int32 Index);
    void OnUnstuckReset();
    void OnCurrentTaskFinishedCallback();
    bool IsTaskScheduled(TSoftClassPtr<UNPAITaskBase> TaskToFind);
    class UNPSmartObjectComponent* GetReservedSmartObject();
    class UNPCharacterMovementComponent* GetNPCharacterMovement();
    class ANPAIControllerBase* GetNPAIControllerBase();
    FNPAITaskStruct GetNextAITask();
    class AActor* GetInteractableActor();
    void FinishAITask(const FNPTaskFinishReason TaskStopReason);
    void CancelWalkToPoint();
    void AddAITask(FNPAITaskStruct AITaskStruct, int32 Index);
}; // Size: 0x650

class ANPAIControllerBase : public AAIController
{
    FGenericTeamId TeamID;                                                            // 0x0328 (size: 0x1)
    class UBehaviorTree* BehaviorTree;                                                // 0x0330 (size: 0x8)
    class UBlackboardData* BlackboardData;                                            // 0x0338 (size: 0x8)

    void StartAILogicWithDelay();
    void StartAILogic();
    void SetAIActionState(ENPAIActionState NewAIActionState);
    void InitializeTaskList();
    ENPAIActionState GetAIActionState();
}; // Size: 0x350

class ANPAIManager : public AActor
{

    class ANPAIManager* GetAIManager(class UObject* WorldContextObject);
}; // Size: 0x240

class ANPAISpawner : public AActor
{
    FNPTimeStruct LeftTimeToSpawnNPAICharacter;                                       // 0x0220 (size: 0x10)
    FNPTimeStruct MinRandomTime;                                                      // 0x0230 (size: 0x10)
    FNPTimeStruct MaxRandomTime;                                                      // 0x0240 (size: 0x10)
    TArray<TSoftObjectPtr<class ANPAISpawner>> TargetHomes;                           // 0x0250 (size: 0x10)

    void OnTimeUpdated(FNPTimeStruct UpdatedTime);
}; // Size: 0x260

class ANPAnimalBase : public ANPAICharacterBase
{
}; // Size: 0x650

class APig : public ANPAnimalBase
{
}; // Size: 0x650

class ARabbit : public ANPAnimalBase
{
}; // Size: 0x650

class ASheep : public ANPAnimalBase
{
}; // Size: 0x650

class ATurkey : public ANPAnimalBase
{
}; // Size: 0x650

class UBTTask_NPRotateCharacterTo : public UBTTaskNode
{
    float LimitRotation;                                                              // 0x0070 (size: 0x4)
    float Precision;                                                                  // 0x0074 (size: 0x4)
    float MinSpeed;                                                                   // 0x0078 (size: 0x4)
    float MaxSpeed;                                                                   // 0x007C (size: 0x4)

}; // Size: 0x80

class UBTTask_NPStartTask : public UBTTaskNode
{
}; // Size: 0x70

class UBTTask_PlayCharacterAnimation : public UBTTaskNode
{
    class UAnimMontage* AnimMontage;                                                  // 0x0070 (size: 0x8)
    bool PlayTaskMontage;                                                             // 0x0078 (size: 0x1)
    class UBehaviorTreeComponent* MyOwnerComp;                                        // 0x0080 (size: 0x8)

    void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
}; // Size: 0x90

class UHumanSharedAnimInstance : public UAnimInstance
{
    FVector StartingLocation;                                                         // 0x02B8 (size: 0xC)
    FVector DesiredLocation;                                                          // 0x02C4 (size: 0xC)
    FRotator StartingRotation;                                                        // 0x02D0 (size: 0xC)
    FRotator DesiredRotation;                                                         // 0x02DC (size: 0xC)
    float PositionRate;                                                               // 0x02E8 (size: 0x4)
    float RotationRate;                                                               // 0x02EC (size: 0x4)
    class AActor* WarpingTarget;                                                      // 0x02F0 (size: 0x8)
    class AActor* ActorToAttach;                                                      // 0x02F8 (size: 0x8)
    TArray<UActorComponent*> RootAttachedComponents;                                  // 0x0300 (size: 0x10)
    TArray<UActorComponent*> HandLAttachedComponents;                                 // 0x0310 (size: 0x10)
    TArray<UActorComponent*> HandRAttachedComponents;                                 // 0x0320 (size: 0x10)
    class UActorComponent* RootStaticMeshToMove;                                      // 0x0330 (size: 0x8)
    class UActorComponent* HandLStaticMeshToMove;                                     // 0x0338 (size: 0x8)
    class UActorComponent* HandRStaticMeshToMove;                                     // 0x0340 (size: 0x8)
    FTransform RootInitialMeshTransform;                                              // 0x0350 (size: 0x30)
    FTransform HandLInitialMeshTransform;                                             // 0x0380 (size: 0x30)
    FTransform HandRInitialMeshTransform;                                             // 0x03B0 (size: 0x30)
    class UAnimMontage* CurrentPositioningMontage;                                    // 0x03E0 (size: 0x8)
    class AActor* SpawnedActorLHand;                                                  // 0x03E8 (size: 0x8)
    class AActor* SpawnedActorRHand;                                                  // 0x03F0 (size: 0x8)
    TArray<AActor*> SpawnedActors;                                                    // 0x03F8 (size: 0x10)
    bool bBlockWarping;                                                               // 0x0408 (size: 0x1)
    bool bPointing;                                                                   // 0x0409 (size: 0x1)
    bool bPointingLeft;                                                               // 0x040A (size: 0x1)
    float PointingPitch;                                                              // 0x040C (size: 0x4)
    float PointingYaw;                                                                // 0x0410 (size: 0x4)
    class UAnimMontage* CurrentRotationMontage;                                       // 0x0418 (size: 0x8)
    bool bDialogNeverLookAt;                                                          // 0x0420 (size: 0x1)
    class AActor* SpawnedZippo;                                                       // 0x0428 (size: 0x8)
    class AActor* SpawnedObject;                                                      // 0x0430 (size: 0x8)
    TArray<AActor*> SpawnedObjectArray;                                               // 0x0438 (size: 0x10)

    void StopPointingAtTarget();
    void StartPointingAtTarget(class AActor* PointingTarget);
    void SetWarpingTarget(class AActor* NewTarget);
    void SetStartingRotation(FRotator NewRotation);
    void SetStartingLocation(FVector NewLocation);
    void SetRootActorToAttach(class AActor* NewActor, class UActorComponent* RootNewComponent, FTransform RootInitialTransform);
    void SetRHandComponentToAttach(class UActorComponent* RHandNewComponent, FTransform RHandInitialTransform);
    void SetLHandComponentToAttach(class UActorComponent* LHandNewComponent, FTransform LHandInitialTransform);
    void SetDesiredRotation(FRotator NewRotation);
    void SetDesiredLocation(FVector NewLocation);
    void SetCurrentPositioningMontage(class UAnimMontage* CurrentMontage);
    void SetBlockWarping(bool IsWarpingBlocked);
    bool RotateToTarget(class AActor* RotationTarget);
    void PlayPositioningMontage(class AActor* WarpTarget, FTransform WarpTransform);
    void HandlePositioning(FVector NewDesiredLocation, FRotator NewDesiredRotation);
    FRotator GetStartingRotation();
    FVector GetStartingLocation();
    TArray<AActor*> GetSpawnedObjectArray();
    FRotator GetDesiredRotation();
    FVector GetDesiredLocation();
}; // Size: 0x450

class UNPAILibrary : public UBlueprintFunctionLibrary
{

    class UNPAITaskBase* SpawnAITask(class ANPAICharacterBase* AICharacter);
    void SpawnAICharacterAsync(class UObject* WorldContextObject, TSoftClassPtr<ANPAICharacterBase> InAICharacterBaseClass, FTransform InSpawnTransform, const TArray<FNPAITaskStruct>& InTasksList, bool bEditableModeActive, FLatentActionInfo LatentInfo, class ANPAICharacterBase*& OutAICharacterBase);
    class AActor* GetClosestActorInRange(FVector InstigatorLocation, const TArray<AActor*>& InActors, const float SearchRange);
    class UNPSmartObjectComponent* FindSmartObjectsByClass(class ACharacter* AICharacterBase, TArray<AActor*>& OutActors, class AActor*& ClosestOutActor, TSoftClassPtr<AActor> SearchActorClass, const float SearchRange);
}; // Size: 0x28

class UNPAISubsystem : public UTickableWorldSubsystem
{
    class ANPAIManager* NPAIManager;                                                  // 0x0040 (size: 0x8)
    FNPAISubsystemOnAICharacterSpawned OnAICharacterSpawned;                          // 0x0048 (size: 0x10)
    void NPAICharacterSpawn(const class ANPAICharacterBase* OutNPAICharacterBase, bool CharacterSpawned);
    FNPAISubsystemOnGameTimeUpdated OnGameTimeUpdated;                                // 0x0058 (size: 0x10)
    void NPGameTimeUpdate(const FNPTimeStruct UpdatedTime);
    FNPAISubsystemOnGameLogicStarted OnGameLogicStarted;                              // 0x0068 (size: 0x10)
    void NPGameLogicStart();
    TArray<ANPAISpawner*> AISpawners;                                                 // 0x0078 (size: 0x10)
    TArray<ANPAICharacterBase*> AICharacters;                                         // 0x0088 (size: 0x10)
    TArray<UNPSmartObjectComponent*> SmartObjectComponents;                           // 0x0098 (size: 0x10)

    void TimeToSpawnCharacter(class ANPAISpawner* InitSpawner, class ANPAISpawner* TargetSpawner);
    TArray<UNPSmartObjectComponent*> GetSmartObjectComponents();
    void GetAICharacters(TArray<ANPAICharacterBase*>& OutAICharacters, TSubclassOf<class ANPAICharacterBase> FindClass);
}; // Size: 0xA8

class UNPAISystemSettings : public UDeveloperSettings
{
    TSubclassOf<class UUserWidget> CharacterInfoWidget;                               // 0x0038 (size: 0x8)
    bool VisiblilityCharacterInfoWidget;                                              // 0x0040 (size: 0x1)
    TSubclassOf<class ANPAIManager> AIManagerClass;                                   // 0x0048 (size: 0x8)

}; // Size: 0x50

class UNPAITaskBase : public UObject
{
    class ANPAICharacterBase* OwnerAICharacter;                                       // 0x0030 (size: 0x8)
    class ANPAIControllerBase* OwnerAIControllerBase;                                 // 0x0038 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0040 (size: 0x8)
    bool bRepeatTask;                                                                 // 0x0048 (size: 0x1)
    float CurrentStateTime;                                                           // 0x004C (size: 0x4)
    float AcceptableRadius;                                                           // 0x0050 (size: 0x4)
    TArray<FNPAITaskProgress> ProgressOfTasks;                                        // 0x0070 (size: 0x10)
    FText TaskDescription;                                                            // 0x0080 (size: 0x18)
    FText TaskName;                                                                   // 0x0098 (size: 0x18)

    bool UpdateTaskProgress(FString ObjectiveName, int32 AddedProgress);
    void StartTask();
    void SetTickEnabled(bool Enable);
    void OnInitializeTask(class ANPAICharacterBase* OwnerCharacter, class AActor* InTargetActor);
    bool IsTargetPointReached();
    FNPAITaskProgress GetTaskProgress(FString ObjectiveName);
    FNPTaskFinishReason GetReasonToFinishAITask();
    ENPAIActionState GetCurrentAIActionState();
    void ForceEndTask();
    void FinishEndTask();
    void FinishBeginTask(const FNPTaskFinishReason TaskStopReason);
    void EventTick(float DeltaTime, ENPAIActionState AIActionState);
    void EndPlayNPAITaskBase(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    bool AddAITaskProgress(FNPAITaskProgress AITaskProgress);
}; // Size: 0xB0

class UNPCharacterMovementComponent : public UCharacterMovementComponent
{
    FNPCharacterMovementComponentOnCharacterRotated OnCharacterRotated;               // 0x0AF0 (size: 0x10)
    void CharacterRotate(const bool IsRotating, class ANPAICharacterBase* InNPAICharacterBase, const float Direction_Z);
    FTargetPointStruct TargetPoint;                                                   // 0x0B00 (size: 0x50)
    float GetSpeedValue;                                                              // 0x0B54 (size: 0x18)
    float RotationSpeed;                                                              // 0x0B6C (size: 0x4)
    float BackWalkReactDist;                                                          // 0x0B70 (size: 0x4)
    float RotateToPointReactDist;                                                     // 0x0B74 (size: 0x4)
    float ForwardDirectionWeight;                                                     // 0x0B78 (size: 0x4)

    void SetTargetPoint(FTargetPointStruct InTargetPointStruct);
    void SetCharacterMovementSpeed(ENPAIMovementSpeed NewAIMovementSpeed);
    bool IsTargetPointReached();
    FTargetPointStruct GetTargetPoint();
    ENPAIMovementSpeed GetCharacterMovementSpeed();
}; // Size: 0xB80

class UNPPathFollowingComponent : public UPathFollowingComponent
{
}; // Size: 0x250

class UNPSmartObjectComponent : public USceneComponent
{
    float AcceptableRadious;                                                          // 0x01F8 (size: 0x4)
    TArray<FSmartPoint> SmartPoints;                                                  // 0x0200 (size: 0x10)
    bool bRotateToActor;                                                              // 0x0210 (size: 0x1)
    bool bReservePoint;                                                               // 0x0211 (size: 0x1)

    FSmartPoint StopReserveActor(class ANPAICharacterBase* AICharacterBase);
    FSmartPoint StartReserveActor(class ANPAICharacterBase* AICharacterBase);
    FSmartPoint FindCharacter(class ANPAICharacterBase* AICharacterBase);
    bool CanReserve(class ACharacter* User);
}; // Size: 0x220

class UNPUserWidget : public UUserWidget
{
    class UObject* OwnerObject;                                                       // 0x0260 (size: 0x8)

}; // Size: 0x268

class UNPWidgetComponentFace : public UWidgetComponent
{
}; // Size: 0x5A0

class UNopeAnimInstance : public UHumanSharedAnimInstance
{
    FTransform StartCharacterTransform;                                               // 0x0450 (size: 0x30)
    FTransform EndCharacterTransform;                                                 // 0x0480 (size: 0x30)

}; // Size: 0x4B0

#endif
