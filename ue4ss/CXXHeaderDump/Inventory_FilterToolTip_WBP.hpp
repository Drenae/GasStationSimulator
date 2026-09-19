#ifndef UE4SS_SDK_Inventory_FilterToolTip_WBP_HPP
#define UE4SS_SDK_Inventory_FilterToolTip_WBP_HPP

class UInventory_FilterToolTip_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_253;                                                  // 0x0278 (size: 0x8)
    EItemTypeCategory FilterName;                                                     // 0x0280 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_Inventory_FilterToolTip_WBP(int32 EntryPoint);
}; // Size: 0x281

#endif
