---@meta

---@class UWBP_NewFameLevelPopup_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CloseAnim UWidgetAnimation
---@field OpenAnim UWidgetAnimation
---@field LvlUnlocked UTextBlock
---@field MainOverlay UOverlay
local UWBP_NewFameLevelPopup_C = {}

function UWBP_NewFameLevelPopup_C:Finished_789D055C472153F15A4E1482E59AF1D9() end
function UWBP_NewFameLevelPopup_C:Finished_AEE68886459F3ACF7891EAA1D9D6E9CD() end
function UWBP_NewFameLevelPopup_C:Construct() end
---@param NewLevel int32
function UWBP_NewFameLevelPopup_C:OnNewLevelUnlocked_Event(NewLevel) end
---@param EntryPoint int32
function UWBP_NewFameLevelPopup_C:ExecuteUbergraph_WBP_NewFameLevelPopup(EntryPoint) end


