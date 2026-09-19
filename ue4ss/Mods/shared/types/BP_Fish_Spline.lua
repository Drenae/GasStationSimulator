---@meta

---@class ABP_Fish_Spline_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline USplineComponent
---@field DefaultSceneRoot USceneComponent
---@field Fish_Offset_Lerp_78CB6F01443558170C516486B9B2544D float
---@field Fish_Offset__Direction_78CB6F01443558170C516486B9B2544D ETimelineDirection::Type
---@field Fish_Offset UTimelineComponent
---@field FishMovement_Tail_C86D861F485439D28877BEA0CF194E72 float
---@field FishMovement_Lerp_C86D861F485439D28877BEA0CF194E72 float
---@field FishMovement__Direction_C86D861F485439D28877BEA0CF194E72 ETimelineDirection::Type
---@field FishMovement UTimelineComponent
---@field NumberOfFish int32
---@field FishScale float
---@field FishMeshes TArray<UStaticMeshComponent>
---@field FishMaterials TArray<UMaterialInstanceDynamic>
---@field StartingPosition float
---@field LoopsPerMinute int32
---@field Tail_Speed float
---@field RandomiseStart float
---@field RandomiseOffset float
---@field Offset TArray<FVector>
---@field OffsetStart TArray<FVector>
---@field OffsetEnd TArray<FVector>
---@field FishMesh UStaticMesh
---@field TailRandom TArray<float>
---@field PositionRandom TArray<float>
---@field OffsetDelay float
---@field DistanceThreshold float
local ABP_Fish_Spline_C = {}

---@param Position float
---@param FishIndex int32
function ABP_Fish_Spline_C:UpdateFish(Position, FishIndex) end
function ABP_Fish_Spline_C:UserConstructionScript() end
function ABP_Fish_Spline_C:FishMovement__FinishedFunc() end
function ABP_Fish_Spline_C:FishMovement__UpdateFunc() end
function ABP_Fish_Spline_C:Fish_Offset__FinishedFunc() end
function ABP_Fish_Spline_C:Fish_Offset__UpdateFunc() end
function ABP_Fish_Spline_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ABP_Fish_Spline_C:ExecuteUbergraph_BP_Fish_Spline(EntryPoint) end


