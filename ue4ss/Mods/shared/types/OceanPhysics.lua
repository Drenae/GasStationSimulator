---@meta

---@class UOceanPhysics_C : UActorComponent
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Oceanology ABP_Oceanology_Infinity_C
---@field Owner AActor
---@field PrimComponent UPrimitiveComponent
---@field EnableBuoyancy boolean
---@field ['Buoyancy Points'] TArray<FVector>
---@field ['Display Buoyancy Points'] boolean
---@field LinearDamping float
---@field AngularDamping float
---@field Mass float
---@field ['Point Thickness'] float
---@field ['Displacement Force'] float
---@field ['Is Under'] boolean
---@field Force FVector
---@field Location FVector
---@field ActorTransform FTransform
---@field Int int32
---@field ['Depth Calculation'] TArray<float>
---@field ['Depth Event'] boolean
---@field Amount float
---@field LinearDampingOutOfWater float
---@field OnWaterEnter FOceanPhysics_COnWaterEnter
---@field OnWaterExit FOceanPhysics_COnWaterExit
local UOceanPhysics_C = {}

UOceanPhysics_C['Entered Water'] = function(self, ) end
UOceanPhysics_C['Exited Water'] = function(self, ) end
function UOceanPhysics_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function UOceanPhysics_C:ReceiveTick(DeltaSeconds) end
---@param EntryPoint int32
function UOceanPhysics_C:ExecuteUbergraph_OceanPhysics(EntryPoint) end
function UOceanPhysics_C:OnWaterExit__DelegateSignature() end
function UOceanPhysics_C:OnWaterEnter__DelegateSignature() end


