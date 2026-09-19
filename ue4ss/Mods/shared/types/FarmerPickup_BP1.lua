---@meta

---@class AFarmerPickup_BP1_C : A00_Vehicle_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field cccc UStaticMeshComponent
---@field BrakeDiscs_0 TArray<ABrakeDisc_BP_C>
local AFarmerPickup_BP1_C = {}

function AFarmerPickup_BP1_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AFarmerPickup_BP1_C:ExecuteUbergraph_FarmerPickup_BP1(EntryPoint) end


