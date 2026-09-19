---@meta

---@class UWBP_PlatformCustomizationMaterial_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Hover UWidgetAnimation
---@field Image UImage
---@field ImageLocked UImage
---@field MaterialButton UButton
---@field MaterialIcon UImage
---@field MaterialIcon_Gamepad UImage
---@field Overlay_0 UOverlay
---@field Overlay_Locked UOverlay
---@field OnMaterialSelected FWBP_PlatformCustomizationMaterial_COnMaterialSelected
---@field MaterialData EFinishMaskType
---@field bIsActive boolean
---@field Index int32
---@field OnMaterialHovered FWBP_PlatformCustomizationMaterial_COnMaterialHovered
---@field OnMaterialUnhovered FWBP_PlatformCustomizationMaterial_COnMaterialUnhovered
---@field bNoMaterial boolean
---@field MaterialThumbnail UTexture2D
---@field Icon TSoftObjectPtr<UTexture2D>
---@field MAT_MaterialIcon UMaterialInstanceDynamic
---@field MAT_Materialicon_Gamepad UMaterialInstanceDynamic
local UWBP_PlatformCustomizationMaterial_C = {}

function UWBP_PlatformCustomizationMaterial_C:SetNormal_Gamepad() end
function UWBP_PlatformCustomizationMaterial_C:SetActive_Gamepad() end
---@return UWidget
function UWBP_PlatformCustomizationMaterial_C:Get_MaterialButton_ToolTipWidget_0() end
function UWBP_PlatformCustomizationMaterial_C:SetNormal() end
function UWBP_PlatformCustomizationMaterial_C:SetActive() end
---@param Loaded UObject
function UWBP_PlatformCustomizationMaterial_C:OnLoaded_A479BDAE495DC115635557A55CEF4A5E(Loaded) end
function UWBP_PlatformCustomizationMaterial_C:Construct() end
function UWBP_PlatformCustomizationMaterial_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() end
function UWBP_PlatformCustomizationMaterial_C:Destruct() end
function UWBP_PlatformCustomizationMaterial_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformCustomizationMaterial_C:BndEvt__WBP_PlatformCustomizationColor_ColorButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() end
function UWBP_PlatformCustomizationMaterial_C:GamePadClick() end
---@param EntryPoint int32
function UWBP_PlatformCustomizationMaterial_C:ExecuteUbergraph_WBP_PlatformCustomizationMaterial(EntryPoint) end
function UWBP_PlatformCustomizationMaterial_C:OnMaterialUnhovered__DelegateSignature() end
---@param CarMaterial UTexture2D
function UWBP_PlatformCustomizationMaterial_C:OnMaterialHovered__DelegateSignature(CarMaterial) end
---@param Button UWBP_PlatformCustomizationMaterial_C
---@param mask EFinishMaskType
function UWBP_PlatformCustomizationMaterial_C:OnMaterialSelected__DelegateSignature(Button, mask) end


