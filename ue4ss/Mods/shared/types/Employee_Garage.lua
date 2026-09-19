---@meta

---@class UEmployee_Garage_C : UEmployeeTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NewTargetActor AActor
---@field InteractableBuilding AInteractableBuilding
---@field Delay float
---@field Customer AAICharacterBase
---@field RandomTimeKamil float
---@field CarLift ACarLift
---@field StartRepair boolean
---@field TargetRotation FRotator
---@field TargetLocation FVector
local UEmployee_Garage_C = {}

---@param NotifyName FName
function UEmployee_Garage_C:OnNotifyEnd_77482D71445163EAFAD245942CF4B579(NotifyName) end
---@param NotifyName FName
function UEmployee_Garage_C:OnNotifyBegin_77482D71445163EAFAD245942CF4B579(NotifyName) end
---@param NotifyName FName
function UEmployee_Garage_C:OnInterrupted_77482D71445163EAFAD245942CF4B579(NotifyName) end
---@param NotifyName FName
function UEmployee_Garage_C:OnBlendOut_77482D71445163EAFAD245942CF4B579(NotifyName) end
---@param NotifyName FName
function UEmployee_Garage_C:OnCompleted_77482D71445163EAFAD245942CF4B579(NotifyName) end
---@param MovementResult EPathFollowingResult::Type
function UEmployee_Garage_C:OnFail_CA0B17244BF87DC56EBD7EBA7D1B25EC(MovementResult) end
---@param MovementResult EPathFollowingResult::Type
function UEmployee_Garage_C:OnSuccess_CA0B17244BF87DC56EBD7EBA7D1B25EC(MovementResult) end
---@param NotifyName FName
function UEmployee_Garage_C:OnNotifyEnd_D25376454F435AD8C15655839946AB23(NotifyName) end
---@param NotifyName FName
function UEmployee_Garage_C:OnNotifyBegin_D25376454F435AD8C15655839946AB23(NotifyName) end
---@param NotifyName FName
function UEmployee_Garage_C:OnInterrupted_D25376454F435AD8C15655839946AB23(NotifyName) end
---@param NotifyName FName
function UEmployee_Garage_C:OnBlendOut_D25376454F435AD8C15655839946AB23(NotifyName) end
---@param NotifyName FName
function UEmployee_Garage_C:OnCompleted_D25376454F435AD8C15655839946AB23(NotifyName) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UEmployee_Garage_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UEmployee_Garage_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UEmployee_Garage_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UEmployee_Garage_C:TickObject(DeltaTime) end
function UEmployee_Garage_C:Reset() end
function UEmployee_Garage_C:ResetMeshRotation() end
---@param EntryPoint int32
function UEmployee_Garage_C:ExecuteUbergraph_Employee_Garage(EntryPoint) end


