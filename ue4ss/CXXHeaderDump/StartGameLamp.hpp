#ifndef UE4SS_SDK_StartGameLamp_HPP
#define UE4SS_SDK_StartGameLamp_HPP

class AStartGameLamp_C : public AB_Spot_Light_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_StartGameLamp(int32 EntryPoint);
}; // Size: 0x388

#endif
