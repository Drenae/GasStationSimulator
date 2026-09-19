#ifndef UE4SS_SDK_WBP_FactorRow_HPP
#define UE4SS_SDK_WBP_FactorRow_HPP

class UWBP_FactorRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0268 (size: 0x8)
    class UTextBlock* FactorInput;                                                    // 0x0270 (size: 0x8)
    class UTextBlock* FactorName;                                                     // 0x0278 (size: 0x8)
    class UBorder* GradientLeft;                                                      // 0x0280 (size: 0x8)
    class UBorder* GradientRight;                                                     // 0x0288 (size: 0x8)
    class UWidgetSwitcher* ImactIconSwitcher;                                         // 0x0290 (size: 0x8)
    class UImage* Image_249;                                                          // 0x0298 (size: 0x8)
    class UButton* MainButton;                                                        // 0x02A0 (size: 0x8)
    class UImage* NegativeIcon;                                                       // 0x02A8 (size: 0x8)
    class UImage* NeutralIcon;                                                        // 0x02B0 (size: 0x8)
    class UImage* PositiveIcon;                                                       // 0x02B8 (size: 0x8)
    class USizeBox* RowSize;                                                          // 0x02C0 (size: 0x8)
    class UImage* UpcomingIcon_1;                                                     // 0x02C8 (size: 0x8)
    FVector2D Size;                                                                   // 0x02D0 (size: 0x8)
    FText InFactorName;                                                               // 0x02D8 (size: 0x18)
    class UTexture* FactorImage;                                                      // 0x02F0 (size: 0x8)
    FWBP_FactorRow_COnHoover OnHoover;                                                // 0x02F8 (size: 0x10)
    void OnHoover(class UWBP_FactorRow_C* FactorRow, bool Hovered);
    TEnumAsByte<E_TrafficStat::Type> TrafficStat;                                     // 0x0308 (size: 0x1)
    int32 LastImpact;                                                                 // 0x030C (size: 0x4)
    bool Hovered;                                                                     // 0x0310 (size: 0x1)
    class UTexture* UpcomingEventTexture;                                             // 0x0318 (size: 0x8)

    void GetFactorImage(class UTexture*& FactorImage);
    void GetFactorName(FText& FactorName, bool& ValidName);
    void GetDescription(FText& Description);
    void GetCurrentImpact(int32& Impact);
    void PreConstruct(bool IsDesignTime);
    void ChangeImpact(int32 TrafficImpact);
    void BndEvt__WBP_FactorRow_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_FactorRow_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Hoover();
    void Unhoover();
    void Refresh();
    void ExecuteUbergraph_WBP_FactorRow(int32 EntryPoint);
    void OnHoover__DelegateSignature(class UWBP_FactorRow_C* FactorRow, bool Hovered);
}; // Size: 0x320

#endif
