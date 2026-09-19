---@meta

---@class UWBP_GradientColor_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Image_32 UImage
---@field Color1 FLinearColor
---@field Color2 FLinearColor
---@field Image UTexture
---@field ['Desired Size'] FVector2D
local UWBP_GradientColor_C = {}

---@param IsDesignTime boolean
function UWBP_GradientColor_C:PreConstruct(IsDesignTime) end
---@param EntryPoint int32
function UWBP_GradientColor_C:ExecuteUbergraph_WBP_GradientColor(EntryPoint) end


