#ifndef UE4SS_SDK_Garage_Minigame_HPP
#define UE4SS_SDK_Garage_Minigame_HPP

class UGarage_Minigame_C : public UGSSWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0270 (size: 0x8)
    class UVerticalBox* ControllsHorizontal;                                          // 0x0278 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_117;                                                          // 0x0290 (size: 0x8)
    class UImage* Image_163;                                                          // 0x0298 (size: 0x8)
    class UInvalidationBox* InvalidationBox_0;                                        // 0x02A0 (size: 0x8)
    class UWBP_KeyBindedAction_C* Jump_Interaction;                                   // 0x02A8 (size: 0x8)
    class UMiniGames_Tutorial_C* MiniGames_Tutorial;                                  // 0x02B0 (size: 0x8)
    class UWBP_KeyBindedAction_C* MOVE_FORWARD;                                       // 0x02B8 (size: 0x8)
    class UTextBlock* RepairedNumber_TXT;                                             // 0x02C0 (size: 0x8)
    class UTextBlock* ToRepair_TXT;                                                   // 0x02C8 (size: 0x8)
    class AAICharacterBase* AICharacter;                                              // 0x02D0 (size: 0x8)
    bool Active;                                                                      // 0x02D8 (size: 0x1)
    float Time;                                                                       // 0x02DC (size: 0x4)
    int32 NewVar_1;                                                                   // 0x02E0 (size: 0x4)
    int32 NewVar_0;                                                                   // 0x02E4 (size: 0x4)
    class UUserWidget* InfoWidget;                                                    // 0x02E8 (size: 0x8)
    class AGSSPlayerCharacter* PlayerCharacter;                                       // 0x02F0 (size: 0x8)

    void Construct();
    void ActiveMinigameGarage(bool NewParam);
    void CustomEvent_1(const class AActor* TargetActor, const bool Fixed);
    void ExecuteUbergraph_Garage_Minigame(int32 EntryPoint);
}; // Size: 0x2F8

#endif
