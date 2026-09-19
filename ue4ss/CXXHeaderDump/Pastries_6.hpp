#ifndef UE4SS_SDK_Pastries_6_HPP
#define UE4SS_SDK_Pastries_6_HPP

class APastries_6_C : public APastries
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Pastries_6(int32 EntryPoint);
}; // Size: 0x388

#endif
