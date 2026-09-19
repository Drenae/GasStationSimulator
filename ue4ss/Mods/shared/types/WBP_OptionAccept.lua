---@meta

---@class UWBP_OptionAccept_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Cancel_ICON UImage
---@field Cancel_Overlay UOverlay
---@field Canvas_Panel_Area UCanvasPanel
---@field Confirm_ICON UImage
---@field Confirm_Overlay UOverlay
---@field Image UImage
---@field Image_1 UImage
---@field Image_279 UImage
---@field Image_827 UImage
---@field No UDragoButton
---@field WBP_KeyHint_Confirm UWBP_KeyHint_C
---@field WBP_KeyHint_Confirm_1 UWBP_KeyHint_C
---@field Yes UDragoButton
---@field Face UTexture2D
local UWBP_OptionAccept_C = {}

---@param IsGamepadConnected boolean
function UWBP_OptionAccept_C:OnGamepadConnected(IsGamepadConnected) end
---@param IsDesignTime boolean
function UWBP_OptionAccept_C:PreConstruct(IsDesignTime) end
function UWBP_OptionAccept_C:Construct() end
---@param EntryPoint int32
function UWBP_OptionAccept_C:ExecuteUbergraph_WBP_OptionAccept(EntryPoint) end


