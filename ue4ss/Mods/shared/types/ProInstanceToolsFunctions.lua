---@meta

---@class UProInstanceToolsFunctions_C : UBlueprintFunctionLibrary
local UProInstanceToolsFunctions_C = {}

---@param InstanceType EProInstanceInstanceType
---@param CurrentInstanceArrayContainer FProInstanceCurrentInstanceArrayContainer
---@param CurrentInstanceContainer FProInstanceCurrentInstanceContainer
---@param Instances TArray<FProInstanceInstance>
---@param CurrentInstance FProInstanceInstance
---@param Stream FRandomStream
---@param __WorldContext UObject
function UProInstanceToolsFunctions_C:SetCurrentInstance(InstanceType, CurrentInstanceArrayContainer, CurrentInstanceContainer, Instances, CurrentInstance, Stream, __WorldContext) end
---@param RandomStream FRandomStream
---@param CurrentInstance FProInstanceInstance
---@param __WorldContext UObject
---@param Success boolean
function UProInstanceToolsFunctions_C:GetRandomChance(RandomStream, CurrentInstance, __WorldContext, Success) end
---@param RotationIn FRotator
---@param CurrentInstance FProInstanceInstance
---@param __WorldContext UObject
---@param RotationOut FRotator
function UProInstanceToolsFunctions_C:GetRotationOffset(RotationIn, CurrentInstance, __WorldContext, RotationOut) end
---@param LocationIn FVector
---@param CurrentInstance FProInstanceInstance
---@param __WorldContext UObject
---@param LocationOut FVector
function UProInstanceToolsFunctions_C:GetLocationZOffset(LocationIn, CurrentInstance, __WorldContext, LocationOut) end
---@param LocationIn FVector
---@param CurrentInstance FProInstanceInstance
---@param __WorldContext UObject
---@param LocationOut FVector
function UProInstanceToolsFunctions_C:GetLocationXYOffset(LocationIn, CurrentInstance, __WorldContext, LocationOut) end
---@param RandomStream FRandomStream
---@param CurrentInstance FProInstanceInstance
---@param __WorldContext UObject
---@param ScaleOutput FVector
function UProInstanceToolsFunctions_C:GetRandomScale(RandomStream, CurrentInstance, __WorldContext, ScaleOutput) end
---@param RotationIn FRotator
---@param RandomStream FRandomStream
---@param CurrentInstance FProInstanceInstance
---@param __WorldContext UObject
---@param RotationOut FRotator
function UProInstanceToolsFunctions_C:GetRandomRotation(RotationIn, RandomStream, CurrentInstance, __WorldContext, RotationOut) end
---@param LocationIn FVector
---@param RandomStream FRandomStream
---@param CurrentInstance FProInstanceInstance
---@param __WorldContext UObject
---@param LocationOut FVector
function UProInstanceToolsFunctions_C:GetRandomLocation(LocationIn, RandomStream, CurrentInstance, __WorldContext, LocationOut) end
---@param CurrentInstanceArray FProInstanceCurrentInstanceArrayContainer
---@param Stream FRandomStream
---@param __WorldContext UObject
---@param RandomInstance FProInstanceCurrentInstanceContainer
function UProInstanceToolsFunctions_C:GetRandomObject(CurrentInstanceArray, Stream, __WorldContext, RandomInstance) end
---@param CurrentInstanceArrayContainer FProInstanceCurrentInstanceArrayContainer
---@param CurrentInstanceContainer FProInstanceCurrentInstanceContainer
---@param Instances TArray<FProInstanceInstance>
---@param InstanceType EProInstanceInstanceType
---@param __WorldContext UObject
---@param Instance FProInstanceInstance
function UProInstanceToolsFunctions_C:GetCurrentInstance(CurrentInstanceArrayContainer, CurrentInstanceContainer, Instances, InstanceType, __WorldContext, Instance) end
---@param CurrentInstanceArray FProInstanceCurrentInstanceArrayContainer
---@param Stream FRandomStream
---@param InstanceType EProInstanceInstanceType
---@param __WorldContext UObject
---@param RandomInstance FProInstanceCurrentInstanceContainer
---@param Index int32
function UProInstanceToolsFunctions_C:GetRandomInstance(CurrentInstanceArray, Stream, InstanceType, __WorldContext, RandomInstance, Index) end
---@param RandomStream FRandomStream
---@param CurrentInstanceScale FVector
---@param CurrentInstanceBoxExtent FVector
---@param ObjectType uint8
---@param __WorldContext UObject
function UProInstanceToolsFunctions_C:SetCurrentInstanceValues(RandomStream, CurrentInstanceScale, CurrentInstanceBoxExtent, ObjectType, __WorldContext) end
---@param Target AActor
---@param StartTracing FVector
---@param LineTracingDepth float
---@param SurfaceSnapping boolean
---@param SurfaceAligning boolean
---@param ActorsToIgnore TArray<AActor>
---@param IgnoreSelfCollision boolean
---@param __WorldContext UObject
---@param Location FVector
---@param Rotation FRotator
---@param CanSpawn boolean
function UProInstanceToolsFunctions_C:PlacementLineTracing(Target, StartTracing, LineTracingDepth, SurfaceSnapping, SurfaceAligning, ActorsToIgnore, IgnoreSelfCollision, __WorldContext, Location, Rotation, CanSpawn) end


