---@meta

---@class UWBP_PlatformCustomizationColor_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field ColorButton UButton
---@field CustomButton_Button UGSSButton
---@field CustomColor_Overlay UOverlay
---@field CustomColorIcon UImage
---@field GamePadHover_IMG UImage
---@field GamePadHover_IMG2 UImage
---@field Image UImage
---@field Image_60 UImage
---@field Image_60_Gamepad UImage
---@field ImageLocked UImage
---@field None_icon UImage
---@field Overlay_0 UOverlay
---@field Overlay_Locked UOverlay
---@field OnColorSelected FWBP_PlatformCustomizationColor_COnColorSelected
---@field ColorData FCarPaintColor
---@field bIsActive boolean
---@field Index int32
---@field OnColorHovered FWBP_PlatformCustomizationColor_COnColorHovered
---@field OnColorUnhovered FWBP_PlatformCustomizationColor_COnColorUnhovered
---@field bNoColor boolean
---@field bIsCustomActive boolean
---@field OnCustomClicked FWBP_PlatformCustomizationColor_COnCustomClicked
local UWBP_PlatformCustomizationColor_C = {}

function UWBP_PlatformCustomizationColor_C:SetNormal_Gamepad() end
function UWBP_PlatformCustomizationColor_C:SetActive_Gamepad() end
---@return UWidget
UWBP_PlatformCustomizationColor_C['Color Info Tooltip'] = function(self, ) end
UWBP_PlatformCustomizationColor_C['SetCustomButton Active'] = function(self, ) end
UWBP_PlatformCustomizationColor_C['SetCustomButton Normal'] = function(self, ) end
function UWBP_PlatformCustomizationColor_C:SetNormal() end
function UWBP_PlatformCustomizationColor_C:SetActive() end
---@param Loaded UObject
function UWBP_PlatformCustomizationColor_C:OnLoaded_6179FE5640A6A7B19798AEA625A8321E(Loaded) end
function UWBP_PlatformCustomizationColor_C:Construct() end
function UWBP_PlatformCustomizationColor_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformCustomizationColor_C:Destruct() end
function UWBP_PlatformCustomizationColor_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformCustomizationColor_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformCustomizationColor_C:BndEvt__WBP_PlatformCustomizationColor_CustomButton_Button_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformCustomizationColor_C:BndEvt__WBP_PlatformCustomizationColor_CustomButton_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformCustomizationColor_C:BndEvt__WBP_PlatformCustomizationColor_CustomButton_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformCustomizationColor_C:GamePadClickColors() end
function UWBP_PlatformCustomizationColor_C:GamePadClickCustomButton() end
---@param EntryPoint int32
function UWBP_PlatformCustomizationColor_C:ExecuteUbergraph_WBP_PlatformCustomizationColor(EntryPoint) end
function UWBP_PlatformCustomizationColor_C:OnCustomClicked__DelegateSignature() end
function UWBP_PlatformCustomizationColor_C:OnColorUnhovered__DelegateSignature() end
---@param CarColor FCarPaintColor
function UWBP_PlatformCustomizationColor_C:OnColorHovered__DelegateSignature(CarColor) end
---@param Color FLinearColor
---@param Button UWBP_PlatformCustomizationColor_C
---@param Index int32
---@param bNoColor boolean
function UWBP_PlatformCustomizationColor_C:OnColorSelected__DelegateSignature(Color, Button, Index, bNoColor) end


