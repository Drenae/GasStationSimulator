---@meta

---@class ASharkSpawner_BP_C : ASharkSpawner
---@field UberGraphFrame FPointerToUberGraphFrame
---@field arrow UArrowComponent
---@field DefaultSceneRoot USceneComponent
---@field TargetPoints TArray<AActor>
---@field SpawnTime float
---@field SharkNotification USharkNotification_C
---@field SpawnSharkHandle FTimerHandle
local ASharkSpawner_BP_C = {}

---@param bIgnoreCustomers boolean
function ASharkSpawner_BP_C:SpawnSharkFunction(bIgnoreCustomers) end
function ASharkSpawner_BP_C:Finished_E938218E48DFB3EA18FBA88F82638888() end
function ASharkSpawner_BP_C:Finished_5EFA2EDA48B885767E3842A0E2C1E482() end
---@param bLoadedFromSave boolean
---@param SavedSharkData FSavedShark
function ASharkSpawner_BP_C:SpawnShark(bLoadedFromSave, SavedSharkData) end
function ASharkSpawner_BP_C:StartSharkSpawn() end
function ASharkSpawner_BP_C:TryToSpawnShark() end
function ASharkSpawner_BP_C:ActualSpawn() end
---@param EntryPoint int32
function ASharkSpawner_BP_C:ExecuteUbergraph_SharkSpawner_BP(EntryPoint) end


