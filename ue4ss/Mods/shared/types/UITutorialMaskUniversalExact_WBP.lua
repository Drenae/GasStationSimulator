---@meta

---@class UUITutorialMaskUniversalExact_WBP_C : UUserWidget
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
---@field TipPositionX float
---@field TipPositionY float
---@field NextTut FUITutorialMaskUniversalExact_WBP_CNextTut
---@field ['In Text'] FText
---@field Title FText
---@field LocalTopLeft float
---@field RadiusModification float
---@field ADditionalYOffset float
---@field ADditionalXOffset float
---@field Size float
---@field Position FVector2D
---@field IsClickOnlyTutorial boolean
local UUITutorialMaskUniversalExact_WBP_C = {}

function UUITutorialMaskUniversalExact_WBP_C:Construct() end
function UUITutorialMaskUniversalExact_WBP_C:BndEvt__UITutorialMask_WBP_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UUITutorialMaskUniversalExact_WBP_C:Tick(MyGeometry, InDeltaTime) end
---@param bNewGamepadMode boolean
function UUITutorialMaskUniversalExact_WBP_C:ChagneInputDevice(bNewGamepadMode) end
---@param EntryPoint int32
function UUITutorialMaskUniversalExact_WBP_C:ExecuteUbergraph_UITutorialMaskUniversalExact_WBP(EntryPoint) end
function UUITutorialMaskUniversalExact_WBP_C:NextTut__DelegateSignature() end


