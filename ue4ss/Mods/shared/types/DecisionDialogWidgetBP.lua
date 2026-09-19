---@meta

---@class UDecisionDialogWidgetBP_C : UInteractableMenuWidgetBP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BackgroundBorder UBorder
---@field Cancel_Overlay UOverlay
---@field CircularGradient UImage
---@field Confirm_Overlay UOverlay
---@field DecisionButton_No UDecisionButton_C
---@field DecisionButton_Yes UDecisionButton_C
---@field HeadlineTitleText UTextBlock
---@field Image UImage
---@field Image_1 UImage
---@field Image_279 UImage
---@field MenuCanvasPanel UCanvasPanel
---@field SeparatorBorder UBorder
---@field TextBody UTextBlock
---@field WBP_KeyHint_Confirm UWBP_KeyHint_C
---@field WBP_KeyHint_Confirm_1 UWBP_KeyHint_C
---@field DecisionAccept FDecisionDialogWidgetBP_CDecisionAccept
---@field HeaderText FText
---@field BodyText FText
---@field AcceptText FText
---@field DeclineText FText
---@field DecisionDecline FDecisionDialogWidgetBP_CDecisionDecline
---@field bDecisionDialogIsReady boolean
local UDecisionDialogWidgetBP_C = {}

function UDecisionDialogWidgetBP_C:SetGlobalSettings() end
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
---@param bIsGamepadBeingUsed boolean
function UDecisionDialogWidgetBP_C:OnNavigationEnter(NavigateFromMenu, bIsGamepadBeingUsed) end
---@param NavigateToMenu UInteractableMenuWidgetBP_C
---@param NavigateFromMenu UInteractableMenuWidgetBP_C
function UDecisionDialogWidgetBP_C:OnNavigationExit(NavigateToMenu, NavigateFromMenu) end
---@param IsDesignTime boolean
function UDecisionDialogWidgetBP_C:PreConstruct(IsDesignTime) end
function UDecisionDialogWidgetBP_C:BndEvt__DecisionButton_Yes_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature() end
function UDecisionDialogWidgetBP_C:BndEvt__DecisionButton_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() end
function UDecisionDialogWidgetBP_C:Construct() end
function UDecisionDialogWidgetBP_C:OnGlobalSettingsApply() end
---@param bIsGamepadBeingUsed boolean
function UDecisionDialogWidgetBP_C:OnChangeInputDeviceMenuUI(bIsGamepadBeingUsed) end
function UDecisionDialogWidgetBP_C:OnPressedSelect() end
function UDecisionDialogWidgetBP_C:OnPressedBack() end
---@param EntryPoint int32
function UDecisionDialogWidgetBP_C:ExecuteUbergraph_DecisionDialogWidgetBP(EntryPoint) end
function UDecisionDialogWidgetBP_C:DecisionDecline__DelegateSignature() end
function UDecisionDialogWidgetBP_C:DecisionAccept__DelegateSignature() end


