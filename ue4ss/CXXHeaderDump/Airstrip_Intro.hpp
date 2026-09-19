#ifndef UE4SS_SDK_Airstrip_Intro_HPP
#define UE4SS_SDK_Airstrip_Intro_HPP

class USequenceDirector_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class UDialogue_WBP_C* DialogueWidget;                                            // 0x0040 (size: 0x8)

    void SequenceEvent__ENTRYPOINTSequenceDirector_15();
    void SequenceEvent__ENTRYPOINTSequenceDirector_14();
    void SequenceEvent__ENTRYPOINTSequenceDirector_13();
    void SequenceEvent__ENTRYPOINTSequenceDirector_12();
    void SequenceEvent__ENTRYPOINTSequenceDirector_11();
    void SequenceEvent__ENTRYPOINTSequenceDirector_10();
    void SequenceEvent__ENTRYPOINTSequenceDirector_9();
    void SequenceEvent__ENTRYPOINTSequenceDirector_8();
    void SequenceEvent__ENTRYPOINTSequenceDirector_7();
    void SequenceEvent__ENTRYPOINTSequenceDirector_6();
    void SequenceEvent__ENTRYPOINTSequenceDirector_5();
    void SequenceEvent__ENTRYPOINTSequenceDirector_4();
    void SequenceEvent__ENTRYPOINTSequenceDirector_3();
    void SequenceEvent__ENTRYPOINTSequenceDirector_2();
    void SequenceEvent__ENTRYPOINTSequenceDirector_1();
    void SequenceEvent__ENTRYPOINTSequenceDirector_0();
    void SequenceEvent_0();
    void SequenceEvent_1();
    void SequenceEvent_2();
    void StartDialogue(FText InputText);
    void EndDialogue();
    void SequenceEvent_3();
    void SequenceEvent_4();
    void SequenceEvent_5();
    void SequenceEvent_6();
    void SequenceEvent_7();
    void SequenceEvent_8();
    void SequenceEvent_9();
    void SequenceEvent_10();
    void SequenceEvent_11();
    void SequenceEvent_12();
    void SequenceEvent_13();
    void SequenceEvent_14();
    void SequenceEvent_15();
    void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);
}; // Size: 0x48

#endif
