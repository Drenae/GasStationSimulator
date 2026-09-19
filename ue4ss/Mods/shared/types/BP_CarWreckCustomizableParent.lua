---@meta

---@class ABP_CarWreckCustomizableParent_C : AJunkyardCarWreckCustomizable
---@field UberGraphFrame FPointerToUberGraphFrame
---@field SFX_DLC_JY_Cars_01_Default_Cue UAudioComponent
---@field SFX_DLC_JY_Cars_03_Default_Cue UAudioComponent
---@field SFX_DLC_JY_Cars_02_Default_Cue UAudioComponent
---@field ClearRustTimeline_Value_F8614B8C436151077024E58E541FF8C6 float
---@field ClearRustTimeline__Direction_F8614B8C436151077024E58E541FF8C6 ETimelineDirection::Type
---@field ClearRustTimeline UTimelineComponent
---@field BodyDecalTimeline_NewTrack_0_1598481543225C5292113BBD1621516D float
---@field BodyDecalTimeline__Direction_1598481543225C5292113BBD1621516D ETimelineDirection::Type
---@field BodyDecalTimeline UTimelineComponent
---@field BodyPaintTimeline_PaintValue_BF2669EB4AD042D9830675B3C8E30F9C float
---@field BodyPaintTimeline__Direction_BF2669EB4AD042D9830675B3C8E30F9C ETimelineDirection::Type
---@field BodyPaintTimeline UTimelineComponent
---@field PartOffset FVector
---@field SpawnedPaintParticles TArray<UNiagaraComponent>
---@field SFX_Wreck_CollisionHit UAudioComponent
---@field HitNumber int32
---@field ImpactSoundFilter USubmixEffectFilterPreset
local ABP_CarWreckCustomizableParent_C = {}

---@return FName
function ABP_CarWreckCustomizableParent_C:GetInteractionName() end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_CarWreckCustomizableParent_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
ABP_CarWreckCustomizableParent_C['Collision Sound'] = function(self, ) end
---@param isHitSoundAllowed boolean
ABP_CarWreckCustomizableParent_C['Collision Sound Trigger'] = function(self, isHitSoundAllowed) end
---@param bMovingCar boolean
function ABP_CarWreckCustomizableParent_C:PlayCarEngineSound(bMovingCar) end
function ABP_CarWreckCustomizableParent_C:AddToJunkyardManagerIfMissing() end
function ABP_CarWreckCustomizableParent_C:BodyPaintTimeline__FinishedFunc() end
function ABP_CarWreckCustomizableParent_C:BodyPaintTimeline__UpdateFunc() end
function ABP_CarWreckCustomizableParent_C:BodyDecalTimeline__FinishedFunc() end
function ABP_CarWreckCustomizableParent_C:BodyDecalTimeline__UpdateFunc() end
function ABP_CarWreckCustomizableParent_C:ClearRustTimeline__FinishedFunc() end
function ABP_CarWreckCustomizableParent_C:ClearRustTimeline__UpdateFunc() end
function ABP_CarWreckCustomizableParent_C:ReceiveBeginPlay() end
function ABP_CarWreckCustomizableParent_C:DEBUG_AddToPlatform() end
function ABP_CarWreckCustomizableParent_C:DEBUG_RemoveFromPlatform() end
function ABP_CarWreckCustomizableParent_C:DEBUG_AddToExhibition() end
---@param bRepaint boolean
---@param bApplyingPaint boolean
function ABP_CarWreckCustomizableParent_C:ApplyBodyEffectsOverTime(bRepaint, bApplyingPaint) end
function ABP_CarWreckCustomizableParent_C:ApplyDecalsOverTime() end
---@param Slot EJunkyardCarPartType
function ABP_CarWreckCustomizableParent_C:OnPartEffectStarted_Event_0(Slot) end
---@param Slot EJunkyardCarPartType
function ABP_CarWreckCustomizableParent_C:OnPaintEffectStarted_Event_0(Slot) end
function ABP_CarWreckCustomizableParent_C:FinishClearingRust() end
function ABP_CarWreckCustomizableParent_C:SoundGate() end
function ABP_CarWreckCustomizableParent_C:OnWreckBodyHit() end
---@param bEnd boolean
function ABP_CarWreckCustomizableParent_C:OnMaskInteraction(bEnd) end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function ABP_CarWreckCustomizableParent_C:OnWheelsHitEvent(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function ABP_CarWreckCustomizableParent_C:BndEvt__BP_CarWreckCustomizableParent_MainMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
function ABP_CarWreckCustomizableParent_C:OnResetCollisionSounds() end
function ABP_CarWreckCustomizableParent_C:PlayCollisionSoundManually() end
function ABP_CarWreckCustomizableParent_C:StartSeanClearingRust() end
function ABP_CarWreckCustomizableParent_C:CancelRustClear() end
---@param EntryPoint int32
function ABP_CarWreckCustomizableParent_C:ExecuteUbergraph_BP_CarWreckCustomizableParent(EntryPoint) end


