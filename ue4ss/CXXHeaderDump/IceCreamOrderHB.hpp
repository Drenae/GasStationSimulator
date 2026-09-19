#ifndef UE4SS_SDK_IceCreamOrderHB_HPP
#define UE4SS_SDK_IceCreamOrderHB_HPP

class UIceCreamOrderHB_C : public UUserWidget
{
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0260 (size: 0x8)
    class UHorizontalBox* HorizontalBox_Flavours;                                     // 0x0268 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0270 (size: 0x8)
    class UOverlay* Overlay_54;                                                       // 0x0278 (size: 0x8)

    void AddFlavour(class UTexture2D* Icon, FText Name);
}; // Size: 0x280

#endif
