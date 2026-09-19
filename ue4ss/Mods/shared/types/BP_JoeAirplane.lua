---@meta

---@class ABP_JoeAirplane_C : AAirplane_TapingMinigame
---@field UberGraphFrame FPointerToUberGraphFrame
---@field JoeTeleportPoint UStaticMeshComponent
---@field MarkerArrowComponent UArrowComponent
---@field JoeMidPosition UArrowComponent
---@field JoeFinalPosition UArrowComponent
---@field NavmeshBox1 UBoxComponent
---@field NavmeshBox UBoxComponent
---@field GSBox UGSBoxComponent
---@field Highlight_Component UHighlight_Component_C
---@field Arrow1 UArrowComponent
---@field NPSmartObject UNPSmartObjectComponent
---@field UnMount UArrowComponent
---@field P_CrashPlane UParticleSystemComponent
---@field SFX_JoeAirplane_CollisionHit UAudioComponent
---@field Timer FTimerHandle
---@field isHitSoundAllowed boolean
---@field HitNumber int32
---@field ImpactSoundFilter USubmixEffectFilterPreset
---@field ImpactSoundComponent UAudioComponent
---@field NewVar_1 UAudioComponent
---@field IsOpen boolean
---@field curTime float
---@field TimeToReset float
---@field CheckPlaneTimerHandle FTimerHandle
---@field JoeEventTimer FTimerHandle
---@field JoeDialogueIndex int32
---@field DialogueTimer FTimerHandle
---@field ['Target Actor'] TSoftObjectPtr<AActor>
---@field WeAreInMinigame boolean
local ABP_JoeAirplane_C = {}

---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JoeAirplane_C:AlternativeInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Hit FHitResult
---@return boolean
function ABP_JoeAirplane_C:ShowTooltip(Pawn, Hit) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JoeAirplane_C:CanBeInteractable(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@param StaticMeshComponent UStaticMeshComponent
---@return boolean
function ABP_JoeAirplane_C:DisplayInteractionInfo(Pawn, UPrimitiveComponent, StaticMeshComponent) end
---@param Actor AActor
---@param RotateToTransform boolean
---@return FTransform
function ABP_JoeAirplane_C:GetInteractiveTransform(Actor, RotateToTransform) end
---@param GSSWheeledVehicle AGSSWheeledVehicle
---@return APathPoint
function ABP_JoeAirplane_C:GetPathPoint(GSSWheeledVehicle) end
---@param Pawn APawn
---@param UPrimitiveComponent UPrimitiveComponent
---@return boolean
function ABP_JoeAirplane_C:SimpleInteraction(Pawn, UPrimitiveComponent) end
---@param Pawn APawn
---@param Throw boolean
---@param AimingTime float
---@return boolean
function ABP_JoeAirplane_C:UseItem(Pawn, Throw, AimingTime) end
---@return FName
function ABP_JoeAirplane_C:GetInteractionName() end
---@param bNewVisibility boolean
function ABP_JoeAirplane_C:SetPropellerVisibility(bNewVisibility) end
ABP_JoeAirplane_C['Exit Joe'] = function(self, ) end
---@param TurnOn boolean
ABP_JoeAirplane_C['TurnON/OFFRunway'] = function(self, TurnOn) end
---@param TurnOn boolean
ABP_JoeAirplane_C['TurnON/OFFJoePlane'] = function(self, TurnOn) end
function ABP_JoeAirplane_C:PrepMaterialsForHighlighting() end
---@param TargetHitComponent UPrimitiveComponent
---@param isHitSoundAllowed boolean
ABP_JoeAirplane_C['Collision Sound Trigger'] = function(self, TargetHitComponent, isHitSoundAllowed) end
ABP_JoeAirplane_C['Collision Sound'] = function(self, ) end
---@param Pawn APawn
function ABP_JoeAirplane_C:DisableInteractionInfo(Pawn) end
function ABP_JoeAirplane_C:ShowInteractionAlertMessage() end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function ABP_JoeAirplane_C:BndEvt__BP_JoeAirplane_WheelsMeshComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
function ABP_JoeAirplane_C:ObjectDeattachedFromMagnet() end
function ABP_JoeAirplane_C:TimeWindow() end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function ABP_JoeAirplane_C:BndEvt__BP_JoeAirplane_MetalFrame_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
---@param HitComponent UPrimitiveComponent
---@param OtherActor AActor
---@param OtherComp UPrimitiveComponent
---@param NormalImpulse FVector
---@param Hit FHitResult
function ABP_JoeAirplane_C:BndEvt__BP_JoeAirplane_MainMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit) end
function ABP_JoeAirplane_C:SoundGate() end
function ABP_JoeAirplane_C:ReceiveBeginPlay() end
function ABP_JoeAirplane_C:CheckPlane() end
function ABP_JoeAirplane_C:ReceiveDestroyed() end
---@param bOn boolean
function ABP_JoeAirplane_C:TurnOnHighlight(bOn) end
---@param bShouldHighlight boolean
function ABP_JoeAirplane_C:TurnOnAirplaneHighlight(bShouldHighlight) end
function ABP_JoeAirplane_C:OnJoePlaneFixed_Event() end
function ABP_JoeAirplane_C:JoeXitPlane() end
---@param HoleMesh UStaticMeshComponent
function ABP_JoeAirplane_C:OnOneOfTheHolesFixed(HoleMesh) end
function ABP_JoeAirplane_C:JoeXitPlaneEditor() end
function ABP_JoeAirplane_C:AddDialogAfterAWhile() end
---@param EntryPoint int32
function ABP_JoeAirplane_C:ExecuteUbergraph_BP_JoeAirplane(EntryPoint) end


