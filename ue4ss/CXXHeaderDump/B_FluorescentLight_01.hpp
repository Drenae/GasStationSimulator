#ifndef UE4SS_SDK_B_FluorescentLight_01_HPP
#define UE4SS_SDK_B_FluorescentLight_01_HPP

class AB_FluorescentLight_01_C : public AB_Rect_Light_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    bool MissionLamp;                                                                 // 0x0388 (size: 0x1)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_B_FluorescentLight_01(int32 EntryPoint);
}; // Size: 0x389

#endif
