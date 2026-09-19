---@meta

---@class ACaravan_01_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RestTime float
local ACaravan_01_C = {}

function ACaravan_01_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ACaravan_01_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ACaravan_01_C:ExecuteUbergraph_Caravan_01(EntryPoint) end


