---@meta

---@class UBTT_LeaveCar_C : UBTTask_BlueprintBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field VehicleState FBlackboardKeySelector
---@field ControlledVehicle AGSSWheeledVehicle
---@field Driver AAICharacterBase
---@field DriverTaskClass TSubclassOf<UTaskBase>
---@field CinemaTask UGoToCinema_C
local UBTT_LeaveCar_C = {}

---@param Reason FString
function UBTT_LeaveCar_C:PrintLeaveFuelLog(Reason) end
---@param Vehicle AGSSWheeledVehicle
---@param CanPark boolean
function UBTT_LeaveCar_C:CheckVehiclePosition(Vehicle, CanPark) end
---@param OwnerController AAIController
---@param ControlledPawn APawn
function UBTT_LeaveCar_C:ReceiveExecuteAI(OwnerController, ControlledPawn) end
---@param EntryPoint int32
function UBTT_LeaveCar_C:ExecuteUbergraph_BTT_LeaveCar(EntryPoint) end


