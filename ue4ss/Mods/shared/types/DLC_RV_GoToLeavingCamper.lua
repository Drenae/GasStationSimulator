---@meta

---@class UDLC_RV_GoToLeavingCamper_C : UGoToHome_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DefaultOverrideMovementMode EMovementGroundType
---@field ['Location Cache'] FVector
---@field ['Time Since Last Stuck Check'] float
local UDLC_RV_GoToLeavingCamper_C = {}

function UDLC_RV_GoToLeavingCamper_C:ActivateHandLayer() end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UDLC_RV_GoToLeavingCamper_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UDLC_RV_GoToLeavingCamper_C:StartTask(Character) end
---@param Delta_Time float
UDLC_RV_GoToLeavingCamper_C['Tick Stuck Watcher'] = function(self, Delta_Time) end
---@param DeltaTime float
function UDLC_RV_GoToLeavingCamper_C:TickObject(DeltaTime) end
---@param EntryPoint int32
function UDLC_RV_GoToLeavingCamper_C:ExecuteUbergraph_DLC_RV_GoToLeavingCamper(EntryPoint) end


