---@meta

---@class UOptionsOverviewWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FadeOut UWidgetAnimation
---@field AudioButton UMainButton_C
---@field BackButton UNavigationKeyButton_C
---@field ControlsButton UMainButton_C
---@field CreditsButton UMainButton_C
---@field DisplayButton UMainButton_C
---@field GameplayButton UMainButton_C
---@field GraphicsButton UMainButton_C
---@field MenuCanvasPanel UCanvasPanel
---@field OptionsBorder UBorder
---@field OptionsTitleText UTextBlock
---@field OptionsMenuContainerWidget UOptionsMenuContainerWidgetBP_C
local UOptionsOverviewWidgetBP_C = {}

function UOptionsOverviewWidgetBP_C:SetGlobalSettings() end
function UOptionsOverviewWidgetBP_C:BndEvt__GameplayButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() end
function UOptionsOverviewWidgetBP_C:BndEvt__AudioButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() end
function UOptionsOverviewWidgetBP_C:BndEvt__DisplayButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature() end
function UOptionsOverviewWidgetBP_C:BndEvt__GraphicsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature() end
function UOptionsOverviewWidgetBP_C:BndEvt__ControlsButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature() end
function UOptionsOverviewWidgetBP_C:BndEvt__CreditsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UOptionsOverviewWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UOptionsOverviewWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
function UOptionsOverviewWidgetBP_C:OnPressedBack() end
function UOptionsOverviewWidgetBP_C:BndEvt__BackButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature() end
function UOptionsOverviewWidgetBP_C:OnGlobalSettingsApply() end
---@param IsDesignTime boolean
function UOptionsOverviewWidgetBP_C:PreConstruct(IsDesignTime) end
function UOptionsOverviewWidgetBP_C:Construct() end
---@param EntryPoint int32
function UOptionsOverviewWidgetBP_C:ExecuteUbergraph_OptionsOverviewWidgetBP(EntryPoint) end


