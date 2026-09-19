---@meta

---@class UEmployee_Fuel_C : UEmployeeTask
---@field UberGraphFrame FPointerToUberGraphFrame
---@field NewTargetActor AActor
---@field InteractableBuilding AInteractableBuilding
---@field ResetLogicDelay float
---@field Customer AAICharacterBase
---@field RandomTimeKamil float
---@field FuelStation AFuelStation
---@field bCarFueled boolean
---@field CurrentlyFueling boolean
---@field ['Montages Skeletons'] TArray<FBaseCharacterSkeletonMontage>
---@field CanPlayFuelingAnimation boolean
---@field CanFinishFueling boolean
local UEmployee_Fuel_C = {}

function UEmployee_Fuel_C:RemoveFuelFromInventory() end
---@param Output AActor
function UEmployee_Fuel_C:CheckIfPistolIsInFuelEntry(Output) end
---@param Sound USoundBase
---@param Output UChildActorComponent
function UEmployee_Fuel_C:TakePistolFromVehicleFuelEntry(Sound, Output) end
function UEmployee_Fuel_C:PutPistolToStation() end
---@param NotifyName FName
function UEmployee_Fuel_C:OnNotifyEnd_B7C464F44958C97488E00FAEE6C5BFEA(NotifyName) end
---@param NotifyName FName
function UEmployee_Fuel_C:OnNotifyBegin_B7C464F44958C97488E00FAEE6C5BFEA(NotifyName) end
---@param NotifyName FName
function UEmployee_Fuel_C:OnInterrupted_B7C464F44958C97488E00FAEE6C5BFEA(NotifyName) end
---@param NotifyName FName
function UEmployee_Fuel_C:OnBlendOut_B7C464F44958C97488E00FAEE6C5BFEA(NotifyName) end
---@param NotifyName FName
function UEmployee_Fuel_C:OnCompleted_B7C464F44958C97488E00FAEE6C5BFEA(NotifyName) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UEmployee_Fuel_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UEmployee_Fuel_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UEmployee_Fuel_C:FinishBeginTask(TaskState, FinishReason) end
---@param DeltaTime float
function UEmployee_Fuel_C:TickObject(DeltaTime) end
function UEmployee_Fuel_C:Reset() end
function UEmployee_Fuel_C:CheckFuel() end
function UEmployee_Fuel_C:TryProceedTask() end
---@param EntryPoint int32
function UEmployee_Fuel_C:ExecuteUbergraph_Employee_Fuel(EntryPoint) end


