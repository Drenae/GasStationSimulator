#ifndef UE4SS_SDK_Fuel_Place_Holder_HPP
#define UE4SS_SDK_Fuel_Place_Holder_HPP

class UFuel_Place_Holder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewScore;                                                 // 0x0268 (size: 0x8)
    class UTextBlock* GOAL_VELUE;                                                     // 0x0270 (size: 0x8)
    class UTextBlock* PLAYER_FUEL_VALUE;                                              // 0x0278 (size: 0x8)
    class UTextBlock* STRIKE_SCORE_TXT;                                               // 0x0280 (size: 0x8)
    class UWBP_FuelStatus_C* WBP_FuelStatus;                                          // 0x0288 (size: 0x8)
    int32 PreviousFuelStrike;                                                         // 0x0290 (size: 0x4)

    void UpdateFuelMinigame(float CurrentVuel, float Goal);
    void Construct();
    void OnFuelChanged(const float CurrentFuelAmount);
    void ExecuteUbergraph_Fuel_Place_Holder(int32 EntryPoint);
}; // Size: 0x294

#endif
