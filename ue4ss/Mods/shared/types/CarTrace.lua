---@meta

---@class ACarTrace_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Cube UStaticMeshComponent
---@field Scene USceneComponent
---@field NextCarTrace ACarTrace_C
---@field Finished FCarTrace_CFinished
local ACarTrace_C = {}

function ACarTrace_C:ReceiveBeginPlay() end
---@param bUpdate boolean
function ACarTrace_C:UpdateOutline(bUpdate) end
---@param EntryPoint int32
function ACarTrace_C:ExecuteUbergraph_CarTrace(EntryPoint) end
---@param NewParam ACarTrace_C
function ACarTrace_C:Finished__DelegateSignature(NewParam) end


