#ifndef UE4SS_SDK_Toy_8_HPP
#define UE4SS_SDK_Toy_8_HPP

class AToy_8_C : public AToy
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Toy_8(int32 EntryPoint);
}; // Size: 0x388

#endif
