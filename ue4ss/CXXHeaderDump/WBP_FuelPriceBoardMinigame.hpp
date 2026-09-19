#ifndef UE4SS_SDK_WBP_FuelPriceBoardMinigame_HPP
#define UE4SS_SDK_WBP_FuelPriceBoardMinigame_HPP

class UWBP_FuelPriceBoardMinigame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0268 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0270 (size: 0x8)
    class UWBP_KeyBindedAction_C* Shift_Interaction2_1;                               // 0x0278 (size: 0x8)

    void Construct();
    void UpdateKey();
    void UpdateKey2(bool bNewGamepadMode);
    void ExecuteUbergraph_WBP_FuelPriceBoardMinigame(int32 EntryPoint);
}; // Size: 0x280

#endif
