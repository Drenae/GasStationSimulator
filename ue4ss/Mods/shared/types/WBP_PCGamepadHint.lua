---@meta

---@class UWBP_PCGamepadHint_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HintText UTextBlock
---@field WBP_KeyHint_RightButton_1 UWBP_KeyHint_C
---@field Key FKey
---@field ['Icon Size'] FVector2D
---@field InHintText FText
local UWBP_PCGamepadHint_C = {}

function UWBP_PCGamepadHint_C:SetData() end
---@param IsDesignTime boolean
function UWBP_PCGamepadHint_C:PreConstruct(IsDesignTime) end
function UWBP_PCGamepadHint_C:Construct() end
---@param EntryPoint int32
function UWBP_PCGamepadHint_C:ExecuteUbergraph_WBP_PCGamepadHint(EntryPoint) end


