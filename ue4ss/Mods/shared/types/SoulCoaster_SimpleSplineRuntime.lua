---@meta

---@class ASoulCoaster_SimpleSplineRuntime_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field End UStaticMeshComponent
---@field Start UStaticMeshComponent
---@field Spline1 USplineComponent
---@field ['Static Mesh'] UStaticMesh
---@field ForwardAxis ESplineMeshAxis::Type
---@field Meshes TArray<USplineMeshComponent>
---@field SectionLenght float
---@field ['Spline Scale'] FVector2D
local ASoulCoaster_SimpleSplineRuntime_C = {}

function ASoulCoaster_SimpleSplineRuntime_C:UpdateMesh() end
---@param DeltaSeconds float
function ASoulCoaster_SimpleSplineRuntime_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASoulCoaster_SimpleSplineRuntime_C:ExecuteUbergraph_SoulCoaster_SimpleSplineRuntime(EntryPoint) end


