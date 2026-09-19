---@meta

---@class UWBP_Grinder_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ControllsHorizontal UVerticalBox
---@field LMB_Clean UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field GrinderRef APressureWasher
local UWBP_Grinder_C = {}

---@param ActionName FName
function UWBP_Grinder_C:OnKeyChanged(ActionName) end
function UWBP_Grinder_C:OnKeyReset() end
function UWBP_Grinder_C:Construct() end
function UWBP_Grinder_C:Destruct() end
function UWBP_Grinder_C:OnTab() end
---@param EntryPoint int32
function UWBP_Grinder_C:ExecuteUbergraph_WBP_Grinder(EntryPoint) end


