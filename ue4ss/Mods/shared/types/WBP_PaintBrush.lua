---@meta

---@class UWBP_PaintBrush_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ControllsHorizontal UVerticalBox
---@field F_1 UWBP_KeyBindedAction_C
---@field Image_278 UImage
---@field LEFTSHIFT_INTERACTION UWBP_KeyBindedAction_C
---@field MiniGames_Tutorial UMiniGames_Tutorial_C
---@field PressWASD_Overlay UOverlay
---@field StartPaintingInfoPad UOverlay
---@field ColorPanelWidget UWBP_PanelColors_C
---@field RMB_INTERACTION UWBP_KeyBindedAction_C
local UWBP_PaintBrush_C = {}

---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PaintBrush_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PaintBrush_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UWBP_PaintBrush_C:GetColorPallet() end
function UWBP_PaintBrush_C:Construct() end
---@param ActionName FName
function UWBP_PaintBrush_C:KeybindingChanged(ActionName) end
function UWBP_PaintBrush_C:KeybindingReset() end
function UWBP_PaintBrush_C:Destruct() end
function UWBP_PaintBrush_C:OnWallPaintStarted() end
function UWBP_PaintBrush_C:OnWallPaintEnded() end
function UWBP_PaintBrush_C:GamePadOpenColorPicker() end
---@param bNewGamepadMode boolean
function UWBP_PaintBrush_C:OnDeviceChanged(bNewGamepadMode) end
---@param isConstruct boolean
function UWBP_PaintBrush_C:BindOnDeviceChanged(isConstruct) end
---@param EntryPoint int32
function UWBP_PaintBrush_C:ExecuteUbergraph_WBP_PaintBrush(EntryPoint) end


