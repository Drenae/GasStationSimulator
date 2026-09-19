#ifndef UE4SS_SDK_Alcohol_1_HPP
#define UE4SS_SDK_Alcohol_1_HPP

class AAlcohol_1_C : public AAlcoholBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Alcohol_1(int32 EntryPoint);
}; // Size: 0x388

#endif
