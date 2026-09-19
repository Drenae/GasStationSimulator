---@meta

---@class UWBP_BBQItemInfo_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DoneAnimation UWidgetAnimation
---@field Image_Check UImage
---@field T_Percent UTextBlock
---@field T_Progress UTextBlock
---@field T_State UTextBlock
---@field Item ABBQItem
local UWBP_BBQItemInfo_C = {}

---@param Progress float
UWBP_BBQItemInfo_C['Set Progress'] = function(self, Progress) end
---@param BBQ_Item ABBQItem
function UWBP_BBQItemInfo_C:Init(BBQ_Item) end
---@param Item ABBQItem
---@param State EBBQItemState
UWBP_BBQItemInfo_C['On State Changed'] = function(self, Item, State) end
---@param Item ABBQItem
---@param CookingProgress float
---@param CurrentStateProgress float
UWBP_BBQItemInfo_C['On Cooking Progress Updated'] = function(self, Item, CookingProgress, CurrentStateProgress) end
---@param NewSlot UBBQSlotComponent
UWBP_BBQItemInfo_C['On Slot Changed'] = function(self, NewSlot) end
---@param EntryPoint int32
function UWBP_BBQItemInfo_C:ExecuteUbergraph_WBP_BBQItemInfo(EntryPoint) end


