---@meta

---@class UBTT_MoveTo_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AICharacter AAICharacterBase
---@field GoalRotation FRotator
local UBTT_MoveTo_C = {}

function UBTT_MoveTo_C:IncreaseStuckCounter() end
function UBTT_MoveTo_C:CalcCharacterSpeed() end
---@param MovementResult EPathFollowingResult::Type
function UBTT_MoveTo_C:OnFail_3646B22248D32B15D6735687346D0F07(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UBTT_MoveTo_C:OnSuccess_3646B22248D32B15D6735687346D0F07(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UBTT_MoveTo_C:OnFail_BD4A0B324AB8D3D756FA9DBBF776837B(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UBTT_MoveTo_C:OnSuccess_BD4A0B324AB8D3D756FA9DBBF776837B(MovementResult) end
function UBTT_MoveTo_C:GOGO() end
function UBTT_MoveTo_C:UpdateDistanceTravelled() end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_MoveTo_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param AICharacter AActor
function UBTT_MoveTo_C:OnCannonHitEnded_Event_0(AICharacter) end
UBTT_MoveTo_C['Unbind OnCannonHitEnded'] = function(self, ) end
---@param EntryPoint int32
function UBTT_MoveTo_C:ExecuteUbergraph_BTT_MoveTo(EntryPoint) end


