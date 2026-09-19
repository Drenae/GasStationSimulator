#ifndef UE4SS_SDK_MiniGames_Tutorial_HPP
#define UE4SS_SDK_MiniGames_Tutorial_HPP

class UMiniGames_Tutorial_C : public UMinigameTutorialWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UWidgetAnimation* NextPageAnimation;                                        // 0x02D0 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x02D8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x02E0 (size: 0x8)
    class UWBP_KeyBindedAction_C* GetKaysForTutorial;                                 // 0x02E8 (size: 0x8)
    class UOverlay* HitBlockOverlay;                                                  // 0x02F0 (size: 0x8)
    class UImage* Image_908;                                                          // 0x02F8 (size: 0x8)
    class UScrollBox* TextScrollBox;                                                  // 0x0300 (size: 0x8)
    class UTextBlock* TutorailNextPageText;                                           // 0x0308 (size: 0x8)
    class UOverlay* Tutorial;                                                         // 0x0310 (size: 0x8)
    class UWBP_PressForTutorial_C* WBP_PressForTutorial;                              // 0x0318 (size: 0x8)
    class UWBP_PressInTutorial_C* WBP_PressInTutorial;                                // 0x0320 (size: 0x8)
    bool ManyPages;                                                                   // 0x0328 (size: 0x1)
    FText ActionButtonOne;                                                            // 0x0330 (size: 0x18)
    class AActor* Owner;                                                              // 0x0348 (size: 0x8)
    float ScrollingSpeed;                                                             // 0x0350 (size: 0x4)
    bool TutorialOpened;                                                              // 0x0354 (size: 0x1)
    FText CircularMenuButton;                                                         // 0x0358 (size: 0x18)
    class AGSSPlayerCharacter* PlayerCharREF;                                         // 0x0370 (size: 0x8)
    bool NotGarageTutorials;                                                          // 0x0378 (size: 0x1)
    bool CreateFromForce;                                                             // 0x0379 (size: 0x1)
    uint8 MinigameType;                                                               // 0x037A (size: 0x1)
    bool FillInfoOnConstruct;                                                         // 0x037B (size: 0x1)
    FVector2D PressTooltipAnchors;                                                    // 0x037C (size: 0x8)
    bool IsPlayerOverlayTutorial;                                                     // 0x0384 (size: 0x1)
    bool HidePressForTutorial;                                                        // 0x0385 (size: 0x1)
    bool ShouldRemoveAfterAnimation;                                                  // 0x0386 (size: 0x1)
    FMargin OverlayOffset;                                                            // 0x0388 (size: 0x10)
    ECharacterState EnteringCharacterMinigameState;                                   // 0x0398 (size: 0x1)
    class UUserWidget* WidgetToSetFocuseBackTo;                                       // 0x03A0 (size: 0x8)
    bool UseCustomPressForTutorialPosition;                                           // 0x03A8 (size: 0x1)
    FVector2D CustomPressForTutorialPosition;                                         // 0x03AC (size: 0x8)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void IsAnotherTutorialOpened(bool& IsOpened);
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDestroyed_Event_0(class AActor* DestroyedActor);
    void ScrollOffsetDown();
    void ScrollUp();
    void UpdateFromGarage();
    void Destruct();
    void Construct();
    void CreateTutorial();
    void PreConstruct(bool IsDesignTime);
    void CloseTutorialIfOpened();
    void ForceTutorialOpened(bool Force);
    void SetIsPlayerOverlayTutorial(bool NewValue);
    void OnConstructAnimationFinished();
    void RemoveAfterAnimation();
    void AllowTutorialCreation();
    void OnTutorialClosed();
    void OnTutorialShown();
    void AddScrollOffset(float OffsettoAd);
    void ExecuteUbergraph_MiniGames_Tutorial(int32 EntryPoint);
}; // Size: 0x3B4

#endif
