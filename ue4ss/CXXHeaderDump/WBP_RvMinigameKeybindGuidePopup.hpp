#ifndef UE4SS_SDK_WBP_RvMinigameKeybindGuidePopup_HPP
#define UE4SS_SDK_WBP_RvMinigameKeybindGuidePopup_HPP

class UWBP_RvMinigameKeybindGuidePopup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Show;                                                     // 0x0268 (size: 0x8)
    class UWBP_KeyBindedAction_C* MOVE_RIGHT;                                         // 0x0270 (size: 0x8)
    class UTextBlock* Press_TXT;                                                      // 0x0278 (size: 0x8)
    class UTextBlock* SofixOfAction_TXT;                                              // 0x0280 (size: 0x8)
    FName ActionMappingToDisplay;                                                     // 0x0288 (size: 0x8)
    FText ActionSofixText;                                                            // 0x0290 (size: 0x18)
    FText ActionPrefixText;                                                           // 0x02A8 (size: 0x18)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetUpHintInformation();
    void KeyBindReset();
    void KeyBindChange(const FName ActionName);
    void Destruct();
    void Show Pop Up();
    void Hide Pop Up();
    void ExecuteUbergraph_WBP_RvMinigameKeybindGuidePopup(int32 EntryPoint);
}; // Size: 0x2C0

#endif
