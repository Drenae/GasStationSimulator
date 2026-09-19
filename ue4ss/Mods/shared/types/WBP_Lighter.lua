---@meta

---@class UWBP_Lighter_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TooFast UWidgetAnimation
---@field ControllsHorizontal UVerticalBox
---@field Image_67 UImage
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field Overlay_0 UOverlay
---@field ProgressBar_0 UProgressBar
---@field RMB_Right UWBP_KeyBindedAction_C
---@field LighterRef ABP_Lighter_C
local UWBP_Lighter_C = {}

---@return ESlateVisibility
function UWBP_Lighter_C:GetVisibility_0() end
---@param ActionName FName
function UWBP_Lighter_C:OnKeyChanged(ActionName) end
function UWBP_Lighter_C:OnKeyReset() end
function UWBP_Lighter_C:Construct() end
function UWBP_Lighter_C:Destruct() end
function UWBP_Lighter_C:OnTab() end
---@param EntryPoint int32
function UWBP_Lighter_C:ExecuteUbergraph_WBP_Lighter(EntryPoint) end


