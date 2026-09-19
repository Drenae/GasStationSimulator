#ifndef UE4SS_SDK_Toy_5_HPP
#define UE4SS_SDK_Toy_5_HPP

class AToy_5_C : public AToy
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Toy_5(int32 EntryPoint);
}; // Size: 0x388

#endif
