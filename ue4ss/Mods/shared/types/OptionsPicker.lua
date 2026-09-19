---@meta

---@class UOptionsPicker_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverButton UButton
---@field LeftBorder UBorder
---@field NextOptionButton UButton
---@field NextOptionButtonImage UImage
---@field OptionNameText UTextBlock
---@field OptionsHorizontalBox UHorizontalBox
---@field OuterBorder UBorder
---@field PickedOptionText UTextBlock
---@field PreviousOptionButton UButton
---@field PreviousOptionButtonImage UImage
---@field RightBorder UBorder
---@field SubButtonsScrollBox UScrollBox
---@field OptionsArray TArray<FText>
---@field ActiveOptionIndex int32
---@field SubButtonWidgets TArray<UOptionsPickerSubButton_C>
---@field OnOptionChanged FOptionsPicker_COnOptionChanged
---@field DefaultOptionIndex int32
---@field OptionsImageArray TArray<UTexture2D>
---@field ShowSubButtons boolean
---@field OptionsPickerBgColor FLinearColor
---@field OptionsPickerHighlightColor FLinearColor
---@field OptionsPickerExtraHighlightColor FLinearColor
---@field OptionsPickerOptionButtonBgColor FLinearColor
local UOptionsPicker_C = {}

function UOptionsPicker_C:SetPickedOptionText() end
---@param InIndex int32
---@param bIsInBounds boolean
function UOptionsPicker_C:IsInOptionsArrayBounds(InIndex, bIsInBounds) end
function UOptionsPicker_C:SetDefaultOptionIndex() end
---@param bIsHovered boolean
---@param InImage UImage
function UOptionsPicker_C:SetChangeOptionButtonHoverEffect(bIsHovered, InImage) end
---@param Index int32
function UOptionsPicker_C:SetCurrentImage(Index) end
function UOptionsPicker_C:SetPickedOptionTextSettings() end
function UOptionsPicker_C:SetGlobalSettings() end
function UOptionsPicker_C:SetupOptionNameText() end
---@param bIsVisible boolean
function UOptionsPicker_C:SetChangeOptionsButtonVisibility(bIsVisible) end
---@param InIndex int32
---@param bPlaySound boolean
function UOptionsPicker_C:SetCurrentIndex(InIndex, bPlaySound) end
---@param IsON boolean
function UOptionsPicker_C:SetHoverEffect(IsON) end
function UOptionsPicker_C:UpdateSubButtons() end
---@param InIndex int32
---@param bOptionChangedIgnore boolean
---@param bPlaySound boolean
function UOptionsPicker_C:SetActiveOption(InIndex, bOptionChangedIgnore, bPlaySound) end
---@param IsDesignTime boolean
function UOptionsPicker_C:PreConstruct(IsDesignTime) end
function UOptionsPicker_C:BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UOptionsPicker_C:BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param InIndex int32
function UOptionsPicker_C:SubOnClick(InIndex) end
function UOptionsPicker_C:Setup() end
function UOptionsPicker_C:BndEvt__HoverButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() end
function UOptionsPicker_C:OnPressedLeft() end
function UOptionsPicker_C:OnPressedRight() end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UOptionsPicker_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UOptionsPicker_C:OnGlobalSettingsApply() end
function UOptionsPicker_C:BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UOptionsPicker_C:BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UOptionsPicker_C:BndEvt__NextOptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UOptionsPicker_C:BndEvt__PreviousOptionButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UOptionsPicker_C:ExecuteUbergraph_OptionsPicker(EntryPoint) end
---@param ActiveIndex int32
function UOptionsPicker_C:OnOptionChanged__DelegateSignature(ActiveIndex) end


