---@meta

---@class UWaterMovementComponent_BP_C : UWaterMovementComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Tick boolean
---@field Stopped boolean
---@field StartedSlowingDown boolean
---@field IsEngineLoopPlaying boolean
---@field RotateDegreeToAvoidObstacle float
---@field StartingStoppedRotation FRotator
---@field DesiredStoppedRotation FRotator
---@field StartingStoppedLocation FVector
---@field DesiredStoppedLocation FVector
---@field IsLerpingToDestination boolean
---@field LerpDuration float
---@field LerpProgress float
---@field ClosestHomeTargetPoint AActor
---@field ClosestHomeTargetPointIndex int32
---@field TimeSinceLastTarget float
---@field TotalTimeUntilTurnBoost float
---@field CurrentTurnSpeed float
---@field CurrentMoveSpeedMultiplier float
---@field DestinationSlowCurveExp float
---@field CurrentTurnSpeedMultiplier float
---@field EngineLoop USoundBase
---@field EngineLoopAudioRef UAudioComponent
---@field EngineStop USoundBase
---@field EngineStart USoundBase
---@field EngineStartAudioRef UAudioComponent
local UWaterMovementComponent_BP_C = {}

---@param TargetActor AActor
---@param PathIndex int32
---@param AdjustedLocation FVector
function UWaterMovementComponent_BP_C:GetAdjustedDestinationLocation(TargetActor, PathIndex, AdjustedLocation) end
---@param DeltaTime float
function UWaterMovementComponent_BP_C:ManualLerpToDestination(DeltaTime) end
---@param Location FVector
---@param ClampedLocation FVector
function UWaterMovementComponent_BP_C:ClampHeight(Location, ClampedLocation) end
---@param RotationX float
---@param RotationY float
---@param RotationZ float
---@param ClampedRotationX float
---@param ClampedRotationY float
---@param ClampedRotationZ float
function UWaterMovementComponent_BP_C:ClampRotation(RotationX, RotationY, RotationZ, ClampedRotationX, ClampedRotationY, ClampedRotationZ) end
function UWaterMovementComponent_BP_C:HandleMontageRM() end
function UWaterMovementComponent_BP_C:RootMotionExtraction() end
---@return boolean
function UWaterMovementComponent_BP_C:isOwnerDestroyed() end
---@param AsWater_Movement_Point AWaterMovementPoint
function UWaterMovementComponent_BP_C:GetCurrentTargetPoint(AsWater_Movement_Point) end
---@param bisFree boolean
function UWaterMovementComponent_BP_C:CheckIfNextPointIsFree(bisFree) end
---@param IsPointReserved boolean
function UWaterMovementComponent_BP_C:HandleTargetPoint(IsPointReserved) end
function UWaterMovementComponent_BP_C:FreeTargetPoint() end
---@param MovementPointRef UObject
UWaterMovementComponent_BP_C['Reserve Target Point'] = function(self, MovementPointRef) end
---@param DesiredRotation FRotator
---@param DesiredLocation FVector
function UWaterMovementComponent_BP_C:SetLerpValues(DesiredRotation, DesiredLocation) end
UWaterMovementComponent_BP_C['Handle Reverse Target Location'] = function(self, ) end
UWaterMovementComponent_BP_C['Destroy Owning Actor'] = function(self, ) end
function UWaterMovementComponent_BP_C:HandleHomePath() end
function UWaterMovementComponent_BP_C:WaterMoveToLocation() end
function UWaterMovementComponent_BP_C:HandleTargetLocation() end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyEnd_453AE84144A1E700D09AE99AB0FAB0B4(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyBegin_453AE84144A1E700D09AE99AB0FAB0B4(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnInterrupted_453AE84144A1E700D09AE99AB0FAB0B4(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnBlendOut_453AE84144A1E700D09AE99AB0FAB0B4(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnCompleted_453AE84144A1E700D09AE99AB0FAB0B4(NotifyName) end
---@param Loaded UObject
function UWaterMovementComponent_BP_C:OnLoaded_BE655AAD4CA3C043325A6DA19B470BA7(Loaded) end
---@param Loaded UObject
function UWaterMovementComponent_BP_C:OnLoaded_29D25A66401D9B18E46927B973D10449(Loaded) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyEnd_C3C4E0484E2F4390E2C597A337F0D12F(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyBegin_C3C4E0484E2F4390E2C597A337F0D12F(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnInterrupted_C3C4E0484E2F4390E2C597A337F0D12F(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnBlendOut_C3C4E0484E2F4390E2C597A337F0D12F(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnCompleted_C3C4E0484E2F4390E2C597A337F0D12F(NotifyName) end
---@param Loaded UObject
function UWaterMovementComponent_BP_C:OnLoaded_792A7E7348AA1466F27C9DB50E2AA712(Loaded) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyEnd_F0D1CBD2480EEFBA8E7D6D9183591B2D(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyBegin_F0D1CBD2480EEFBA8E7D6D9183591B2D(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnInterrupted_F0D1CBD2480EEFBA8E7D6D9183591B2D(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnBlendOut_F0D1CBD2480EEFBA8E7D6D9183591B2D(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnCompleted_F0D1CBD2480EEFBA8E7D6D9183591B2D(NotifyName) end
---@param Loaded UObject
function UWaterMovementComponent_BP_C:OnLoaded_65D49545483C1E9DD6372C9A77835892(Loaded) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyEnd_5D667E4B4D6ABED4C3A54A83AA54AF93(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyBegin_5D667E4B4D6ABED4C3A54A83AA54AF93(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnInterrupted_5D667E4B4D6ABED4C3A54A83AA54AF93(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnBlendOut_5D667E4B4D6ABED4C3A54A83AA54AF93(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnCompleted_5D667E4B4D6ABED4C3A54A83AA54AF93(NotifyName) end
---@param Loaded UObject
function UWaterMovementComponent_BP_C:OnLoaded_ED3D33AB44CD6301F484C680CC265B60(Loaded) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyEnd_105316CF498EACDAA697B1A54EA26114(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyBegin_105316CF498EACDAA697B1A54EA26114(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnInterrupted_105316CF498EACDAA697B1A54EA26114(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnBlendOut_105316CF498EACDAA697B1A54EA26114(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnCompleted_105316CF498EACDAA697B1A54EA26114(NotifyName) end
---@param Loaded UObject
function UWaterMovementComponent_BP_C:OnLoaded_B4456BD64F759B21A429ADB26A30E4A3(Loaded) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyEnd_CB284AB242F7278BFC17A68F6A1F49B9(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnNotifyBegin_CB284AB242F7278BFC17A68F6A1F49B9(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnInterrupted_CB284AB242F7278BFC17A68F6A1F49B9(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnBlendOut_CB284AB242F7278BFC17A68F6A1F49B9(NotifyName) end
---@param NotifyName FName
function UWaterMovementComponent_BP_C:OnCompleted_CB284AB242F7278BFC17A68F6A1F49B9(NotifyName) end
function UWaterMovementComponent_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function UWaterMovementComponent_BP_C:ReceiveTick(DeltaSeconds) end
---@param IsLoadedFromSave boolean
---@param IsGoingHome boolean
---@param CurrentWaterMovementPointIndex int32
function UWaterMovementComponent_BP_C:InitializeMovement(IsLoadedFromSave, IsGoingHome, CurrentWaterMovementPointIndex) end
function UWaterMovementComponent_BP_C:PlayHomeMontage() end
function UWaterMovementComponent_BP_C:PlayStoppingAnimation() end
function UWaterMovementComponent_BP_C:StartGoingReverese() end
---@param IsLoadedFromSave boolean
---@param CurrentWaterMovementPointIndex int32
function UWaterMovementComponent_BP_C:GoHome(IsLoadedFromSave, CurrentWaterMovementPointIndex) end
function UWaterMovementComponent_BP_C:GoHomeEvent() end
function UWaterMovementComponent_BP_C:ResumeMovement() end
---@param WaterMovementPoint AWaterMovementPoint
function UWaterMovementComponent_BP_C:OnWaterPointFreed_Event_0(WaterMovementPoint) end
---@param WaterVehicle AWaterVehicle
---@param WaterMovementPoint AWaterMovementPoint
function UWaterMovementComponent_BP_C:OnWaterPointReserved_Event_0(WaterVehicle, WaterMovementPoint) end
function UWaterMovementComponent_BP_C:ReachedDestination() end
function UWaterMovementComponent_BP_C:StartEngine() end
function UWaterMovementComponent_BP_C:StopEngine() end
---@param EndPlayReason EEndPlayReason::Type
function UWaterMovementComponent_BP_C:ReceiveEndPlay(EndPlayReason) end
function UWaterMovementComponent_BP_C:ForceEngineStop() end
---@param EntryPoint int32
function UWaterMovementComponent_BP_C:ExecuteUbergraph_WaterMovementComponent_BP(EntryPoint) end


