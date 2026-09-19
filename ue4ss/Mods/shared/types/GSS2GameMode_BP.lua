---@meta

---@class AGSS2GameMode_BP_C : AGSS2GameMode
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
local AGSS2GameMode_BP_C = {}

function AGSS2GameMode_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AGSS2GameMode_BP_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function AGSS2GameMode_BP_C:ExecuteUbergraph_GSS2GameMode_BP(EntryPoint) end


