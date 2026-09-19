---@meta

---@class ACarWash_lvl1_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
local ACarWash_lvl1_C = {}

function ACarWash_lvl1_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACarWash_lvl1_C:ExecuteUbergraph_CarWash_lvl1(EntryPoint) end


