---@meta

---@class USampleMenuWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackButton UNavigationKeyButton_C
---@field MenuCanvasPanel UCanvasPanel
---@field WBP_SaveScreen UWBP_SaveScreen_C
---@field OnClickedBack FSampleMenuWidgetBP_COnClickedBack
local USampleMenuWidgetBP_C = {}

---@param Condition boolean
function USampleMenuWidgetBP_C:SetBackButtonVisibility(Condition) end
function USampleMenuWidgetBP_C:SetGlobalSettings() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function USampleMenuWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function USampleMenuWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function USampleMenuWidgetBP_C:OnPressedBack() end
function USampleMenuWidgetBP_C:BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() end
function USampleMenuWidgetBP_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function USampleMenuWidgetBP_C:PreConstruct(IsDesignTime) end
function USampleMenuWidgetBP_C:Construct() end
function USampleMenuWidgetBP_C:OnPressedDown() end
function USampleMenuWidgetBP_C:OnPressedUp() end
---@param bIsGamepadBeingUsed boolean
function USampleMenuWidgetBP_C:OnChangeInputDeviceMenuUI(bIsGamepadBeingUsed) end
---@param EntryPoint int32
function USampleMenuWidgetBP_C:ExecuteUbergraph_SampleMenuWidgetBP(EntryPoint) end
function USampleMenuWidgetBP_C:OnClickedBack__DelegateSignature() end


