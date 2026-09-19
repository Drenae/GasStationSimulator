---@meta

---@class AChicken : ANPAnimalBase
local AChicken = {}


---@class ACow : ANPAnimalBase
local ACow = {}


---@class AGoat : ANPAnimalBase
local AGoat = {}


---@class ANPAICharacterBase : ACharacter
---@field WidgetCharacterInfo UNPWidgetComponentFace
---@field CharacterID FGuid
---@field bSaveByAISubsystem float
---@field DistanceToLoad float
---@field PercentDistanceToUnload float
---@field ShouldAttemptToUnstuck boolean
---@field UnstuckDebugOnly boolean
---@field PositionCheckIntervalSeconds float
---@field PositionCheckSpanSeconds float
---@field UnstuckDistanceTreshold float
---@field UnstuckTeleportDistance float
---@field UnstuckTeleportRadius float
---@field UnstuckFailTeleportDistanceMultiplier float
---@field UnstuckFailTeleportRadiusMultiplier float
---@field UnstuckRepeatDistance float
---@field MaxUnstuckAttempts int32
---@field OnCurrentTaskFinished FNPAICharacterBaseOnCurrentTaskFinished
---@field bIsWalkingToPoint boolean
---@field WalkToPointTarget FTargetPointStruct
---@field ReachedWaypoints TArray<boolean>
---@field WalkToPointActionInfo FLatentActionInfo
---@field CurrentWalkToCallbackTarget UObject
---@field OwnerAIController ANPAIControllerBase
---@field NPAISpawner ANPAISpawner
---@field CurrentActiveAITask UNPAITaskBase
---@field DefaultTask TSoftClassPtr<UNPAITaskBase>
---@field WalkToPointTask TSoftClassPtr<UNPAITaskBase>
---@field TasksList TArray<FNPAITaskStruct>
---@field bBlockLoadAnimationsOnGameLoad boolean
---@field InteractableActor AActor
---@field ReservedSmartObjectComponent UNPSmartObjectComponent
---@field bWaitingForWalkToPointTask boolean
---@field PreviousUnstuckLocations TArray<FVector>
local ANPAICharacterBase = {}

---@param TargetPoint FTargetPointStruct
---@param FollowingTasks TArray<FNPAITaskStruct>
---@param LatentInfo FLatentActionInfo
---@param ForceEndCurrentTasks boolean
function ANPAICharacterBase:WalkToPoint(TargetPoint, FollowingTasks, LatentInfo, ForceEndCurrentTasks) end
---@param TargetLocation FVector
---@param ReachedTarget boolean
function ANPAICharacterBase:TryUnstuckCharacter(TargetLocation, ReachedTarget) end
function ANPAICharacterBase:TryAdjustTargetPointToNavmesh() end
---@return FNPAITaskStruct
function ANPAICharacterBase:SetNextRandomTask() end
---@param InInteractableActor AActor
function ANPAICharacterBase:SetInteractableActor(InInteractableActor) end
---@param AITaskStruct FNPAITaskStruct
function ANPAICharacterBase:ReplaceAITasks(AITaskStruct) end
---@param Index int32
function ANPAICharacterBase:RemoveAITask(Index) end
function ANPAICharacterBase:OnUnstuckReset() end
function ANPAICharacterBase:OnCurrentTaskFinishedCallback() end
---@param TaskToFind TSoftClassPtr<UNPAITaskBase>
---@return boolean
function ANPAICharacterBase:IsTaskScheduled(TaskToFind) end
---@return UNPSmartObjectComponent
function ANPAICharacterBase:GetReservedSmartObject() end
---@return UNPCharacterMovementComponent
function ANPAICharacterBase:GetNPCharacterMovement() end
---@return ANPAIControllerBase
function ANPAICharacterBase:GetNPAIControllerBase() end
---@return FNPAITaskStruct
function ANPAICharacterBase:GetNextAITask() end
---@return AActor
function ANPAICharacterBase:GetInteractableActor() end
---@param TaskStopReason FNPTaskFinishReason
function ANPAICharacterBase:FinishAITask(TaskStopReason) end
function ANPAICharacterBase:CancelWalkToPoint() end
---@param AITaskStruct FNPAITaskStruct
---@param Index int32
function ANPAICharacterBase:AddAITask(AITaskStruct, Index) end


---@class ANPAIControllerBase : AAIController
---@field TeamID FGenericTeamId
---@field BehaviorTree UBehaviorTree
---@field BlackboardData UBlackboardData
local ANPAIControllerBase = {}

function ANPAIControllerBase:StartAILogicWithDelay() end
function ANPAIControllerBase:StartAILogic() end
---@param NewAIActionState ENPAIActionState
function ANPAIControllerBase:SetAIActionState(NewAIActionState) end
function ANPAIControllerBase:InitializeTaskList() end
---@return ENPAIActionState
function ANPAIControllerBase:GetAIActionState() end


---@class ANPAIManager : AActor
local ANPAIManager = {}

---@param WorldContextObject UObject
---@return ANPAIManager
function ANPAIManager:GetAIManager(WorldContextObject) end


---@class ANPAISpawner : AActor
---@field LeftTimeToSpawnNPAICharacter FNPTimeStruct
---@field MinRandomTime FNPTimeStruct
---@field MaxRandomTime FNPTimeStruct
---@field TargetHomes TArray<TSoftObjectPtr<ANPAISpawner>>
local ANPAISpawner = {}

---@param UpdatedTime FNPTimeStruct
function ANPAISpawner:OnTimeUpdated(UpdatedTime) end


---@class ANPAnimalBase : ANPAICharacterBase
local ANPAnimalBase = {}


---@class APig : ANPAnimalBase
local APig = {}


---@class ARabbit : ANPAnimalBase
local ARabbit = {}


---@class ASheep : ANPAnimalBase
local ASheep = {}


---@class ATurkey : ANPAnimalBase
local ATurkey = {}


---@class FAnimationSaveStruct
---@field AnimMontageSoft TSoftObjectPtr<UAnimMontage>
---@field PlayRate float
---@field StartingPosition float
---@field StartingSection FName
---@field VisibilityBasedAnimTickOption uint8
---@field StartCharacterTransform FTransform
---@field EndCharacterTransform FTransform
local FAnimationSaveStruct = {}



---@class FNPAIData
---@field SpawnedAICharacters TArray<FSaveDataNPAICharacter>
---@field PlacedAICharacters TArray<FSaveDataNPAICharacter>
local FNPAIData = {}



---@class FNPAITaskProgress
---@field TaskName FString
---@field LeftTaskTime float
---@field StartTaskTime float
---@field CurProgress int32
---@field MaxProgress int32
---@field LeftRepeatCount int32
---@field RequirmentState TArray<ENPAIActionState>
local FNPAITaskProgress = {}



---@class FNPAITaskStruct
---@field AITaskBaseClass TSoftClassPtr<UNPAITaskBase>
---@field TargetActor TSoftObjectPtr<AActor>
---@field AIMovementSpeed ENPAIMovementSpeed
---@field TasksProgress TArray<FNPAITaskProgress>
---@field TaskFinishReasons TArray<FNPTaskFinishReason>
local FNPAITaskStruct = {}



---@class FNPTaskFinishReason
---@field TaskResult ENPTaskResult
---@field FinishReason ENPTaskFinishReason
local FNPTaskFinishReason = {}



---@class FNPTimeStruct
---@field Days int32
---@field Hours int32
---@field Minutes int32
---@field TotalTime float
local FNPTimeStruct = {}



---@class FSaveDataNPAICharacter
---@field AICharacterClass TSoftClassPtr<ANPAICharacterBase>
---@field AICharacterSoft TSoftObjectPtr<ANPAICharacterBase>
---@field CharacterID FGuid
---@field bIsValid boolean
---@field bIsLoadedByDistance boolean
---@field DistanceToLoad float
---@field PercentDistanceToUnload float
---@field Transform FTransform
---@field AITasks TArray<FNPAITaskStruct>
---@field Tags TArray<FName>
---@field bCollisionEnabled boolean
---@field MovementMode uint8
---@field bBlockLoadAnimationsOnGameLoad boolean
---@field AnimationSaveStruct FAnimationSaveStruct
---@field bIsWalkingToPoint boolean
---@field WalkToPointTargetTransform FTransform
---@field WalkToPointTargetCanRotateToPoint boolean
---@field WalkToPointTargetAIMovementSpeed ENPAIMovementSpeed
---@field WalkToPointTargetAcceptableRadius float
---@field WalkToPointTargetWaypoints TArray<FVector>
---@field ReachedWaypoints TArray<boolean>
local FSaveDataNPAICharacter = {}



---@class FSmartPoint
---@field CurrentCharacter ANPAICharacterBase
---@field PositionTransform FTransform
---@field WorldPositionTransform FTransform
---@field MontageTransform FTransform
---@field WorldMontageTransform FTransform
local FSmartPoint = {}



---@class FTargetPointStruct
---@field Transform FTransform
---@field bCanRotateToPoint boolean
---@field AIMovementSpeed ENPAIMovementSpeed
---@field AcceptableRadius float
---@field Waypoints TArray<FVector>
local FTargetPointStruct = {}



---@class UBTTask_NPRotateCharacterTo : UBTTaskNode
---@field LimitRotation float
---@field Precision float
---@field MinSpeed float
---@field MaxSpeed float
local UBTTask_NPRotateCharacterTo = {}



---@class UBTTask_NPStartTask : UBTTaskNode
local UBTTask_NPStartTask = {}


---@class UBTTask_PlayCharacterAnimation : UBTTaskNode
---@field AnimMontage UAnimMontage
---@field PlayTaskMontage boolean
---@field MyOwnerComp UBehaviorTreeComponent
local UBTTask_PlayCharacterAnimation = {}

---@param Montage UAnimMontage
---@param bInterrupted boolean
function UBTTask_PlayCharacterAnimation:OnMontageEnded(Montage, bInterrupted) end


---@class UHumanSharedAnimInstance : UAnimInstance
---@field StartingLocation FVector
---@field DesiredLocation FVector
---@field StartingRotation FRotator
---@field DesiredRotation FRotator
---@field PositionRate float
---@field RotationRate float
---@field WarpingTarget AActor
---@field ActorToAttach AActor
---@field RootAttachedComponents TArray<UActorComponent>
---@field HandLAttachedComponents TArray<UActorComponent>
---@field HandRAttachedComponents TArray<UActorComponent>
---@field RootStaticMeshToMove UActorComponent
---@field HandLStaticMeshToMove UActorComponent
---@field HandRStaticMeshToMove UActorComponent
---@field RootInitialMeshTransform FTransform
---@field HandLInitialMeshTransform FTransform
---@field HandRInitialMeshTransform FTransform
---@field CurrentPositioningMontage UAnimMontage
---@field SpawnedActorLHand AActor
---@field SpawnedActorRHand AActor
---@field SpawnedActors TArray<AActor>
---@field bBlockWarping boolean
---@field bPointing boolean
---@field bPointingLeft boolean
---@field PointingPitch float
---@field PointingYaw float
---@field CurrentRotationMontage UAnimMontage
---@field bDialogNeverLookAt boolean
---@field SpawnedZippo AActor
---@field SpawnedObject AActor
---@field SpawnedObjectArray TArray<AActor>
local UHumanSharedAnimInstance = {}

function UHumanSharedAnimInstance:StopPointingAtTarget() end
---@param PointingTarget AActor
function UHumanSharedAnimInstance:StartPointingAtTarget(PointingTarget) end
---@param NewTarget AActor
function UHumanSharedAnimInstance:SetWarpingTarget(NewTarget) end
---@param NewRotation FRotator
function UHumanSharedAnimInstance:SetStartingRotation(NewRotation) end
---@param NewLocation FVector
function UHumanSharedAnimInstance:SetStartingLocation(NewLocation) end
---@param NewActor AActor
---@param RootNewComponent UActorComponent
---@param RootInitialTransform FTransform
function UHumanSharedAnimInstance:SetRootActorToAttach(NewActor, RootNewComponent, RootInitialTransform) end
---@param RHandNewComponent UActorComponent
---@param RHandInitialTransform FTransform
function UHumanSharedAnimInstance:SetRHandComponentToAttach(RHandNewComponent, RHandInitialTransform) end
---@param LHandNewComponent UActorComponent
---@param LHandInitialTransform FTransform
function UHumanSharedAnimInstance:SetLHandComponentToAttach(LHandNewComponent, LHandInitialTransform) end
---@param NewRotation FRotator
function UHumanSharedAnimInstance:SetDesiredRotation(NewRotation) end
---@param NewLocation FVector
function UHumanSharedAnimInstance:SetDesiredLocation(NewLocation) end
---@param CurrentMontage UAnimMontage
function UHumanSharedAnimInstance:SetCurrentPositioningMontage(CurrentMontage) end
---@param IsWarpingBlocked boolean
function UHumanSharedAnimInstance:SetBlockWarping(IsWarpingBlocked) end
---@param RotationTarget AActor
---@return boolean
function UHumanSharedAnimInstance:RotateToTarget(RotationTarget) end
---@param WarpTarget AActor
---@param WarpTransform FTransform
function UHumanSharedAnimInstance:PlayPositioningMontage(WarpTarget, WarpTransform) end
---@param NewDesiredLocation FVector
---@param NewDesiredRotation FRotator
function UHumanSharedAnimInstance:HandlePositioning(NewDesiredLocation, NewDesiredRotation) end
---@return FRotator
function UHumanSharedAnimInstance:GetStartingRotation() end
---@return FVector
function UHumanSharedAnimInstance:GetStartingLocation() end
---@return TArray<AActor>
function UHumanSharedAnimInstance:GetSpawnedObjectArray() end
---@return FRotator
function UHumanSharedAnimInstance:GetDesiredRotation() end
---@return FVector
function UHumanSharedAnimInstance:GetDesiredLocation() end


---@class UNPAILibrary : UBlueprintFunctionLibrary
local UNPAILibrary = {}

---@param AICharacter ANPAICharacterBase
---@return UNPAITaskBase
function UNPAILibrary:SpawnAITask(AICharacter) end
---@param WorldContextObject UObject
---@param InAICharacterBaseClass TSoftClassPtr<ANPAICharacterBase>
---@param InSpawnTransform FTransform
---@param InTasksList TArray<FNPAITaskStruct>
---@param bEditableModeActive boolean
---@param LatentInfo FLatentActionInfo
---@param OutAICharacterBase ANPAICharacterBase
function UNPAILibrary:SpawnAICharacterAsync(WorldContextObject, InAICharacterBaseClass, InSpawnTransform, InTasksList, bEditableModeActive, LatentInfo, OutAICharacterBase) end
---@param InstigatorLocation FVector
---@param InActors TArray<AActor>
---@param SearchRange float
---@return AActor
function UNPAILibrary:GetClosestActorInRange(InstigatorLocation, InActors, SearchRange) end
---@param AICharacterBase ACharacter
---@param OutActors TArray<AActor>
---@param ClosestOutActor AActor
---@param SearchActorClass TSoftClassPtr<AActor>
---@param SearchRange float
---@return UNPSmartObjectComponent
function UNPAILibrary:FindSmartObjectsByClass(AICharacterBase, OutActors, ClosestOutActor, SearchActorClass, SearchRange) end


---@class UNPAISubsystem : UTickableWorldSubsystem
---@field NPAIManager ANPAIManager
---@field OnAICharacterSpawned FNPAISubsystemOnAICharacterSpawned
---@field OnGameTimeUpdated FNPAISubsystemOnGameTimeUpdated
---@field OnGameLogicStarted FNPAISubsystemOnGameLogicStarted
---@field AISpawners TArray<ANPAISpawner>
---@field AICharacters TArray<ANPAICharacterBase>
---@field SmartObjectComponents TArray<UNPSmartObjectComponent>
local UNPAISubsystem = {}

---@param InitSpawner ANPAISpawner
---@param TargetSpawner ANPAISpawner
function UNPAISubsystem:TimeToSpawnCharacter(InitSpawner, TargetSpawner) end
---@return TArray<UNPSmartObjectComponent>
function UNPAISubsystem:GetSmartObjectComponents() end
---@param OutAICharacters TArray<ANPAICharacterBase>
---@param FindClass TSubclassOf<ANPAICharacterBase>
function UNPAISubsystem:GetAICharacters(OutAICharacters, FindClass) end


---@class UNPAISystemSettings : UDeveloperSettings
---@field CharacterInfoWidget TSubclassOf<UUserWidget>
---@field VisiblilityCharacterInfoWidget boolean
---@field AIManagerClass TSubclassOf<ANPAIManager>
local UNPAISystemSettings = {}



---@class UNPAITaskBase : UObject
---@field OwnerAICharacter ANPAICharacterBase
---@field OwnerAIControllerBase ANPAIControllerBase
---@field TargetActor AActor
---@field bRepeatTask boolean
---@field CurrentStateTime float
---@field AcceptableRadius float
---@field ProgressOfTasks TArray<FNPAITaskProgress>
---@field TaskDescription FText
---@field TaskName FText
local UNPAITaskBase = {}

---@param ObjectiveName FString
---@param AddedProgress int32
---@return boolean
function UNPAITaskBase:UpdateTaskProgress(ObjectiveName, AddedProgress) end
function UNPAITaskBase:StartTask() end
---@param Enable boolean
function UNPAITaskBase:SetTickEnabled(Enable) end
---@param OwnerCharacter ANPAICharacterBase
---@param InTargetActor AActor
function UNPAITaskBase:OnInitializeTask(OwnerCharacter, InTargetActor) end
---@return boolean
function UNPAITaskBase:IsTargetPointReached() end
---@param ObjectiveName FString
---@return FNPAITaskProgress
function UNPAITaskBase:GetTaskProgress(ObjectiveName) end
---@return FNPTaskFinishReason
function UNPAITaskBase:GetReasonToFinishAITask() end
---@return ENPAIActionState
function UNPAITaskBase:GetCurrentAIActionState() end
function UNPAITaskBase:ForceEndTask() end
function UNPAITaskBase:FinishEndTask() end
---@param TaskStopReason FNPTaskFinishReason
function UNPAITaskBase:FinishBeginTask(TaskStopReason) end
---@param DeltaTime float
---@param AIActionState ENPAIActionState
function UNPAITaskBase:EventTick(DeltaTime, AIActionState) end
---@param Actor AActor
---@param EndPlayReason EEndPlayReason::Type
function UNPAITaskBase:EndPlayNPAITaskBase(Actor, EndPlayReason) end
---@param AITaskProgress FNPAITaskProgress
---@return boolean
function UNPAITaskBase:AddAITaskProgress(AITaskProgress) end


---@class UNPCharacterMovementComponent : UCharacterMovementComponent
---@field OnCharacterRotated FNPCharacterMovementComponentOnCharacterRotated
---@field TargetPoint FTargetPointStruct
---@field GetSpeedValue float
---@field RotationSpeed float
---@field BackWalkReactDist float
---@field RotateToPointReactDist float
---@field ForwardDirectionWeight float
local UNPCharacterMovementComponent = {}

---@param InTargetPointStruct FTargetPointStruct
function UNPCharacterMovementComponent:SetTargetPoint(InTargetPointStruct) end
---@param NewAIMovementSpeed ENPAIMovementSpeed
function UNPCharacterMovementComponent:SetCharacterMovementSpeed(NewAIMovementSpeed) end
---@return boolean
function UNPCharacterMovementComponent:IsTargetPointReached() end
---@return FTargetPointStruct
function UNPCharacterMovementComponent:GetTargetPoint() end
---@return ENPAIMovementSpeed
function UNPCharacterMovementComponent:GetCharacterMovementSpeed() end


---@class UNPPathFollowingComponent : UPathFollowingComponent
local UNPPathFollowingComponent = {}


---@class UNPSmartObjectComponent : USceneComponent
---@field AcceptableRadious float
---@field SmartPoints TArray<FSmartPoint>
---@field bRotateToActor boolean
---@field bReservePoint boolean
local UNPSmartObjectComponent = {}

---@param AICharacterBase ANPAICharacterBase
---@return FSmartPoint
function UNPSmartObjectComponent:StopReserveActor(AICharacterBase) end
---@param AICharacterBase ANPAICharacterBase
---@return FSmartPoint
function UNPSmartObjectComponent:StartReserveActor(AICharacterBase) end
---@param AICharacterBase ANPAICharacterBase
---@return FSmartPoint
function UNPSmartObjectComponent:FindCharacter(AICharacterBase) end
---@param User ACharacter
---@return boolean
function UNPSmartObjectComponent:CanReserve(User) end


---@class UNPUserWidget : UUserWidget
---@field OwnerObject UObject
local UNPUserWidget = {}



---@class UNPWidgetComponentFace : UWidgetComponent
local UNPWidgetComponentFace = {}


---@class UNopeAnimInstance : UHumanSharedAnimInstance
---@field StartCharacterTransform FTransform
---@field EndCharacterTransform FTransform
local UNopeAnimInstance = {}



