---@meta

---@class ASoulCoaster_C : AActor
---@field End UStaticMeshComponent
---@field Start UStaticMeshComponent
---@field Spline1 USplineComponent
---@field ['Static Mesh'] UStaticMesh
---@field ForwardAxis ESplineMeshAxis::Type
---@field Meshes TArray<USplineMeshComponent>
---@field SectionLenght float
local ASoulCoaster_C = {}

function ASoulCoaster_C:UpdateMesh() end
function ASoulCoaster_C:UserConstructionScript() end


