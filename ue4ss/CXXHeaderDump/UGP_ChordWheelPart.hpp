#ifndef UE4SS_SDK_UGP_ChordWheelPart_HPP
#define UE4SS_SDK_UGP_ChordWheelPart_HPP

class UUGP_ChordWheelPart_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* ChordText;                                                      // 0x0268 (size: 0x8)
    class UImage* Image_part;                                                         // 0x0270 (size: 0x8)
    class UImage* inside;                                                             // 0x0278 (size: 0x8)
    class UImage* outside;                                                            // 0x0280 (size: 0x8)
    class UScaleBox* ScaleBox;                                                        // 0x0288 (size: 0x8)
    FName ChordName;                                                                  // 0x0290 (size: 0x8)
    FLinearColor InsideColor;                                                         // 0x0298 (size: 0x10)
    FLinearColor OutsideColor;                                                        // 0x02A8 (size: 0x10)
    FLinearColor ChordTextColor;                                                      // 0x02B8 (size: 0x10)

    FText ChordNameToTextBind();
    void ResetColorsAndOpacitices();
    void SetColorsAndOpacities(FLinearColor Inside Color, FLinearColor OutsideColor, FLinearColor ChordTextColor, bool Called At Initialize?);
    void OnHoverVisualEffect(float ScaleUpPercentage, FLinearColor InsideColor, FLinearColor OutsideColor, FLinearColor TextColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UGP_ChordWheelPart(int32 EntryPoint);
}; // Size: 0x2C8

#endif
