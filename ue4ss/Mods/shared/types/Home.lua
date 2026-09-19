---@meta

---@class AHome_C : AHouse
---@field UberGraphFrame FPointerToUberGraphFrame
local AHome_C = {}

function AHome_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AHome_C:ExecuteUbergraph_Home(EntryPoint) end


