---@meta

---@class AStop_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
---@field StopRightSide TArray<AStopHelp_C>
---@field isStopped boolean
---@field StopLeftSide TArray<AStopHelp_C>
---@field StopForwardSide TArray<AStopHelp_C>
---@field CheckBySplinePoints boolean
---@field SplineDistanceToCheck float
local AStop_C = {}

---@param Vehicle AGSSWheeledVehicle
---@param isStopped boolean
function AStop_C:CheckCollisionStop(Vehicle, isStopped) end
function AStop_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AStop_C:ExecuteUbergraph_Stop(EntryPoint) end


