#ifndef UE4SS_SDK_Cap_8_HPP
#define UE4SS_SDK_Cap_8_HPP

class ACap_8_C : public ACap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Cap_8(int32 EntryPoint);
}; // Size: 0x388

#endif
