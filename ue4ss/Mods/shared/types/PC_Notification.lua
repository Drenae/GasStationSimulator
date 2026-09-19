---@meta

---@class UPC_Notification_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field BottomImg UImage
---@field TopImg UImage
---@field IsGreen boolean
local UPC_Notification_C = {}

function UPC_Notification_C:Construct() end
---@param EntryPoint int32
function UPC_Notification_C:ExecuteUbergraph_PC_Notification(EntryPoint) end


