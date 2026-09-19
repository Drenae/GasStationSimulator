---@meta

---@class UEmployee_Home_C : UEmployeeTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field RotationOffset float
---@field ['Tag to Check'] FGameplayTag
local UEmployee_Home_C = {}

---@param bSameFacing boolean
function UEmployee_Home_C:CheckFacing(bSameFacing) end
UEmployee_Home_C['Handle Montage Positioning'] = function(self, ) end
---@param NotifyName FName
function UEmployee_Home_C:OnNotifyEnd_63F6968542F41D37A96174B5B15D6490(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnNotifyBegin_63F6968542F41D37A96174B5B15D6490(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnInterrupted_63F6968542F41D37A96174B5B15D6490(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnBlendOut_63F6968542F41D37A96174B5B15D6490(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnCompleted_63F6968542F41D37A96174B5B15D6490(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnNotifyEnd_66FFCD424356850E6716E29C8E687E34(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnNotifyBegin_66FFCD424356850E6716E29C8E687E34(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnInterrupted_66FFCD424356850E6716E29C8E687E34(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnBlendOut_66FFCD424356850E6716E29C8E687E34(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnCompleted_66FFCD424356850E6716E29C8E687E34(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnNotifyEnd_1F0549F1410D1D7E2E16D49ED4CC48FA(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnNotifyBegin_1F0549F1410D1D7E2E16D49ED4CC48FA(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnInterrupted_1F0549F1410D1D7E2E16D49ED4CC48FA(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnBlendOut_1F0549F1410D1D7E2E16D49ED4CC48FA(NotifyName) end
---@param NotifyName FName
function UEmployee_Home_C:OnCompleted_1F0549F1410D1D7E2E16D49ED4CC48FA(NotifyName) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UEmployee_Home_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UEmployee_Home_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UEmployee_Home_C:FinishBeginTask(TaskState, FinishReason) end
---@param EntryPoint int32
function UEmployee_Home_C:ExecuteUbergraph_Employee_Home(EntryPoint) end


