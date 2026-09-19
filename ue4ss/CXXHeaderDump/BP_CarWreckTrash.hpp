#ifndef UE4SS_SDK_BP_CarWreckTrash_HPP
#define UE4SS_SDK_BP_CarWreckTrash_HPP

class ABP_CarWreckTrash_C : public ACarWreckTrash
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D0 (size: 0x8)
    class UHighlight_Component_C* Highlight_Component;                                // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* Car Roof Detect;                                      // 0x03E0 (size: 0x8)
    class UBoxComponent* Sound Hit Box;                                               // 0x03E8 (size: 0x8)
    class UAudioComponent* SFX_JoeAirplane_CollisionHit;                              // 0x03F0 (size: 0x8)
    class USubmixEffectFilterPreset* ImpactSoundFilter;                               // 0x03F8 (size: 0x8)
    int32 HitNumber;                                                                  // 0x0400 (size: 0x4)
    bool isHitSoundAllowed;                                                           // 0x0404 (size: 0x1)
    bool IsOpen;                                                                      // 0x0405 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x0408 (size: 0x8)

    void Sound Collision Trigger(class UPrimitiveComponent* TargetHitComponent, bool& isHitSoundAllowed);
    void Collision Sound();
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void ReceiveBeginPlay();
    void ObjectDeattachedFromMagnet();
    void TimeWindow();
    void SoundGate();
    void BndEvt__BP_CarWreckTrash_Sound Hit Box_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnFinishGameLoaded_Event_0(const bool GameLoaded);
    void ExecuteUbergraph_BP_CarWreckTrash(int32 EntryPoint);
}; // Size: 0x410

#endif
