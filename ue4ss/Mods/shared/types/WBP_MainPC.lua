---@meta

---@class UWBP_MainPC_C : UMainPC
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeIn UWidgetAnimation
---@field FadeOut UWidgetAnimation
---@field Image_22 UImage
---@field Money_Widget_WBP UMoney_Widget_WBP_C
---@field PC_ExitButton_WBP UPC_ExitButton_WBP_C
---@field WBP_GamepadHints UWBP_GamepadHintsBlock_C
---@field WBP_KeyHint_LeftShoulder UWBP_KeyHint_C
---@field WBP_KeyHint_RightButton UWBP_KeyHint_C
---@field WBP_KeyHint_Up_RightShoulder UWBP_KeyHint_C
---@field FromRight boolean
---@field TopMenuIndex int32
---@field IsAnyChildEnabled boolean
local UWBP_MainPC_C = {}

---@param Hints TMap<FKey, FText>
function UWBP_MainPC_C:CreateAdditionalHints(Hints) end
---@param ShowAdditionalHints boolean
function UWBP_MainPC_C:SetAdditionalHintsVisibility(ShowAdditionalHints) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_MainPC_C:OnPreviewKeyDown(MyGeometry, InKeyEvent) end
---@param Visible boolean
function UWBP_MainPC_C:HintsVisibility(Visible) end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UWBP_MainPC_C:OnKeyDown(MyGeometry, InKeyEvent) end
---@param Input FKeyEvent
---@param ClickedOther boolean
function UWBP_MainPC_C:TopMenuGamePadNavigation(Input, ClickedOther) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWBP_MainPC_C:OnMouseButtonUp(MyGeometry, MouseEvent) end
function UWBP_MainPC_C:Finished_66CB033E4C18546B6C5D9A95ABC4FEB6() end
function UWBP_MainPC_C:CustomFadeOut() end
---@param KeyEvent FKeyEvent
function UWBP_MainPC_C:TopMenuHandle(KeyEvent) end
function UWBP_MainPC_C:GamePadExitButton() end
function UWBP_MainPC_C:Construct() end
function UWBP_MainPC_C:Destruct() end
function UWBP_MainPC_C:CustomEvent_0() end
function UWBP_MainPC_C:CustomEscape() end
---@param bNewGamepadMode boolean
function UWBP_MainPC_C:OnDeviceChange(bNewGamepadMode) end
---@param EntryPoint int32
function UWBP_MainPC_C:ExecuteUbergraph_WBP_MainPC(EntryPoint) end


