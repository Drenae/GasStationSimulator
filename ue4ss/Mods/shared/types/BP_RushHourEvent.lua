---@meta

---@class UBP_RushHourEvent_C : URushHourEvent
---@field UberGraphFrame FPointerToUberGraphFrame
local UBP_RushHourEvent_C = {}

---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UBP_RushHourEvent_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
function UBP_RushHourEvent_C:FinishEvent() end
---@param bEventEnabled boolean
function UBP_RushHourEvent_C:ActivateEvent(bEventEnabled) end
---@param World UWorld
---@param bEventEnabled boolean
function UBP_RushHourEvent_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UBP_RushHourEvent_C:ExecuteUbergraph_BP_RushHourEvent(EntryPoint) end


