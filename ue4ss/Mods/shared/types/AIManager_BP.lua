---@meta

---@class UAIManager_BP_C : UAIManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field tmpVehicleClass TSoftClassPtr<AGSSWheeledVehicle>
---@field SpawnPoint AAISpawnPoint_BP_C
local UAIManager_BP_C = {}

---@param InTask TArray<FTaskStruct>
---@return TArray<FTaskStruct>
function UAIManager_BP_C:GenerateCustomerTask(InTask) end
---@param InTask TArray<FTaskStruct>
---@return TArray<FTaskStruct>
function UAIManager_BP_C:GenerateVehicleTask(InTask) end
---@param InICharacterBase AAICharacterBase
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return boolean
function UAIManager_BP_C:SetupDeliveryCars(InICharacterBase, GSSWheeledVehicle) end
function UAIManager_BP_C:ReceiveBeginPlay() end
---@param SpawnPoint AAISpawnPoint
function UAIManager_BP_C:TrySpawnVehicle(SpawnPoint) end
---@param Variation int32
function UAIManager_BP_C:ResetFrequenceOfTasks(Variation) end
---@param EntryPoint int32
function UAIManager_BP_C:ExecuteUbergraph_AIManager_BP(EntryPoint) end


