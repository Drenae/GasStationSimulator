#ifndef UE4SS_SDK_CarWashLever_BP_HPP
#define UE4SS_SDK_CarWashLever_BP_HPP

class ACarWashLever_BP_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class USkeletalMeshComponent* Lever;                                              // 0x0588 (size: 0x8)
    class AActor* OverlapBox;                                                         // 0x0590 (size: 0x8)
    bool LeverIsOn;                                                                   // 0x0598 (size: 0x1)
    FCarWashLever_BP_CLeverStateChanged LeverStateChanged;                            // 0x05A0 (size: 0x10)
    void LeverStateChanged();

    bool CanBeInteractable(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnNotifyEnd_76A58AD64E4B433DE3AA46949B002CAD(FName NotifyName);
    void OnNotifyBegin_76A58AD64E4B433DE3AA46949B002CAD(FName NotifyName);
    void OnInterrupted_76A58AD64E4B433DE3AA46949B002CAD(FName NotifyName);
    void OnBlendOut_76A58AD64E4B433DE3AA46949B002CAD(FName NotifyName);
    void OnCompleted_76A58AD64E4B433DE3AA46949B002CAD(FName NotifyName);
    void OnNotifyEnd_57F359D54D7519E306D170AD38C5FBAF(FName NotifyName);
    void OnNotifyBegin_57F359D54D7519E306D170AD38C5FBAF(FName NotifyName);
    void OnInterrupted_57F359D54D7519E306D170AD38C5FBAF(FName NotifyName);
    void OnBlendOut_57F359D54D7519E306D170AD38C5FBAF(FName NotifyName);
    void OnCompleted_57F359D54D7519E306D170AD38C5FBAF(FName NotifyName);
    void OnNotifyEnd_5C1F02844A018638606D7EB515FAD6B7(FName NotifyName);
    void OnNotifyBegin_5C1F02844A018638606D7EB515FAD6B7(FName NotifyName);
    void OnInterrupted_5C1F02844A018638606D7EB515FAD6B7(FName NotifyName);
    void OnBlendOut_5C1F02844A018638606D7EB515FAD6B7(FName NotifyName);
    void OnCompleted_5C1F02844A018638606D7EB515FAD6B7(FName NotifyName);
    void OnNotifyEnd_14547FB645207C32A5DBC9BC0517C31F(FName NotifyName);
    void OnNotifyBegin_14547FB645207C32A5DBC9BC0517C31F(FName NotifyName);
    void OnInterrupted_14547FB645207C32A5DBC9BC0517C31F(FName NotifyName);
    void OnBlendOut_14547FB645207C32A5DBC9BC0517C31F(FName NotifyName);
    void OnCompleted_14547FB645207C32A5DBC9BC0517C31F(FName NotifyName);
    void ReceiveBeginPlay();
    void Animate();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_CarWashLever_BP(int32 EntryPoint);
    void LeverStateChanged__DelegateSignature();
}; // Size: 0x5B0

#endif
