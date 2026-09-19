---@meta

---@class UWBP_ClosedDLCText_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DLCClosed UTextBlock
---@field ['In Text'] FText
---@field FontSize int32
local UWBP_ClosedDLCText_C = {}

---@param IsDesignTime boolean
function UWBP_ClosedDLCText_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_ClosedDLCText_C:ExecuteUbergraph_WBP_ClosedDLCText(EntryPoint) end


