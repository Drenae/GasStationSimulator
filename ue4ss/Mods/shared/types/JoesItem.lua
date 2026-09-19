---@meta

---@class UJoesItem_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BlueprintAnim UWidgetAnimation
---@field Image UImage
---@field Image_1 UImage
---@field Image_45 UImage
---@field Image_118 UImage
---@field Image_cogency UImage
---@field Item_Image UImage
---@field ItemAmount_TXT UTextBlock
---@field Money_Amount UTextBlock
---@field Overlay_joe UOverlay
---@field popularity_amount UTextBlock
---@field TextBlock_Name UTextBlock
---@field VerticalBox_money_popularity UVerticalBox
---@field bIsJoesItem boolean
local UJoesItem_C = {}

---@param IsDesignTime boolean
function UJoesItem_C:PreConstruct(IsDesignTime) end
function UJoesItem_C:Construct() end
---@param EntryPoint int32
function UJoesItem_C:ExecuteUbergraph_JoesItem(EntryPoint) end


