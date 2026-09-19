#ifndef UE4SS_SDK_Circle_WBP_HPP
#define UE4SS_SDK_Circle_WBP_HPP

class UCircle_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0268 (size: 0x8)
    FVector2D Desired Size;                                                           // 0x0270 (size: 0x8)
    class UMaterialInstanceDynamic* Material;                                         // 0x0278 (size: 0x8)
    FLinearColor FillColor;                                                           // 0x0280 (size: 0x10)
    FLinearColor OutlineColor;                                                        // 0x0290 (size: 0x10)
    float FillOpacity;                                                                // 0x02A0 (size: 0x4)
    float OutlineOpacity;                                                             // 0x02A4 (size: 0x4)
    float StrokeThickness;                                                            // 0x02A8 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Circle_WBP(int32 EntryPoint);
}; // Size: 0x2AC

#endif
