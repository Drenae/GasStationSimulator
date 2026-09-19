#ifndef UE4SS_SDK_WBP_Towy_HPP
#define UE4SS_SDK_WBP_Towy_HPP

class UWBP_Towy_C : public UTowyWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UWidgetAnimation* OverHeatedAnimation;                                      // 0x0290 (size: 0x8)
    class UWidgetAnimation* NoFuelAnimation;                                          // 0x0298 (size: 0x8)
    class UWBP_KeyBindedAction_C* ActiveMagnetInteraction;                            // 0x02A0 (size: 0x8)
    class UTextBlock* ConnectingTxt;                                                  // 0x02A8 (size: 0x8)
    class UVerticalBox* ControllsHorizontalDriveMode;                                 // 0x02B0 (size: 0x8)
    class UVerticalBox* ControllsHorizontalMagnetMode;                                // 0x02B8 (size: 0x8)
    class UScaleBox* CoolEngineInteraction;                                           // 0x02C0 (size: 0x8)
    class UWBP_KeyBindedAction_C* ExtendArmFirst;                                     // 0x02C8 (size: 0x8)
    class UWBP_KeyBindedAction_C* ExtendArmSecond;                                    // 0x02D0 (size: 0x8)
    class UWBP_KeyBindedAction_C* F_Interaction_Second;                               // 0x02D8 (size: 0x8)
    class UWBP_KeyBindedAction_C* F_InteractionFirst_1;                               // 0x02E0 (size: 0x8)
    class UImage* FuelPointer;                                                        // 0x02E8 (size: 0x8)
    class UImage* FuelProgress;                                                       // 0x02F0 (size: 0x8)
    class UWBP_KeyBindedAction_C* HandbrakeInteraction;                               // 0x02F8 (size: 0x8)
    class UImage* Icon_IMG;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0308 (size: 0x8)
    class UOverlay* Interaction;                                                      // 0x0310 (size: 0x8)
    class UWidgetSwitcher* KeyLegend_Switcher;                                        // 0x0318 (size: 0x8)
    class UWBP_KeyBindedAction_C* LowerMagnetInteractionFirst;                        // 0x0320 (size: 0x8)
    class UWBP_KeyBindedAction_C* LowerMagnetInteractionSecond;                       // 0x0328 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x0330 (size: 0x8)
    class UWBP_KeyBindedAction_C* ModSwitching_Interaction;                           // 0x0338 (size: 0x8)
    class UWBP_KeyBindedAction_C* MOVE_BACK;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyBindedAction_C* MOVE_FORWARD;                                       // 0x0348 (size: 0x8)
    class UWBP_KeyBindedAction_C* MOVE_LEFT;                                          // 0x0350 (size: 0x8)
    class UWBP_KeyBindedAction_C* MOVE_RIGHT;                                         // 0x0358 (size: 0x8)
    class UWBP_KeyBindedAction_C* MoveMagnet_1;                                       // 0x0360 (size: 0x8)
    class UWBP_KeyBindedAction_C* MoveMagnet_2;                                       // 0x0368 (size: 0x8)
    class UWBP_KeyBindedAction_C* MoveMagnet_3;                                       // 0x0370 (size: 0x8)
    class UWBP_KeyBindedAction_C* MoveMagnet_4;                                       // 0x0378 (size: 0x8)
    class UOverlay* NoFuelOverlay;                                                    // 0x0380 (size: 0x8)
    class UOverlay* OverHeat_Overlay;                                                 // 0x0388 (size: 0x8)
    class UTextBlock* PREFIX_TXT;                                                     // 0x0390 (size: 0x8)
    class UTextBlock* PrefixTXT;                                                      // 0x0398 (size: 0x8)
    class UTextBlock* PrefixTXT_1;                                                    // 0x03A0 (size: 0x8)
    class UWBP_KeyBindedAction_C* RPM_Interaction;                                    // 0x03A8 (size: 0x8)
    class UWBP_KeyBindedAction_C* SHIFT_INTERACTION;                                  // 0x03B0 (size: 0x8)
    class UTextBlock* SOFIX_TXT;                                                      // 0x03B8 (size: 0x8)
    class UWBP_KeyBindedAction_C* SwitchModeInteractionSecond;                        // 0x03C0 (size: 0x8)
    float Percent;                                                                    // 0x03C8 (size: 0x4)
    class UMiniGames_Tutorial_C* Tip;                                                 // 0x03D0 (size: 0x8)
    class AActor* Actor;                                                              // 0x03D8 (size: 0x8)
    class UWBP_DiggerOverHeat_C* OverHeatNotification;                                // 0x03E0 (size: 0x8)
    float LocalOverheated;                                                            // 0x03E8 (size: 0x4)
    class ATowy* Towy;                                                                // 0x03F0 (size: 0x8)

    void NoFuel();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void Construct();
    void KeyBindChanged(const FName ActionName);
    void KeyBindReset();
    void OnModeChange(bool IsMagnetMode);
    void ExecuteUbergraph_WBP_Towy(int32 EntryPoint);
}; // Size: 0x3F8

#endif
