#ifndef UE4SS_SDK_Pastries_3_HPP
#define UE4SS_SDK_Pastries_3_HPP

class APastries_3_C : public APastries
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Pastries_3(int32 EntryPoint);
}; // Size: 0x388

#endif
