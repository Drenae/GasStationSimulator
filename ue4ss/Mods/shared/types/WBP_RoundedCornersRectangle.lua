---@meta

---@class UWBP_RoundedCornersRectangle_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_293 UImage
---@field CornerRadius float
---@field StrokeThickness float
---@field FillColor FLinearColor
---@field StrokeColor FLinearColor
---@field ['Desired Size'] FVector2D
---@field StrokeColor2 FLinearColor
---@field FillColor2 FLinearColor
local UWBP_RoundedCornersRectangle_C = {}

---@param IsDesignTime boolean
function UWBP_RoundedCornersRectangle_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_RoundedCornersRectangle_C:ExecuteUbergraph_WBP_RoundedCornersRectangle(EntryPoint) end


