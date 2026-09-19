---@meta

---@class AAI_Human_C : ACharacterController
---@field UberGraphFrame FPointerToUberGraphFrame
local AAI_Human_C = {}

function AAI_Human_C:ReceiveBeginPlay() end
---@param PossessedPawn APawn
function AAI_Human_C:ReceivePossess(PossessedPawn) end
---@param GameLoaded boolean
function AAI_Human_C:OnFinishGameLoaded_Event_0(GameLoaded) end
function AAI_Human_C:StartAI() end
function AAI_Human_C:StartAIEvent() end
---@param EntryPoint int32
function AAI_Human_C:ExecuteUbergraph_AI_Human(EntryPoint) end


