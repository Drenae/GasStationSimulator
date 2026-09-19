#ifndef UE4SS_SDK_Home_HPP
#define UE4SS_SDK_Home_HPP

class AHome_C : public AHouse
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Home(int32 EntryPoint);
}; // Size: 0x408

#endif
