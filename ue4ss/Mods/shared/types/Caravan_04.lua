---@meta

---@class ACaravan_04_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RestTime float
local ACaravan_04_C = {}

function ACaravan_04_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ACaravan_04_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ACaravan_04_C:ExecuteUbergraph_Caravan_04(EntryPoint) end


