#ifndef UE4SS_SDK_DropPlaneNotification_WBP_HPP
#define UE4SS_SDK_DropPlaneNotification_WBP_HPP

class UDropPlaneNotification_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* IdleAnimation;                                            // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0278 (size: 0x8)

    void Finished_753E588F4632C17C4CCD2D89B162D408();
    void Finished_0D2BCA264B09E3B9DC34B1993B163519();
    void ChangeVisible(bool IsVisible);
    void ExecuteUbergraph_DropPlaneNotification_WBP(int32 EntryPoint);
}; // Size: 0x280

#endif
