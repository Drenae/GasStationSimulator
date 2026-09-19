---@meta

---@class UWBP_QuestInfo_C : UQuestInfoWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Outro UWidgetAnimation
---@field Intro UWidgetAnimation
---@field Complited UWidgetAnimation
---@field MainHolder UVerticalBox
---@field Progress_Bar_Sizer USizeBox
local UWBP_QuestInfo_C = {}

function UWBP_QuestInfo_C:Construct() end
function UWBP_QuestInfo_C:Destruct() end
---@param ActionName FName
function UWBP_QuestInfo_C:KeyBindChanged(ActionName) end
function UWBP_QuestInfo_C:KeyBindReset() end
---@param EntryPoint int32
function UWBP_QuestInfo_C:ExecuteUbergraph_WBP_QuestInfo(EntryPoint) end


