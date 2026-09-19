#ifndef UE4SS_SDK_Validator_BP_HPP
#define UE4SS_SDK_Validator_BP_HPP

class AValidator_BP_C : public AKeyItem
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0358 (size: 0x8)
    class Aticket_visualactor_C* Ticket;                                              // 0x0360 (size: 0x8)
    bool IsDuringMontage;                                                             // 0x0368 (size: 0x1)
    class UWBP_TicketMinigame_C* MinigameWidget;                                      // 0x0370 (size: 0x8)
    bool bFakeTicket;                                                                 // 0x0378 (size: 0x1)
    FTicketData NpcTicket;                                                            // 0x0380 (size: 0x90)
    FTransform InitialTransform;                                                      // 0x0410 (size: 0x30)

    void FixCustomMovieParameters();
    void CreateMinigameWidget_();
    void SpawnAndSetupCustomerTicket_();
    void OnMinigameWidgetDestroy(bool bCancelMinigame);
    void OnNotifyEnd_3D4FDA3D464233755A6360AE60146939(FName NotifyName);
    void OnNotifyBegin_3D4FDA3D464233755A6360AE60146939(FName NotifyName);
    void OnInterrupted_3D4FDA3D464233755A6360AE60146939(FName NotifyName);
    void OnBlendOut_3D4FDA3D464233755A6360AE60146939(FName NotifyName);
    void OnCompleted_3D4FDA3D464233755A6360AE60146939(FName NotifyName);
    void OnNotifyEnd_24C6E167451EAEA715A377839427F31D(FName NotifyName);
    void OnNotifyBegin_24C6E167451EAEA715A377839427F31D(FName NotifyName);
    void OnInterrupted_24C6E167451EAEA715A377839427F31D(FName NotifyName);
    void OnBlendOut_24C6E167451EAEA715A377839427F31D(FName NotifyName);
    void OnCompleted_24C6E167451EAEA715A377839427F31D(FName NotifyName);
    void InpActEvt_Interaction_F_K2Node_InputActionEvent_0(FKey Key);
    void StartValidationMontage();
    void EndValidationMontage();
    void StartStuckMontage();
    void UnstuckClickMontage();
    void UnstuckFinishMontage();
    void AllowStartValidationAgain();
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Validator_BP(int32 EntryPoint);
}; // Size: 0x440

#endif
