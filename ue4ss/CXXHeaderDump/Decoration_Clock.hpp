#ifndef UE4SS_SDK_Decoration_Clock_HPP
#define UE4SS_SDK_Decoration_Clock_HPP

class ADecoration_Clock_C : public ADecoration_Base_Ground_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UAudioComponent* Cuckoo_Cue;                                                // 0x0598 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x05A0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x05A8 (size: 0x8)
    int32 CooKooCounter;                                                              // 0x05B0 (size: 0x4)
    FDecoration_Clock_CClockActivated ClockActivated;                                 // 0x05B8 (size: 0x10)
    void ClockActivated();

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    void OnNotifyEnd_141F880F48BFBBF1806DFF8943754886(FName NotifyName);
    void OnNotifyBegin_141F880F48BFBBF1806DFF8943754886(FName NotifyName);
    void OnInterrupted_141F880F48BFBBF1806DFF8943754886(FName NotifyName);
    void OnBlendOut_141F880F48BFBBF1806DFF8943754886(FName NotifyName);
    void OnCompleted_141F880F48BFBBF1806DFF8943754886(FName NotifyName);
    void OnNotifyEnd_5AAF67D14422DE202612F09B307A028F(FName NotifyName);
    void OnNotifyBegin_5AAF67D14422DE202612F09B307A028F(FName NotifyName);
    void OnInterrupted_5AAF67D14422DE202612F09B307A028F(FName NotifyName);
    void OnBlendOut_5AAF67D14422DE202612F09B307A028F(FName NotifyName);
    void OnCompleted_5AAF67D14422DE202612F09B307A028F(FName NotifyName);
    void DisableInteractionInfo(class APawn* Pawn);
    void ReceiveBeginPlay();
    void CustomEvent_0(const int32 UpdatedTime);
    void CanBeSpawned(const bool bCompatibile, const TArray<AActor*>& OverlapedElements, const FName& Reason);
    void BndEvt__Decoration_Clock_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ActivateClockCooKoo();
    void OnNewGameplayStuffUnlockStateChanged(FUnlockableGameplayStuffState NewUnlockableGameplayStuffState);
    void ToggleSkeletalTick();
    void ExecuteUbergraph_Decoration_Clock(int32 EntryPoint);
    void ClockActivated__DelegateSignature();
}; // Size: 0x5C8

#endif
