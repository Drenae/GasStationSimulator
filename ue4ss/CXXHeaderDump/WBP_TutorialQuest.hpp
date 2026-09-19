#ifndef UE4SS_SDK_WBP_TutorialQuest_HPP
#define UE4SS_SDK_WBP_TutorialQuest_HPP

class UWBP_TutorialQuest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NextPageAnimation;                                        // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0270 (size: 0x8)
    class UImage* Image_908;                                                          // 0x0278 (size: 0x8)
    class UScrollBox* TextScrollBox;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* TutorailNextPageText;                                           // 0x0288 (size: 0x8)
    class UOverlay* Tutorial;                                                         // 0x0290 (size: 0x8)
    class UImage* Tutorial_IMG;                                                       // 0x0298 (size: 0x8)
    class UTextBlock* TutorialDescription_TXT;                                        // 0x02A0 (size: 0x8)
    class UTextBlock* TutorialTitle_TXT;                                              // 0x02A8 (size: 0x8)
    class UWBP_PressInTutorial_C* WBP_PressInTutorial;                                // 0x02B0 (size: 0x8)
    bool ManyPages;                                                                   // 0x02B8 (size: 0x1)
    FText NextPageText;                                                               // 0x02C0 (size: 0x18)
    class UTexture2D* Image;                                                          // 0x02D8 (size: 0x8)
    FText Title;                                                                      // 0x02E0 (size: 0x18)
    FText Description;                                                                // 0x02F8 (size: 0x18)
    bool bShowUncleShelfeAnimation;                                                   // 0x0310 (size: 0x1)
    ECharacterState EnteringCharacterMinigameState;                                   // 0x0311 (size: 0x1)

    void Finished_81A11AAC452B9ACC05CE75B2D5F7521A();
    void Construct();
    void AtEscClick();
    void ScrollOffsetDown();
    void CustomEvent2();
    void Destruct();
    void ExecuteUbergraph_WBP_TutorialQuest(int32 EntryPoint);
}; // Size: 0x312

#endif
