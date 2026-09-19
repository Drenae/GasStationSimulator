---@meta

---@class UPC_Tool_WBP_C : UPC_Tool
---@field UberGraphFrame FPointerToUberGraphFrame
---@field BG_Locket_IMG UImage
---@field Blocker_For_Demo UButton
---@field FreeOverlay UOverlay
---@field GamePadMarker UImage
---@field GrayBlocking_IMG UImage
---@field Image_100 UImage
---@field MainOverlay_NEW UOverlay
---@field Overlay_owned UOverlay
---@field PriceHorizontalBox UHorizontalBox
---@field ToolsStatusTXT UTextBlock
---@field WBP_KeyHint_Left UWBP_KeyHint_C
local UPC_Tool_WBP_C = {}

---@param bIsUnlocked EToolItemState
function UPC_Tool_WBP_C:OnStateChecked(bIsUnlocked) end
---@param Item FBasketItemStruct
function UPC_Tool_WBP_C:OnItemUnlocked(Item) end
---@param Active boolean
function UPC_Tool_WBP_C:GamePadHover(Active) end
---@param EntryPoint int32
function UPC_Tool_WBP_C:ExecuteUbergraph_PC_Tool_WBP(EntryPoint) end


