---@meta

---@class UEvent_SandstormSpawn_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SandstormCurve UCurveFloat
---@field Time float
---@field Finish boolean
---@field SandstormSpawners TArray<AActor>
local UEvent_SandstormSpawn_C = {}

---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_SandstormSpawn_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_SandstormSpawn_C:OnGameTimeUpdated_Event_0(UpdatedTime) end
---@param DeltaTime float
function UEvent_SandstormSpawn_C:TickObject(DeltaTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_SandstormSpawn_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UEvent_SandstormSpawn_C:ExecuteUbergraph_Event_SandstormSpawn(EntryPoint) end


