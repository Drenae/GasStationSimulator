---@meta

---@class ACollectibles_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
local ACollectibles_C = {}

function ACollectibles_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACollectibles_C:ExecuteUbergraph_Collectibles(EntryPoint) end


