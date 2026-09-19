#ifndef UE4SS_SDK_Picklock_HPP
#define UE4SS_SDK_Picklock_HPP

class APicklock_C : public APicklockBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UBP_LockPickingComponent_C* BP_LockPickingComponent;                        // 0x0358 (size: 0x8)
    class UAudioComponent* Failed;                                                    // 0x0360 (size: 0x8)
    class UAudioComponent* Opened;                                                    // 0x0368 (size: 0x8)
    class A00_MaskBack_C* mask;                                                       // 0x0370 (size: 0x8)
    class UNotification_C* BlockNotification;                                         // 0x0378 (size: 0x8)

    void CalcChanceToOpenMask(class A00_MaskBack_C* mask, float& BonusDay, float& NPC, float& SecurityCar, float& Tool, float& TotalChance);
    bool UseItem(class APawn* Pawn, bool Throw, float AimingTime);
    void InpActEvt_LPM_K2Node_InputActionEvent_0(FKey Key);
    void Finished_D2CE08AF4ED031EDC6CEAD8BA74F17DA();
    void ReceiveDestroyed();
    void StartOpeningMask();
    void ExecuteUbergraph_Picklock(int32 EntryPoint);
}; // Size: 0x380

#endif
