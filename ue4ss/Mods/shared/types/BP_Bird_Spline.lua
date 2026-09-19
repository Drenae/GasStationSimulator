---@meta

---@class ABP_Bird_Spline_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Spline USplineComponent
---@field DefaultSceneRoot USceneComponent
---@field FlattenWing_LittleFlap_6C108F184CB98FFAEA18C59A4759F707 float
---@field FlattenWing_BigFlap_6C108F184CB98FFAEA18C59A4759F707 float
---@field FlattenWing__Direction_6C108F184CB98FFAEA18C59A4759F707 ETimelineDirection::Type
---@field FlattenWing UTimelineComponent
---@field Bird_Movement_Wing_2316A6FE4C9838D57A245E8E07B0480C float
---@field Bird_Movement_Lerp_2316A6FE4C9838D57A245E8E07B0480C float
---@field Bird_Movement__Direction_2316A6FE4C9838D57A245E8E07B0480C ETimelineDirection::Type
---@field Bird_Movement UTimelineComponent
---@field Bird_Offset_Lerp_F99833EA4C008EEB390B35B1B76C6B38 float
---@field Bird_Offset__Direction_F99833EA4C008EEB390B35B1B76C6B38 ETimelineDirection::Type
---@field Bird_Offset UTimelineComponent
---@field NumberOfBirds int32
---@field BirdScale float
---@field BirdMeshes TArray<UStaticMeshComponent>
---@field BirdMaterials TArray<UMaterialInstanceDynamic>
---@field PreviewSplinePoints boolean
---@field bIsLoop boolean
---@field StartingPosition float
---@field LoopsPerMinute int32
---@field FlapSpeed float
---@field RandomiseStart float
---@field RandomiseOffset float
---@field Offset TArray<FVector>
---@field OffsetStart TArray<FVector>
---@field OffsetEnd TArray<FVector>
---@field BirdMesh UStaticMesh
---@field FlapRandom TArray<float>
---@field PositionRandom TArray<float>
---@field NewVar_0 boolean
---@field DistanceThreshold float
local ABP_Bird_Spline_C = {}

---@param Position float
---@param BirdIndex int32
function ABP_Bird_Spline_C:UpdateBird(Position, BirdIndex) end
function ABP_Bird_Spline_C:UserConstructionScript() end
function ABP_Bird_Spline_C:Bird_Movement__FinishedFunc() end
function ABP_Bird_Spline_C:Bird_Movement__UpdateFunc() end
function ABP_Bird_Spline_C:Bird_Offset__FinishedFunc() end
function ABP_Bird_Spline_C:Bird_Offset__UpdateFunc() end
function ABP_Bird_Spline_C:FlattenWing__FinishedFunc() end
function ABP_Bird_Spline_C:FlattenWing__UpdateFunc() end
function ABP_Bird_Spline_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABP_Bird_Spline_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ABP_Bird_Spline_C:ExecuteUbergraph_BP_Bird_Spline(EntryPoint) end


