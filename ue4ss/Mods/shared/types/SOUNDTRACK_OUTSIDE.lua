---@meta

---@class ASOUNDTRACK_OUTSIDE_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field Audio UAudioComponent
local ASOUNDTRACK_OUTSIDE_C = {}

function ASOUNDTRACK_OUTSIDE_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ASOUNDTRACK_OUTSIDE_C:ExecuteUbergraph_SOUNDTRACK_OUTSIDE(EntryPoint) end


