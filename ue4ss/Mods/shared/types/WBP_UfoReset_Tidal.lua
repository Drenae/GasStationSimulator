---@meta

---@class UWBP_UfoReset_Tidal_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OnHovConfirm UWidgetAnimation
---@field OnHovCancel UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
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
---@field UFO AUfoResetButton_BP_C
local UWBP_UfoReset_Tidal_C = {}

---@param IsGamepadConnected boolean
function UWBP_UfoReset_Tidal_C:OnGamepadConnected(IsGamepadConnected) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_UfoReset_Tidal_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
function UWBP_UfoReset_Tidal_C:ResetCarLifts() end
function UWBP_UfoReset_Tidal_C:BndEvt__Yes_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_UfoReset_Tidal_C:BndEvt__No_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UWBP_UfoReset_Tidal_C:Construct() end
function UWBP_UfoReset_Tidal_C:BndEvt__Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_UfoReset_Tidal_C:BndEvt__Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UWBP_UfoReset_Tidal_C:BndEvt__No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_UfoReset_Tidal_C:BndEvt__No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UWBP_UfoReset_Tidal_C:CustomEvent_0() end
function UWBP_UfoReset_Tidal_C:CustomEvent_1() end
function UWBP_UfoReset_Tidal_C:ClickYes() end
function UWBP_UfoReset_Tidal_C:Destruct() end
function UWBP_UfoReset_Tidal_C:ShowHideGamePadHint() end
---@param EntryPoint int32
function UWBP_UfoReset_Tidal_C:ExecuteUbergraph_WBP_UfoReset_Tidal(EntryPoint) end


