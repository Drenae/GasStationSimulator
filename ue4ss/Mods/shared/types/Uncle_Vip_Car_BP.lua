---@meta

---@class AUncle_Vip_Car_BP_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field AmericanCar_Horns UStaticMeshComponent
---@field AmericanCar_Static_shadowcaster UStaticMeshComponent
local AUncle_Vip_Car_BP_C = {}

---@return boolean
function AUncle_Vip_Car_BP_C:IsVIPCar() end
function AUncle_Vip_Car_BP_C:ReceiveBeginPlay() end
---@param Enable boolean
function AUncle_Vip_Car_BP_C:EnableLamps_1(Enable) end
---@param EntryPoint int32
function AUncle_Vip_Car_BP_C:ExecuteUbergraph_Uncle_Vip_Car_BP(EntryPoint) end


