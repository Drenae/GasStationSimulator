#ifndef UE4SS_SDK_B_FluorGarage_HPP
#define UE4SS_SDK_B_FluorGarage_HPP

class AB_FluorGarage_C : public AB_Spot_Light_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    bool MissionLamp;                                                                 // 0x0388 (size: 0x1)

    void InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Minigame_SpecialAction_01_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void TurnOffTheLights();
    void ExecuteUbergraph_B_FluorGarage(int32 EntryPoint);
}; // Size: 0x389

#endif
