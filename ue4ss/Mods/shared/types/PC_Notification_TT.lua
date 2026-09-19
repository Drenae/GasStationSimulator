---@meta

---@class UPC_Notification_TT_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field Description_TXT UTextBlock
---@field PressKeyOverlay UOverlay
---@field SetDescription FText
local UPC_Notification_TT_C = {}

function UPC_Notification_TT_C:Construct() end
---@param EntryPoint int32
function UPC_Notification_TT_C:ExecuteUbergraph_PC_Notification_TT(EntryPoint) end


