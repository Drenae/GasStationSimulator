---@meta

---@class UDecisionButton_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ButtonText UTextBlock
---@field DecisionButton UButton
---@field OuterBorder UBorder
---@field Text FText
---@field DecisionButtonHighlightColor FLinearColor
---@field DecisionButtonBgColor FLinearColor
local UDecisionButton_C = {}

function UDecisionButton_C:SetGlobalSettings() end
function UDecisionButton_C:SetupButtonText() end
---@param bIsHovered boolean
function UDecisionButton_C:SetHoverEffect(bIsHovered) end
function UDecisionButton_C:BndEvt__DecisionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UDecisionButton_C:BndEvt__DecisionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UDecisionButton_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
---@param IsDesignTime boolean
function UDecisionButton_C:PreConstruct(IsDesignTime) end
function UDecisionButton_C:OnGlobalSettingsApply() end
function UDecisionButton_C:BndEvt__DecisionButton_DecisionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UDecisionButton_C:ExecuteUbergraph_DecisionButton(EntryPoint) end


