#ifndef UE4SS_SDK_CarCare_1_HPP
#define UE4SS_SDK_CarCare_1_HPP

class ACarCare_1_C : public ACarCare
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_CarCare_1(int32 EntryPoint);
}; // Size: 0x388

#endif
