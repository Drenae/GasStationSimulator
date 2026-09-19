---@meta

---@class UUI_Slider_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field btn_left UButton
---@field btn_right UButton
---@field ['HorizontalBox-ElementsContainer'] UHorizontalBox
---@field img_left_btn UImage
---@field img_right_btn UImage
---@field Locked USizeBox
---@field LockImage UImage
---@field ProgressBar_63 UProgressBar
---@field Slider USlider
---@field SliderBoxSize USizeBox
---@field SliderName UTextBlock
---@field SliderValue UTextBlock
---@field SliderTitle FText
---@field Unit FText
---@field UnitPrefix FText
---@field SliderDefaultValueTip FText
---@field DefaultValue float
---@field MinimumValue float
---@field MaximumValue float
---@field StepSize float
---@field MarginSize FMargin
---@field SliderSize float
---@field bInteger boolean
---@field FocusedSliderHandleAndTextColor FLinearColor
---@field UnfocusedSliderHandleAndTextColor FLinearColor
---@field PhotoModeWidgetReference UUI_PhotoMode_C
---@field OnSliderValueChanged FUI_Slider_COnSliderValueChanged
---@field bShouldFocus boolean
---@field FocusedSliderBarColor FLinearColor
---@field UnfocusedSliderBarColor FLinearColor
---@field bMapMinMax boolean
---@field MappedMin float
---@field MappedMax float
---@field MappedStepSize float
---@field bUseGrouping boolean
---@field MinimumFractionalDigits int32
---@field MaximumFractionalDigits int32
---@field bChangeSliderColorWhenFocused boolean
---@field bChangeTextColorWhenFocused boolean
---@field StepSizeHandler FTimerHandle
---@field bIncreaseStepSizeDynamicallyOnHold boolean
---@field DisabledValue float
---@field WasDisabled boolean
---@field IsEnabled boolean
local UUI_Slider_C = {}

---@return float
function UUI_Slider_C:GetPercent_0() end
---@param InMyGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UUI_Slider_C:OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUI_Slider_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@return ESlateVisibility
function UUI_Slider_C:TextValueVisibility() end
---@return ESlateVisibility
function UUI_Slider_C:LockVisibility() end
---@return FSlateBrush
function UUI_Slider_C:getRightButtonSettings() end
---@return FSlateBrush
function UUI_Slider_C:getLeftButtonSettings() end
---@param bChangeSliderColorWhenFocused boolean
---@param bChangeTextColorWhenFocused boolean
---@param Slider USlider
---@param imgLeftButton UImage
---@param imgRightButton UImage
---@param SliderTitle UWidget
---@param SliderValue UWidget
---@param bSetMargin boolean
---@param LeftButtonColor FSlateBrush
---@param RightButtonColor FSlateBrush
function UUI_Slider_C:getFocusedOrUnfocusedColor(bChangeSliderColorWhenFocused, bChangeTextColorWhenFocused, Slider, imgLeftButton, imgRightButton, SliderTitle, SliderValue, bSetMargin, LeftButtonColor, RightButtonColor) end
---@return FText
function UUI_Slider_C:getTxtValue() end
---@param IsDesignTime boolean
function UUI_Slider_C:PreConstruct(IsDesignTime) end
---@param DefaultValue float
function UUI_Slider_C:Initialize(DefaultValue) end
function UUI_Slider_C:BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UUI_Slider_C:BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param Value float
function UUI_Slider_C:BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(Value) end
---@param bShouldFocus boolean
function UUI_Slider_C:ResetSlider(bShouldFocus) end
---@param Value float
---@param bSetFocus boolean
---@param bCallDispatcherNotify boolean
function UUI_Slider_C:ChangeValue(Value, bSetFocus, bCallDispatcherNotify) end
---@param bEnable boolean
function UUI_Slider_C:EnableDisableWidget(bEnable) end
function UUI_Slider_C:SetSliderFocus() end
function UUI_Slider_C:ResetSliderFocus() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UUI_Slider_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param MouseEvent FPointerEvent
function UUI_Slider_C:OnMouseLeave(MouseEvent) end
function UUI_Slider_C:FocusWithMouseWheel() end
function UUI_Slider_C:ConstantStepSizeIncrease() end
function UUI_Slider_C:Construct() end
function UUI_Slider_C:FocusThisWidget() end
---@param EntryPoint int32
function UUI_Slider_C:ExecuteUbergraph_UI_Slider(EntryPoint) end
---@param SliderValue float
---@param bReset boolean
function UUI_Slider_C:OnSliderValueChanged__DelegateSignature(SliderValue, bReset) end


