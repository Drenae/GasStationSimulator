#ifndef UE4SS_SDK_Toy_6_DUPL_1_HPP
#define UE4SS_SDK_Toy_6_DUPL_1_HPP

class AToy_6_C : public AToy
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Toy_6(int32 EntryPoint);
}; // Size: 0x388

#endif
