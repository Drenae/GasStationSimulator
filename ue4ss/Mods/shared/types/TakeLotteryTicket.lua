---@meta

---@class UTakeLotteryTicket_C : UIteractableActorTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field LotteryMachine ALotteryMachine_BP_C
---@field WaitingForFinish boolean
---@field LeftTimeToBuy float
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
local UTakeLotteryTicket_C = {}

---@param NotifyName FName
function UTakeLotteryTicket_C:OnNotifyEnd_C442F97848424743556C7BA2E9763772(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnNotifyBegin_C442F97848424743556C7BA2E9763772(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnInterrupted_C442F97848424743556C7BA2E9763772(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnBlendOut_C442F97848424743556C7BA2E9763772(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnCompleted_C442F97848424743556C7BA2E9763772(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnNotifyEnd_CAC936B64B77630254A54EA00F19C8EC(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnNotifyBegin_CAC936B64B77630254A54EA00F19C8EC(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnInterrupted_CAC936B64B77630254A54EA00F19C8EC(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnBlendOut_CAC936B64B77630254A54EA00F19C8EC(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnCompleted_CAC936B64B77630254A54EA00F19C8EC(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnNotifyEnd_4208018B4CB3177B148A73A3F635399D(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnNotifyBegin_4208018B4CB3177B148A73A3F635399D(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnInterrupted_4208018B4CB3177B148A73A3F635399D(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnBlendOut_4208018B4CB3177B148A73A3F635399D(NotifyName) end
---@param NotifyName FName
function UTakeLotteryTicket_C:OnCompleted_4208018B4CB3177B148A73A3F635399D(NotifyName) end
---@param Loaded UObject
function UTakeLotteryTicket_C:OnLoaded_2B208C3F4B5EB45637AFCBAC70A94BD3(Loaded) end
---@param Loaded UObject
function UTakeLotteryTicket_C:OnLoaded_7DC368384D769582D72B5DAB53B26A45(Loaded) end
function UTakeLotteryTicket_C:CustomEvent_0() end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UTakeLotteryTicket_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UTakeLotteryTicket_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UTakeLotteryTicket_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UTakeLotteryTicket_C:TickObject(DeltaTime) end
function UTakeLotteryTicket_C:OnLotteryFinish() end
function UTakeLotteryTicket_C:IgnoreTaskOnCancelLottery() end
---@param EntryPoint int32
function UTakeLotteryTicket_C:ExecuteUbergraph_TakeLotteryTicket(EntryPoint) end


