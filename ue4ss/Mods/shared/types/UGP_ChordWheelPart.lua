---@meta

---@class UUGP_ChordWheelPart_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ChordText UTextBlock
---@field Image_part UImage
---@field inside UImage
---@field outside UImage
---@field ScaleBox UScaleBox
---@field ChordName FName
---@field InsideColor FLinearColor
---@field OutsideColor FLinearColor
---@field ChordTextColor FLinearColor
local UUGP_ChordWheelPart_C = {}

---@return FText
function UUGP_ChordWheelPart_C:ChordNameToTextBind() end
function UUGP_ChordWheelPart_C:ResetColorsAndOpacitices() end
---@param Inside_Color FLinearColor
---@param OutsideColor FLinearColor
---@param ChordTextColor FLinearColor
---@param Called_At_Initialize_ boolean
function UUGP_ChordWheelPart_C:SetColorsAndOpacities(Inside_Color, OutsideColor, ChordTextColor, Called_At_Initialize_) end
---@param ScaleUpPercentage float
---@param InsideColor FLinearColor
---@param OutsideColor FLinearColor
---@param TextColor FLinearColor
function UUGP_ChordWheelPart_C:OnHoverVisualEffect(ScaleUpPercentage, InsideColor, OutsideColor, TextColor) end
---@param IsDesignTime boolean
function UUGP_ChordWheelPart_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UUGP_ChordWheelPart_C:ExecuteUbergraph_UGP_ChordWheelPart(EntryPoint) end


