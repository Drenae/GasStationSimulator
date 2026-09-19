---@meta

---@class ADenisMachine_C : AActor
---@field UberGraphFrame FPointerToUberGraphFrame
---@field StaticMeshActor2 UChildActorComponent
---@field StaticMeshActor1 UChildActorComponent
---@field StaticMesh UStaticMeshComponent
---@field LightBase1 ALight_Base_C
---@field LightBase2 ALight_Base_C
---@field TimerDenis FTimerHandle
---@field NewVar_0 UAudioComponent
---@field NewVar_1 TArray<TSubclassOf<ATrashItem_PrologueTrash_C>>
---@field TrashItemToHold ATrashItem_PrologueTrash_C
local ADenisMachine_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADenisMachine_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ADenisMachine_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADenisMachine_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ADenisMachine_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ADenisMachine_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ADenisMachine_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ADenisMachine_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ADenisMachine_C:UseItem(Pawn, Throw, AimingTime) end
function ADenisMachine_C:ShowInteractionAlertMessage() end
function ADenisMachine_C:ReceiveBeginPlay() end
---@param NewPawn APawn
function ADenisMachine_C:PawnSpawned(NewPawn) end
---@param DestroyedActor AActor
function ADenisMachine_C:DestroyPawn(DestroyedActor) end
function ADenisMachine_C:AlarmDenis() end
function ADenisMachine_C:SoundOn() end
function ADenisMachine_C:SoundOff() end
---@param Pawn APawn
function ADenisMachine_C:DisableInteractionInfo(Pawn) end
---@param EntryPoint int32
function ADenisMachine_C:ExecuteUbergraph_DenisMachine(EntryPoint) end


