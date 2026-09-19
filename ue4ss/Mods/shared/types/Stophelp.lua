---@meta

---@class AStopHelp_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMesh UStaticMeshComponent
local AStopHelp_C = {}

---@param CheckedActor AActor
---@param OverlappingActors TArray<AActor>
---@return boolean
function AStopHelp_C:IsOverlapingVehicles(CheckedActor, OverlappingActors) end
function AStopHelp_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AStopHelp_C:ExecuteUbergraph_StopHelp(EntryPoint) end


