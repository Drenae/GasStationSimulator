---@meta

---@class ACaravan_02_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RestTime float
local ACaravan_02_C = {}

function ACaravan_02_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ACaravan_02_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ACaravan_02_C:ExecuteUbergraph_Caravan_02(EntryPoint) end


