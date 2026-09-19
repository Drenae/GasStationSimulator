---@meta

---@class UWBP_Multitool_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ControllsHorizontal UVerticalBox
---@field LMB_Clean UWBP_KeyBindedAction_C
---@field LMB_Clean_1 UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field MultitoolRef AJunkyardMultitool
local UWBP_Multitool_C = {}

---@param ActionName FName
function UWBP_Multitool_C:OnKeyChanged(ActionName) end
function UWBP_Multitool_C:OnKeyReset() end
function UWBP_Multitool_C:Construct() end
function UWBP_Multitool_C:Destruct() end
function UWBP_Multitool_C:OnTab() end
---@param EntryPoint int32
function UWBP_Multitool_C:ExecuteUbergraph_WBP_Multitool(EntryPoint) end


