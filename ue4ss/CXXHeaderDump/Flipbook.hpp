#ifndef UE4SS_SDK_Flipbook_HPP
#define UE4SS_SDK_Flipbook_HPP

class UFlipbook_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* ImageWidget;                                                        // 0x0268 (size: 0x8)
    class USizeBox* MySizeBox;                                                        // 0x0270 (size: 0x8)
    bool isPlaying?;                                                                  // 0x0278 (size: 0x1)
    FTimerHandle TimerHandle;                                                         // 0x0280 (size: 0x8)
    int32 FrameIndex;                                                                 // 0x0288 (size: 0x4)
    int32 FramesTotal;                                                                // 0x028C (size: 0x4)
    TArray<FSlateBrush> Brushes;                                                      // 0x0290 (size: 0x10)
    FFlipbookBrush FlipbookBrush;                                                     // 0x02A0 (size: 0x50)
    FMargin SpritePadding;                                                            // 0x02F0 (size: 0x10)
    class UPaperFlipbook* SourceFlipbook;                                             // 0x0300 (size: 0x8)
    float FrameRate;                                                                  // 0x0308 (size: 0x4)

    void CSW::SetBrushAtKeyFrame(int32 KeyFrame);
    int32 GetKeyFrameIndexAtFrame(int32 FrameIndex);
    float GetFlipbookFramerate();
    void FlipbookTick();
    void TryInitTimer();
    void CSW::StopFlipbookAnimation();
    void PreConstruct(bool IsDesignTime);
    void CSW::RestartWithUpdatedParameters(bool SourceFlipbookHasChanged?, bool AppearanceHasChanged?);
    void InitAppearance();
    void Init Brushes();
    void Init Timer();
    void CSW::PlayFlipbookAnimation(int32 Start at Frame);
    void CSW::PauseFlipbookAnimation();
    void Initialize();
    void ExecuteUbergraph_Flipbook(int32 EntryPoint);
}; // Size: 0x30C

#endif
