---@meta

---@class UWBP_PopcornPrice_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TextBlock_Cost UTextBlock
local UWBP_PopcornPrice_C = {}

function UWBP_PopcornPrice_C:RefreshPrice() end
function UWBP_PopcornPrice_C:Construct() end
---@param bGameLoaded boolean
function UWBP_PopcornPrice_C:RegisterCinemaManager(bGameLoaded) end
---@param NewCapacity int32
function UWBP_PopcornPrice_C:OnPopcornCapacityUpdated(NewCapacity) end
---@param EntryPoint int32
function UWBP_PopcornPrice_C:ExecuteUbergraph_WBP_PopcornPrice(EntryPoint) end


