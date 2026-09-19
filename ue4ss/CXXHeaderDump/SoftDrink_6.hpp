#ifndef UE4SS_SDK_SoftDrink_6_HPP
#define UE4SS_SDK_SoftDrink_6_HPP

class ASoftDrink_6_C : public ASoftDrink
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SoftDrink_6(int32 EntryPoint);
}; // Size: 0x388

#endif
