#ifndef UE4SS_SDK_AirportManager_HPP
#define UE4SS_SDK_AirportManager_HPP

class UAirportManager_C : public UGSSBaseWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UImage* BG_Color_Img;                                                       // 0x0288 (size: 0x8)
    class UCloseButton_C* CloseButton;                                                // 0x0290 (size: 0x8)
    class UTextBlock* CurrentSuccessfulTradesNumber_TXT;                              // 0x0298 (size: 0x8)
    class UTextBlock* CurrentSuccessfulTradesNumber_TXT_1;                            // 0x02A0 (size: 0x8)
    class UHorizontalBox* HB_TierLess5;                                               // 0x02A8 (size: 0x8)
    class UHorizontalBox* HB_TierLvl5;                                                // 0x02B0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_508;                                          // 0x02B8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_TierVSKILL_TEXT;                              // 0x02C0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_67;                                                           // 0x02D0 (size: 0x8)
    class UImage* Image_113;                                                          // 0x02D8 (size: 0x8)
    class UImage* Image_140;                                                          // 0x02E0 (size: 0x8)
    class UImage* Image_152;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_184;                                                          // 0x02F0 (size: 0x8)
    class UJoesItem_C* JoesItem_1;                                                    // 0x02F8 (size: 0x8)
    class UTextBlock* NumberOfSuccessfulTradesNeeded;                                 // 0x0300 (size: 0x8)
    class UJoesItem_C* PlayersItem;                                                   // 0x0308 (size: 0x8)
    class UTextBlock* SkillCooldownReduceValue_TXT;                                   // 0x0310 (size: 0x8)
    class USoundOnOff_button_C* SoundOnOff_button_C_6;                                // 0x0318 (size: 0x8)
    class UTextBlock* TextBlock_owned;                                                // 0x0320 (size: 0x8)
    class UTextBlock* TierLevelRomanNumber_TXT;                                       // 0x0328 (size: 0x8)
    class UTextBlock* TradingSkillsCooldownReducedBy_TXT;                             // 0x0330 (size: 0x8)
    class UVerticalBox* VB_Airstrip1;                                                 // 0x0338 (size: 0x8)
    class UVerticalBox* VB_Airstrip2;                                                 // 0x0340 (size: 0x8)
    class UWBP_DepartureScreen2AP_C* WBP_DepartureScreen2AP;                          // 0x0348 (size: 0x8)
    class UWBP_DepartureScreenAP_C* WBP_DepartureScreenAP_1;                          // 0x0350 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_TopButton;                                      // 0x0358 (size: 0x8)
    bool bIsOpened;                                                                   // 0x0360 (size: 0x1)
    class UTexture2D* JoesItemIcon;                                                   // 0x0368 (size: 0x8)
    FText JoesItemName;                                                               // 0x0370 (size: 0x18)
    class ABP_CommunicationDevice_C* CommunicationDevice;                             // 0x0388 (size: 0x8)
    EInteractionOutput Branches;                                                      // 0x0390 (size: 0x1)
    int32 GamePadCurrentElement;                                                      // 0x0394 (size: 0x4)
    int32 GamePadCurrentSegment;                                                      // 0x0398 (size: 0x4)
    bool GamePadIsTherePopup;                                                         // 0x039C (size: 0x1)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    void GamePadIsPopUp(bool& IsTherePopup);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetBlueprintsAmount();
    void TierLevelCheckSet();
    void OnLoaded_05ADAB264A225C05F4F80B878413E917(class UObject* Loaded);
    void BndEvt__AirportManager_CloseButton_K2Node_ComponentBoundEvent_3_ClickButton__DelegateSignature();
    void Construct();
    void CustomEscape();
    void CustomEvent_0();
    void Destruct();
    void OnDeviceChanged(bool bNewGamepadMode);
    void BindOnDeviceChanged(bool isConstruct);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_AirportManager(int32 EntryPoint);
}; // Size: 0x39D

#endif
