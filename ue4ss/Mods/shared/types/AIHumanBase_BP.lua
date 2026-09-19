---@meta

---@class AAIHumanBase_BP_C : AAICharacterBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TaskDebug UTextRenderComponent
---@field ShadowCaster USkeletalMeshComponent
---@field NPC_AnimationManager UNPC_AnimationManager_C
---@field Dialog3D UWidgetComponent
---@field AnimMasterRef UHumanAnimInstance
---@field RotationDelegate FTimerHandle
---@field DestinateRotation float
---@field TurnSpeed float
---@field DeltaTxAi float
---@field HitReactMontage UAnimMontage
---@field ['In Bone Name'] FName
---@field PanicSoundsMale TArray<USoundBase>
---@field PanicSoundsFemale TArray<USoundBase>
---@field PanicSound UAudioComponent
---@field FuelNotificationReady boolean
---@field ComponentsToDisableTick TArray<USkeletalMeshComponent>
---@field WidgetsToCheckDistance TArray<UWidgetComponent>
---@field WidgetsTimer FTimerHandle
---@field ForceTickDistanceUpdate boolean
---@field DefaultMeshRotation FRotator
---@field StartMeshRotation FRotator
---@field TargetMeshRotation FRotator
---@field MeshTurnSpeed float
---@field DeltaMeshRotation float
---@field RotatingMesh boolean
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
---@field IsTickIntervalIncreased boolean
---@field LastRenderState boolean
---@field ForceZeroTickInterval boolean
---@field bRagdoll boolean
---@field RagdollStartingLocation FVector
---@field CurrentRagdollT float
local AAIHumanBase_BP_C = {}

---@param Reason FString
---@param Go_To_Home TSubclassOf<UGoToHome_C>
AAIHumanBase_BP_C['Get Go To Home Task Class'] = function(self, Reason, Go_To_Home) end
---@param DeltaT float
AAIHumanBase_BP_C['Ragdoll Move Capsule'] = function(self, DeltaT) end
---@param Reset boolean
function AAIHumanBase_BP_C:HandleCannonHitSettings(Reset) end
function AAIHumanBase_BP_C:IsOccupyingParkingSpot() end
---@return boolean
function AAIHumanBase_BP_C:IsDeliveryClass_Helper() end
---@return boolean
function AAIHumanBase_BP_C:IsDennisClass_Helper() end
---@return boolean
function AAIHumanBase_BP_C:IsEmployeeClass_Helper() end
---@param DamageInstigator AActor
---@param HitDirection HitDirectionEnum::Type
function AAIHumanBase_BP_C:GetHitSide(DamageInstigator, HitDirection) end
---@param TaskClass TSubclassOf<UTaskBase>
---@param RenownReason ERenown_Reasons
---@param TaskResult ETaskResult
---@param money float
---@param Instaginator UObject
AAIHumanBase_BP_C['Task Result'] = function(self, TaskClass, RenownReason, TaskResult, money, Instaginator) end
function AAIHumanBase_BP_C:UserConstructionScript() end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyEnd_89DAB7BD43966EBA3F5B05AAFA0AB390(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyBegin_89DAB7BD43966EBA3F5B05AAFA0AB390(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnInterrupted_89DAB7BD43966EBA3F5B05AAFA0AB390(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnBlendOut_89DAB7BD43966EBA3F5B05AAFA0AB390(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnCompleted_89DAB7BD43966EBA3F5B05AAFA0AB390(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyEnd_B7EB05D4446CC0E57C31E183B63FF330(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyBegin_B7EB05D4446CC0E57C31E183B63FF330(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnInterrupted_B7EB05D4446CC0E57C31E183B63FF330(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnBlendOut_B7EB05D4446CC0E57C31E183B63FF330(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnCompleted_B7EB05D4446CC0E57C31E183B63FF330(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyEnd_1662F3E24F9D29E2D216B385B32DAABC(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyBegin_1662F3E24F9D29E2D216B385B32DAABC(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnInterrupted_1662F3E24F9D29E2D216B385B32DAABC(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnBlendOut_1662F3E24F9D29E2D216B385B32DAABC(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnCompleted_1662F3E24F9D29E2D216B385B32DAABC(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyEnd_9D98FB5442CE1A0E7929368AD3436198(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyBegin_9D98FB5442CE1A0E7929368AD3436198(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnInterrupted_9D98FB5442CE1A0E7929368AD3436198(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnBlendOut_9D98FB5442CE1A0E7929368AD3436198(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnCompleted_9D98FB5442CE1A0E7929368AD3436198(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyEnd_F0E7C84948E3F93D0F9AD89785D4FA7C(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyBegin_F0E7C84948E3F93D0F9AD89785D4FA7C(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnInterrupted_F0E7C84948E3F93D0F9AD89785D4FA7C(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnBlendOut_F0E7C84948E3F93D0F9AD89785D4FA7C(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnCompleted_F0E7C84948E3F93D0F9AD89785D4FA7C(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyEnd_80E54EA04BF0BDCF5EB19891B3AE8096(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnNotifyBegin_80E54EA04BF0BDCF5EB19891B3AE8096(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnInterrupted_80E54EA04BF0BDCF5EB19891B3AE8096(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnBlendOut_80E54EA04BF0BDCF5EB19891B3AE8096(NotifyName) end
---@param NotifyName FName
function AAIHumanBase_BP_C:OnCompleted_80E54EA04BF0BDCF5EB19891B3AE8096(NotifyName) end
function AAIHumanBase_BP_C:ReceiveBeginPlay() end
---@param DeltaRotation FRotator
function AAIHumanBase_BP_C:RotateToTarget(DeltaRotation) end
function AAIHumanBase_BP_C:CustomEvent_0() end
---@param FinishedTaskClass TSubclassOf<UTaskBase>
---@param RenownReason ERenown_Reasons
---@param TaskResult ETaskResult
---@param TotalMoney float
---@param Instaginator AActor
function AAIHumanBase_BP_C:OnFinishedTask(FinishedTaskClass, RenownReason, TaskResult, TotalMoney, Instaginator) end
---@param Damage float
---@param DamageType UDamageType
---@param InstigatedBy AController
---@param DamageCauser AActor
function AAIHumanBase_BP_C:ReceiveAnyDamage(Damage, DamageType, InstigatedBy, DamageCauser) end
function AAIHumanBase_BP_C:DebugTask() end
function AAIHumanBase_BP_C:ReceiveDestroyed() end
function AAIHumanBase_BP_C:UFO() end
---@param ProductsNotFound TArray<TSubclassOf<AProduct>>
---@param Timer float
function AAIHumanBase_BP_C:CustomerProductNotFound(ProductsNotFound, Timer) end
---@param DeltaSeconds float
function AAIHumanBase_BP_C:ReceiveTick(DeltaSeconds) end
---@param Reason FName
function AAIHumanBase_BP_C:GoToHome(Reason) end
function AAIHumanBase_BP_C:DestroySelf() end
---@param Direction FVector
function AAIHumanBase_BP_C:CannonBallHit(Direction) end
---@param NewVisibility boolean
function AAIHumanBase_BP_C:SetTaskDebugVisiblity(NewVisibility) end
---@param TaskType EEmployeeTask
function AAIHumanBase_BP_C:OnNotEnoughFuelForTask(TaskType) end
function AAIHumanBase_BP_C:PrepareFuelNotification() end
function AAIHumanBase_BP_C:CheckForWidgetsVisibility() end
---@param TargetRotation FRotator
function AAIHumanBase_BP_C:RotateMesh(TargetRotation) end
function AAIHumanBase_BP_C:ResetMeshRotation() end
---@param PhotoModeActive boolean
function AAIHumanBase_BP_C:OnSetPhotoModeActive(PhotoModeActive) end
---@param bEnable boolean
---@param bMainMesh boolean
function AAIHumanBase_BP_C:ToggleComponentsTick(bEnable, bMainMesh) end
function AAIHumanBase_BP_C:GetUpFromRagdoll() end
function AAIHumanBase_BP_C:FlyingRVCustomerCheck() end
---@param EntryPoint int32
function AAIHumanBase_BP_C:ExecuteUbergraph_AIHumanBase_BP(EntryPoint) end


