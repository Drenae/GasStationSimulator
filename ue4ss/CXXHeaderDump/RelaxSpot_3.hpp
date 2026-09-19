#ifndef UE4SS_SDK_RelaxSpot_3_HPP
#define UE4SS_SDK_RelaxSpot_3_HPP

class ARelaxSpot_3_C : public ARelaxSpot
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0580 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_RelaxSpot_3(int32 EntryPoint);
}; // Size: 0x588

#endif
