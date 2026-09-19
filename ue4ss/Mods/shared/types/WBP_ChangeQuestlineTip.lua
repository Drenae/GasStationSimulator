---@meta

---@class UWBP_ChangeQuestlineTip_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FollowNextQuestLineTip UHorizontalBox
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
local UWBP_ChangeQuestlineTip_C = {}

function UWBP_ChangeQuestlineTip_C:ShowMultipleQuestlinesInput() end
---@param ActionName FName
function UWBP_ChangeQuestlineTip_C:KeyBindChanged(ActionName) end
function UWBP_ChangeQuestlineTip_C:KeyBindReset() end
function UWBP_ChangeQuestlineTip_C:OnInitialized() end
function UWBP_ChangeQuestlineTip_C:Destruct() end
---@param EntryPoint int32
function UWBP_ChangeQuestlineTip_C:ExecuteUbergraph_WBP_ChangeQuestlineTip(EntryPoint) end


