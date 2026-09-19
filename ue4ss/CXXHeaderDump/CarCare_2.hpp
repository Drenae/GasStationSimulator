#ifndef UE4SS_SDK_CarCare_2_HPP
#define UE4SS_SDK_CarCare_2_HPP

class ACarCare_2_C : public ACarCare
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_CarCare_2(int32 EntryPoint);
}; // Size: 0x388

#endif
