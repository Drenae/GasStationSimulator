---@meta

---@class ATrashBinSmall_BP_C : ATrashBin_Base_BP_C
---@field UberGraphFrame FPointerToUberGraphFrame
---@field TrashSpawn_Cue UAudioComponent
---@field Audio UAudioComponent
---@field ParticleSystem UParticleSystemComponent
---@field DirtyTrigger UBoxComponent
---@field SM_Trashbin_open UStaticMeshComponent
---@field DirtyTriggerCollisionTimer FTimerHandle
local ATrashBinSmall_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ATrashBinSmall_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ATrashBinSmall_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ATrashBinSmall_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
function ATrashBinSmall_BP_C:ReceiveBeginPlay() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ATrashBinSmall_BP_C:BndEvt__Box_0_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param TrashCapacity float
---@param TrashBinCapacityInPercent float
function ATrashBinSmall_BP_C:OnTrashBinCapacityUpdated(TrashCapacity, TrashBinCapacityInPercent) end
---@param Pawn APawn
function ATrashBinSmall_BP_C:DisableInteractionInfo(Pawn) end
function ATrashBinSmall_BP_C:EnableCollision() end
---@param EntryPoint int32
function ATrashBinSmall_BP_C:ExecuteUbergraph_TrashBinSmall_BP(EntryPoint) end


