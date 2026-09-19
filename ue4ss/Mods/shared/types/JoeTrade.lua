---@meta

---@class UJoeTrade_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field cancel_hover UWidgetAnimation
---@field trade_hover UWidgetAnimation
---@field ConstructAnim UWidgetAnimation
---@field Cancel_ICON UImage
---@field Cancel_Overlay UOverlay
---@field CloseButton UCloseButton_C
---@field Confirm_ICON UImage
---@field Confirm_Overlay UOverlay
---@field HorizontalBox_buttons UHorizontalBox
---@field Image UImage
---@field Image_0 UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_184 UImage
---@field Image_279 UImage
---@field JoesItem UJoesItem_C
---@field JoesItem_1 UJoesItem_C
---@field No UDragoButton
---@field Overlay_blocker UOverlay
---@field WBP_KeyHint_Cancel UWBP_KeyHint_C
---@field WBP_KeyHint_Confirm UWBP_KeyHint_C
---@field Yes UDragoButton
---@field JoesItemIcon UTexture2D
---@field JoesItemName FText
---@field IsPendingRemove boolean
local UJoeTrade_C = {}

---@param IsGamepadConnected boolean
function UJoeTrade_C:OnGamepadConnected(IsGamepadConnected) end
function UJoeTrade_C:SetInputs() end
function UJoeTrade_C:Finished_27A6D412492A35BF01C9B58176AB4D3A() end
function UJoeTrade_C:Finished_2DF5A08D4550E89EDBB56FA33C8B50B2() end
---@param Loaded UObject
function UJoeTrade_C:OnLoaded_E8BE1A0843AC2B036B8B9F9DE17C9871(Loaded) end
function UJoeTrade_C:Construct() end
function UJoeTrade_C:BndEvt__JoeTrade_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UJoeTrade_C:BndEvt__JoeTrade_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
function UJoeTrade_C:BndEvt__JoeTrade_Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UJoeTrade_C:BndEvt__JoeTrade_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UJoeTrade_C:BndEvt__JoeTrade_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UJoeTrade_C:BndEvt__JoeTrade_No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UJoeTrade_C:OnEscape() end
function UJoeTrade_C:BndEvt__JoeTrade_CloseButton_K2Node_ComponentBoundEvent_6_ClickButton__DelegateSignature() end
function UJoeTrade_C:ClickYes() end
---@param EntryPoint int32
function UJoeTrade_C:ExecuteUbergraph_JoeTrade(EntryPoint) end


