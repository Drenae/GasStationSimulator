---@meta

---@class UWBP_SequenceSkip_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field WBP_KeyBindedAction UWBP_KeyBindedAction_C
---@field OnSkipPressed FWBP_SequenceSkip_COnSkipPressed
local UWBP_SequenceSkip_C = {}

function UWBP_SequenceSkip_C:Construct() end
function UWBP_SequenceSkip_C:SkipCutscene() end
function UWBP_SequenceSkip_C:Destruct() end
---@param EntryPoint int32
function UWBP_SequenceSkip_C:ExecuteUbergraph_WBP_SequenceSkip(EntryPoint) end
function UWBP_SequenceSkip_C:OnSkipPressed__DelegateSignature() end


