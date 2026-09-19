#ifndef UE4SS_SDK_WBP_SlowBlackOut_HPP
#define UE4SS_SDK_WBP_SlowBlackOut_HPP

class UWBP_SlowBlackOut_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* RemoveBlackScreen;                                        // 0x0268 (size: 0x8)
    class UWidgetAnimation* SlowBlackOut;                                             // 0x0270 (size: 0x8)

    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Construct();
    void ExecuteUbergraph_WBP_SlowBlackOut(int32 EntryPoint);
}; // Size: 0x278

#endif
