---@meta

---@class ACaravan_05_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RestTime float
local ACaravan_05_C = {}

function ACaravan_05_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ACaravan_05_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ACaravan_05_C:ExecuteUbergraph_Caravan_05(EntryPoint) end


