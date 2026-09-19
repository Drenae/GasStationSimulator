---@meta

---@class UWBP_CustomerDie_Notification_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Open UWidgetAnimation
---@field WingsFlying UWidgetAnimation
---@field Equipment_Icon UImage
---@field Image_63 UImage
---@field LWing_Image UImage
---@field RWing_Image UImage
---@field Skull_Image UImage
---@field IconToAssign UTexture2D
---@field Handle FTimerHandle
---@field DisappearTimer FTimerHandle
---@field TimeToDisappear float
local UWBP_CustomerDie_Notification_C = {}

function UWBP_CustomerDie_Notification_C:Construct() end
---@param Reason FString
function UWBP_CustomerDie_Notification_C:OnDie(Reason) end
function UWBP_CustomerDie_Notification_C:OnCloseFinished() end
---@param EntryPoint int32
function UWBP_CustomerDie_Notification_C:ExecuteUbergraph_WBP_CustomerDie_Notification(EntryPoint) end


