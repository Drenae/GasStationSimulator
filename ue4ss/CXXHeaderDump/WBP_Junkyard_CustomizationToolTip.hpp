#ifndef UE4SS_SDK_WBP_Junkyard_CustomizationToolTip_HPP
#define UE4SS_SDK_WBP_Junkyard_CustomizationToolTip_HPP

class UWBP_Junkyard_CustomizationToolTip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_253;                                                  // 0x0278 (size: 0x8)
    FText TextOnTooltip;                                                              // 0x0280 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_WBP_Junkyard_CustomizationToolTip(int32 EntryPoint);
}; // Size: 0x298

#endif
