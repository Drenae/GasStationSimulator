#ifndef UE4SS_SDK_Toy_1_HPP
#define UE4SS_SDK_Toy_1_HPP

class AToy_1_C : public AToy
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Toy_1(int32 EntryPoint);
}; // Size: 0x388

#endif
