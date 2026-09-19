#ifndef UE4SS_SDK_WBP_NewItem_HPP
#define UE4SS_SDK_WBP_NewItem_HPP

class UWBP_NewItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0268 (size: 0x8)
    class UImage* Image_175;                                                          // 0x0270 (size: 0x8)
    class UImage* Image_463;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* IteamName_TXT;                                                  // 0x0280 (size: 0x8)
    class UImage* Item_ICON;                                                          // 0x0288 (size: 0x8)
    class UTexture2D* SetItemIcon;                                                    // 0x0290 (size: 0x8)
    FText SetItemName;                                                                // 0x0298 (size: 0x18)
    bool IsFromShop;                                                                  // 0x02B0 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_WBP_NewItem(int32 EntryPoint);
}; // Size: 0x2B1

#endif
