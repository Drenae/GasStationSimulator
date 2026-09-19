#ifndef UE4SS_SDK_Painting_Progress_WBP_HPP
#define UE4SS_SDK_Painting_Progress_WBP_HPP

class UPainting_Progress_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnimationBounc;                                  // 0x0268 (size: 0x8)
    class UImage* Bounce_IMG;                                                         // 0x0270 (size: 0x8)
    class UImage* Image_43;                                                           // 0x0278 (size: 0x8)
    class UProgressBar* Splat_ProgressBar;                                            // 0x0280 (size: 0x8)

    void Construct();
    void SetBounceColapse();
    void SetBounceVisable();
    void ExecuteUbergraph_Painting_Progress_WBP(int32 EntryPoint);
}; // Size: 0x288

#endif
