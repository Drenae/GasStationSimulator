---@meta

---@class UWBP_ThiefLoot_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ConstructAnimation UWidgetAnimation
---@field Amount UTextBlock
---@field Item_ICON UImage
---@field ItemName UTextBlock
---@field Number int32
---@field ThiefWidget boolean
---@field ItemIcon TSoftObjectPtr<UTexture2D>
---@field Item_Name FName
local UWBP_ThiefLoot_C = {}

function UWBP_ThiefLoot_C:StartAnimation() end
---@param Loaded UObject
function UWBP_ThiefLoot_C:OnLoaded_155276644F3D6E6DDEA6D996FD91AEE1(Loaded) end
function UWBP_ThiefLoot_C:Construct() end
---@param EntryPoint int32
function UWBP_ThiefLoot_C:ExecuteUbergraph_WBP_ThiefLoot(EntryPoint) end


