---@meta

---@class AJoe_BeerBottle_BP_C : AJoeAccesories_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
local AJoe_BeerBottle_BP_C = {}

function AJoe_BeerBottle_BP_C:UserConstructionScript() end
---@param NotifyName FName
function AJoe_BeerBottle_BP_C:OnNotifyEnd_A6AE8A054AC944AFD0165C9588C598A6(NotifyName) end
---@param NotifyName FName
function AJoe_BeerBottle_BP_C:OnNotifyBegin_A6AE8A054AC944AFD0165C9588C598A6(NotifyName) end
---@param NotifyName FName
function AJoe_BeerBottle_BP_C:OnInterrupted_A6AE8A054AC944AFD0165C9588C598A6(NotifyName) end
---@param NotifyName FName
function AJoe_BeerBottle_BP_C:OnBlendOut_A6AE8A054AC944AFD0165C9588C598A6(NotifyName) end
---@param NotifyName FName
function AJoe_BeerBottle_BP_C:OnCompleted_A6AE8A054AC944AFD0165C9588C598A6(NotifyName) end
function AJoe_BeerBottle_BP_C:ReceiveBeginPlay() end
---@param EntryPoint int32
function AJoe_BeerBottle_BP_C:ExecuteUbergraph_Joe_BeerBottle_BP(EntryPoint) end


