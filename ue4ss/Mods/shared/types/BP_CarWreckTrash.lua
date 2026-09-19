---@meta

---@class ABP_CarWreckTrash_C : ACarWreckTrash
---@field UberGraphFrame FPointerToUberGraphFrame
---@field Highlight_Component UHighlight_Component_C
---@field ['Car Roof Detect'] UStaticMeshComponent
---@field ['Sound Hit Box'] UBoxComponent
---@field SFX_JoeAirplane_CollisionHit UAudioComponent
---@field ImpactSoundFilter USubmixEffectFilterPreset
---@field HitNumber int32
---@field isHitSoundAllowed boolean
---@field IsOpen boolean
---@field Timer FTimerHandle
local ABP_CarWreckTrash_C = {}

---@param TargetHitComponent UPrimitiveComponent
---@param isHitSoundAllowed boolean
ABP_CarWreckTrash_C['Sound Collision Trigger'] = function(self, TargetHitComponent, isHitSoundAllowed) end
ABP_CarWreckTrash_C['Collision Sound'] = function(self, ) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_CarWreckTrash_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_CarWreckTrash_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
function ABP_CarWreckTrash_C:ReceiveBeginPlay() end
function ABP_CarWreckTrash_C:ObjectDeattachedFromMagnet() end
function ABP_CarWreckTrash_C:TimeWindow() end
function ABP_CarWreckTrash_C:SoundGate() end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
ABP_CarWreckTrash_C['BndEvt__BP_CarWreckTrash_Sound Hit Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature'] = function(self, HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
---@param EndPlayReason EEndPlayReason::Type
function ABP_CarWreckTrash_C:ReceiveEndPlay(EndPlayReason) end
---@param GameLoaded boolean
function ABP_CarWreckTrash_C:OnFinishGameLoaded_Event_0(GameLoaded) end
---@param EntryPoint int32
function ABP_CarWreckTrash_C:ExecuteUbergraph_BP_CarWreckTrash(EntryPoint) end


