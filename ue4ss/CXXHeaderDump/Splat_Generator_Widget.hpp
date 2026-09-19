#ifndef UE4SS_SDK_Splat_Generator_Widget_HPP
#define UE4SS_SDK_Splat_Generator_Widget_HPP

class USplat_Generator_Widget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FallBackAnimation;                                        // 0x0268 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0270 (size: 0x8)
    class UImage* Splat_IMG;                                                          // 0x0278 (size: 0x8)
    FSplat_Generator_Widget_COnDestroyed OnDestroyed;                                 // 0x0280 (size: 0x10)
    void OnDestroyed();
    FLinearColor Set_Colour;                                                          // 0x0290 (size: 0x10)
    TArray<UTexture2D*> Set_Brush_Array;                                              // 0x02A0 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_Splat_Generator_Widget(int32 EntryPoint);
    void OnDestroyed__DelegateSignature();
}; // Size: 0x2B0

#endif
