#ifndef UE4SS_SDK_B_Fluor_HPP
#define UE4SS_SDK_B_Fluor_HPP

class AB_Fluor_C : public AB_Spot_Light_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_B_Fluor(int32 EntryPoint);
}; // Size: 0x388

#endif
