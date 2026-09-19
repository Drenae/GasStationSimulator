---@meta

---@class ASewerManhole_01_BP_C : ADoor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field DirtyTrigger UBoxComponent
---@field Stinky UParticleSystemComponent
---@field Manhole UStaticMeshComponent
---@field OpenCloseManhole_RelativeRotation_E05D30504F74D0EC830773820ED863EF FVector
---@field OpenCloseManhole_RelativeLocation_E05D30504F74D0EC830773820ED863EF FVector
---@field OpenCloseManhole__Direction_E05D30504F74D0EC830773820ED863EF ETimelineDirection::Type
---@field OpenCloseManhole UTimelineComponent
---@field StinkSound UAudioComponent
local ASewerManhole_01_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ASewerManhole_01_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASewerManhole_01_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ASewerManhole_01_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ASewerManhole_01_BP_C:UserConstructionScript() end
function ASewerManhole_01_BP_C:OpenCloseManhole__FinishedFunc() end
function ASewerManhole_01_BP_C:OpenCloseManhole__UpdateFunc() end
---@param NewState EDoorState
function ASewerManhole_01_BP_C:OnStateUpdated(NewState) end
---@param Pawn APawn
function ASewerManhole_01_BP_C:DisableInteractionInfo(Pawn) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ASewerManhole_01_BP_C:BndEvt__Box_0_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param EntryPoint int32
function ASewerManhole_01_BP_C:ExecuteUbergraph_SewerManhole_01_BP(EntryPoint) end


