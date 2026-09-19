---@meta

---@class UAllertMessage_C : UGSSAlertWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field alert UTextBlock
---@field CanvasPanel_0 UCanvasPanel
---@field PressKeyOverlay UOverlay
---@field AlertInfo FText
---@field Time float
---@field NewVar_0 FTimerHandle
---@field TextColor FLinearColor
local UAllertMessage_C = {}

---@param InText FText
function UAllertMessage_C:UpdateText(InText) end
function UAllertMessage_C:Construct() end
function UAllertMessage_C:Destroy() end
function UAllertMessage_C:Destroy_LMB() end
---@param TextToEnter FText
---@param TimeToShow float
function UAllertMessage_C:SetAlertValues(TextToEnter, TimeToShow) end
---@param EntryPoint int32
function UAllertMessage_C:ExecuteUbergraph_AllertMessage(EntryPoint) end


