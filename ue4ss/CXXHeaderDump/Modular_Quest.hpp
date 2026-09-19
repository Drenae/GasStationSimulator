#ifndef UE4SS_SDK_Modular_Quest_HPP
#define UE4SS_SDK_Modular_Quest_HPP

class UModular_Quest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x0268 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x0270 (size: 0x8)
    class UWidgetAnimation* Complited;                                                // 0x0278 (size: 0x8)
    class UWidgetAnimation* PlusOne;                                                  // 0x0280 (size: 0x8)
    class UHorizontalBox* Ammount_Horizontal;                                         // 0x0288 (size: 0x8)
    class UTextBlock* Current;                                                        // 0x0290 (size: 0x8)
    class UVerticalBox* MainHolder;                                                   // 0x0298 (size: 0x8)
    class UTextBlock* Max;                                                            // 0x02A0 (size: 0x8)
    class USizeBox* Progress_Bar_Sizer;                                               // 0x02A8 (size: 0x8)
    class UProgressBar* ProgressBar_Quest;                                            // 0x02B0 (size: 0x8)
    class UTextBlock* Quest_Title_TXT;                                                // 0x02B8 (size: 0x8)
    class UTextBlock* Sign;                                                           // 0x02C0 (size: 0x8)
    class UGSSQuest* Quest;                                                           // 0x02C8 (size: 0x8)

    void UpdateQuest(class UGSSQuest* Target);
    void Construct();
    void OnQuestUpdated(const class UGSSQuest* CurrentQuest);
    void Destruct();
    void ExecuteUbergraph_Modular_Quest(int32 EntryPoint);
}; // Size: 0x2D0

#endif
