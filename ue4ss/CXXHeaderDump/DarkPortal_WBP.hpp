#ifndef UE4SS_SDK_DarkPortal_WBP_HPP
#define UE4SS_SDK_DarkPortal_WBP_HPP

class UDarkPortal_WBP_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0288 (size: 0x8)
    class UWidgetAnimation* HoverPlus;                                                // 0x0290 (size: 0x8)
    class UWidgetAnimation* HoverMinus;                                               // 0x0298 (size: 0x8)
    class UWidgetAnimation* ShowAnim;                                                 // 0x02A0 (size: 0x8)
    class Uneumorph_button_C* CancelButton_1;                                         // 0x02A8 (size: 0x8)
    class Uneumorph_button_C* ContinueJourney_button;                                 // 0x02B0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_63;                                           // 0x02B8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_NewSave;                                      // 0x02C0 (size: 0x8)
    class UImage* Image_193;                                                          // 0x02C8 (size: 0x8)
    class UOverlay* Overlay_SavedGames;                                               // 0x02D0 (size: 0x8)
    class UScrollBox* SaveScrollBox;                                                  // 0x02D8 (size: 0x8)
    class Uneumorph_button_C* SelectSave_button;                                      // 0x02E0 (size: 0x8)
    class USizeBox* SizeBox_Options;                                                  // 0x02E8 (size: 0x8)
    class Uneumorph_button_C* StartNewJourney_button;                                 // 0x02F0 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_Fee;                                                  // 0x0300 (size: 0x8)
    class UVerticalBox* VerticalBox_Fee;                                              // 0x0308 (size: 0x8)
    class UVerticalBox* VerticalBox_Selector;                                         // 0x0310 (size: 0x8)
    class UWBP_Map_SaveMenu_Buton_C* WBP_BaseButton;                                  // 0x0318 (size: 0x8)
    class UWBP_Map_SaveMenu_Buton_C* WBP_TidalWaveButton;                             // 0x0320 (size: 0x8)
    class ADarkPortal_BP_C* Dark PortalActor;                                         // 0x0328 (size: 0x8)
    TArray<UWBP_SaveSlot_C*> ButtonArray;                                             // 0x0330 (size: 0x10)
    bool IsCategoryClicked;                                                           // 0x0340 (size: 0x1)
    FString CurrentMap;                                                               // 0x0348 (size: 0x10)
    FString LocalMap;                                                                 // 0x0358 (size: 0x10)
    TArray<Uneumorph_button_C*> GamePadActiveButtonsList;                             // 0x0368 (size: 0x10)
    int32 GamePadCurrentButton;                                                       // 0x0378 (size: 0x4)
    int32 GamePadCurrentSave;                                                         // 0x037C (size: 0x4)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetupButtonsForDlc(EDLCName DLC);
    void SetDisabled();
    void CreateSaveSlots();
    void Setup(class ADarkPortal_BP_C* DarkPortal);
    void BndEvt__DarkPortal_WBP_CancelButton_1_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
    void BndEvt__DarkPortal_WBP_ContinueJourney_button_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature();
    void BndEvt__DarkPortal_WBP_SelectSave_button_K2Node_ComponentBoundEvent_2_ButtonClicked__DelegateSignature();
    void BndEvt__DarkPortal_WBP_StartNewJourney_button_K2Node_ComponentBoundEvent_3_ButtonClicked__DelegateSignature();
    void BndEvt__DarkPortal_WBP_CancelButton_1_K2Node_ComponentBoundEvent_4_ButtonHover__DelegateSignature();
    void BndEvt__DarkPortal_WBP_ContinueJourney_button_K2Node_ComponentBoundEvent_5_ButtonHover__DelegateSignature();
    void BndEvt__DarkPortal_WBP_SelectSave_button_K2Node_ComponentBoundEvent_6_ButtonHover__DelegateSignature();
    void BndEvt__DarkPortal_WBP_StartNewJourney_button_K2Node_ComponentBoundEvent_7_ButtonHover__DelegateSignature();
    void Construct();
    void CloseSaveScreen();
    void Destruct();
    void OnButtonClicked(FString MapName, EDLCName DLCName);
    void BindMapButtons();
    void GamePadClickCancel();
    void GamePadCloseSaveScreen();
    void ExecuteUbergraph_DarkPortal_WBP(int32 EntryPoint);
}; // Size: 0x380

#endif
