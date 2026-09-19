---@meta

---@class ACaravan_06_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RestTime float
local ACaravan_06_C = {}

function ACaravan_06_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ACaravan_06_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ACaravan_06_C:ExecuteUbergraph_Caravan_06(EntryPoint) end


