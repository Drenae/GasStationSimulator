---@meta

---@class UWBP_ItemLootInfo_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnimation UWidgetAnimation
---@field Amount UTextBlock
---@field Item_ICON UImage
---@field ItemName UTextBlock
---@field Purchased_IMG UImage
---@field Number int32
---@field ClassItem TSubclassOf<AItem>
---@field ThiefWidget boolean
---@field NewVar_0 FSlotStruct
local UWBP_ItemLootInfo_C = {}

function UWBP_ItemLootInfo_C:StartAnimation() end
function UWBP_ItemLootInfo_C:Construct() end
---@param EntryPoint int32
function UWBP_ItemLootInfo_C:ExecuteUbergraph_WBP_ItemLootInfo(EntryPoint) end


