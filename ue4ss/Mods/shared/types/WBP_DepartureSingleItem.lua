---@meta

---@class UWBP_DepartureSingleItem_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ActionButton_ForHover UButton
---@field ItemIcon_IMG UImage
---@field ItemToPass FGeneratedLootInfo
---@field IsPlayerCargo boolean
---@field IsItemVisibleLocal boolean
---@field ParentREF UWBP_DepartureScreenSinglePosition_C
---@field bIsLanded boolean
local UWBP_DepartureSingleItem_C = {}

function UWBP_DepartureSingleItem_C:Construct() end
---@param ItemTexture UTexture2D
---@param IconVisibility EItemIconVisibility
function UWBP_DepartureSingleItem_C:RefreshItemsVisible(ItemTexture, IconVisibility) end
function UWBP_DepartureSingleItem_C:BndEvt__WBP_DepartureSingleItem_ActionButton_ForHover_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() end
function UWBP_DepartureSingleItem_C:BndEvt__WBP_DepartureSingleItem_ActionButton_ForHover_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() end
---@param EntryPoint int32
function UWBP_DepartureSingleItem_C:ExecuteUbergraph_WBP_DepartureSingleItem(EntryPoint) end


