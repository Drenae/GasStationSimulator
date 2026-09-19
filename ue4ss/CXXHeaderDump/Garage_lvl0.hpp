#ifndef UE4SS_SDK_Garage_lvl0_HPP
#define UE4SS_SDK_Garage_lvl0_HPP

class AGarage_lvl0_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Garage_lvl0(int32 EntryPoint);
}; // Size: 0x230

#endif
