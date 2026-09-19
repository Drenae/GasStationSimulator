#ifndef UE4SS_SDK_Shark_BP_HPP
#define UE4SS_SDK_Shark_BP_HPP

class AShark_BP_C : public AShark
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class USharkWaterMovementComponent_BP_C* SharkWaterMovementComponent_BP;          // 0x03E8 (size: 0x8)
    float SharkMarkerMovement_LerpToShark_CB3F17A442FBC0F3B228919E0913DF07;           // 0x03F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SharkMarkerMovement__Direction_CB3F17A442FBC0F3B228919E0913DF07; // 0x03F4 (size: 0x1)
    class UTimelineComponent* SharkMarkerMovement;                                    // 0x03F8 (size: 0x8)
    bool DeathPlaying;                                                                // 0x0400 (size: 0x1)
    FTimerHandle SharkDestroyTimer;                                                   // 0x0408 (size: 0x8)
    class UMiniGames_Tutorial_C* TutorialRef;                                         // 0x0410 (size: 0x8)
    class USharkNotification_C* Notification_0;                                       // 0x0418 (size: 0x8)

    void SharkMarkerMovement__FinishedFunc();
    void SharkMarkerMovement__UpdateFunc();
    void OnNotifyEnd_FEFF249E4BC2DDEAB13B3C82A442BD71(FName NotifyName);
    void OnNotifyBegin_FEFF249E4BC2DDEAB13B3C82A442BD71(FName NotifyName);
    void OnInterrupted_FEFF249E4BC2DDEAB13B3C82A442BD71(FName NotifyName);
    void OnBlendOut_FEFF249E4BC2DDEAB13B3C82A442BD71(FName NotifyName);
    void OnCompleted_FEFF249E4BC2DDEAB13B3C82A442BD71(FName NotifyName);
    void OnNotifyEnd_14B746314512EF88DD2CE4AD406FB9B0(FName NotifyName);
    void OnNotifyBegin_14B746314512EF88DD2CE4AD406FB9B0(FName NotifyName);
    void OnInterrupted_14B746314512EF88DD2CE4AD406FB9B0(FName NotifyName);
    void OnBlendOut_14B746314512EF88DD2CE4AD406FB9B0(FName NotifyName);
    void OnCompleted_14B746314512EF88DD2CE4AD406FB9B0(FName NotifyName);
    void OnNotifyEnd_60954870408062D7A44D5682F908E4F9(FName NotifyName);
    void OnNotifyBegin_60954870408062D7A44D5682F908E4F9(FName NotifyName);
    void OnInterrupted_60954870408062D7A44D5682F908E4F9(FName NotifyName);
    void OnBlendOut_60954870408062D7A44D5682F908E4F9(FName NotifyName);
    void OnCompleted_60954870408062D7A44D5682F908E4F9(FName NotifyName);
    void OnNotifyEnd_7CA29A174C7AE0EF87E7DFB992B213A7(FName NotifyName);
    void OnNotifyBegin_7CA29A174C7AE0EF87E7DFB992B213A7(FName NotifyName);
    void OnInterrupted_7CA29A174C7AE0EF87E7DFB992B213A7(FName NotifyName);
    void OnBlendOut_7CA29A174C7AE0EF87E7DFB992B213A7(FName NotifyName);
    void OnCompleted_7CA29A174C7AE0EF87E7DFB992B213A7(FName NotifyName);
    void OnNotifyEnd_6F29CEB8409AC27655FF03ABB8C4E249(FName NotifyName);
    void OnNotifyBegin_6F29CEB8409AC27655FF03ABB8C4E249(FName NotifyName);
    void OnInterrupted_6F29CEB8409AC27655FF03ABB8C4E249(FName NotifyName);
    void OnBlendOut_6F29CEB8409AC27655FF03ABB8C4E249(FName NotifyName);
    void OnCompleted_6F29CEB8409AC27655FF03ABB8C4E249(FName NotifyName);
    void OnNotifyEnd_A8D5073F4FE05A0FE60A898C7F9EFC4F(FName NotifyName);
    void OnNotifyBegin_A8D5073F4FE05A0FE60A898C7F9EFC4F(FName NotifyName);
    void OnInterrupted_A8D5073F4FE05A0FE60A898C7F9EFC4F(FName NotifyName);
    void OnBlendOut_A8D5073F4FE05A0FE60A898C7F9EFC4F(FName NotifyName);
    void OnCompleted_A8D5073F4FE05A0FE60A898C7F9EFC4F(FName NotifyName);
    void OnNotifyEnd_28CF95904245AB47A27C638159446C0C(FName NotifyName);
    void OnNotifyBegin_28CF95904245AB47A27C638159446C0C(FName NotifyName);
    void OnInterrupted_28CF95904245AB47A27C638159446C0C(FName NotifyName);
    void OnBlendOut_28CF95904245AB47A27C638159446C0C(FName NotifyName);
    void OnCompleted_28CF95904245AB47A27C638159446C0C(FName NotifyName);
    void OnNotifyEnd_67EB5A964AB7521C2DF7E4ACAE1994C0(FName NotifyName);
    void OnNotifyBegin_67EB5A964AB7521C2DF7E4ACAE1994C0(FName NotifyName);
    void OnInterrupted_67EB5A964AB7521C2DF7E4ACAE1994C0(FName NotifyName);
    void OnBlendOut_67EB5A964AB7521C2DF7E4ACAE1994C0(FName NotifyName);
    void OnCompleted_67EB5A964AB7521C2DF7E4ACAE1994C0(FName NotifyName);
    void OnNotifyEnd_E97730DB40CEBC4068B3B0B30C978EEA(FName NotifyName);
    void OnNotifyBegin_E97730DB40CEBC4068B3B0B30C978EEA(FName NotifyName);
    void OnInterrupted_E97730DB40CEBC4068B3B0B30C978EEA(FName NotifyName);
    void OnBlendOut_E97730DB40CEBC4068B3B0B30C978EEA(FName NotifyName);
    void OnCompleted_E97730DB40CEBC4068B3B0B30C978EEA(FName NotifyName);
    void BndEvt__Shark_BP_SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void StartAttack();
    void CustomEvent_0();
    void ReceiveBeginPlay();
    void TutorialClosed();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void OnDeath();
    void ExecuteUbergraph_Shark_BP(int32 EntryPoint);
}; // Size: 0x420

#endif
