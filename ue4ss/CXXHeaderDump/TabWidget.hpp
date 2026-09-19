#ifndef UE4SS_SDK_TabWidget_HPP
#define UE4SS_SDK_TabWidget_HPP

class UTabWidget_C : public UGSSInnerWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UImage* Image_773;                                                          // 0x0290 (size: 0x8)
    class UOverlay* Tab_Info;                                                         // 0x0298 (size: 0x8)
    class UWBP_KeyBindedAction_C* WBP_KeyBindedAction;                                // 0x02A0 (size: 0x8)
    class AActor* ActorRef;                                                           // 0x02A8 (size: 0x8)

    void Construct();
    void AtChangedKey(const FName ActionName);
    void Destruct();
    void AtKeybindingsReset();
    void HideUnHide();
    void OnNewUnlockableUIStateSet(FUnlockableUIState NewUnlockableUIState);
    void AtLoadWithGamePad();
    void ExecuteUbergraph_TabWidget(int32 EntryPoint);
}; // Size: 0x2B0

#endif
