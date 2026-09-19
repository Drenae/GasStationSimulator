---@meta

---@class AVehicleSystemBase : APawn
---@field VehicleMesh UStaticMeshComponent
---@field SteeringCurve FRuntimeFloatCurve
---@field SteeringSpeed float
---@field Gears TArray<FVehicleGear>
---@field ReplicateMovement boolean
---@field SyncLocation boolean
---@field SyncRotation boolean
---@field NetSendRate float
---@field NetTimeBehind float
---@field NetLerpStart float
---@field NetPositionTolerance float
---@field NetSmoothing float
---@field RestState FNetState
local AVehicleSystemBase = {}

function AVehicleSystemBase:TeleportWheels() end
---@param DeltaTime float
function AVehicleSystemBase:SyncTrailerRotation(DeltaTime) end
---@param ShouldSync boolean
function AVehicleSystemBase:SetShouldSyncWithServer(ShouldSync) end
---@param State FNetState
function AVehicleSystemBase:Server_ReceiveRestState(State) end
---@param State FNetState
function AVehicleSystemBase:Server_ReceiveNetState(State) end
function AVehicleSystemBase:OwnerChanged() end
function AVehicleSystemBase:OnRep_RestState() end
function AVehicleSystemBase:NetStateSend() end
function AVehicleSystemBase:Multicast_ChangedOwner() end
---@param Speed float
---@return float
function AVehicleSystemBase:GetSteeringFromCurve(Speed) end
---@param State FNetState
function AVehicleSystemBase:Client_ReceiveNetState(State) end
---@param Text FString
function AVehicleSystemBase:BlueprintDebugMessage(Text) end
---@param DeltaTime float
function AVehicleSystemBase:AVS_Tick(DeltaTime) end


---@class FNetState
---@field Timestamp float
---@field localtimestamp float
---@field Position FVector
---@field Rotation FRotator
---@field Velocity FVector
---@field AngularVelocity FVector
local FNetState = {}



---@class FVehicleGear
---@field EndSpeed float
---@field StartSpeed float
---@field UpShift float
---@field DownShift float
---@field HighRPM float
---@field LowRPM float
---@field MaxTorque float
---@field MinTorque float
local FVehicleGear = {}



---@class UVehicleConstraint : UPhysicsConstraintComponent
local UVehicleConstraint = {}

---@param SoftConstraint boolean
---@param Stiffness float
---@param Damping float
function UVehicleConstraint:SetLinearSoftConstraint(SoftConstraint, Stiffness, Damping) end


---@class UVehicleSystemFunctions : UBlueprintFunctionLibrary
local UVehicleSystemFunctions = {}

---@param Target UPrimitiveComponent
---@param InDamping float
---@param BoneName FName
function UVehicleSystemFunctions:SetLinearDamping(Target, InDamping, BoneName) end
---@param Target UPrimitiveComponent
---@param InDamping float
---@param BoneName FName
function UVehicleSystemFunctions:SetAngularDamping(Target, InDamping, BoneName) end
---@param WorldContextObject UObject
---@return boolean
function UVehicleSystemFunctions:RunningInPIE_World(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UVehicleSystemFunctions:RunningInGame_World(WorldContextObject) end
---@param WorldContextObject UObject
---@return boolean
function UVehicleSystemFunctions:RunningInEditor_World(WorldContextObject) end
---@param inString FString
---@param TextColor FLinearColor
---@param Duration float
---@param Tag int32
function UVehicleSystemFunctions:PrintToScreenWithTag(inString, TextColor, Duration, Tag) end
---@return FString
function UVehicleSystemFunctions:GetPluginVersion() end
---@param Target UPrimitiveComponent
---@param BoneName FName
---@return float
function UVehicleSystemFunctions:GetMeshRadius(Target, BoneName) end
---@param Target UPrimitiveComponent
---@param BoneName FName
---@return float
function UVehicleSystemFunctions:GetMeshDiameter(Target, BoneName) end
---@param Target UPrimitiveComponent
---@param BoneName FName
---@return FVector
function UVehicleSystemFunctions:GetMeshCenterOfMass(Target, BoneName) end
---@param Target UPrimitiveComponent
---@param BoneName FName
---@param Origin FVector
---@return FVector
function UVehicleSystemFunctions:GetBoneBounds(Target, BoneName, Origin) end


