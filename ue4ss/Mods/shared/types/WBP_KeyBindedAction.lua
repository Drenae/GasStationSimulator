---@meta

---@class UWBP_KeyBindedAction_C : UKeyBindedAction
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BindedKeyTXT UTextBlock
---@field BindedKeyTXT_1 UTextBlock
---@field BindedKeyTXT_2 UTextBlock
---@field KeyBindIMG UImage
---@field KeyHorizontal_TXT UHorizontalBox
---@field SetKeyText FName
---@field IsHavingAxisScale_0 boolean
---@field AxisScale float
---@field GSSCharREF AGSSPlayerCharacter
---@field KeyColor FSlateColor
local UWBP_KeyBindedAction_C = {}

---@param InText FText
function UWBP_KeyBindedAction_C:SetupKeyboardKey(InText) end
---@param InText FText
function UWBP_KeyBindedAction_C:SetupGamePadIMG(InText) end
function UWBP_KeyBindedAction_C:Construct() end
function UWBP_KeyBindedAction_C:CheckKeyInfo() end
---@param ActionKeyName FName
---@param AxisScale float
function UWBP_KeyBindedAction_C:UpdateKeyInfo(ActionKeyName, AxisScale) end
function UWBP_KeyBindedAction_C:CheckKeyInfo_CPP() end
---@param EntryPoint int32
function UWBP_KeyBindedAction_C:ExecuteUbergraph_WBP_KeyBindedAction(EntryPoint) end


