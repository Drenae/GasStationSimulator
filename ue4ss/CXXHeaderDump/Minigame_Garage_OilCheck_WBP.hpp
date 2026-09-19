#ifndef UE4SS_SDK_Minigame_Garage_OilCheck_WBP_HPP
#define UE4SS_SDK_Minigame_Garage_OilCheck_WBP_HPP

class UMinigame_Garage_OilCheck_WBP_C : public UMinigameOilCheckWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* BG_IMG;                                                             // 0x0268 (size: 0x8)
    class USlider* CurVal;                                                            // 0x0270 (size: 0x8)
    class USlider* MaxVal;                                                            // 0x0278 (size: 0x8)
    class USlider* MinVal;                                                            // 0x0280 (size: 0x8)

    void SetMinigameValues(float MinVal, float MaxVal);
    void SetCurrentValue(float CurVal);
    void ExecuteUbergraph_Minigame_Garage_OilCheck_WBP(int32 EntryPoint);
}; // Size: 0x288

#endif
