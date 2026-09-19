---@meta

---@class UCircle_WBP_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_38 UImage
---@field ['Desired Size'] FVector2D
---@field Material UMaterialInstanceDynamic
---@field FillColor FLinearColor
---@field OutlineColor FLinearColor
---@field FillOpacity float
---@field OutlineOpacity float
---@field StrokeThickness float
local UCircle_WBP_C = {}

---@param IsDesignTime boolean
function UCircle_WBP_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UCircle_WBP_C:ExecuteUbergraph_Circle_WBP(EntryPoint) end


