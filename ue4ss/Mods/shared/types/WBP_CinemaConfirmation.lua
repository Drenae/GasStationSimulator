---@meta

---@class UWBP_CinemaConfirmation_C : UGSSInnerWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_773 UImage
---@field Tab_Info UOverlay
---@field WBP_KeyBindedAction_1 UWBP_KeyBindedAction_C
local UWBP_CinemaConfirmation_C = {}

function UWBP_CinemaConfirmation_C:Construct() end
function UWBP_CinemaConfirmation_C:Destruct() end
---@param ActionName FName
function UWBP_CinemaConfirmation_C:KeyBindChanged(ActionName) end
function UWBP_CinemaConfirmation_C:KeyBindReset() end
---@param EntryPoint int32
function UWBP_CinemaConfirmation_C:ExecuteUbergraph_WBP_CinemaConfirmation(EntryPoint) end


