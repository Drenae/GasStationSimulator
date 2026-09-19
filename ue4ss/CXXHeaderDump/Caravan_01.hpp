#ifndef UE4SS_SDK_Caravan_01_HPP
#define UE4SS_SDK_Caravan_01_HPP

class ACaravan_01_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    float RestTime;                                                                   // 0x0230 (size: 0x4)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Caravan_01(int32 EntryPoint);
}; // Size: 0x234

#endif
