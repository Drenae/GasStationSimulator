---@meta

---@class UWBP_GameFinalFade_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnim UWidgetAnimation
local UWBP_GameFinalFade_C = {}

function UWBP_GameFinalFade_C:TriggerEndScreen() end
---@param Animation UWidgetAnimation
function UWBP_GameFinalFade_C:OnAnimationFinished(Animation) end
function UWBP_GameFinalFade_C:Construct() end
---@param EntryPoint int32
function UWBP_GameFinalFade_C:ExecuteUbergraph_WBP_GameFinalFade(EntryPoint) end


