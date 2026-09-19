---@meta

---@class UWBP_CraneBindedAction_C : UKeyBindedAction
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BindedKeyTXT UTextBlock
---@field KeyBindIMG UImage
---@field KeyHorizontal_TXT UHorizontalBox
---@field SetKeyText FName
---@field IsHavingAxisScale_0 boolean
---@field AxisScale float
---@field GSSCharREF AGSSPlayerCharacter
---@field NewVar_0 boolean
---@field FontSize int32
---@field ImageSize float
---@field TextRenderTranslation FVector2D
local UWBP_CraneBindedAction_C = {}

---@param InText FText
function UWBP_CraneBindedAction_C:SetupKeyboardKey(InText) end
---@param InText FText
function UWBP_CraneBindedAction_C:SetupGamePadIMG(InText) end
function UWBP_CraneBindedAction_C:Construct() end
function UWBP_CraneBindedAction_C:CheckKeyInfo() end
---@param ActionKeyName FName
---@param AxisScale float
function UWBP_CraneBindedAction_C:UpdateKeyInfo(ActionKeyName, AxisScale) end
function UWBP_CraneBindedAction_C:CheckKeyInfo_CPP() end
---@param ActionName FName
function UWBP_CraneBindedAction_C:KeyBindChanged(ActionName) end
function UWBP_CraneBindedAction_C:Destruct() end
---@param IsDesignTime boolean
function UWBP_CraneBindedAction_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_CraneBindedAction_C:ExecuteUbergraph_WBP_CraneBindedAction(EntryPoint) end


