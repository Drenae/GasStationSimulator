---@meta

---@class ADecorationFire_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ScaryTrigger USphereComponent
---@field Campfire_Biome1 UParticleSystemComponent
---@field DefaultSceneRoot USceneComponent
---@field DestroyTimer FTimerHandle
---@field DecorationRef APlaceableActor
local ADecorationFire_C = {}

function ADecorationFire_C:ReceiveBeginPlay() end
function ADecorationFire_C:FireFinished() end
---@param EndPlayReason EEndPlayReason::Type
function ADecorationFire_C:ReceiveEndPlay(EndPlayReason) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ADecorationFire_C:BndEvt__DecorationFire_ScaryTrigger2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param EntryPoint int32
function ADecorationFire_C:ExecuteUbergraph_DecorationFire(EntryPoint) end


