---@meta

---@class UBP_DeliveryWreck_C : UDeliveryWreck
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AttachedWreck AJunkyardCarWreck
---@field DeliveryContract UWrecksCollectionContract
---@field VehicleDefaultMaxSpeed float
---@field MinDistanceFromParkedTowTruck float
---@field TowRootBoneName FName
---@field WreckDetached boolean
---@field UfoUsed boolean
---@field BlockingOtherTowTrucks boolean
---@field Character AAICharacterBase
---@field TrucksStopped TArray<AGSSWheeledVehicle>
---@field WreckDestroyed boolean
---@field EnteredVehicle boolean
local UBP_DeliveryWreck_C = {}

---@param Loaded UClass
function UBP_DeliveryWreck_C:OnLoaded_99CA13D7451B64C9B654F6957E46A869(Loaded) end
---@param Loaded UClass
function UBP_DeliveryWreck_C:OnLoaded_22BD8739415E37AE0743D683C1590EFE(Loaded) end
---@param Character AAICharacterBase
---@param NewTasksProgress TArray<FTaskProgress>
function UBP_DeliveryWreck_C:InitializeTask(Character, NewTasksProgress) end
---@param Character ACharacter
function UBP_DeliveryWreck_C:StartTask(Character) end
---@param TaskState ETaskResult
---@param FinishReason FString
function UBP_DeliveryWreck_C:FinishBeginTask(TaskState, FinishReason) end
---@param NewState ECarWreckState
function UBP_DeliveryWreck_C:StateChanged(NewState) end
function UBP_DeliveryWreck_C:ResetDeliveredWreck() end
function UBP_DeliveryWreck_C:OnUfoUsed() end
---@param DeltaTime float
function UBP_DeliveryWreck_C:TickObject(DeltaTime) end
function UBP_DeliveryWreck_C:OnUfoStarted() end
function UBP_DeliveryWreck_C:OnDeliveryCancel() end
---@param EntryPoint int32
function UBP_DeliveryWreck_C:ExecuteUbergraph_BP_DeliveryWreck(EntryPoint) end


