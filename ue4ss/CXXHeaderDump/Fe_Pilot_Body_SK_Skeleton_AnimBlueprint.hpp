#ifndef UE4SS_SDK_Fe_Pilot_Body_SK_Skeleton_AnimBlueprint_HPP
#define UE4SS_SDK_Fe_Pilot_Body_SK_Skeleton_AnimBlueprint_HPP

class UFe_Pilot_Body_SK_Skeleton_AnimBlueprint_C : public UPilotsAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x04C8 (size: 0x30)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x04F8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0540 (size: 0xA0)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x05E0 (size: 0x80)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0660 (size: 0x80)
    bool bUnMount;                                                                    // 0x06E0 (size: 0x1)
    bool bUnPaitentA;                                                                 // 0x06E1 (size: 0x1)
    bool bUnPaitentB;                                                                 // 0x06E2 (size: 0x1)
    bool bSavedUnMounted;                                                             // 0x06E3 (size: 0x1)
    class ATradingAirplane* As Trading Airplane;                                      // 0x06E8 (size: 0x8)
    bool bSavedMounted;                                                               // 0x06F0 (size: 0x1)
    bool bMountIdle;                                                                  // 0x06F1 (size: 0x1)
    class APilotCharacter* As Pilot Character;                                        // 0x06F8 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void Handle Saved States();
    void OnNotifyBegin_B61739A5411D12A3B0B7869B3326D0F7(FName NotifyName);
    void OnInterrupted_B61739A5411D12A3B0B7869B3326D0F7(FName NotifyName);
    void OnBlendOut_B61739A5411D12A3B0B7869B3326D0F7(FName NotifyName);
    void OnCompleted_B61739A5411D12A3B0B7869B3326D0F7(FName NotifyName);
    void OnNotifyEnd_32F275FA4C467F4614DA5FBAC2E84EC3(FName NotifyName);
    void OnNotifyBegin_32F275FA4C467F4614DA5FBAC2E84EC3(FName NotifyName);
    void OnInterrupted_32F275FA4C467F4614DA5FBAC2E84EC3(FName NotifyName);
    void OnBlendOut_32F275FA4C467F4614DA5FBAC2E84EC3(FName NotifyName);
    void OnCompleted_32F275FA4C467F4614DA5FBAC2E84EC3(FName NotifyName);
    void OnNotifyEnd_018797A148D853D95AC3E0AF97313548(FName NotifyName);
    void OnNotifyBegin_018797A148D853D95AC3E0AF97313548(FName NotifyName);
    void OnInterrupted_018797A148D853D95AC3E0AF97313548(FName NotifyName);
    void OnBlendOut_018797A148D853D95AC3E0AF97313548(FName NotifyName);
    void OnCompleted_018797A148D853D95AC3E0AF97313548(FName NotifyName);
    void OnNotifyEnd_CA316C16458AD1314980D7AD5B360173(FName NotifyName);
    void OnNotifyBegin_CA316C16458AD1314980D7AD5B360173(FName NotifyName);
    void OnInterrupted_CA316C16458AD1314980D7AD5B360173(FName NotifyName);
    void OnBlendOut_CA316C16458AD1314980D7AD5B360173(FName NotifyName);
    void OnCompleted_CA316C16458AD1314980D7AD5B360173(FName NotifyName);
    void OnNotifyEnd_109E5790466EFB8899361A9E9996E1A8(FName NotifyName);
    void OnNotifyBegin_109E5790466EFB8899361A9E9996E1A8(FName NotifyName);
    void OnInterrupted_109E5790466EFB8899361A9E9996E1A8(FName NotifyName);
    void OnBlendOut_109E5790466EFB8899361A9E9996E1A8(FName NotifyName);
    void OnCompleted_109E5790466EFB8899361A9E9996E1A8(FName NotifyName);
    void OnNotifyEnd_ECCD34014289344095326584BFDA2843(FName NotifyName);
    void OnNotifyBegin_ECCD34014289344095326584BFDA2843(FName NotifyName);
    void OnInterrupted_ECCD34014289344095326584BFDA2843(FName NotifyName);
    void OnBlendOut_ECCD34014289344095326584BFDA2843(FName NotifyName);
    void OnCompleted_ECCD34014289344095326584BFDA2843(FName NotifyName);
    void OnNotifyEnd_B61739A5411D12A3B0B7869B3326D0F7(FName NotifyName);
    void BlueprintInitializeAnimation();
    void OnMontageStateChanged();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_Fe_Pilot_Body_SK_Skeleton_AnimBlueprint(int32 EntryPoint);
}; // Size: 0x700

#endif
