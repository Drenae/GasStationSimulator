---@meta

---@class APopcornTrash_BP_C : ATrashItem_PrologueTrash_C
---@field UberGraphFrame FPointerToUberGraphFrame
local APopcornTrash_BP_C = {}

function APopcornTrash_BP_C:TryEnablePhysics() end
function APopcornTrash_BP_C:ReceiveBeginPlay() end
---@param GameLoaded boolean
function APopcornTrash_BP_C:OnGameLoaded(GameLoaded) end
---@param EntryPoint int32
function APopcornTrash_BP_C:ExecuteUbergraph_PopcornTrash_BP(EntryPoint) end


