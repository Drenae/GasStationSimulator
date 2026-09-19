#ifndef UE4SS_SDK_Garage_lvl5_HPP
#define UE4SS_SDK_Garage_lvl5_HPP

class AGarage_lvl5_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Garage_lvl5(int32 EntryPoint);
}; // Size: 0x230

#endif
