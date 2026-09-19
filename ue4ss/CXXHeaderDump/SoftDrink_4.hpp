#ifndef UE4SS_SDK_SoftDrink_4_HPP
#define UE4SS_SDK_SoftDrink_4_HPP

class ASoftDrink_4_C : public ASoftDrink
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SoftDrink_4(int32 EntryPoint);
}; // Size: 0x388

#endif
