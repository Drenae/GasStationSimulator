---@meta

---@class UUGP_ChordWheel_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Mid UTextBlock
---@field N UUGP_ChordWheelPart_C
---@field NE UUGP_ChordWheelPart_C
---@field NW UUGP_ChordWheelPart_C
---@field S UUGP_ChordWheelPart_C
---@field SE UUGP_ChordWheelPart_C
---@field SW UUGP_ChordWheelPart_C
---@field KeysToUse TArray<FName>
---@field TextColor FLinearColor
---@field InsideWheelColor FLinearColor
---@field OutsideWheelColor FLinearColor
---@field CurrentKey FName
---@field HoverTextColor FLinearColor
---@field HoverInsideWheelColor FLinearColor
---@field HoverOutsideWheelColor FLinearColor
---@field HoverScaleUpPercentage float
---@field CurrentChord FName
local UUGP_ChordWheel_C = {}

function UUGP_ChordWheel_C:GamepadControl() end
---@param Inside_Color FLinearColor
---@param OutsideColor FLinearColor
---@param ChordTextColor FLinearColor
function UUGP_ChordWheel_C:InitializeWheelColor(Inside_Color, OutsideColor, ChordTextColor) end
---@param Wheel_Part FString
function UUGP_ChordWheel_C:HoverOnWheel(Wheel_Part) end
function UUGP_ChordWheel_C:InitializeCurrentKey() end
---@param Increase boolean
function UUGP_ChordWheel_C:UpdateCurrentKey(Increase) end
function UUGP_ChordWheel_C:UpdateKeyAndChordTexts() end
function UUGP_ChordWheel_C:MouseWheelRelation() end
---@param KeysToUse TArray<FName>
---@param TextColor FLinearColor
---@param InsideWheelColor FLinearColor
---@param OutsideWheelColor FLinearColor
---@param HoverTextColor FLinearColor
---@param HoverInsideWheelColor FLinearColor
---@param HoverOutsideWheelColor FLinearColor
---@param HoverScaleUpPercentage float
function UUGP_ChordWheel_C:InitializeSettings(KeysToUse, TextColor, InsideWheelColor, OutsideWheelColor, HoverTextColor, HoverInsideWheelColor, HoverOutsideWheelColor, HoverScaleUpPercentage) end
---@param MyGeometry FGeometry
---@param InDeltaTime float
function UUGP_ChordWheel_C:Tick(MyGeometry, InDeltaTime) end
---@param EntryPoint int32
function UUGP_ChordWheel_C:ExecuteUbergraph_UGP_ChordWheel(EntryPoint) end


