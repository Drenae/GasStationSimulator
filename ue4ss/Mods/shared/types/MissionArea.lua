---@meta

---@class AMissionArea_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
---@field StaticMeshToSet UStaticMesh
local AMissionArea_C = {}

function AMissionArea_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AMissionArea_C:ExecuteUbergraph_MissionArea(EntryPoint) end


