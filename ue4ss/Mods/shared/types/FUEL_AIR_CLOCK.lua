---@meta

---@class UFUEL_AIR_CLOCK_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ShakeAnim UWidgetAnimation
---@field FallingArrows_FX UWidgetAnimation
---@field Flesh_FX UWidgetAnimation
---@field Start_Broken UWidgetAnimation
---@field FX_Start UWidgetAnimation
---@field CONSTRUCT_ANIMATION UWidgetAnimation
---@field AIR_CLOCK_IMG UImage
---@field Arrows_Horizontal UHorizontalBox
---@field Arrows_Horizontal_1 UHorizontalBox
---@field Clock_FX UImage
---@field Flash_FX UImage
---@field FUEL_CLOCK_IMG UImage
---@field FUEL_CLOCK_IMG_1 UImage
---@field FUEL_CLOCK_POINTER UImage
---@field FUEL_CLOCK_POINTER_RED UImage
---@field FX_CLOCK_BG UImage
---@field Image UImage
---@field Image_1 UImage
---@field Image_2 UImage
---@field Image_3 UImage
---@field Image_4 UImage
---@field Image_5 UImage
---@field Image_6 UImage
---@field Image_7 UImage
---@field Image_129 UImage
---@field ['IsTickEnabled?'] boolean
---@field ADD_FUEL_AMMOUNT float
---@field Start_Value float
---@field NewVar_0 UI_STATES::Type
local UFUEL_AIR_CLOCK_C = {}

---@param Angle float
function UFUEL_AIR_CLOCK_C:Set_Goal_Value(Angle) end
---@param Angle float
function UFUEL_AIR_CLOCK_C:SetPointer(Angle) end
function UFUEL_AIR_CLOCK_C:Construct() end
function UFUEL_AIR_CLOCK_C:StartEffectUI() end
function UFUEL_AIR_CLOCK_C:BrokenEffectUI() end
function UFUEL_AIR_CLOCK_C:BrokenToNormal() end
function UFUEL_AIR_CLOCK_C:EffectToNormal() end
---@param EntryPoint int32
function UFUEL_AIR_CLOCK_C:ExecuteUbergraph_FUEL_AIR_CLOCK(EntryPoint) end


