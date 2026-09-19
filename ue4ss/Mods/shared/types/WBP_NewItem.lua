---@meta

---@class UWBP_NewItem_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnimation UWidgetAnimation
---@field Image_175 UImage
---@field Image_463 UImage
---@field IteamName_TXT UTextBlock
---@field Item_ICON UImage
---@field SetItemIcon UTexture2D
---@field SetItemName FText
---@field IsFromShop boolean
local UWBP_NewItem_C = {}

function UWBP_NewItem_C:Construct() end
---@param EntryPoint int32
function UWBP_NewItem_C:ExecuteUbergraph_WBP_NewItem(EntryPoint) end


