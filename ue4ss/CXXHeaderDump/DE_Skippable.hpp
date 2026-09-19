#ifndef UE4SS_SDK_DE_Skippable_HPP
#define UE4SS_SDK_DE_Skippable_HPP

class UDE_Skippable_C : public UDE_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0090 (size: 0x8)
    class UWBP_SequenceSkip_C* SequenceWidget;                                        // 0x0098 (size: 0x8)
    class ULevelSequencePlayer* PlayingSequence;                                      // 0x00A0 (size: 0x8)
    class UUserWidget* UpgradeWidget;                                                 // 0x00A8 (size: 0x8)
    bool MuteMusic;                                                                   // 0x00B0 (size: 0x1)

    void InitializeEventDisplay(class AGSSGameState* InitGSSGameState);
    void SkipCutscene();
    void FinishEventDisplay();
    void ExecuteUbergraph_DE_Skippable(int32 EntryPoint);
}; // Size: 0xB1

#endif
