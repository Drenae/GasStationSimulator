#ifndef UE4SS_SDK_BP_LockPickingComponent_HPP
#define UE4SS_SDK_BP_LockPickingComponent_HPP

class UBP_LockPickingComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UWBP_LockpickingHUD_C* LockInfoHUD;                                         // 0x00B8 (size: 0x8)
    class UBP_LockComponent_C* Lock;                                                  // 0x00C0 (size: 0x8)
    int32 Lockpicks;                                                                  // 0x00C8 (size: 0x4)
    bool Busy;                                                                        // 0x00CC (size: 0x1)
    int32 MaxLockpicks;                                                               // 0x00D0 (size: 0x4)
    FLockpicking_Settings Settings;                                                   // 0x00D8 (size: 0x70)
    class AActor* FocusedActor;                                                       // 0x0148 (size: 0x8)
    FTimerHandle TickTimer;                                                           // 0x0150 (size: 0x8)

    void CanEverBeLockpicked(class AActor* CheckedActor, bool& CanBe);
    void IsTaskForbadeToLockpick(TSubclassOf<class UTaskBase> ActiveTaskClass, bool& LockpickingForbidden);
    void ResetBindings();
    void CheckForLock(bool& Unlocked, class AActor*& LockedActor);
    void ReceiveBeginPlay();
    void TraceForLock();
    void Picklock();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnGamePaused(bool bPauseEnabled);
    void ExecuteUbergraph_BP_LockPickingComponent(int32 EntryPoint);
}; // Size: 0x158

#endif
