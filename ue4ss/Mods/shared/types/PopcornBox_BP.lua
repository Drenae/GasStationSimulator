---@meta

---@class APopcornBox_BP_C : AProduct
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field NS_PopcornThrow UNiagaraComponent
---@field PopcornMachine APopcornMachine_BP_C
---@field bPopcornThrown boolean
---@field bPopcornMissed boolean
---@field TrashTimer FTimerHandle
---@field ImpactSoundTreshold float
local APopcornBox_BP_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function APopcornBox_BP_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function APopcornBox_BP_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param HitActor AActor
---@param HitComponent UPrimitiveComponent
function APopcornBox_BP_C:OnPopcornMissed(HitActor, HitComponent) end
function APopcornBox_BP_C:OnPopcornSpawnedInHand() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function APopcornBox_BP_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function APopcornBox_BP_C:UseItem(Pawn, Throw, AimingTime) end
function APopcornBox_BP_C:SpawnPopcornTrash() end
function APopcornBox_BP_C:OnPopcornHitSth() end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function APopcornBox_BP_C:BndEvt__PopcornBox_BP_MainMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function APopcornBox_BP_C:BndEvt__PopcornBox_BP_MainMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param DeltaSeconds float
function APopcornBox_BP_C:ReceiveTick(DeltaSeconds) end
function APopcornBox_BP_C:ReceiveBeginPlay() end
---@param MyComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param bSelfMoved boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param NormalImpulse FVector
---@param Hit FHitResult
function APopcornBox_BP_C:ReceiveHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit) end
---@param EntryPoint int32
function APopcornBox_BP_C:ExecuteUbergraph_PopcornBox_BP(EntryPoint) end


