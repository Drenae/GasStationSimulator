---@meta

---@class UWBP_PlatformCustomizationPaintStyle_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field Image UImage
---@field ImageLocked UImage
---@field Overlay_0 UOverlay
---@field Overlay_Locked UOverlay
---@field PaintStyleButton UButton
---@field PaintStyleIcon UImage
---@field PaintStyleIcon_GamePad UImage
---@field OnPaintStyleSelected FWBP_PlatformCustomizationPaintStyle_COnPaintStyleSelected
---@field bIsActive boolean
---@field Index int32
---@field OnPaintStyleHovered FWBP_PlatformCustomizationPaintStyle_COnPaintStyleHovered
---@field OnPaintStyleUnhovered FWBP_PlatformCustomizationPaintStyle_COnPaintStyleUnhovered
---@field bNoPaintStyle boolean
---@field PaintStyleThumbnail UTexture2D
---@field Icon TSoftObjectPtr<UTexture2D>
---@field MAT_PaintStyleIcon UMaterialInstanceDynamic
---@field PaintStyleData ECustomizationPaintType
---@field MAT_PaintStyleGamePad UMaterialInstanceDynamic
local UWBP_PlatformCustomizationPaintStyle_C = {}

function UWBP_PlatformCustomizationPaintStyle_C:SetNormal_Gamepad() end
function UWBP_PlatformCustomizationPaintStyle_C:SetActive_Gamepad() end
---@return UWidget
function UWBP_PlatformCustomizationPaintStyle_C:Get_PaintStyleButton_ToolTipWidget_0() end
function UWBP_PlatformCustomizationPaintStyle_C:SetNormal() end
function UWBP_PlatformCustomizationPaintStyle_C:SetActive() end
---@param Loaded UObject
function UWBP_PlatformCustomizationPaintStyle_C:OnLoaded_8CDF547C46980650DCB25BA7D0C8A132(Loaded) end
function UWBP_PlatformCustomizationPaintStyle_C:Construct() end
function UWBP_PlatformCustomizationPaintStyle_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformCustomizationPaintStyle_C:Destruct() end
function UWBP_PlatformCustomizationPaintStyle_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformCustomizationPaintStyle_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformCustomizationPaintStyle_C:GamePadClick() end
---@param EntryPoint int32
function UWBP_PlatformCustomizationPaintStyle_C:ExecuteUbergraph_WBP_PlatformCustomizationPaintStyle(EntryPoint) end
function UWBP_PlatformCustomizationPaintStyle_C:OnPaintStyleUnhovered__DelegateSignature() end
---@param CarMaterial UTexture2D
function UWBP_PlatformCustomizationPaintStyle_C:OnPaintStyleHovered__DelegateSignature(CarMaterial) end
---@param Button UWBP_PlatformCustomizationPaintStyle_C
---@param PaintType ECustomizationPaintType
function UWBP_PlatformCustomizationPaintStyle_C:OnPaintStyleSelected__DelegateSignature(Button, PaintType) end


