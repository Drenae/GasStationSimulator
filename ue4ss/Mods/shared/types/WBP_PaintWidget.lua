---@meta

---@class UWBP_PaintWidget_C : UAdditionalKeyItemWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Overlay_20 UOverlay
---@field WBP_PanelColors UWBP_PanelColors_C
---@field ColorREF UWBP_PanelColors_C
---@field IsGamepad boolean
local UWBP_PaintWidget_C = {}

---@param MyGeometry FGeometry
---@param InFocusEvent FFocusEvent
---@return FEventReply
function UWBP_PaintWidget_C:OnFocusReceived(MyGeometry, InFocusEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PaintWidget_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_PaintWidget_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UWBP_PaintWidget_C:GamePadOpenColorPicker() end
function UWBP_PaintWidget_C:GetColorPallet() end
function UWBP_PaintWidget_C:Destruct() end
---@param bNewGamepadMode boolean
function UWBP_PaintWidget_C:OnDeviceChanged(bNewGamepadMode) end
---@param isConstruct boolean
function UWBP_PaintWidget_C:BindOnDeviceChanged(isConstruct) end
function UWBP_PaintWidget_C:Construct() end
function UWBP_PaintWidget_C:OnInitialized() end
---@param IsGamepad boolean
function UWBP_PaintWidget_C:OnCloseColorPalletter(IsGamepad) end
---@param EntryPoint int32
function UWBP_PaintWidget_C:ExecuteUbergraph_WBP_PaintWidget(EntryPoint) end


