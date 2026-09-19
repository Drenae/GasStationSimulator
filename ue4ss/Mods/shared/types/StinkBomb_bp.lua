---@meta

---@class AStinkBomb_bp_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field Sphere USphereComponent
---@field StinkyBombVFX UParticleSystemComponent
---@field StaticMesh UStaticMeshComponent
---@field DefaultSceneRoot USceneComponent
---@field SphereSize_SphereRadius_508AA11045F7542D13B634895B111B1D float
---@field SphereSize__Direction_508AA11045F7542D13B634895B111B1D ETimelineDirection::Type
---@field SphereSize UTimelineComponent
local AStinkBomb_bp_C = {}

function AStinkBomb_bp_C:SphereSize__FinishedFunc() end
function AStinkBomb_bp_C:SphereSize__UpdateFunc() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function AStinkBomb_bp_C:BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
function AStinkBomb_bp_C:ResetPlayerSpeed() end
function AStinkBomb_bp_C:Destroy() end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function AStinkBomb_bp_C:BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
function AStinkBomb_bp_C:ReceiveBeginPlay() end
function AStinkBomb_bp_C:ActivateParticles() end
function AStinkBomb_bp_C:Destroy2nd() end
---@param EntryPoint int32
function AStinkBomb_bp_C:ExecuteUbergraph_StinkBomb_bp(EntryPoint) end


