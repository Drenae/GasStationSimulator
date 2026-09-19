---@meta

---@class UEvent_FinishVolcanoEruption_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local UEvent_FinishVolcanoEruption_C = {}

---@param IsTimeOver boolean
function UEvent_FinishVolcanoEruption_C:UpdateTime(IsTimeOver) end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_FinishVolcanoEruption_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_FinishVolcanoEruption_C:OnGameTimeUpdated_Event(UpdatedTime) end
---@param EntryPoint int32
function UEvent_FinishVolcanoEruption_C:ExecuteUbergraph_Event_FinishVolcanoEruption(EntryPoint) end


