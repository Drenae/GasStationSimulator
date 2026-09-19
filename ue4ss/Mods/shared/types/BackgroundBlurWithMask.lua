---@meta

---@class FMaskMaterialSetting
---@field MaskMaterial UMaterialInterface
---@field ToTextureSize FIntPoint
---@field RedrawMethod EMaskMaterialRedrawMethod
local FMaskMaterialSetting = {}



---@class UBackgroundBlurWithMask : UContentWidget
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
---@field bApplyAlphaToBlur boolean
---@field BlurStrength float
---@field bUseMaskMaterial boolean
---@field MaskTexture UTexture2D
---@field MaskMaterialSetting FMaskMaterialSetting
---@field MaskTextureChannel EMaskTextureChannel
---@field bOverrideAutoRadiusCalculation boolean
---@field BlurRadius int32
---@field LowQualityFallbackBrush FSlateBrush
---@field MaskMaterialRenderTarget UTextureRenderTarget2D
local UBackgroundBlurWithMask = {}

---@param InVerticalAlignment EVerticalAlignment
function UBackgroundBlurWithMask:SetVerticalAlignment(InVerticalAlignment) end
---@param bInUseMaskMaterial boolean
function UBackgroundBlurWithMask:SetUseMaskMaterial(bInUseMaskMaterial) end
---@param InPadding FMargin
function UBackgroundBlurWithMask:SetPadding(InPadding) end
---@param InMaskTextureChannel EMaskTextureChannel
function UBackgroundBlurWithMask:SetMaskTextureChannel(InMaskTextureChannel) end
---@param InMaskTexture UTexture2D
function UBackgroundBlurWithMask:SetMaskTexture(InMaskTexture) end
---@param InMaskMaterialSetting FMaskMaterialSetting
function UBackgroundBlurWithMask:SetMaskMaterialSetting(InMaskMaterialSetting) end
---@param InBrush FSlateBrush
function UBackgroundBlurWithMask:SetLowQualityFallbackBrush(InBrush) end
---@param InHorizontalAlignment EHorizontalAlignment
function UBackgroundBlurWithMask:SetHorizontalAlignment(InHorizontalAlignment) end
---@param InStrength float
function UBackgroundBlurWithMask:SetBlurStrength(InStrength) end
---@param InBlurRadius int32
function UBackgroundBlurWithMask:SetBlurRadius(InBlurRadius) end
---@param bInApplyAlphaToBlur boolean
function UBackgroundBlurWithMask:SetApplyAlphaToBlur(bInApplyAlphaToBlur) end
function UBackgroundBlurWithMask:RedrawMaskMaterial() end
---@return UTexture
function UBackgroundBlurWithMask:GetMaskTextureInUse() end


---@class UBackgroundBlurWithMaskSlot : UPanelSlot
---@field Padding FMargin
---@field HorizontalAlignment EHorizontalAlignment
---@field VerticalAlignment EVerticalAlignment
local UBackgroundBlurWithMaskSlot = {}

---@param InVerticalAlignment EVerticalAlignment
function UBackgroundBlurWithMaskSlot:SetVerticalAlignment(InVerticalAlignment) end
---@param InPadding FMargin
function UBackgroundBlurWithMaskSlot:SetPadding(InPadding) end
---@param InHorizontalAlignment EHorizontalAlignment
function UBackgroundBlurWithMaskSlot:SetHorizontalAlignment(InHorizontalAlignment) end


