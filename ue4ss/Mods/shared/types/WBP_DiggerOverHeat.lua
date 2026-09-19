---@meta

---@class UWBP_DiggerOverHeat_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
---@field Image_115 UImage
---@field Image_233 UImage
---@field PressKeyOverlay UOverlay
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
local UWBP_DiggerOverHeat_C = {}

function UWBP_DiggerOverHeat_C:Construct() end
function UWBP_DiggerOverHeat_C:Destruct() end
---@param ActionName FName
function UWBP_DiggerOverHeat_C:KeyBindChanged(ActionName) end
function UWBP_DiggerOverHeat_C:KeyBindReset() end
---@param EntryPoint int32
function UWBP_DiggerOverHeat_C:ExecuteUbergraph_WBP_DiggerOverHeat(EntryPoint) end


