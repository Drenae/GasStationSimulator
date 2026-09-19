---@meta

---@class UUI_Selector_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Border UBorder
---@field btn_left UButton
---@field btn_right UButton
---@field ['HorizontalBox-ElementsContainer'] UHorizontalBox
---@field img_left_btn UImage
---@field img_right_btn UImage
---@field SizeBox USizeBox
---@field Slider USlider
---@field SliderName UTextBlock
---@field SliderSizeBox USizeBox
---@field SliderValue UTextBlock
---@field SliderTitle FText
---@field Unit FText
---@field UnitPrefix FText
---@field SliderDefaultValueTip FText
---@field bChangeTextColorWhenFocused boolean
---@field FocusedSliderAndTextColor FLinearColor
---@field UnfocusedSliderAndTextColor FLinearColor
---@field SliderSize FVector2D
---@field DefaultValue float
---@field Options TArray<FText>
---@field PhotoModeWidgetReference UUI_PhotoMode_C
---@field MarginSize FMargin
---@field BackgroundColor FLinearColor
---@field bShouldFocus boolean
---@field ResetDispatcher FUI_Selector_CResetDispatcher
---@field OnOptionChanged FUI_Selector_COnOptionChanged
local UUI_Selector_C = {}

function UUI_Selector_C:ClearOptions() end
---@param Options TArray<FName>
UUI_Selector_C['AddOptions(Name)'] = function(self, Options) end
---@param Options TArray<FText>
UUI_Selector_C['AddOptions(Text)'] = function(self, Options) end
---@param Options TArray<FString>
UUI_Selector_C['AddOptions(String)'] = function(self, Options) end
---@param DefaultIndex int32
function UUI_Selector_C:SetDefaultOptionByIndex(DefaultIndex) end
---@param ItemToFind FText
---@param bSuccess boolean
function UUI_Selector_C:SetDefaultOptionByName(ItemToFind, bSuccess) end
---@param SelectedIndex int32
---@param SelectedOption FText
function UUI_Selector_C:GetSelectedOption(SelectedIndex, SelectedOption) end
---@param Item FText
function UUI_Selector_C:RemoveOption(Item) end
---@param NewOption FText
UUI_Selector_C['Add Option'] = function(self, NewOption) end
---@param InMyGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UUI_Selector_C:OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent) end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUI_Selector_C:OnMouseWheel(MyGeometry, MouseEvent) end
---@return FSlateBrush
function UUI_Selector_C:getRightButtonSettings() end
---@return FSlateBrush
function UUI_Selector_C:getLeftButtonSettings() end
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
function UUI_Selector_C:getFocusedOrUnfocusedColor(bChangeSliderColorWhenFocused, bChangeTextColorWhenFocused, Slider, imgLeftButton, imgRightButton, SliderTitle, SliderValue, bSetMargin, LeftButtonColor, RightButtonColor) end
---@return FText
function UUI_Selector_C:getTxtValue() end
---@param IsDesignTime boolean
function UUI_Selector_C:PreConstruct(IsDesignTime) end
function UUI_Selector_C:BndEvt__btn_left_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UUI_Selector_C:BndEvt__btn_right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() end
---@param Value float
function UUI_Selector_C:BndEvt__Slider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(Value) end
---@param bShouldFocus boolean
---@param bResetThisSlider boolean
function UUI_Selector_C:ResetSlider(bShouldFocus, bResetThisSlider) end
function UUI_Selector_C:SetSliderFocus() end
function UUI_Selector_C:ResetSliderFocus() end
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UUI_Selector_C:OnMouseEnter(MyGeometry, MouseEvent) end
---@param Value float
---@param bShouldFocus boolean
function UUI_Selector_C:ChangeValue(Value, bShouldFocus) end
function UUI_Selector_C:FocusWithMouseWheel() end
---@param MouseEvent FPointerEvent
function UUI_Selector_C:OnMouseLeave(MouseEvent) end
function UUI_Selector_C:Construct() end
function UUI_Selector_C:FocusThisWidget() end
---@param EntryPoint int32
function UUI_Selector_C:ExecuteUbergraph_UI_Selector(EntryPoint) end
---@param OptionIndex int32
---@param OptionText FText
function UUI_Selector_C:OnOptionChanged__DelegateSignature(OptionIndex, OptionText) end
function UUI_Selector_C:ResetDispatcher__DelegateSignature() end


