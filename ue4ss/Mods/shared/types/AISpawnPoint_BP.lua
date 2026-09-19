---@meta

---@class AAISpawnPoint_BP_C : AAISpawnPoint
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UArrowComponent
---@field StaticMesh UStaticMeshComponent
---@field GameState AGSSGameState
---@field ['TimeTo Spawn'] float
local AAISpawnPoint_BP_C = {}

function AAISpawnPoint_BP_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function AAISpawnPoint_BP_C:ReceiveTick(DeltaSeconds) end
---@param Min float
---@param Max float
function AAISpawnPoint_BP_C:SetTime(Min, Max) end
---@param EntryPoint int32
function AAISpawnPoint_BP_C:ExecuteUbergraph_AISpawnPoint_BP(EntryPoint) end


