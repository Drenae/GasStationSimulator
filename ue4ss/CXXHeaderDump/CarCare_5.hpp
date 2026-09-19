#ifndef UE4SS_SDK_CarCare_5_HPP
#define UE4SS_SDK_CarCare_5_HPP

class ACarCare_5_C : public ACarCare
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_CarCare_5(int32 EntryPoint);
}; // Size: 0x388

#endif
