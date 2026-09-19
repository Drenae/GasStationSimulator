#ifndef UE4SS_SDK_BP_JoeAirplane_HPP
#define UE4SS_SDK_BP_JoeAirplane_HPP

class ABP_JoeAirplane_C : public AAirplane_TapingMinigame
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UStaticMeshComponent* JoeTeleportPoint;                                     // 0x0448 (size: 0x8)
    class UArrowComponent* MarkerArrowComponent;                                      // 0x0450 (size: 0x8)
    class UArrowComponent* JoeMidPosition;                                            // 0x0458 (size: 0x8)
    class UArrowComponent* JoeFinalPosition;                                          // 0x0460 (size: 0x8)
    class UBoxComponent* NavmeshBox1;                                                 // 0x0468 (size: 0x8)
    class UBoxComponent* NavmeshBox;                                                  // 0x0470 (size: 0x8)
    class UGSBoxComponent* GSBox;                                                     // 0x0478 (size: 0x8)
    class UHighlight_Component_C* Highlight_Component;                                // 0x0480 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0488 (size: 0x8)
    class UNPSmartObjectComponent* NPSmartObject;                                     // 0x0490 (size: 0x8)
    class UArrowComponent* UnMount;                                                   // 0x0498 (size: 0x8)
    class UParticleSystemComponent* P_CrashPlane;                                     // 0x04A0 (size: 0x8)
    class UAudioComponent* SFX_JoeAirplane_CollisionHit;                              // 0x04A8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x04B0 (size: 0x8)
    bool isHitSoundAllowed;                                                           // 0x04B8 (size: 0x1)
    int32 HitNumber;                                                                  // 0x04BC (size: 0x4)
    class USubmixEffectFilterPreset* ImpactSoundFilter;                               // 0x04C0 (size: 0x8)
    class UAudioComponent* ImpactSoundComponent;                                      // 0x04C8 (size: 0x8)
    class UAudioComponent* NewVar_1;                                                  // 0x04D0 (size: 0x8)
    bool IsOpen;                                                                      // 0x04D8 (size: 0x1)
    float curTime;                                                                    // 0x04DC (size: 0x4)
    float TimeToReset;                                                                // 0x04E0 (size: 0x4)
    FTimerHandle CheckPlaneTimerHandle;                                               // 0x04E8 (size: 0x8)
    FTimerHandle JoeEventTimer;                                                       // 0x04F0 (size: 0x8)
    int32 JoeDialogueIndex;                                                           // 0x04F8 (size: 0x4)
    FTimerHandle DialogueTimer;                                                       // 0x0500 (size: 0x8)
    TSoftObjectPtr<class AActor> Target Actor;                                        // 0x0508 (size: 0x28)
    bool WeAreInMinigame;                                                             // 0x0530 (size: 0x1)

    bool AlternativeInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool ShowTooltip(class APawn* Pawn, FHitResult Hit);
    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    FTransform GetInteractiveTransform(class AActor* Actor, bool& RotateToTransform);
    class APathPoint* GetPathPoint(class AGSSWheeledVehicle* GSSWheeledVehicle);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    FName GetInteractionName();
    void SetPropellerVisibility(bool bNewVisibility);
    void Exit Joe();
    void TurnON/OFFRunway(bool TurnOn);
    void TurnON/OFFJoePlane(bool TurnOn);
    void PrepMaterialsForHighlighting();
    void Collision Sound Trigger(class UPrimitiveComponent* TargetHitComponent, bool& isHitSoundAllowed);
    void Collision Sound();
    void DisableInteractionInfo(class APawn* Pawn);
    void ShowInteractionAlertMessage();
    void BndEvt__BP_JoeAirplane_WheelsMeshComp_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ObjectDeattachedFromMagnet();
    void TimeWindow();
    void BndEvt__BP_JoeAirplane_MetalFrame_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_JoeAirplane_MainMeshComponent_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void SoundGate();
    void ReceiveBeginPlay();
    void CheckPlane();
    void ReceiveDestroyed();
    void TurnOnHighlight(bool bOn);
    void TurnOnAirplaneHighlight(bool bShouldHighlight);
    void OnJoePlaneFixed_Event();
    void JoeXitPlane();
    void OnOneOfTheHolesFixed(class UStaticMeshComponent* HoleMesh);
    void JoeXitPlaneEditor();
    void AddDialogAfterAWhile();
    void ExecuteUbergraph_BP_JoeAirplane(int32 EntryPoint);
}; // Size: 0x531

#endif
