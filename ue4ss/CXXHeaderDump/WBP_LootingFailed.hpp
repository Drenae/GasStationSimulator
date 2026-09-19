#ifndef UE4SS_SDK_WBP_LootingFailed_HPP
#define UE4SS_SDK_WBP_LootingFailed_HPP

class UWBP_LootingFailed_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UImage* Image_67;                                                           // 0x0270 (size: 0x8)
    class UWBP_LockpickingHUD_C* LockInfoHUD;                                         // 0x0278 (size: 0x8)
    class UWBP_LockpickingHUD_C* MianLockPickREF;                                     // 0x0280 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_LootingFailed(int32 EntryPoint);
}; // Size: 0x288

#endif
