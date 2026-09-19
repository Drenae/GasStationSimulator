#ifndef UE4SS_SDK_Cap_5_HPP
#define UE4SS_SDK_Cap_5_HPP

class ACap_5_C : public ACap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Cap_5(int32 EntryPoint);
}; // Size: 0x388

#endif
