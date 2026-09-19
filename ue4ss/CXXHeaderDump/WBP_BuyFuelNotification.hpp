#ifndef UE4SS_SDK_WBP_BuyFuelNotification_HPP
#define UE4SS_SDK_WBP_BuyFuelNotification_HPP

class UWBP_BuyFuelNotification_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* LoopAnim;                                                 // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UOverlay* NoFuelOverlay;                                                    // 0x0278 (size: 0x8)

    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Remove();
    void StartAnimation();
    void ExecuteUbergraph_WBP_BuyFuelNotification(int32 EntryPoint);
}; // Size: 0x280

#endif
