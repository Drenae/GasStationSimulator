---@meta

---@class ABP_GuestServiceActor_C : ARvGuestServiceSpot
---@field UberGraphFrame FPointerToUberGraphFrame
---@field ['Service Ambient Sound'] UAudioComponent
---@field ArrowComponent08 UArrowComponent
---@field ArrowComponent07 UArrowComponent
---@field ArrowComponent06 UArrowComponent
---@field ArrowComponent05 UArrowComponent
---@field ArrowComponent04 UArrowComponent
---@field ArrowComponent03 UArrowComponent
---@field ArrowComponent02 UArrowComponent
---@field OverlapBox UBoxComponent
---@field ServiceName UTextRenderComponent
---@field bFocusWidget boolean
---@field DEBUG_GuestServiceActorMinigameEnd FBP_GuestServiceActor_CDEBUG_GuestServiceActorMinigameEnd
---@field TempNpcReference AActor
local ABP_GuestServiceActor_C = {}

---@param bForceDifficulty boolean
---@param ForcedDifficulty EGuestServiceDifficulty
---@return boolean
function ABP_GuestServiceActor_C:InteractWithGuestService(bForceDifficulty, ForcedDifficulty) end
---@param Difficulty EGuestServiceDifficulty
ABP_GuestServiceActor_C['Start Minigame With Difficulty'] = function(self, Difficulty) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_GuestServiceActor_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_GuestServiceActor_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_GuestServiceActor_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ABP_GuestServiceActor_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ABP_GuestServiceActor_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_GuestServiceActor_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ABP_GuestServiceActor_C:UseItem(Pawn, Throw, AimingTime) end
---@return FName
function ABP_GuestServiceActor_C:GetInteractionName() end
function ABP_GuestServiceActor_C:OnWidgetClosed() end
function ABP_GuestServiceActor_C:ReceiveBeginPlay() end
---@param Pawn APawn
function ABP_GuestServiceActor_C:DisableInteractionInfo(Pawn) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
---@param bFromSweep boolean
---@param SweepResult FHitResult
function ABP_GuestServiceActor_C:BndEvt__BP_GuestServiceActor_OverlapBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult) end
---@param OverlappedComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param OtherBodyIndex int32
function ABP_GuestServiceActor_C:BndEvt__BP_GuestServiceActor_OverlapBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex) end
function ABP_GuestServiceActor_C:ShowInteractionAlertMessage() end
---@param EntryPoint int32
function ABP_GuestServiceActor_C:ExecuteUbergraph_BP_GuestServiceActor(EntryPoint) end
function ABP_GuestServiceActor_C:DEBUG_GuestServiceActorMinigameEnd__DelegateSignature() end


