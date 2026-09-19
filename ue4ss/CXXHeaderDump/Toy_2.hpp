#ifndef UE4SS_SDK_Toy_2_HPP
#define UE4SS_SDK_Toy_2_HPP

class AToy_2_C : public AToy
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Toy_2(int32 EntryPoint);
}; // Size: 0x388

#endif
