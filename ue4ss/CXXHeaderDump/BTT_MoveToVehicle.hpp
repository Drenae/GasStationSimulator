#ifndef UE4SS_SDK_BTT_MoveToVehicle_HPP
#define UE4SS_SDK_BTT_MoveToVehicle_HPP

class UBTT_MoveToVehicle_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FTransform CarRotation;                                                           // 0x00B0 (size: 0x30)
    bool StartRotation;                                                               // 0x00E0 (size: 0x1)
    class AAICharacterBase* AICharacterBase;                                          // 0x00E8 (size: 0x8)
    class APathPoint* PathPoint;                                                      // 0x00F0 (size: 0x8)
    float MontageSpeed;                                                               // 0x00F8 (size: 0x4)
    FTimerHandle Timer;                                                               // 0x0100 (size: 0x8)
    int32 UpdatePathStationsAttempts;                                                 // 0x0108 (size: 0x4)
    class ANavigationData* Nav Data;                                                  // 0x0110 (size: 0x8)

    void SetTransforms();
    void HandlePositioning(class USkeletalMeshComponent*& Mesh);
    void OnFail_9A0F57544FBE668D7C11DFAFDFA21B3E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_9A0F57544FBE668D7C11DFAFDFA21B3E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_CF3E45D94C307AE79F21168871DEBAD8(FName NotifyName);
    void OnNotifyBegin_CF3E45D94C307AE79F21168871DEBAD8(FName NotifyName);
    void OnInterrupted_CF3E45D94C307AE79F21168871DEBAD8(FName NotifyName);
    void OnBlendOut_CF3E45D94C307AE79F21168871DEBAD8(FName NotifyName);
    void OnCompleted_CF3E45D94C307AE79F21168871DEBAD8(FName NotifyName);
    void OnFail_B0BDA82E47DC4DFB77F971B76D4F43F3(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_B0BDA82E47DC4DFB77F971B76D4F43F3(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_BAFF648F4B94579EE73D938378A3315E(FName NotifyName);
    void OnNotifyBegin_BAFF648F4B94579EE73D938378A3315E(FName NotifyName);
    void OnInterrupted_BAFF648F4B94579EE73D938378A3315E(FName NotifyName);
    void OnBlendOut_BAFF648F4B94579EE73D938378A3315E(FName NotifyName);
    void OnCompleted_BAFF648F4B94579EE73D938378A3315E(FName NotifyName);
    void OnNotifyEnd_CF52349D44A66F1FE2C2118916AED54C(FName NotifyName);
    void OnNotifyBegin_CF52349D44A66F1FE2C2118916AED54C(FName NotifyName);
    void OnInterrupted_CF52349D44A66F1FE2C2118916AED54C(FName NotifyName);
    void OnBlendOut_CF52349D44A66F1FE2C2118916AED54C(FName NotifyName);
    void OnCompleted_CF52349D44A66F1FE2C2118916AED54C(FName NotifyName);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void TryUpdatePathPoint();
    void OnNotValidPathPoint();
    void CheckForValidPathPoint();
    void ExecuteUbergraph_BTT_MoveToVehicle(int32 EntryPoint);
}; // Size: 0x118

#endif
