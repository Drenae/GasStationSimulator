---@meta

---@class ATrashBin_Base_BP_C : ATrashBin
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Box UBoxComponent
---@field TrashIn UAudioComponent
---@field Product AProduct
local ATrashBin_Base_BP_C = {}

---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ATrashBin_Base_BP_C:BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param Actor AActor
function ATrashBin_Base_BP_C:OnOnverlapedActor(Actor) end
---@param EntryPoint int32
function ATrashBin_Base_BP_C:ExecuteUbergraph_TrashBin_Base_BP(EntryPoint) end


