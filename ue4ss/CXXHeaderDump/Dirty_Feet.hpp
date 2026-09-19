#ifndef UE4SS_SDK_Dirty_Feet_HPP
#define UE4SS_SDK_Dirty_Feet_HPP

class ADirty_Feet_C : public A00_DirtyActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0270 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Dirty_Feet(int32 EntryPoint);
}; // Size: 0x278

#endif
