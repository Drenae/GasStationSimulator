---@meta

---@class USplat_Generator_Widget_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FallBackAnimation UWidgetAnimation
---@field ConstructAnimation UWidgetAnimation
---@field Splat_IMG UImage
---@field OnDestroyed FSplat_Generator_Widget_COnDestroyed
---@field Set_Colour FLinearColor
---@field Set_Brush_Array TArray<UTexture2D>
local USplat_Generator_Widget_C = {}

function USplat_Generator_Widget_C:Construct() end
---@param EntryPoint int32
function USplat_Generator_Widget_C:ExecuteUbergraph_Splat_Generator_Widget(EntryPoint) end
function USplat_Generator_Widget_C:OnDestroyed__DelegateSignature() end


