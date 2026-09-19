#ifndef UE4SS_SDK_DLC_Widget_HPP
#define UE4SS_SDK_DLC_Widget_HPP

class UDLC_Widget_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UNavigationKeyButton_C* BackButton;                                         // 0x0608 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0610 (size: 0x8)
    class UImage* Image_24;                                                           // 0x0618 (size: 0x8)
    class UImage* Image_71;                                                           // 0x0620 (size: 0x8)
    class UWrapBox* WrapBox_62;                                                       // 0x0628 (size: 0x8)
    FString ChangelogTag;                                                             // 0x0630 (size: 0x10)
    FString ChangelogFile;                                                            // 0x0640 (size: 0x10)
    TArray<FDLCNews> ChangelogDLCs;                                                   // 0x0650 (size: 0x10)
    TArray<FString> CreatedDLCs;                                                      // 0x0660 (size: 0x10)
    int32 GamePadWidgetIndex;                                                         // 0x0670 (size: 0x4)

    void SetReferences();
    void Construct();
    void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnPressedBack();
    void DownloadFiles();
    void OnLogin(bool bWasSuccessful, FString UserId);
    void OnDownloadCompleted(bool bWasSuccessfull, FString ErrorString, FString TagName);
    void SetupDLCNews();
    void ChangelogRead(bool bWasSuccesfull, FString Filename, const TArray<uint8>& FileContent);
    void FAKEADD();
    void OnPressedDown();
    void OnPressedUp();
    void OnPressedLeft();
    void OnPressedRight();
    void OnPressedSelect();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_DLC_Widget(int32 EntryPoint);
}; // Size: 0x674

#endif
