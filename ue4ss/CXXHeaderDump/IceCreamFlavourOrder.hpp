#ifndef UE4SS_SDK_IceCreamFlavourOrder_HPP
#define UE4SS_SDK_IceCreamFlavourOrder_HPP

class UIceCreamFlavourOrder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0270 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0278 (size: 0x8)
    FText Name;                                                                       // 0x0280 (size: 0x18)

    void Construct();
    void ExecuteUbergraph_IceCreamFlavourOrder(int32 EntryPoint);
}; // Size: 0x298

#endif
