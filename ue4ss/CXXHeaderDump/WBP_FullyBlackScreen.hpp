#ifndef UE4SS_SDK_WBP_FullyBlackScreen_HPP
#define UE4SS_SDK_WBP_FullyBlackScreen_HPP

class UWBP_FullyBlackScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Fade;                                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0270 (size: 0x8)

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_WBP_FullyBlackScreen(int32 EntryPoint);
}; // Size: 0x278

#endif
