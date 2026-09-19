#ifndef UE4SS_SDK_BP_Lockpicking_HPP
#define UE4SS_SDK_BP_Lockpicking_HPP

class ABP_Lockpicking_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPostProcessComponent* PostProcessComponent;                                // 0x0228 (size: 0x8)
    class UStaticMeshComponent* PickPosition;                                         // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Pick;                                                 // 0x0238 (size: 0x8)
    class UStaticMeshComponent* ScrewDriver;                                          // 0x0240 (size: 0x8)
    class UForceFeedbackComponent* ForceFeedback;                                     // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    class UStaticMeshComponent* InnerLock;                                            // 0x0258 (size: 0x8)
    class UStaticMeshComponent* FrameRing;                                            // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    FLockpicking_Settings Settings;                                                   // 0x0270 (size: 0x70)
    FRotator OriginRotation;                                                          // 0x02E0 (size: 0xC)
    FText LockType;                                                                   // 0x02F0 (size: 0x18)
    float ToleranceMultiplier;                                                        // 0x0308 (size: 0x4)
    float DynaimcTolerance;                                                           // 0x030C (size: 0x4)
    class UWBP_LockpickingHUD_C* WidgetInstance;                                      // 0x0310 (size: 0x8)
    class UBP_LockComponent_C* LockedObject;                                          // 0x0318 (size: 0x8)
    float PickDamage;                                                                 // 0x0320 (size: 0x4)
    float DamageMultiplier;                                                           // 0x0324 (size: 0x4)
    bool ApplyDamage?;                                                                // 0x0328 (size: 0x1)
    class UBP_LockPickingComponent_C* LockPickingComponent;                           // 0x0330 (size: 0x8)
    class UAudioComponent* RotationSound;                                             // 0x0338 (size: 0x8)
    bool MovingLock;                                                                  // 0x0340 (size: 0x1)
    float PickTarget;                                                                 // 0x0344 (size: 0x4)
    float TurnValue;                                                                  // 0x0348 (size: 0x4)
    float DeltaMultiplier;                                                            // 0x034C (size: 0x4)
    int32 WiggleCounter;                                                              // 0x0350 (size: 0x4)
    bool WiggleDirection;                                                             // 0x0354 (size: 0x1)
    class AActor* FocusedActor;                                                       // 0x0358 (size: 0x8)

    void TurnLock(float TurnValue);
    void TurnLockBackToOrigin();
    void UpdateLock();
    void RotatePick(float Location);
    void MovePickWithLock();
    void Wiggle();
    void LockSetup(int32 Difficulty);
    void UserConstructionScript();
    void InpActEvt_Escape_K2Node_InputActionEvent_0(FKey Key);
    void OpenLock();
    void ReceiveTick(float DeltaSeconds);
    void QuitPicking();
    void UpdateHUDInfo();
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_JumpAxis_K2Node_InputAxisEvent_2(float AxisValue);
    void ReceiveBeginPlay();
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_1(float AxisValue);
    void AddPickDamage();
    void ExecuteUbergraph_BP_Lockpicking(int32 EntryPoint);
}; // Size: 0x360

#endif
