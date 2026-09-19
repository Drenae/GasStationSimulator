#ifndef UE4SS_SDK_Player_AnimationManager_HPP
#define UE4SS_SDK_Player_AnimationManager_HPP

class UPlayer_AnimationManager_C : public UPlayerAnimationManagerBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FTimerHandle TimerEndProlog;                                                      // 0x00B8 (size: 0x8)
    float DeltaT;                                                                     // 0x00C0 (size: 0x4)
    class ABiker_ActorBp_C* SpawnedBiker;                                             // 0x00C8 (size: 0x8)
    bool BCameraBlurTick;                                                             // 0x00D0 (size: 0x1)
    bool BikerRotate;                                                                 // 0x00D1 (size: 0x1)
    FRotator StartingControlRotation;                                                 // 0x00D4 (size: 0xC)
    class ALevelSequenceActor* UncleSequencer;                                        // 0x00E0 (size: 0x8)
    TSoftObjectPtr<class ULevelSequence> UncleSequence;                               // 0x00E8 (size: 0x28)
    class UObject* LoadedSequence;                                                    // 0x0110 (size: 0x8)
    TSoftObjectPtr<class ULevelSequence> OutroSequence;                               // 0x0118 (size: 0x28)
    class ALevelSequenceActor* SetOutrSeq;                                            // 0x0140 (size: 0x8)
    int32 InitialMaxVehicleOnMap;                                                     // 0x0148 (size: 0x4)

    void SetNewActiveCamera(int32 CameraNumber);
    void CameraBlur(float Manual Focus Distance);
    void GetAnimCurveValue(FName CurveName, bool EnableTick, float& Curve, bool& EnableTick);
    void OnNotifyEnd_6A35EC944342C1C2E8F35980D4156933(FName NotifyName);
    void OnNotifyBegin_6A35EC944342C1C2E8F35980D4156933(FName NotifyName);
    void OnInterrupted_6A35EC944342C1C2E8F35980D4156933(FName NotifyName);
    void OnBlendOut_6A35EC944342C1C2E8F35980D4156933(FName NotifyName);
    void OnCompleted_6A35EC944342C1C2E8F35980D4156933(FName NotifyName);
    void OnLoaded_B90042234108F1DD4E4359A94AB2290C(class UObject* Loaded);
    void OnNotifyEnd_AD1FCC6A416C16F84A05CEB9105F5913(FName NotifyName);
    void OnNotifyBegin_AD1FCC6A416C16F84A05CEB9105F5913(FName NotifyName);
    void OnInterrupted_AD1FCC6A416C16F84A05CEB9105F5913(FName NotifyName);
    void OnBlendOut_AD1FCC6A416C16F84A05CEB9105F5913(FName NotifyName);
    void OnCompleted_AD1FCC6A416C16F84A05CEB9105F5913(FName NotifyName);
    void OnLoaded_EF2A469441073D29176F4EA508EC5D2B(class UObject* Loaded);
    void OnNotifyEnd_90AA5B324618920A1F4171AA8D3441C0(FName NotifyName);
    void OnNotifyBegin_90AA5B324618920A1F4171AA8D3441C0(FName NotifyName);
    void OnInterrupted_90AA5B324618920A1F4171AA8D3441C0(FName NotifyName);
    void OnBlendOut_90AA5B324618920A1F4171AA8D3441C0(FName NotifyName);
    void OnCompleted_90AA5B324618920A1F4171AA8D3441C0(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void StartUncleSequence();
    void ChangeControlRoationBiker(float DeltaT);
    void SetControlRotation();
    void UncleWakeUpSeq();
    void FinishQuest();
    void Trigger2NdBiker();
    void CustomEvent();
    void SecondBikerTrigger();
    void PrologueEnd();
    void ExecuteUbergraph_Player_AnimationManager(int32 EntryPoint);
}; // Size: 0x14C

#endif
