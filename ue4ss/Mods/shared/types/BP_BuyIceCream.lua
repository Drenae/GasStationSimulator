---@meta

---@class UBP_BuyIceCream_C : UBuyIceCream
---@field UberGraphFrame FPointerToUberGraphFrame
---@field CurrentQueuePosition int32
local UBP_BuyIceCream_C = {}

---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UBP_BuyIceCream_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UBP_BuyIceCream_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UBP_BuyIceCream_C:FinishBeginTask(TaskState, FinishReason) end
function UBP_BuyIceCream_C:CustomEvent() end
---@param EntryPoint int32
function UBP_BuyIceCream_C:ExecuteUbergraph_BP_BuyIceCream(EntryPoint) end


