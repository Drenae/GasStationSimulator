#ifndef UE4SS_SDK_SoftDrink_2_HPP
#define UE4SS_SDK_SoftDrink_2_HPP

class ASoftDrink_2_C : public ASoftDrink
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SoftDrink_2(int32 EntryPoint);
}; // Size: 0x388

#endif
