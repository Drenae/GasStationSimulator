#ifndef UE4SS_SDK_WBP_QuestTip_HPP
#define UE4SS_SDK_WBP_QuestTip_HPP

class UWBP_QuestTip_C : public UQuestTipWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UImage* Image_371;                                                          // 0x02A0 (size: 0x8)

    void Construct();
    void HideTipWidget();
    void ExecuteUbergraph_WBP_QuestTip(int32 EntryPoint);
}; // Size: 0x2A8

#endif
