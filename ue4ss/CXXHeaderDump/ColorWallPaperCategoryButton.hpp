#ifndef UE4SS_SDK_ColorWallPaperCategoryButton_HPP
#define UE4SS_SDK_ColorWallPaperCategoryButton_HPP

class UColorWallPaperCategoryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Backward;                                                 // 0x0268 (size: 0x8)
    class UWidgetAnimation* Forward;                                                  // 0x0270 (size: 0x8)
    class UDragoButton* ActionButton;                                                 // 0x0278 (size: 0x8)
    class UTextBlock* CategoryTitle_TXT;                                              // 0x0280 (size: 0x8)
    class UImage* Image_66;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_158;                                                          // 0x0290 (size: 0x8)
    FText Set_Name;                                                                   // 0x0298 (size: 0x18)
    FColorWallPaperCategoryButton_COnClickedButton OnClickedButton;                   // 0x02B0 (size: 0x10)
    void OnClickedButton(EDecalUnlockType UnlockType);
    bool isUnblocked;                                                                 // 0x02C0 (size: 0x1)
    EDecalUnlockType UnlockType;                                                      // 0x02C1 (size: 0x1)
    class UWBP_PanelColors_C* ParentREF;                                              // 0x02C8 (size: 0x8)
    bool Colors;                                                                      // 0x02D0 (size: 0x1)
    class UTexture2D* Icon;                                                           // 0x02D8 (size: 0x8)
    bool bIsActive;                                                                   // 0x02E0 (size: 0x1)
    bool isSubFilter;                                                                 // 0x02E1 (size: 0x1)
    TArray<UColorWallPaperCategoryButton_C*> ThisTypeButton;                          // 0x02E8 (size: 0x10)
    FString SubFilterTag;                                                             // 0x02F8 (size: 0x10)

    void SetNormal();
    void SetActive();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__ActionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ActionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void BndEvt__ColorWallPaperCategoryButton_ActionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ColorWallPaperCategoryButton(int32 EntryPoint);
    void OnClickedButton__DelegateSignature(EDecalUnlockType UnlockType);
}; // Size: 0x308

#endif
