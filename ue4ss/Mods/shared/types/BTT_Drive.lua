---@meta

---@class UBTT_Drive_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SaveCarDistance float
---@field SpeedControlCurve UCurveFloat
---@field DeltaRotatorToPoint FRotator
---@field Velocity float
---@field FRVehicleAndPoint1 FRotator
---@field Distance float
---@field FirstControlPoint FTransform
---@field SecoundControlPoint FTransform
---@field VehicleCurrent FTransform
---@field FollowPoint FTransform
---@field AcceptableRadious float
---@field Angle float
---@field IsBlocked boolean
---@field SightAngle float
---@field BaseVehicle AGSSWheeledVehicle
---@field Color FLinearColor
---@field AICharacterBase AAICharacterBase
---@field ParkingSpotIsBlockedRadius float
---@field TimeFromLastTraceCheck float
---@field LastCheckState boolean
---@field TimeFromLastTrueCheck float
---@field TimeFromLastOverlapCheck float
---@field ThirdControlPoint FTransform
---@field MinimalTraceForwardDistance float
---@field bUseShortTraceGrainAtSplineEnd boolean
---@field TimeSinceLastUnstuckProgress float
---@field IsNewDrivingSystemReady boolean
local UBTT_Drive_C = {}

---@param MinimalTraceDistance float
function UBTT_Drive_C:GetMinimalTraceForwardDistance(MinimalTraceDistance) end
---@param OtherVehicle AGSSWheeledVehicle
function UBTT_Drive_C:FindOtherParkingSpotBecauseThisIsBlockedByCarWithoutDriver(OtherVehicle) end
function UBTT_Drive_C:CalcDirection() end
function UBTT_Drive_C:CalcControlPoints() end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_Drive_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
---@param DeltaSeconds float
function UBTT_Drive_C:ReceiveTickAI(OwnerController, ControlledPawn, DeltaSeconds) end
function UBTT_Drive_C:StopCar() end
---@param GameLoaded boolean
function UBTT_Drive_C:OnFinishedLoading(GameLoaded) end
---@param EntryPoint int32
function UBTT_Drive_C:ExecuteUbergraph_BTT_Drive(EntryPoint) end


