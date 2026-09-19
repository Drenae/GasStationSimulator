---@meta

---@class UEvent_VolcanoEruption_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VolcanoRef ABP_Volcano_C
---@field RockScale FFloatRange
---@field RockDelay FFloatRange
---@field ResetVolcanoDelay FTimeStruct
---@field RockAssets TArray<TSubclassOf<ATrashItem_VolcanoRock_C>>
---@field EruptionSFX UAudioComponent
---@field AvailablePoints TArray<FVector>
---@field SelectedPoint FVector
---@field DirtToSpawnCountRange FInt32Range
---@field RocksToSpawnCountRange FInt32Range
---@field WallDirtyPercentageToAdd float
---@field ['Spawn Point'] TArray<TSoftObjectPtr<ANoCarAISpawnPoint>>
---@field SpawnTimerHandle FTimerHandle
local UEvent_VolcanoEruption_C = {}

---@param NewParam ANoCarAISpawnPoint
function UEvent_VolcanoEruption_C:FindSpawnPoint(NewParam) end
function UEvent_VolcanoEruption_C:MakeWallsDirty() end
UEvent_VolcanoEruption_C['Spawn Dirt'] = function(self, ) end
---@param IsTimeOver boolean
function UEvent_VolcanoEruption_C:UpdateTime(IsTimeOver) end
---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_VolcanoEruption_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_VolcanoEruption_C:OnGameTimeUpdated_Event(UpdatedTime) end
function UEvent_VolcanoEruption_C:SpawnRocks() end
function UEvent_VolcanoEruption_C:SpawnFakeCustomer() end
function UEvent_VolcanoEruption_C:FinishEvent() end
---@param EntryPoint int32
function UEvent_VolcanoEruption_C:ExecuteUbergraph_Event_VolcanoEruption(EntryPoint) end


