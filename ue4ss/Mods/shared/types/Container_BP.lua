---@meta

---@class AContainer_BP_C : ATrashBin_Base_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field OverlapingTrash TArray<AActor>
---@field ArrayIndex int32
---@field CurrentActor AActor
local AContainer_BP_C = {}

---@param OverlappingActors TArray<AActor>
---@param BigTrash1 TArray<AItem>
function AContainer_BP_C:GetOverlapingProducts(OverlappingActors, BigTrash1) end
function AContainer_BP_C:ReceiveBeginPlay() end
---@param TrashCapacity float
---@param TrashBinCapacityInPercent float
function AContainer_BP_C:OnTrashBinCapacityUpdated(TrashCapacity, TrashBinCapacityInPercent) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AContainer_BP_C:OnComponentBeginOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AContainer_BP_C:OnComponentEndOverlap(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
---@param EntryPoint int32
function AContainer_BP_C:ExecuteUbergraph_Container_BP(EntryPoint) end


