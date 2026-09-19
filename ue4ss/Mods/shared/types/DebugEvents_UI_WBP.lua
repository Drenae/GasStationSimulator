---@meta

---@class UDebugEvents_UI_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field EventDebugLine_WBP UEventDebugLine_WBP_C
---@field EventList UVerticalBox
local UDebugEvents_UI_WBP_C = {}

function UDebugEvents_UI_WBP_C:Construct() end
---@param EntryPoint int32
function UDebugEvents_UI_WBP_C:ExecuteUbergraph_DebugEvents_UI_WBP(EntryPoint) end


