#ifndef UE4SS_SDK_BP_LockComponent_HPP
#define UE4SS_SDK_BP_LockComponent_HPP

class UBP_LockComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    bool Locked?;                                                                     // 0x00B8 (size: 0x1)
    int32 LockDifficulty;                                                             // 0x00BC (size: 0x4)
    FText ObjectName;                                                                 // 0x00C0 (size: 0x18)
    int32 AvailableLockPicks;                                                         // 0x00D8 (size: 0x4)

    void SetHUDInfo(class UWBP_LockpickingHUD_C* HUD, bool IsLockingForbade);
    void ExecuteUbergraph_BP_LockComponent(int32 EntryPoint);
}; // Size: 0xDC

#endif
