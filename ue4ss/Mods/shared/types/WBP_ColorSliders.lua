---@meta

---@class UWBP_ColorSliders_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field GamepadCurrentSlider_Saturation UImage
---@field GamepadCurrentSlider_Value UImage
---@field Slider_saturation USlider
---@field Slider_value USlider
---@field Color FLinearColor
---@field ChangeColor FWBP_ColorSliders_CChangeColor
---@field MinSaturation float
---@field MaxSaturation float
---@field MinBrightness float
---@field MaxBrightness float
---@field ColorIndex int32
---@field ValueSaturation float
---@field SliderValue float
---@field GamePadCurrentSlider int32
local UWBP_ColorSliders_C = {}

function UWBP_ColorSliders_C:UpdateColor() end
---@param Color FLinearColor
function UWBP_ColorSliders_C:UpdateValueSliderColor(Color) end
---@param Color FLinearColor
---@param ValueValue float
function UWBP_ColorSliders_C:UpdateSaturationSliderColor(Color, ValueValue) end
---@param Color FLinearColor
---@param Index int32
function UWBP_ColorSliders_C:SetColor(Color, Index) end
function UWBP_ColorSliders_C:Construct() end
---@param Value float
function UWBP_ColorSliders_C:BndEvt__WBP_ColorSliders_Slider_saturation_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(Value) end
---@param Value float
function UWBP_ColorSliders_C:BndEvt__WBP_ColorSliders_Slider_value_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(Value) end
---@param Value float
function UWBP_ColorSliders_C:GamePadSliderSaturation(Value) end
---@param Value float
function UWBP_ColorSliders_C:GamePadSliderValue(Value) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UWBP_ColorSliders_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UWBP_ColorSliders_C:ExecuteUbergraph_WBP_ColorSliders(EntryPoint) end
---@param Color FLinearColor
function UWBP_ColorSliders_C:ChangeColor__DelegateSignature(Color) end


