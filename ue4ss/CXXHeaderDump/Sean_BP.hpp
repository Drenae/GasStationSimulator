#ifndef UE4SS_SDK_Sean_BP_HPP
#define UE4SS_SDK_Sean_BP_HPP

class ASean_BP_C : public ASeanCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08A0 (size: 0x8)

    FName GetInteractionName();
    void DEBUG_WalkToPointAndIndle();
    void Delay1();
    void Delay2();
    void Debug_EnableTalking();
    void Debug_EnableMarking();
    void ExecuteUbergraph_Sean_BP(int32 EntryPoint);
}; // Size: 0x8A8

#endif
