#ifndef UE4SS_SDK_WBP_IntroSequenceCongratz_HPP
#define UE4SS_SDK_WBP_IntroSequenceCongratz_HPP

class UWBP_IntroSequenceCongratz_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0268 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0270 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0278 (size: 0x8)
    class UImage* Image_83;                                                           // 0x0280 (size: 0x8)

    void Construct();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_WBP_IntroSequenceCongratz(int32 EntryPoint);
}; // Size: 0x288

#endif
