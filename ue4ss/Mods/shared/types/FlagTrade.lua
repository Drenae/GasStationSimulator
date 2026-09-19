---@meta

---@class UFlagTrade_C : UUserWidget
---@field UberGraphFrame FPointerToUberGraphFrame
---@field FlagMaterial_IMG UImage
---@field Image UTexture
local UFlagTrade_C = {}

function UFlagTrade_C:Construct() end
---@param EntryPoint int32
function UFlagTrade_C:ExecuteUbergraph_FlagTrade(EntryPoint) end


