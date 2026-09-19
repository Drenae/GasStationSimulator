---@meta

---@class UUITutorialMask_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ShopTip UWidgetAnimation
---@field Button_69 UButton
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
---@field RadiusModification float
---@field TipPositionX float
---@field TipPositionY float
---@field NextTut FUITutorialMask_WBP_CNextTut
---@field ['In Text'] FText
---@field Title FText
---@field LocalTopLeft float
---@field IsClickOnlyTutorial boolean
local UUITutorialMask_WBP_C = {}

function UUITutorialMask_WBP_C:Construct() end
function UUITutorialMask_WBP_C:BndEvt__UITutorialMask_WBP_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UUITutorialMask_WBP_C:GamePadClick() end
---@param bNewGamepadMode boolean
function UUITutorialMask_WBP_C:ChagneInputDevice(bNewGamepadMode) end
---@param EntryPoint int32
function UUITutorialMask_WBP_C:ExecuteUbergraph_UITutorialMask_WBP(EntryPoint) end
function UUITutorialMask_WBP_C:NextTut__DelegateSignature() end


