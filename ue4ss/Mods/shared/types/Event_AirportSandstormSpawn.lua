---@meta

---@class UEvent_AirportSandstormSpawn_C : UEvent_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Finish boolean
---@field Time float
---@field SandstormCurve UCurveFloat
local UEvent_AirportSandstormSpawn_C = {}

---@param NewPlayerController APlayerController
---@param NewGSSEventTime FGSSEventTime
function UEvent_AirportSandstormSpawn_C:InitializeEvent(NewPlayerController, NewGSSEventTime) end
---@param UpdatedTime FTimeStruct
function UEvent_AirportSandstormSpawn_C:OnGameTimeUpdated(UpdatedTime) end
---@param DeltaTime float
function UEvent_AirportSandstormSpawn_C:TickObject(DeltaTime) end
---@param World UWorld
---@param bEventEnabled boolean
function UEvent_AirportSandstormSpawn_C:InitializeEventWorld(World, bEventEnabled) end
---@param EntryPoint int32
function UEvent_AirportSandstormSpawn_C:ExecuteUbergraph_Event_AirportSandstormSpawn(EntryPoint) end


