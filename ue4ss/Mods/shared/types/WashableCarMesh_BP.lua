---@meta

---@class AWashableCarMesh_BP_C : AWashableCarMesh
---@field UberGraphFrame FPointerToUberGraphFrame
local AWashableCarMesh_BP_C = {}

function AWashableCarMesh_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AWashableCarMesh_BP_C:ExecuteUbergraph_WashableCarMesh_BP(EntryPoint) end


