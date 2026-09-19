---@meta

---@class ASplineFuelMagazine_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field PhysicsConstraint14 UPhysicsConstraintComponent
---@field PhysicsConstraint13 UPhysicsConstraintComponent
---@field PhysicsConstraint12 UPhysicsConstraintComponent
---@field PhysicsConstraint11 UPhysicsConstraintComponent
---@field PhysicsConstraint10 UPhysicsConstraintComponent
---@field PhysicsConstraint9 UPhysicsConstraintComponent
---@field PhysicsConstraint8 UPhysicsConstraintComponent
---@field PhysicsConstraint7 UPhysicsConstraintComponent
---@field PhysicsConstraint6 UPhysicsConstraintComponent
---@field PhysicsConstraint5 UPhysicsConstraintComponent
---@field PhysicsConstraint4 UPhysicsConstraintComponent
---@field PhysicsConstraint3 UPhysicsConstraintComponent
---@field PhysicsConstraint2 UPhysicsConstraintComponent
---@field PhysicsConstraint1 UPhysicsConstraintComponent
---@field PhysicsConstraint UPhysicsConstraintComponent
---@field a15 UStaticMeshComponent
---@field a14 UStaticMeshComponent
---@field a13 UStaticMeshComponent
---@field a12 UStaticMeshComponent
---@field a11 UStaticMeshComponent
---@field Sphere USphereComponent
---@field a10 UStaticMeshComponent
---@field a9 UStaticMeshComponent
---@field a8 UStaticMeshComponent
---@field a7 UStaticMeshComponent
---@field a6 UStaticMeshComponent
---@field a5 UStaticMeshComponent
---@field a4 UStaticMeshComponent
---@field a3 UStaticMeshComponent
---@field a2 UStaticMeshComponent
---@field Spline USplineComponent
---@field a1 UStaticMeshComponent
---@field NewVar_0 USplineMeshComponent
---@field StaticMeshes TArray<UStaticMeshComponent>
---@field SplineMeshes TArray<USplineMeshComponent>
---@field FuelMagazine AActor
---@field BoatFuelWheel ABoatFuelDeliveryWheel
local ASplineFuelMagazine_C = {}

function ASplineFuelMagazine_C:UserConstructionScript() end
---@param DeltaSeconds float
function ASplineFuelMagazine_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function ASplineFuelMagazine_C:ExecuteUbergraph_SplineFuelMagazine(EntryPoint) end


