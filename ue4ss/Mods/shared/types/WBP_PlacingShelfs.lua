---@meta

---@class UWBP_PlacingShelfs_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TutAnim UWidgetAnimation
---@field ControllsHorizontal UVerticalBox
---@field E_ROTATE UWBP_KeyBindedAction_C
---@field E_ROTATE_TUT UWBP_KeyBindedAction_C
---@field LeftArrow UImage
---@field LeftArrowDescription UOverlay
---@field LPM_INTERACTION UWBP_KeyBindedAction_C
---@field Q_ROTATE UWBP_KeyBindedAction_C
---@field Q_ROTATE_TUT UWBP_KeyBindedAction_C
---@field RightArrow UImage
---@field RightArrowDescription UOverlay
---@field RMB_INTERACTION UWBP_KeyBindedAction_C
---@field RMB_INTERACTION_1 UWBP_KeyBindedAction_C
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
local UWBP_PlacingShelfs_C = {}

---@param ActionName FName
function UWBP_PlacingShelfs_C:KeybindingChanged(ActionName) end
function UWBP_PlacingShelfs_C:KeybindingsReset() end
function UWBP_PlacingShelfs_C:Destruct() end
function UWBP_PlacingShelfs_C:Construct() end
---@param EntryPoint int32
function UWBP_PlacingShelfs_C:ExecuteUbergraph_WBP_PlacingShelfs(EntryPoint) end


