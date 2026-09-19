---@meta

---@class USide_Notification_WBP_C : USideNotification
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field CanvasPanel_0 UCanvasPanel
---@field Image_125 UImage
---@field Image_127 UImage
---@field Image_414 UImage
---@field New_Icon UImage
---@field NotificationPrefix UTextBlock
---@field NotificationSofix UTextBlock
---@field SetSofix FText
---@field SetPrefix FText
---@field SetIcon UTexture2D
---@field Amount_0 int32
---@field QuestVisibility TSoftClassPtr<UGSSQuest>
local USide_Notification_WBP_C = {}

function USide_Notification_WBP_C:Construct() end
function USide_Notification_WBP_C:OnUpdateNotification() end
---@param EntryPoint int32
function USide_Notification_WBP_C:ExecuteUbergraph_Side_Notification_WBP(EntryPoint) end


