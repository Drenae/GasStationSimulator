---@meta

---@class UOptionsSlider_C : UInteractableUserWidget_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field HoverButton UButton
---@field LeftBorder UBorder
---@field OptionNameText UTextBlock
---@field OuterBorder UBorder
---@field RightBorder UBorder
---@field SliderBackgroundBorder UBorder
---@field SliderHandle USlider
---@field SliderProgressBar UProgressBar
---@field SliderValueText UTextBlock
---@field OnOptionChanged FOptionsSlider_COnOptionChanged
---@field DefaultValue float
---@field SliderMinValue float
---@field SliderMaxValue float
---@field ValueDecimalPlaces int32
---@field SliderStepSize float
---@field MouseSliderStepSize float
---@field CurrentValue float
---@field CurrentValueNormalized float
---@field OptionsSliderHighlightColor FLinearColor
---@field OptionsSliderBgColor FLinearColor
local UOptionsSlider_C = {}

---@param InValue float
function UOptionsSlider_C:UpdateSliderFromMouse(InValue) end
---@return float
function UOptionsSlider_C:GetDefaultValueNormalized() end
---@param InValue float
function UOptionsSlider_C:SetSliderHandleValue(InValue) end
---@param InValue float
---@param OnlyByMaxValue float
---@param Return_Value float
function UOptionsSlider_C:GetScaledValue(InValue, OnlyByMaxValue, Return_Value) end
---@param InIncrementValue float
function UOptionsSlider_C:IncrementSlider(InIncrementValue) end
function UOptionsSlider_C:SetupSliderInitial() end
function UOptionsSlider_C:SetGlobalSettings() end
function UOptionsSlider_C:SetupOptionNameText() end
---@param InValue float
---@param OptionChangedIgnore boolean
function UOptionsSlider_C:SetupSliderFromMenu(InValue, OptionChangedIgnore) end
---@param InValue float
---@param bPlaySound boolean
---@param bOptionChangeIgnore boolean
function UOptionsSlider_C:UpdateSlider(InValue, bPlaySound, bOptionChangeIgnore) end
---@param IsON boolean
function UOptionsSlider_C:SetHoverEffect(IsON) end
---@param bIsHovered boolean
---@param bPlaySound boolean
function UOptionsSlider_C:OnSetHoverEffect(bIsHovered, bPlaySound) end
function UOptionsSlider_C:BndEvt__HoverButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UOptionsSlider_C:OnPressedLeft() end
function UOptionsSlider_C:OnPressedRight() end
---@param IsDesignTime boolean
function UOptionsSlider_C:PreConstruct(IsDesignTime) end
function UOptionsSlider_C:OnGlobalSettingsApply() end
---@param Value float
function UOptionsSlider_C:BndEvt__SliderHandle_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(Value) end
function UOptionsSlider_C:BndEvt__SliderHandle_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature() end
function UOptionsSlider_C:BndEvt__SliderHandle_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature() end
---@param EntryPoint int32
function UOptionsSlider_C:ExecuteUbergraph_OptionsSlider(EntryPoint) end
function UOptionsSlider_C:OnOptionChanged__DelegateSignature() end


