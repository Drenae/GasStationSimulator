#ifndef UE4SS_SDK_FilterButton_HPP
#define UE4SS_SDK_FilterButton_HPP

class UFilterButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0270 (size: 0x8)
    class UButton* Button_43;                                                         // 0x0278 (size: 0x8)
    class UImage* Image_33;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_border;                                                       // 0x0288 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0290 (size: 0x8)
    bool IsChecked;                                                                   // 0x0298 (size: 0x1)
    FFilterButton_COnClickedFilter OnClickedFilter;                                   // 0x02A0 (size: 0x10)
    void OnClickedFilter(bool IsChecked, EItemTypeCategory TypeCategory);
    class UTexture2D* Icon;                                                           // 0x02B0 (size: 0x8)
    EItemTypeCategory Item Type Category;                                             // 0x02B8 (size: 0x1)
    bool bIsActive;                                                                   // 0x02B9 (size: 0x1)
    bool CreatedInMoreInfo;                                                           // 0x02BA (size: 0x1)

    class UWidget* GetToolTipWidget_0();
    void SetNormal();
    void SetActive();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__FilterButton_Button_43_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FilterButton_Button_43_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__FilterButton_Button_43_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void RemoteClick();
    void GamePadHover(bool Hover);
    void SetState(bool IsChecked);
    void ExecuteUbergraph_FilterButton(int32 EntryPoint);
    void OnClickedFilter__DelegateSignature(bool IsChecked, EItemTypeCategory TypeCategory);
}; // Size: 0x2BB

#endif
