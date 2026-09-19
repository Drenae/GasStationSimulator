#ifndef UE4SS_SDK_Magazine_00_HPP
#define UE4SS_SDK_Magazine_00_HPP

class AMagazine_00_C : public AMagazine
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0400 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Magazine_00(int32 EntryPoint);
}; // Size: 0x408

#endif
