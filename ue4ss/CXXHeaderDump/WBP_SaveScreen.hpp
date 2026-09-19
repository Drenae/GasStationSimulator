#ifndef UE4SS_SDK_WBP_SaveScreen_HPP
#define UE4SS_SDK_WBP_SaveScreen_HPP

class UWBP_SaveScreen_C : public UInteractableMenuWidgetBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0600 (size: 0x8)
    class UDragoButton* EmptySlot;                                                    // 0x0608 (size: 0x8)
    class USizeBox* EmptySlotBox;                                                     // 0x0610 (size: 0x8)
    class UTextBlock* EmptySlottext;                                                  // 0x0618 (size: 0x8)
    class UImage* Image_193;                                                          // 0x0620 (size: 0x8)
    class UImage* Image_501;                                                          // 0x0628 (size: 0x8)
    class UHorizontalBox* MapTypeBox;                                                 // 0x0630 (size: 0x8)
    class UOverlay* Overlay_2;                                                        // 0x0638 (size: 0x8)
    class UPC_PS4_bindings_C* PC_PS4_bindings_Save;                                   // 0x0640 (size: 0x8)
    class UTextBlock* SaveGame_TXT;                                                   // 0x0648 (size: 0x8)
    class UScrollBox* SaveScrollBox;                                                  // 0x0650 (size: 0x8)
    class UWBP_Map_SaveMenu_Buton_C* WBP_BaseSaveButton;                              // 0x0658 (size: 0x8)
    class UWBP_Map_SaveMenu_Buton_C* WBP_TidalSaveButton;                             // 0x0660 (size: 0x8)
    bool IsSaveFunction;                                                              // 0x0668 (size: 0x1)
    class UGSSGameInstance* GameInstanceREF;                                          // 0x0670 (size: 0x8)
    class UOptionsMenuContainerWidgetBP_C* OptionsMenuContainerWidget;                // 0x0678 (size: 0x8)
    class UCanvasPanel* MenuCanvasPanel;                                              // 0x0680 (size: 0x8)
    class UIngameMenuContainerWidgetBP_C* IngameMenuWidget;                           // 0x0688 (size: 0x8)
    TArray<UWBP_SaveSlot_C*> ButtonArray;                                             // 0x0690 (size: 0x10)
    int32 selectRow;                                                                  // 0x06A0 (size: 0x4)
    FString SelectedMap;                                                              // 0x06A8 (size: 0x10)
    FString CurrentMap;                                                               // 0x06B8 (size: 0x10)
    FString LocalMap;                                                                 // 0x06C8 (size: 0x10)
    bool IsCategoryClicked;                                                           // 0x06D8 (size: 0x1)
    int32 GamePadCurrentMap;                                                          // 0x06DC (size: 0x4)

    void SetupMapTabs(class UWBP_Map_SaveMenu_Buton_C* SaveMapButton, int32 Index);
    void TryToSetCurrentMapTab();
    void HooverEmptySlot(bool IsHovered);
    void Press_X();
    void Press_A();
    void SetHovered(bool Condition, bool JustHover);
    void Decrement Row(bool& IsChanged);
    void IncrementRow(bool& IsChanged);
    void CreateSaveSlots(class UGSSGameInstance* self2);
    void Refresh();
    void Destruct();
    void InitSaveLoad(bool Save);
    void BndEvt__EmptySlot_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void OnPressedUp();
    void OnPressedDown();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnNavigationEnter(class UInteractableMenuWidgetBP_C* NavigateFromMenu, bool bIsGamepadBeingUsed);
    void OnNavigationExit(class UInteractableMenuWidgetBP_C* NavigateToMenu, class UInteractableMenuWidgetBP_C* NavigateFromMenu);
    void OnButtonClicked(FString MapName, EDLCName DLCName);
    void BindMapButtons();
    void SetDisabled();
    void OnPressedLeft();
    void OnPressedRight();
    void OnPressedExtra();
    void OnPressedSelect();
    void OnChangeInputDeviceMenuUI(bool bIsGamepadBeingUsed);
    void SpawnPopup(class UUserWidget* SaveSlot, bool DeleteConfirmation);
    void SetCurrentSavesTab_Base();
    void SetCurrentSavesTab_Tidal();
    void ExecuteUbergraph_WBP_SaveScreen(int32 EntryPoint);
}; // Size: 0x6E0

#endif
