---@meta

---@class ACinemaTrashSpawner_BP_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field DefaultSceneRoot USceneComponent
---@field SandstormRef AActor
---@field TrashItemCountToSpawn int32
---@field TrashItemsSpawned int32
local ACinemaTrashSpawner_BP_C = {}

function ACinemaTrashSpawner_BP_C:SpawnTrash() end
function ACinemaTrashSpawner_BP_C:ReceiveBeginPlay() end
---@param Sandstorm AActor
function ACinemaTrashSpawner_BP_C:OnSandstormStart(Sandstorm) end
function ACinemaTrashSpawner_BP_C:OnSandstormEnd() end
---@param DeltaSeconds float
function ACinemaTrashSpawner_BP_C:ReceiveTick(DeltaSeconds) end
function ACinemaTrashSpawner_BP_C:ResetTrashCooldown() end
function ACinemaTrashSpawner_BP_C:ReceiveDestroyed() end
function ACinemaTrashSpawner_BP_C:SandstormReset() end
---@param EntryPoint int32
function ACinemaTrashSpawner_BP_C:ExecuteUbergraph_CinemaTrashSpawner_BP(EntryPoint) end


