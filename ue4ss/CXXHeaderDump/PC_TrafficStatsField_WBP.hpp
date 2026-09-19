#ifndef UE4SS_SDK_PC_TrafficStatsField_WBP_HPP
#define UE4SS_SDK_PC_TrafficStatsField_WBP_HPP

class UPC_TrafficStatsField_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetSwitcher* ImactIconSwitcher;                                         // 0x0268 (size: 0x8)
    class UTextBlock* Label;                                                          // 0x0270 (size: 0x8)
    class UImage* NegativeIcon;                                                       // 0x0278 (size: 0x8)
    class UImage* PositiveIcon;                                                       // 0x0280 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0288 (size: 0x8)

    void SetImpactImage(bool ImpactPositive);
    void SetMainLabelText(FText InText);
    void Construct();
    void ExecuteUbergraph_PC_TrafficStatsField_WBP(int32 EntryPoint);
}; // Size: 0x290

#endif
