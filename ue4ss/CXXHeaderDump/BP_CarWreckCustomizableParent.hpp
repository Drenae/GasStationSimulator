#ifndef UE4SS_SDK_BP_CarWreckCustomizableParent_HPP
#define UE4SS_SDK_BP_CarWreckCustomizableParent_HPP

class ABP_CarWreckCustomizableParent_C : public AJunkyardCarWreckCustomizable
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06E0 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cars_01_Default_Cue;                            // 0x06E8 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cars_03_Default_Cue;                            // 0x06F0 (size: 0x8)
    class UAudioComponent* SFX_DLC_JY_Cars_02_Default_Cue;                            // 0x06F8 (size: 0x8)
    float ClearRustTimeline_Value_F8614B8C436151077024E58E541FF8C6;                   // 0x0700 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ClearRustTimeline__Direction_F8614B8C436151077024E58E541FF8C6; // 0x0704 (size: 0x1)
    class UTimelineComponent* ClearRustTimeline;                                      // 0x0708 (size: 0x8)
    float BodyDecalTimeline_NewTrack_0_1598481543225C5292113BBD1621516D;              // 0x0710 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BodyDecalTimeline__Direction_1598481543225C5292113BBD1621516D; // 0x0714 (size: 0x1)
    class UTimelineComponent* BodyDecalTimeline;                                      // 0x0718 (size: 0x8)
    float BodyPaintTimeline_PaintValue_BF2669EB4AD042D9830675B3C8E30F9C;              // 0x0720 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BodyPaintTimeline__Direction_BF2669EB4AD042D9830675B3C8E30F9C; // 0x0724 (size: 0x1)
    class UTimelineComponent* BodyPaintTimeline;                                      // 0x0728 (size: 0x8)
    FVector PartOffset;                                                               // 0x0730 (size: 0xC)
    TArray<UNiagaraComponent*> SpawnedPaintParticles;                                 // 0x0740 (size: 0x10)
    class UAudioComponent* SFX_Wreck_CollisionHit;                                    // 0x0750 (size: 0x8)
    int32 HitNumber;                                                                  // 0x0758 (size: 0x4)
    class USubmixEffectFilterPreset* ImpactSoundFilter;                               // 0x0760 (size: 0x8)

    FName GetInteractionName();
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void Collision Sound();
    void Collision Sound Trigger(bool& isHitSoundAllowed);
    void PlayCarEngineSound(bool bMovingCar);
    void AddToJunkyardManagerIfMissing();
    void BodyPaintTimeline__FinishedFunc();
    void BodyPaintTimeline__UpdateFunc();
    void BodyDecalTimeline__FinishedFunc();
    void BodyDecalTimeline__UpdateFunc();
    void ClearRustTimeline__FinishedFunc();
    void ClearRustTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void DEBUG_AddToPlatform();
    void DEBUG_RemoveFromPlatform();
    void DEBUG_AddToExhibition();
    void ApplyBodyEffectsOverTime(bool bRepaint, bool bApplyingPaint);
    void ApplyDecalsOverTime();
    void OnPartEffectStarted_Event_0(EJunkyardCarPartType Slot);
    void OnPaintEffectStarted_Event_0(EJunkyardCarPartType Slot);
    void FinishClearingRust();
    void SoundGate();
    void OnWreckBodyHit();
    void OnMaskInteraction(bool bEnd);
    void OnWheelsHitEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_CarWreckCustomizableParent_MainMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OnResetCollisionSounds();
    void PlayCollisionSoundManually();
    void StartSeanClearingRust();
    void CancelRustClear();
    void ExecuteUbergraph_BP_CarWreckCustomizableParent(int32 EntryPoint);
}; // Size: 0x768

#endif
