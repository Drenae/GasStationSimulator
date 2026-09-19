#ifndef UE4SS_SDK_Alcohol_4_HPP
#define UE4SS_SDK_Alcohol_4_HPP

class AAlcohol_4_C : public AAlcoholBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Alcohol_4(int32 EntryPoint);
}; // Size: 0x388

#endif
