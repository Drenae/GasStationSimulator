---@meta

---@class ABP_WreckTowTruck_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Colors TArray<FLinearColor>
---@field DeliveryContract UWrecksCollectionContract
local ABP_WreckTowTruck_C = {}

---@return boolean
function ABP_WreckTowTruck_C:IsJunkyardCarTransporter() end
function ABP_WreckTowTruck_C:ReceiveBeginPlay() end
---@param DeltaSeconds float
function ABP_WreckTowTruck_C:ReceiveTick(DeltaSeconds) end
function ABP_WreckTowTruck_C:ReceiveDestroyed() end
---@param EntryPoint int32
function ABP_WreckTowTruck_C:ExecuteUbergraph_BP_WreckTowTruck(EntryPoint) end


