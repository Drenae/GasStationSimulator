---@meta

---@class UBTT_NPAIMoveTo_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NPAICharacter ANPAICharacterBase
---@field DistanceMeasurementTimer FTimerHandle
---@field PreviousPositions TArray<FVector>
---@field TargetLocations TArray<FVector>
---@field CurrentPointIndex int32
---@field PointsReachedWithUnstuck TMap<int32, boolean>
---@field ReachedWaypointsProvided boolean
local UBTT_NPAIMoveTo_C = {}

---@param MovementResult EPathFollowingResult::Type
function UBTT_NPAIMoveTo_C:OnFail_8B3809624DBF526060E1499C9213DD98(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UBTT_NPAIMoveTo_C:OnSuccess_8B3809624DBF526060E1499C9213DD98(MovementResult) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_NPAIMoveTo_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
function UBTT_NPAIMoveTo_C:UpdateDistanceTravelled() end
---@param PointIndex int32
function UBTT_NPAIMoveTo_C:MoveToPoint(PointIndex) end
---@param EntryPoint int32
function UBTT_NPAIMoveTo_C:ExecuteUbergraph_BTT_NPAIMoveTo(EntryPoint) end


