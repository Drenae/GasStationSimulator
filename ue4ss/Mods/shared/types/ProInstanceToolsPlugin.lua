---@meta

---@class AProInstanceToolsCircle : AProInstanceToolsParent
---@field NumInstances int32
---@field Angle float
---@field Radius float
---@field RotationType EProInstanceToolsCircleInstanceRotationType
local AProInstanceToolsCircle = {}



---@class AProInstanceToolsGrid : AProInstanceToolsParent
---@field NumInstances FIntVector
---@field Spacing FVector
local AProInstanceToolsGrid = {}



---@class AProInstanceToolsParent : AActor
---@field Root USceneComponent
---@field Billboard UBillboardComponent
---@field CurrentInstanceContainer FProInstanceCurrentInstanceContainer
---@field CurrentInstanceArrayContainer FProInstanceCurrentInstanceArrayContainer
---@field CurrentInstance FProInstanceInstance
---@field InstanceType EProInstanceInstanceType
---@field Instances TArray<FProInstanceInstance>
---@field bEnableCollision boolean
---@field OnOverlap EProInstanceOnOverlap
---@field Index int32
---@field IndexVector FIntVector
---@field StartCullDistance int32
---@field EndCullDistance int32
---@field Seed int32
---@field RandomStream FRandomStream
---@field bSurfaceSnapping boolean
---@field bSurfaceAligning boolean
---@field bIgnoreSelfCollision boolean
---@field LineTracingDepth float
---@field ActorsToIgnore TArray<AActor>
local AProInstanceToolsParent = {}

function AProInstanceToolsParent:SetupInstances() end
function AProInstanceToolsParent:Randomize() end
function AProInstanceToolsParent:DestroyComponents() end
---@param Transform FTransform
---@param Instance FProInstanceCurrentInstanceContainer
function AProInstanceToolsParent:CreateInstance(Transform, Instance) end


---@class AProInstanceToolsPath : AProInstanceToolsParent
---@field SplineComponent USplineComponent
---@field PlacementType EProInstanceToolsPathPlacementType
---@field Spacing float
---@field MaxInstances int32
---@field bUseInstanceLength boolean
---@field bFollowSplineRotation boolean
---@field bClosedSpline boolean
---@field CurrentDistance float
---@field CurrentInstanceLength float
local AProInstanceToolsPath = {}



---@class AProInstanceToolsPathScatter : AProInstanceToolsParent
---@field SplineComponent USplineComponent
---@field NumInstances int32
---@field bUseSplineScale boolean
---@field bFollowSplineRotation boolean
---@field bClosedSpline boolean
---@field CurrentDistance float
local AProInstanceToolsPathScatter = {}



---@class AProInstanceToolsScatter : AProInstanceToolsParent
---@field NumInstances int32
---@field PlacementType EProInstanceScatterPlacementType
---@field BoxSize FVector
---@field BoxExtent FVector
---@field BoxPivotPoint EProInstanceScatterBoxPivotPoint
---@field SphereRadius float
local AProInstanceToolsScatter = {}



---@class FProInstanceCurrentInstanceArrayContainer
---@field StaticMeshArray TArray<UStaticMesh>
---@field ISMArray TArray<UInstancedStaticMeshComponent>
---@field HISMArray TArray<UHierarchicalInstancedStaticMeshComponent>
---@field ActorClassArray TArray<TSubclassOf<AActor>>
local FProInstanceCurrentInstanceArrayContainer = {}



---@class FProInstanceCurrentInstanceContainer
---@field StaticMesh UStaticMesh
---@field ISM UInstancedStaticMeshComponent
---@field HISM UHierarchicalInstancedStaticMeshComponent
---@field ActorClass TSubclassOf<AActor>
local FProInstanceCurrentInstanceContainer = {}



---@class FProInstanceInstance
---@field Mesh UStaticMesh
---@field ActorClass TSubclassOf<AActor>
---@field InstanceSettings FProInstanceInstanceSettings
local FProInstanceInstance = {}



---@class FProInstanceInstanceSettings
---@field Location FProInstanceLocation
---@field Rotation FProInstanceRotation
---@field Scale FProInstanceScale
---@field bCastShadows boolean
---@field SpawnChance int32
---@field InstanceLength float
local FProInstanceInstanceSettings = {}



---@class FProInstanceLocation
---@field LocationOffset FVector
---@field LocationRangeMin FVector
---@field LocationRangeMax FVector
local FProInstanceLocation = {}



---@class FProInstanceRotation
---@field RotationOffset FRotator
---@field RotationRangeMin FRotator
---@field RotationRangeMax FRotator
local FProInstanceRotation = {}



---@class FProInstanceScale
---@field bUniformScale boolean
---@field MinUniformScale float
---@field MaxUniformScale float
---@field MinScale FVector
---@field MaxScale FVector
local FProInstanceScale = {}



