---@meta

---@class ABench_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field JoeTeleportPoint UStaticMeshComponent
---@field arrow UArrowComponent
---@field StaticMesh UStaticMeshComponent
---@field NPSmartObject UNPSmartObjectComponent
local ABench_BP_C = {}

function ABench_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABench_BP_C:ExecuteUbergraph_Bench_BP(EntryPoint) end


