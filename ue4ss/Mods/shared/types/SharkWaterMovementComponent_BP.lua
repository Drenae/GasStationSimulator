---@meta

---@class USharkWaterMovementComponent_BP_C : UWaterMovementComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AttackPlaying boolean
---@field StartingLocation FVector
---@field ZLerpCurve UCurveFloat
---@field bLerpZ boolean
---@field Time float
---@field LerpZStartLocation FVector
local USharkWaterMovementComponent_BP_C = {}

---@param DeltaTime float
function USharkWaterMovementComponent_BP_C:LerpToProperZ(DeltaTime) end
function USharkWaterMovementComponent_BP_C:HandleSharkDeath() end
function USharkWaterMovementComponent_BP_C:StartHunting() end
---@param ShouldContinueHunting boolean
function USharkWaterMovementComponent_BP_C:ShouldContinueHunting(ShouldContinueHunting) end
function USharkWaterMovementComponent_BP_C:DestroyTargetActor() end
function USharkWaterMovementComponent_BP_C:DestroyOwnerActor() end
function USharkWaterMovementComponent_BP_C:GoHome() end
---@param AsPilots_Anim_Instance UPilotsAnimInstance
---@param IsValid boolean
function USharkWaterMovementComponent_BP_C:GetAnimInstance(AsPilots_Anim_Instance, IsValid) end
function USharkWaterMovementComponent_BP_C:PositionForAttack() end
function USharkWaterMovementComponent_BP_C:WaterMoveToLocation() end
USharkWaterMovementComponent_BP_C['Handle Target Point'] = function(self, ) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnNotifyEnd_8AB22E654710F70CC35C0EB1A49AB0B0(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnNotifyBegin_8AB22E654710F70CC35C0EB1A49AB0B0(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnInterrupted_8AB22E654710F70CC35C0EB1A49AB0B0(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnBlendOut_8AB22E654710F70CC35C0EB1A49AB0B0(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnCompleted_8AB22E654710F70CC35C0EB1A49AB0B0(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnNotifyEnd_ED7C11964B862A72C21D16BC1FA3D657(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnNotifyBegin_ED7C11964B862A72C21D16BC1FA3D657(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnInterrupted_ED7C11964B862A72C21D16BC1FA3D657(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnBlendOut_ED7C11964B862A72C21D16BC1FA3D657(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnCompleted_ED7C11964B862A72C21D16BC1FA3D657(NotifyName) end
---@param Loaded UObject
function USharkWaterMovementComponent_BP_C:OnLoaded_ED9E080940B1F57ECCBB7B854879BF5E(Loaded) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnNotifyEnd_A49A4FD14A01C11179D08FA17D4C594F(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnNotifyBegin_A49A4FD14A01C11179D08FA17D4C594F(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnInterrupted_A49A4FD14A01C11179D08FA17D4C594F(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnBlendOut_A49A4FD14A01C11179D08FA17D4C594F(NotifyName) end
---@param NotifyName FName
function USharkWaterMovementComponent_BP_C:OnCompleted_A49A4FD14A01C11179D08FA17D4C594F(NotifyName) end
function USharkWaterMovementComponent_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function USharkWaterMovementComponent_BP_C:ReceiveTick(DeltaSeconds) end
---@param IsLoadedFromSave boolean
---@param IsGoingHome boolean
---@param CurrentWaterMovementPointIndex int32
function USharkWaterMovementComponent_BP_C:InitializeMovement(IsLoadedFromSave, IsGoingHome, CurrentWaterMovementPointIndex) end
function USharkWaterMovementComponent_BP_C:StartAttack() end
function USharkWaterMovementComponent_BP_C:HomeMontage() end
function USharkWaterMovementComponent_BP_C:PlayAttackAnimation() end
---@param EntryPoint int32
function USharkWaterMovementComponent_BP_C:ExecuteUbergraph_SharkWaterMovementComponent_BP(EntryPoint) end


