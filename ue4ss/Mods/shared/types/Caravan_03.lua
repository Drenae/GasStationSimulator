---@meta

---@class ACaravan_03_C : ALevelScriptActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RestTime float
local ACaravan_03_C = {}

function ACaravan_03_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ACaravan_03_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ACaravan_03_C:ExecuteUbergraph_Caravan_03(EntryPoint) end


