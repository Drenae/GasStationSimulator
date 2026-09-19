#ifndef UE4SS_SDK_Intro_sequence_HPP
#define UE4SS_SDK_Intro_sequence_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void FadeOut();
    void Ui_blackscreen();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
