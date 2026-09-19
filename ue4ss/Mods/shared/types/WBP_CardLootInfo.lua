---@meta

---@class UWBP_CardLootInfo_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnimation UWidgetAnimation
---@field Amount UTextBlock
---@field Item_ICON UImage
---@field ItemName UTextBlock
---@field Purchased_IMG UImage
---@field Number int32
---@field ClassItem FCollectibleCardStruct
---@field ThiefWidget boolean
local UWBP_CardLootInfo_C = {}

function UWBP_CardLootInfo_C:StartAnimation() end
function UWBP_CardLootInfo_C:Construct() end
---@param EntryPoint int32
function UWBP_CardLootInfo_C:ExecuteUbergraph_WBP_CardLootInfo(EntryPoint) end


