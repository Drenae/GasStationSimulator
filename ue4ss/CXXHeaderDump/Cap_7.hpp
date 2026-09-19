#ifndef UE4SS_SDK_Cap_7_HPP
#define UE4SS_SDK_Cap_7_HPP

class ACap_7_C : public ACap
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Cap_7(int32 EntryPoint);
}; // Size: 0x388

#endif
