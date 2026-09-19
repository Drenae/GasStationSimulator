---@meta

---@class USequenceDirector_C : ULevelSequenceDirector
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CarWashPistol ACarWashPistol
---@field Frame UStaticMeshComponent
---@field StartingVectorOffsetTop FVector
---@field StartingVectorOffsetRight FVector
---@field StartingVectorOffsetLeft FVector
---@field ViewDistanceQuality int32
local USequenceDirector_C = {}

function USequenceDirector_C:SequenceEvent__ENTRYPOINTSequenceDirector_2() end
function USequenceDirector_C:SequenceEvent__ENTRYPOINTSequenceDirector_1() end
function USequenceDirector_C:SequenceEvent__ENTRYPOINTSequenceDirector_0() end
function USequenceDirector_C:Trace1() end
function USequenceDirector_C:Trace2() end
---@param Amount int32
---@param Offset float
---@param Start FVector
---@param Direction FVector
function USequenceDirector_C:TraceWashingTop(Amount, Offset, Start, Direction) end
---@param Amount int32
---@param Offset float
---@param Start FVector
---@param Direction FVector
---@param SprayDirection FVector
function USequenceDirector_C:TraceWashingSide(Amount, Offset, Start, Direction, SprayDirection) end
function USequenceDirector_C:Start() end
---@param EntryPoint int32
function USequenceDirector_C:ExecuteUbergraph_SequenceDirector(EntryPoint) end


