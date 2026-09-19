#ifndef UE4SS_SDK_Garage_HUD_HPP
#define UE4SS_SDK_Garage_HUD_HPP

class UGarage_HUD_C : public UGarageHUDBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UOverlay* BateryGamePadHint;                                                // 0x0268 (size: 0x8)
    class UVerticalBox* ControllsHorizontalMain;                                      // 0x0270 (size: 0x8)
    class UVerticalBox* ControllsMinigameHorizontal;                                  // 0x0278 (size: 0x8)
    class UTextBlock* FixingActionNameTXT;                                            // 0x0280 (size: 0x8)
    class UWBP_KeyBindedAction_C* HighlightActionKey;                                 // 0x0288 (size: 0x8)
    class UOverlay* HintBatery;                                                       // 0x0290 (size: 0x8)
    class UOverlay* HintCoolant;                                                      // 0x0298 (size: 0x8)
    class UOverlay* HintMirror;                                                       // 0x02A0 (size: 0x8)
    class UOverlay* HintMirrorFluid;                                                  // 0x02A8 (size: 0x8)
    class UOverlay* HintScratch;                                                      // 0x02B0 (size: 0x8)
    class UOverlay* HintSparkPlug;                                                    // 0x02B8 (size: 0x8)
    class UOverlay* HintWheel;                                                        // 0x02C0 (size: 0x8)
    class UImage* Image;                                                              // 0x02C8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_50;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_66;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image_80;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_186;                                                          // 0x02F8 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x0300 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_Batery;                                         // 0x0308 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_Coolant;                                        // 0x0310 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_Mirror;                                         // 0x0318 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_MirrorsFluid;                                   // 0x0320 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_Scratch;                                        // 0x0328 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_SparkPlug;                                      // 0x0330 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_SparkPlug2;                                     // 0x0338 (size: 0x8)
    class UWBP_KeyBindedAction_C* LPM_Wheel;                                          // 0x0340 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0348 (size: 0x8)
    class UCanvasPanel* MinigameWidgetsHolder;                                        // 0x0350 (size: 0x8)
    class UTextBlock* Minut;                                                          // 0x0358 (size: 0x8)
    class UOverlay* MirrorGamePadHint;                                                // 0x0360 (size: 0x8)
    class UWBP_KeyBindedAction_C* MoreInfoActionKey;                                  // 0x0368 (size: 0x8)
    class UImage* MoveToPolishImage;                                                  // 0x0370 (size: 0x8)
    class UTextBlock* NeededItemTXT;                                                  // 0x0378 (size: 0x8)
    class UHorizontalBox* NotificationTextHorizontal;                                 // 0x0380 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB_Coolant;                                        // 0x0388 (size: 0x8)
    class UWBP_KeyBindedAction_C* RMB_SparkPlug;                                      // 0x0390 (size: 0x8)
    class UWBP_KeyBindedAction_C* RPM_MirrorsFluid;                                   // 0x0398 (size: 0x8)
    class UOverlay* ScratchGamePadHint;                                               // 0x03A0 (size: 0x8)
    class UTextBlock* Sec;                                                            // 0x03A8 (size: 0x8)
    class UWBP_GenericGarageScore_C* WBP_GenericGarageScore;                          // 0x03B0 (size: 0x8)
    class UOverlay* WheelGamePadHint;                                                 // 0x03B8 (size: 0x8)
    class UCanvasPanel* Widget1;                                                      // 0x03C0 (size: 0x8)
    class AGSSWheeledVehicle* Vehicle;                                                // 0x03C8 (size: 0x8)
    class AGarage* GarageRef;                                                         // 0x03D0 (size: 0x8)
    class UUserWidget* InfoWidget;                                                    // 0x03D8 (size: 0x8)
    int32 PrzykladowyINT;                                                             // 0x03E0 (size: 0x4)
    bool OneOfGamesAreStillOn;                                                        // 0x03E4 (size: 0x1)
    class UWBP_GenericGarageScore_C* CurrentActiveWidget;                             // 0x03E8 (size: 0x8)
    class UMiniGames_Tutorial_C* GarageTutorialREF;                                   // 0x03F0 (size: 0x8)
    bool OneTimeTutDone;                                                              // 0x03F8 (size: 0x1)
    class AActor* CurrentInstigator;                                                  // 0x0400 (size: 0x8)

    void StartCountingAnimation(class AActor* Instigator);
    void UpdateValues();
    void Construct();
    void OnGameStarted(class ACarLift* CarLiftReference, class AGSSWheeledVehicle* CarReference);
    void Destruct();
    void OnGarageGameFinishs(class ACarLift* CarLiftReference, class AGSSWheeledVehicle* CarReference);
    void OnMinigameStarted(EGarageMinigame MinigameType);
    void OnMinigameEnded(EGarageMinigame MinigameType, bool bSuccess);
    void OnCarLiftVolumeChange(class ACarLift* CarLiftReference);
    void OnGarageLeft();
    void OnGarageEnter();
    void OnKeybindingChanged(const FName ActionName);
    void OnKeybindingReset();
    void Show(bool bShow);
    void SwitchHints(EGarageMinigame GameType, bool bMinigameStarted);
    void CustomEvent_0(const class AActor* TargetActor, const bool Fixed);
    void NotificationOfBroken(EGarageNotification TypeOfBrokenPart);
    void Create();
    void ExecuteUbergraph_Garage_HUD(int32 EntryPoint);
}; // Size: 0x408

#endif
