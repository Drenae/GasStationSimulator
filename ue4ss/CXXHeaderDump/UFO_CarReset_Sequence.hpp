#ifndef UE4SS_SDK_UFO_CarReset_Sequence_HPP
#define UE4SS_SDK_UFO_CarReset_Sequence_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void SequenceEvent_0();
    void SequenceEvent_1();
    void SequenceEvent_2();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x40

#endif
