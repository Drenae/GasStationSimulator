---@meta

---@class UCreditsWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AutoScrollCreditsNoEvent UWidgetAnimation
---@field AutoScrollCredits UWidgetAnimation
---@field BackButton UNavigationKeyButton_C
---@field CreditsCanvas UCanvasPanel
---@field Image UImage
---@field Image_0 UImage
---@field Image_1 UImage
---@field Image_240 UImage
---@field Image_532 UImage
---@field ScrollingVertical UVerticalBox
---@field OnEnd FCreditsWidgetBP_COnEnd
local UCreditsWidgetBP_C = {}

function UCreditsWidgetBP_C:OnCreditsEnd() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UCreditsWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UCreditsWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UCreditsWidgetBP_C:OnStartCredits() end
function UCreditsWidgetBP_C:BndEvt__CreditsWidgetBP_NavigationKeyButton_50_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() end
function UCreditsWidgetBP_C:OnPressedBack() end
---@param IsDesignTime boolean
function UCreditsWidgetBP_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UCreditsWidgetBP_C:ExecuteUbergraph_CreditsWidgetBP(EntryPoint) end
function UCreditsWidgetBP_C:OnEnd__DelegateSignature() end


