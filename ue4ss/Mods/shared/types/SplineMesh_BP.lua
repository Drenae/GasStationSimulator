---@meta

---@class ASplineMesh_BP_C : AActor
---@field Spline USplineComponent
---@field DefaultSceneRoot USceneComponent
---@field StaticMesh UStaticMesh
---@field Collision ECollisionEnabled::Type
---@field ForwardAxis ESplineMeshAxis::Type
---@field FlipMesh boolean
---@field AddFlipSide boolean
---@field SplinePoint int32
---@field SplineMesh USplineMeshComponent
---@field SplineMesh2 USplineMeshComponent
---@field ['disable Cast shadow'] boolean
local ASplineMesh_BP_C = {}

---@param Array1 TArray<FVector>
---@param Array2 TArray<FVector>
---@param Array3 TArray<FVector>
---@param Size int32
function ASplineMesh_BP_C:ResetVectorArray(Array1, Array2, Array3, Size) end
---@param From TArray<FVector>
---@param To TArray<FVector>
function ASplineMesh_BP_C:ReplaceVectorArrayValues(From, To) end
---@param Value int32
function ASplineMesh_BP_C:AddRemoveSegments(Value) end
---@param SegmentCount int32
---@param TargetArray TArray<USplineMeshComponent>
---@param Offset float
---@param Collision boolean
function ASplineMesh_BP_C:AddSplineMeshComponents(SegmentCount, TargetArray, Offset, Collision) end
function ASplineMesh_BP_C:UserConstructionScript() end


