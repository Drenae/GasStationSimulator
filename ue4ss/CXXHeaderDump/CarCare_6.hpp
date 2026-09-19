#ifndef UE4SS_SDK_CarCare_6_HPP
#define UE4SS_SDK_CarCare_6_HPP

class ACarCare_6_C : public ACarCare
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_CarCare_6(int32 EntryPoint);
}; // Size: 0x388

#endif
