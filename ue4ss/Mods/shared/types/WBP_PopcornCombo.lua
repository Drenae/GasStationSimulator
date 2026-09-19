---@meta

---@class UWBP_PopcornCombo_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CurrentComboTextValue UTextBlock
---@field HighScoreTextValue UTextBlock
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field RenownMultiplierValue UTextBlock
local UWBP_PopcornCombo_C = {}

function UWBP_PopcornCombo_C:Refresh() end
function UWBP_PopcornCombo_C:Construct() end
---@param NewDirty float
function UWBP_PopcornCombo_C:OnNewDirty(NewDirty) end
---@param EntryPoint int32
function UWBP_PopcornCombo_C:ExecuteUbergraph_WBP_PopcornCombo(EntryPoint) end


