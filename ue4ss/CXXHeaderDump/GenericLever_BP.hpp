#ifndef UE4SS_SDK_GenericLever_BP_HPP
#define UE4SS_SDK_GenericLever_BP_HPP

class AGenericLever_BP_C : public AInteractableBuilding
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class USkeletalMeshComponent* Lever;                                              // 0x0588 (size: 0x8)
    class AActor* OverlapBox;                                                         // 0x0590 (size: 0x8)
    bool LeverIsOn;                                                                   // 0x0598 (size: 0x1)
    FGenericLever_BP_CLeverStateChanged LeverStateChanged;                            // 0x05A0 (size: 0x10)
    void LeverStateChanged();

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnNotifyEnd_E886366148582089EAD9A089F6F69F42(FName NotifyName);
    void OnNotifyBegin_E886366148582089EAD9A089F6F69F42(FName NotifyName);
    void OnInterrupted_E886366148582089EAD9A089F6F69F42(FName NotifyName);
    void OnBlendOut_E886366148582089EAD9A089F6F69F42(FName NotifyName);
    void OnCompleted_E886366148582089EAD9A089F6F69F42(FName NotifyName);
    void OnNotifyEnd_D16CB3D04CC2AD0EBBBEABA0442FCC06(FName NotifyName);
    void OnNotifyBegin_D16CB3D04CC2AD0EBBBEABA0442FCC06(FName NotifyName);
    void OnInterrupted_D16CB3D04CC2AD0EBBBEABA0442FCC06(FName NotifyName);
    void OnBlendOut_D16CB3D04CC2AD0EBBBEABA0442FCC06(FName NotifyName);
    void OnCompleted_D16CB3D04CC2AD0EBBBEABA0442FCC06(FName NotifyName);
    void OnNotifyEnd_E041427240B2932A06A384912135B01F(FName NotifyName);
    void OnNotifyBegin_E041427240B2932A06A384912135B01F(FName NotifyName);
    void OnInterrupted_E041427240B2932A06A384912135B01F(FName NotifyName);
    void OnBlendOut_E041427240B2932A06A384912135B01F(FName NotifyName);
    void OnCompleted_E041427240B2932A06A384912135B01F(FName NotifyName);
    void OnNotifyEnd_D7CB55A94E34625F0EE99E92AE39346E(FName NotifyName);
    void OnNotifyBegin_D7CB55A94E34625F0EE99E92AE39346E(FName NotifyName);
    void OnInterrupted_D7CB55A94E34625F0EE99E92AE39346E(FName NotifyName);
    void OnBlendOut_D7CB55A94E34625F0EE99E92AE39346E(FName NotifyName);
    void OnCompleted_D7CB55A94E34625F0EE99E92AE39346E(FName NotifyName);
    void ReceiveBeginPlay();
    void Animate();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_GenericLever_BP(int32 EntryPoint);
    void LeverStateChanged__DelegateSignature();
}; // Size: 0x5B0

#endif
