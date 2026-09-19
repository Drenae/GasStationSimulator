---@meta

---@class UBP_LockPickingComponent_C : UActorComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LockInfoHUD UWBP_LockpickingHUD_C
---@field Lock UBP_LockComponent_C
---@field Lockpicks int32
---@field Busy boolean
---@field MaxLockpicks int32
---@field Settings FLockpicking_Settings
---@field FocusedActor AActor
---@field TickTimer FTimerHandle
local UBP_LockPickingComponent_C = {}

---@param CheckedActor AActor
---@param CanBe boolean
function UBP_LockPickingComponent_C:CanEverBeLockpicked(CheckedActor, CanBe) end
---@param ActiveTaskClass TSubclassOf<UTaskBase>
---@param LockpickingForbidden boolean
function UBP_LockPickingComponent_C:IsTaskForbadeToLockpick(ActiveTaskClass, LockpickingForbidden) end
function UBP_LockPickingComponent_C:ResetBindings() end
---@param Unlocked boolean
---@param LockedActor AActor
function UBP_LockPickingComponent_C:CheckForLock(Unlocked, LockedActor) end
function UBP_LockPickingComponent_C:ReceiveBeginPlay() end
function UBP_LockPickingComponent_C:TraceForLock() end
function UBP_LockPickingComponent_C:Picklock() end
---@param EndPlayReason EEndPlayReason::Type
function UBP_LockPickingComponent_C:ReceiveEndPlay(EndPlayReason) end
---@param bPauseEnabled boolean
function UBP_LockPickingComponent_C:OnGamePaused(bPauseEnabled) end
---@param EntryPoint int32
function UBP_LockPickingComponent_C:ExecuteUbergraph_BP_LockPickingComponent(EntryPoint) end


