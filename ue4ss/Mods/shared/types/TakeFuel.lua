---@meta

---@class UTakeFuel_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field InLine boolean
---@field ClosestPathPoint APathPoint
---@field TriggeredNotification boolean
---@field CheckLineHandle FTimerHandle
local UTakeFuel_C = {}

function UTakeFuel_C:ClearQueueTimer() end
function UTakeFuel_C:CheckIfCanMoveLine() end
function UTakeFuel_C:StartWaitingInLine() end
function UTakeFuel_C:RemoveNotification() end
---@param PathPoint APathPoint
function UTakeFuel_C:FindClosestPathPoint(PathPoint) end
---@param Station AInteractableBuilding
---@param CAnBeAdded boolean
function UTakeFuel_C:InQueueOrCanBeAdded(Station, CAnBeAdded) end
function UTakeFuel_C:UpdateCarPath() end
---@return int32
function UTakeFuel_C:GetPositionInQueue() end
---@param Character ACharacter
function UTakeFuel_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UTakeFuel_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UTakeFuel_C:TickObject(DeltaTime) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UTakeFuel_C:InitializeTask(Character, NewTasksProgress) end
function UTakeFuel_C:LeaveFuelStation() end
function UTakeFuel_C:AddTakeFuelNotification() end
function UTakeFuel_C:QuitQueue() end
function UTakeFuel_C:MoveInQueue() end
---@param EntryPoint int32
function UTakeFuel_C:ExecuteUbergraph_TakeFuel(EntryPoint) end


