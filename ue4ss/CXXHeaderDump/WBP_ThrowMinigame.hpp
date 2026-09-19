#ifndef UE4SS_SDK_WBP_ThrowMinigame_HPP
#define UE4SS_SDK_WBP_ThrowMinigame_HPP

class UWBP_ThrowMinigame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* Canvas_Panel_Area;                                            // 0x0268 (size: 0x8)
    class UTextBlock* ConnectingTxt_1;                                                // 0x0270 (size: 0x8)
    class USizeBox* GamePadIcon;                                                      // 0x0278 (size: 0x8)
    class UImage* Icon_IMG;                                                           // 0x0280 (size: 0x8)
    class UImage* Icon_IMG_1;                                                         // 0x0288 (size: 0x8)
    class UImage* Image;                                                              // 0x0290 (size: 0x8)
    class UScaleBox* Interaction;                                                     // 0x0298 (size: 0x8)
    class USizeBox* MouseIcon_Sizer;                                                  // 0x02A0 (size: 0x8)
    class UTextBlock* PREFIX_TXT_1;                                                   // 0x02A8 (size: 0x8)
    class UOverlay* ScoresOverlay;                                                    // 0x02B0 (size: 0x8)
    class UTextBlock* SOFIX_TXT_1;                                                    // 0x02B8 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x02C0 (size: 0x8)
    bool IsActive;                                                                    // 0x02C8 (size: 0x1)
    class AActor* SpawnedActor;                                                       // 0x02D0 (size: 0x8)
    float Time;                                                                       // 0x02D8 (size: 0x4)
    bool CanCreate;                                                                   // 0x02DC (size: 0x1)
    TEnumAsByte<E_ThrowType::Type> ThrowType;                                         // 0x02DD (size: 0x1)
    bool NewRecord;                                                                   // 0x02DE (size: 0x1)
    class AActor* ThrowedActor;                                                       // 0x02E0 (size: 0x8)
    class UThrowMiniGame_Score_C* ThrowingScores;                                     // 0x02E8 (size: 0x8)

    void Construct();
    void PlayerSpawnedActor(const class AActor* Actor);
    void CustomEvent_1(const bool IsNewRecord, const class AActor* ThrowedActor);
    void UpdateManager(TEnumAsByte<E_ThrowType::Type> EThrow, bool IsActive, float Time, bool NewRecord, class AActor* ThrowedActor);
    void SetNewThrowAction(const FName ActionName);
    void Destruct();
    void KeybindingsReset();
    void CustomEvent_0(const class AActor* Actor);
    void CustomEvent_2(const bool IsNewRecord, const class AActor* ThrowedActor);
    void UpdateHandleActor(const FTimeStruct UpdatedTime);
    void HideInteraction();
    void ExecuteUbergraph_WBP_ThrowMinigame(int32 EntryPoint);
}; // Size: 0x2F0

#endif
