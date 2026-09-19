---@meta

---@class AAI_Denis_C : ACharacterController
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TimerRef FTimerHandle
local AAI_Denis_C = {}

function AAI_Denis_C:RunBehaviorTreeEvent() end
function AAI_Denis_C:DistanceToPlayerCheck() end
function AAI_Denis_C:EnableDennisAi() end
function AAI_Denis_C:StartAIDenis() end
---@param GameLoaded boolean
function AAI_Denis_C:OnFinishGameLoaded_Event_0(GameLoaded) end
function AAI_Denis_C:ReceiveBeginPlay() end
---@param PossessedPawn APawn
function AAI_Denis_C:ReceivePossess(PossessedPawn) end
---@param GameLoaded boolean
function AAI_Denis_C:OnFinishGameLoaded(GameLoaded) end
---@param EntryPoint int32
function AAI_Denis_C:ExecuteUbergraph_AI_Denis(EntryPoint) end


