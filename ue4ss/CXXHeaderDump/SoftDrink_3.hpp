#ifndef UE4SS_SDK_SoftDrink_3_HPP
#define UE4SS_SDK_SoftDrink_3_HPP

class ASoftDrink_3_C : public ASoftDrink
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_SoftDrink_3(int32 EntryPoint);
}; // Size: 0x388

#endif
