---@meta

---@class UEventDebugLine_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EventName UTextBlock
---@field EventTime UTextBlock
---@field EventRef UGSSEvent
---@field TimeSinceUpdate float
local UEventDebugLine_WBP_C = {}

---@param MyGeometry FGeometry
---@param InDeltaTime float
function UEventDebugLine_WBP_C:Tick(MyGeometry, InDeltaTime) end
function UEventDebugLine_WBP_C:Construct() end
function UEventDebugLine_WBP_C:UpdateValue() end
---@param EntryPoint int32
function UEventDebugLine_WBP_C:ExecuteUbergraph_EventDebugLine_WBP(EntryPoint) end


