#ifndef UE4SS_SDK_WBP_GradientColor_HPP
#define UE4SS_SDK_WBP_GradientColor_HPP

class UWBP_GradientColor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_32;                                                           // 0x0268 (size: 0x8)
    FLinearColor Color1;                                                              // 0x0270 (size: 0x10)
    FLinearColor Color2;                                                              // 0x0280 (size: 0x10)
    class UTexture* Image;                                                            // 0x0290 (size: 0x8)
    FVector2D Desired Size;                                                           // 0x0298 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_GradientColor(int32 EntryPoint);
}; // Size: 0x2A0

#endif
