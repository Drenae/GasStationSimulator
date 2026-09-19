---@meta

---@class UBP_TrendingEvent_C : UTrendingEvent
---@field UberGraphFrame FPointerToUberGraphFrame
local UBP_TrendingEvent_C = {}

---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UBP_TrendingEvent_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
function UBP_TrendingEvent_C:FinishEvent() end
---@param EntryPoint int32
function UBP_TrendingEvent_C:ExecuteUbergraph_BP_TrendingEvent(EntryPoint) end


