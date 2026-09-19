---@meta

---@class ARuinSpawner_BP_C : ARuinSpawner
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
local ARuinSpawner_BP_C = {}

function ARuinSpawner_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ARuinSpawner_BP_C:ExecuteUbergraph_RuinSpawner_BP(EntryPoint) end


