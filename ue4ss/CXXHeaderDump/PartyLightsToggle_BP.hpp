#ifndef UE4SS_SDK_PartyLightsToggle_BP_HPP
#define UE4SS_SDK_PartyLightsToggle_BP_HPP

class APartyLightsToggle_BP_C : public APartyLightsToggle
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)
    class USkeletalMeshComponent* Toggle;                                             // 0x0588 (size: 0x8)
    bool bAreLightsOn_0;                                                              // 0x0590 (size: 0x1)
    bool IsBusy;                                                                      // 0x0591 (size: 0x1)
    bool bBlockOutline;                                                               // 0x0592 (size: 0x1)
    TSoftObjectPtr<class ABP_DeathStarBall_C> DeathStar;                              // 0x0598 (size: 0x28)

    bool DisplayInteractionInfo(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent, class UStaticMeshComponent*& StaticMeshComponent);
    bool SimpleInteraction(class APawn* Pawn, class UPrimitiveComponent* UPrimitiveComponent);
    void OnNotifyEnd_C66FB0204611B5E4BE79FCAF64E274A8(FName NotifyName);
    void OnNotifyBegin_C66FB0204611B5E4BE79FCAF64E274A8(FName NotifyName);
    void OnInterrupted_C66FB0204611B5E4BE79FCAF64E274A8(FName NotifyName);
    void OnBlendOut_C66FB0204611B5E4BE79FCAF64E274A8(FName NotifyName);
    void OnCompleted_C66FB0204611B5E4BE79FCAF64E274A8(FName NotifyName);
    void OnNotifyEnd_A433A62A4DF9BB489E2AC58ADC359906(FName NotifyName);
    void OnNotifyBegin_A433A62A4DF9BB489E2AC58ADC359906(FName NotifyName);
    void OnInterrupted_A433A62A4DF9BB489E2AC58ADC359906(FName NotifyName);
    void OnBlendOut_A433A62A4DF9BB489E2AC58ADC359906(FName NotifyName);
    void OnCompleted_A433A62A4DF9BB489E2AC58ADC359906(FName NotifyName);
    void ReceiveBeginPlay();
    void SwitchLightsOnOff();
    void DisableInteractionInfo(class APawn* Pawn);
    void ExecuteUbergraph_PartyLightsToggle_BP(int32 EntryPoint);
}; // Size: 0x5C0

#endif
