---@meta

---@class UGoToCinema_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VehicleState FBlackboardKeySelector
---@field PathPoint APathPoint
---@field IsInteractionActive boolean
---@field PopcornTarget APopcornTarget_BP_C
---@field TicketEffect UNiagaraComponent
---@field StartingPopcornCooldown FInt32Range
---@field bRejected boolean
---@field PrevTicketState eTicketState
---@field DriverWaitHandle FTimerHandle
---@field WaitingForDriver boolean
local UGoToCinema_C = {}

function UGoToCinema_C:DriveFromCinema() end
---@param TaskResult ETaskResult
function UGoToCinema_C:TrySpawnTrash(TaskResult) end
---@param bOn boolean
function UGoToCinema_C:ToggleValidateIcon(bOn) end
---@param TaskResult ETaskResult
function UGoToCinema_C:TrySpawnOilSpill(TaskResult) end
function UGoToCinema_C:TryCancelTask() end
function UGoToCinema_C:DriveAway() end
function UGoToCinema_C:FinishTicketInteraction() end
function UGoToCinema_C:DrawValuesAfterReachCinema() end
---@param TaskState ETaskResult
---@param FinishReason FString
function UGoToCinema_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UGoToCinema_C:TickObject(DeltaTime) end
function UGoToCinema_C:BindInteractionEvents() end
---@param bFake boolean
function UGoToCinema_C:OnConfirmActions(bFake) end
---@param bFake boolean
function UGoToCinema_C:OnRejectActions(bFake) end
---@param bFake boolean
function UGoToCinema_C:OnValidateActions(bFake) end
function UGoToCinema_C:UnbindEvents() end
function UGoToCinema_C:EndPlayerInteraction() end
function UGoToCinema_C:OnCinemaStateChanged() end
---@param Character ACharacter
function UGoToCinema_C:StartTask(Character) end
function UGoToCinema_C:DestroyPopcornNS() end
function UGoToCinema_C:CheckForNotification() end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UGoToCinema_C:InitializeTask(Character, NewTasksProgress) end
function UGoToCinema_C:TryShowPopcorn() end
function UGoToCinema_C:OnFinishedWaitTime() end
---@param EntryPoint int32
function UGoToCinema_C:ExecuteUbergraph_GoToCinema(EntryPoint) end


