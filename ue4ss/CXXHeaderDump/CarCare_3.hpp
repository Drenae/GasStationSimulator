#ifndef UE4SS_SDK_CarCare_3_HPP
#define UE4SS_SDK_CarCare_3_HPP

class ACarCare_3_C : public ACarCare
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_CarCare_3(int32 EntryPoint);
}; // Size: 0x388

#endif
