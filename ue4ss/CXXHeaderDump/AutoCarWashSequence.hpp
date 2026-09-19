#ifndef UE4SS_SDK_AutoCarWashSequence_HPP
#define UE4SS_SDK_AutoCarWashSequence_HPP

class AAutoCarWashSequence_C : public ALevelSequenceActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)

    void BindCarWashStation(class AAutomaticCarWash_BP_C* Station);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AutoCarWashSequence(int32 EntryPoint);
}; // Size: 0x2B0

#endif
