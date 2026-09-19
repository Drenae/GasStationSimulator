#ifndef UE4SS_SDK_WBP_QuestInfo_HPP
#define UE4SS_SDK_WBP_QuestInfo_HPP

class UWBP_QuestInfo_C : public UQuestInfoWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UWidgetAnimation* Outro;                                                    // 0x02A8 (size: 0x8)
    class UWidgetAnimation* Intro;                                                    // 0x02B0 (size: 0x8)
    class UWidgetAnimation* Complited;                                                // 0x02B8 (size: 0x8)
    class UVerticalBox* MainHolder;                                                   // 0x02C0 (size: 0x8)
    class USizeBox* Progress_Bar_Sizer;                                               // 0x02C8 (size: 0x8)

    void Construct();
    void Destruct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void ExecuteUbergraph_WBP_QuestInfo(int32 EntryPoint);
}; // Size: 0x2D0

#endif
