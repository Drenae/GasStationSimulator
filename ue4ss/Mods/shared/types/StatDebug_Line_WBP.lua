---@meta

---@class UStatDebug_Line_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Amount UTextBlock
---@field Name UTextBlock
---@field NameText FString
---@field AmountText float
local UStatDebug_Line_WBP_C = {}

function UStatDebug_Line_WBP_C:Construct() end
---@param EntryPoint int32
function UStatDebug_Line_WBP_C:ExecuteUbergraph_StatDebug_Line_WBP(EntryPoint) end


