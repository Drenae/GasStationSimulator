---@meta

---@class APathManager_BP_C : APathfindingManager
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultSceneRoot USceneComponent
---@field NewVar_2 TArray<FLinearColor>
local APathManager_BP_C = {}

---@param StartLocation FVector
---@param StartPoint APathPoint
function APathManager_BP_C:FindSmartPoint(StartLocation, StartPoint) end
---@param StartPoint APathPoint
---@param EndPoint APathPoint
---@param GSSVehicle AGSSWheeledVehicle
---@param PathPoints TArray<APathPoint>
---@return USplineComponent
function APathManager_BP_C:FindAndGeneratePath(StartPoint, EndPoint, GSSVehicle, PathPoints) end
function APathManager_BP_C:GenerateNav() end
function APathManager_BP_C:ShowConnections() end
---@param EntryPoint int32
function APathManager_BP_C:ExecuteUbergraph_PathManager_BP(EntryPoint) end


