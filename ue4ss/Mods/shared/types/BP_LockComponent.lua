---@meta

---@class UBP_LockComponent_C : UActorComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Locked?'] boolean
---@field LockDifficulty int32
---@field ObjectName FText
---@field AvailableLockPicks int32
local UBP_LockComponent_C = {}

---@param HUD UWBP_LockpickingHUD_C
---@param IsLockingForbade boolean
function UBP_LockComponent_C:SetHUDInfo(HUD, IsLockingForbade) end
---@param EntryPoint int32
function UBP_LockComponent_C:ExecuteUbergraph_BP_LockComponent(EntryPoint) end


