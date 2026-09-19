---@meta

---@class UWBP_GamepadHintsBlock_C : UUserWidget
---@field MainBox UHorizontalBox
---@field WBP_KeyHint_RightButton_1 UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton_2 UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton_3 UWBP_KeyHint_C
---@field Hints TMap<FKey, FText>
local UWBP_GamepadHintsBlock_C = {}

function UWBP_GamepadHintsBlock_C:Clear() end
---@param Hints TMap<FKey, FText>
function UWBP_GamepadHintsBlock_C:CreateAdditionalHints(Hints) end


