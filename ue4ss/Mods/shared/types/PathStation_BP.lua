---@meta

---@class APathStation_BP_C : APathStation
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
local APathStation_BP_C = {}

function APathStation_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function APathStation_BP_C:ExecuteUbergraph_PathStation_BP(EntryPoint) end


