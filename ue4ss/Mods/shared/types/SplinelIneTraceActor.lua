---@meta

---@class ASplinelIneTraceActor_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline USplineComponent
local ASplinelIneTraceActor_C = {}

function ASplinelIneTraceActor_C:ReceiveBeginPlay() end
---@param GSSWheeledVehicle AGSSWheeledVehicle
function ASplinelIneTraceActor_C:DestroySelf(GSSWheeledVehicle) end
---@param EntryPoint int32
function ASplinelIneTraceActor_C:ExecuteUbergraph_SplinelIneTraceActor(EntryPoint) end


