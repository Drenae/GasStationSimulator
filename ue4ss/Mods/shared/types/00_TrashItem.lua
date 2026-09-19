---@meta

---@class A00_TrashItem_C : ATrashItemBase
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Audio UAudioComponent
---@field Timeline_0_NewTrack_1_FE1303FE4236B8C3936F8D84D4FE9190 FVector
---@field Timeline_0__Direction_FE1303FE4236B8C3936F8D84D4FE9190 ETimelineDirection::Type
---@field Timeline_0 UTimelineComponent
---@field CanHit boolean
---@field StartLocation FVector
---@field Trashbag ABigTrashBag
local A00_TrashItem_C = {}

---@param bCanDisplay boolean
function A00_TrashItem_C:CanDisplayInteractionInfo(bCanDisplay) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function A00_TrashItem_C:UseItem(Pawn, Throw, AimingTime) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function A00_TrashItem_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function A00_TrashItem_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function A00_TrashItem_C:UserConstructionScript() end
function A00_TrashItem_C:Timeline_0__FinishedFunc() end
function A00_TrashItem_C:Timeline_0__UpdateFunc() end
---@param BigTrashBag ABigTrashBag
function A00_TrashItem_C:FlyToBag(BigTrashBag) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function A00_TrashItem_C:BndEvt__SphereOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param MyComp UPrimitiveComponent
---@param Other AActor
---@param OtherComp UPrimitiveComponent
---@param bSelfMoved boolean
---@param HitLocation FVector
---@param HitNormal FVector
---@param NormalImpulse FVector
---@param Hit FHitResult
function A00_TrashItem_C:ReceiveHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit) end
function A00_TrashItem_C:ReceiveDestroyed() end
---@param EndPlayReason EEndPlayReason::Type
function A00_TrashItem_C:ReceiveEndPlay(EndPlayReason) end
function A00_TrashItem_C:ReceiveBeginPlay() end
---@param AICharacterBase AAICharacterBase
function A00_TrashItem_C:OnAiCharacterOverlap(AICharacterBase) end
---@param EntryPoint int32
function A00_TrashItem_C:ExecuteUbergraph_00_TrashItem(EntryPoint) end


