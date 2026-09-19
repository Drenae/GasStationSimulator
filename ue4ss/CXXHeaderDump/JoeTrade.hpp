#ifndef UE4SS_SDK_JoeTrade_HPP
#define UE4SS_SDK_JoeTrade_HPP

class UJoeTrade_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* cancel_hover;                                             // 0x0268 (size: 0x8)
    class UWidgetAnimation* trade_hover;                                              // 0x0270 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0278 (size: 0x8)
    class UImage* Cancel_ICON;                                                        // 0x0280 (size: 0x8)
    class UOverlay* Cancel_Overlay;                                                   // 0x0288 (size: 0x8)
    class UCloseButton_C* CloseButton;                                                // 0x0290 (size: 0x8)
    class UImage* Confirm_ICON;                                                       // 0x0298 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x02A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_buttons;                                      // 0x02A8 (size: 0x8)
    class UImage* Image;                                                              // 0x02B0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02C0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02C8 (size: 0x8)
    class UImage* Image_184;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_279;                                                          // 0x02D8 (size: 0x8)
    class UJoesItem_C* JoesItem;                                                      // 0x02E0 (size: 0x8)
    class UJoesItem_C* JoesItem_1;                                                    // 0x02E8 (size: 0x8)
    class UDragoButton* No;                                                           // 0x02F0 (size: 0x8)
    class UOverlay* Overlay_blocker;                                                  // 0x02F8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Cancel;                                         // 0x0300 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm;                                        // 0x0308 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x0310 (size: 0x8)
    class UTexture2D* JoesItemIcon;                                                   // 0x0318 (size: 0x8)
    FText JoesItemName;                                                               // 0x0320 (size: 0x18)
    bool IsPendingRemove;                                                             // 0x0338 (size: 0x1)

    void OnGamepadConnected(bool IsGamepadConnected);
    void SetInputs();
    void Finished_27A6D412492A35BF01C9B58176AB4D3A();
    void Finished_2DF5A08D4550E89EDBB56FA33C8B50B2();
    void OnLoaded_E8BE1A0843AC2B036B8B9F9DE17C9871(class UObject* Loaded);
    void Construct();
    void BndEvt__JoeTrade_No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__JoeTrade_Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__JoeTrade_Yes_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__JoeTrade_Yes_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__JoeTrade_No_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__JoeTrade_No_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void OnEscape();
    void BndEvt__JoeTrade_CloseButton_K2Node_ComponentBoundEvent_6_ClickButton__DelegateSignature();
    void ClickYes();
    void ExecuteUbergraph_JoeTrade(int32 EntryPoint);
}; // Size: 0x339

#endif
