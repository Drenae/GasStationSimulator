#ifndef UE4SS_SDK_WBP_MinigameMarshalWands_HPP
#define UE4SS_SDK_WBP_MinigameMarshalWands_HPP

class UWBP_MinigameMarshalWands_C : public UMinigameMarshalWandsWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UCanvasPanel* DataCanvasPanel;                                              // 0x0298 (size: 0x8)
    class UImage* Image_102;                                                          // 0x02A0 (size: 0x8)
    class UImage* Image_border;                                                       // 0x02A8 (size: 0x8)
    class UImage* Image_plane;                                                        // 0x02B0 (size: 0x8)
    class UWBP_KeyBindedAction_C* Interaction_F;                                      // 0x02B8 (size: 0x8)
    class UWBP_KeyBindedAction_C* LMB;                                                // 0x02C0 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x02C8 (size: 0x8)
    class UTextBlock* MinigameTimer;                                                  // 0x02D0 (size: 0x8)
    class UWBP_KeyBindedAction_C* MoveRight_Both;                                     // 0x02D8 (size: 0x8)
    class UWBP_KeyBindedAction_C* MoveRight_KeyboardOnly;                             // 0x02E0 (size: 0x8)
    class UTextBlock* PlaneStateTXT;                                                  // 0x02E8 (size: 0x8)
    class UProgressBar* ProgressBar_62;                                               // 0x02F0 (size: 0x8)
    class USlider* Slider;                                                            // 0x02F8 (size: 0x8)
    class USlider* Slider_59;                                                         // 0x0300 (size: 0x8)
    class UWBP_KeyBindedAction_C* SPACE;                                              // 0x0308 (size: 0x8)
    class UTextBlock* SteerSeparator_TXT;                                             // 0x0310 (size: 0x8)
    class UWBP_KeyBindedAction_C* Turn_KeyboardOnly;                                  // 0x0318 (size: 0x8)
    class UWBP_KeyBindedAction_C* Turn_PadOnly;                                       // 0x0320 (size: 0x8)
    bool bIsShownOnStart;                                                             // 0x0328 (size: 0x1)

    void MoveImage(float Position, float Angle);
    float GetValue_1();
    float GetValue_0();
    float GetPercent_0();
    void Construct();
    void OnMarshalWandsMinigameFinished_Event(bool bSuccessfull);
    void UpdateWidgetValues();
    void OnMarshalWandsMinigameStarted_Event();
    void OnMarshalWandsMinigameRestarted_Event();
    void Destruct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void On Minigame Tutorial Widget Closed();
    void OnMinigame Widget Opened();
    void ExecuteUbergraph_WBP_MinigameMarshalWands(int32 EntryPoint);
}; // Size: 0x329

#endif
