#ifndef UE4SS_SDK_WBP_RoundedCornersRectangle_HPP
#define UE4SS_SDK_WBP_RoundedCornersRectangle_HPP

class UWBP_RoundedCornersRectangle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_293;                                                          // 0x0268 (size: 0x8)
    float CornerRadius;                                                               // 0x0270 (size: 0x4)
    float StrokeThickness;                                                            // 0x0274 (size: 0x4)
    FLinearColor FillColor;                                                           // 0x0278 (size: 0x10)
    FLinearColor StrokeColor;                                                         // 0x0288 (size: 0x10)
    FVector2D Desired Size;                                                           // 0x0298 (size: 0x8)
    FLinearColor StrokeColor2;                                                        // 0x02A0 (size: 0x10)
    FLinearColor FillColor2;                                                          // 0x02B0 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_RoundedCornersRectangle(int32 EntryPoint);
}; // Size: 0x2C0

#endif
