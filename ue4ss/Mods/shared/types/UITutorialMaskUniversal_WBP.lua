---@meta

---@class UUITutorialMaskUniversal_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ShopTip UWidgetAnimation
---@field Button_69 UButton
---@field CanvasPanel_0 UCanvasPanel
---@field GamePadHint UHorizontalBox
---@field Image UImage
---@field Image_24 UImage
---@field Image_75 UImage
---@field Image_143 UImage
---@field Overlay_Tip UOverlay
---@field TextBlock UTextBlock
---@field TextBlock_65 UTextBlock
---@field WBP_KeyHint_ButtonLeft UWBP_KeyHint_C
---@field ViewportX int32
---@field ViewportY int32
---@field RadiusTo float
---@field Widget UWidget
---@field TipPositionX float
---@field TipPositionY float
---@field NextTut FUITutorialMaskUniversal_WBP_CNextTut
---@field ['In Text'] FText
---@field Title FText
---@field LocalTopLeft float
---@field RadiusModification float
---@field ADditionalYOffset float
---@field ADditionalXOffset float
---@field ForceTipToCenterOnScreen boolean
---@field XOffsetOnBorder float
---@field YOffsetOnBorder float
---@field IsClickOnlyTutorial boolean
---@field ConsumeFocus boolean
---@field ViewportX_Offset float
---@field ViewportY_Offset float
local UUITutorialMaskUniversal_WBP_C = {}

function UUITutorialMaskUniversal_WBP_C:SetTipPositionOnCanvas() end
function UUITutorialMaskUniversal_WBP_C:CalculateTipPosition() end
function UUITutorialMaskUniversal_WBP_C:SetupMaterialMaskMask() end
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUITutorialMaskUniversal_WBP_C:OnKeyDown(MyGeometry, InKeyEvent) end
function UUITutorialMaskUniversal_WBP_C:Construct() end
function UUITutorialMaskUniversal_WBP_C:BndEvt__UITutorialMask_WBP_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param bNewGamepadMode boolean
function UUITutorialMaskUniversal_WBP_C:ChagneInputDevice(bNewGamepadMode) end
function UUITutorialMaskUniversal_WBP_C:GamePadProgressTutorial() end
---@param EntryPoint int32
function UUITutorialMaskUniversal_WBP_C:ExecuteUbergraph_UITutorialMaskUniversal_WBP(EntryPoint) end
function UUITutorialMaskUniversal_WBP_C:NextTut__DelegateSignature() end


