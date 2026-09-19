---@meta

---@class ABarn_BP_C : ABarn
---@field UberGraphFrame FPointerToUberGraphFrame
local ABarn_BP_C = {}

function ABarn_BP_C:PostLoadMapsBlueprintEvent() end
---@param EntryPoint int32
function ABarn_BP_C:ExecuteUbergraph_Barn_BP(EntryPoint) end


