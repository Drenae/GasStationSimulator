---@meta

---@class ACabrioletCar_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field cccc UStaticMeshComponent
local ACabrioletCar_BP_C = {}

---@return boolean
function ACabrioletCar_BP_C:CanActorGetAttracted() end
function ACabrioletCar_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function ACabrioletCar_BP_C:ExecuteUbergraph_CabrioletCar_BP(EntryPoint) end


