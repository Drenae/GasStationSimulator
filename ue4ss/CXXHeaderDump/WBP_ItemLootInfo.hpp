#ifndef UE4SS_SDK_WBP_ItemLootInfo_HPP
#define UE4SS_SDK_WBP_ItemLootInfo_HPP

class UWBP_ItemLootInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0268 (size: 0x8)
    class UTextBlock* Amount;                                                         // 0x0270 (size: 0x8)
    class UImage* Item_ICON;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* ItemName;                                                       // 0x0280 (size: 0x8)
    class UImage* Purchased_IMG;                                                      // 0x0288 (size: 0x8)
    int32 Number;                                                                     // 0x0290 (size: 0x4)
    TSubclassOf<class AItem> ClassItem;                                               // 0x0298 (size: 0x8)
    bool ThiefWidget;                                                                 // 0x02A0 (size: 0x1)
    FSlotStruct NewVar_0;                                                             // 0x02A8 (size: 0x78)

    void StartAnimation();
    void Construct();
    void ExecuteUbergraph_WBP_ItemLootInfo(int32 EntryPoint);
}; // Size: 0x320

#endif
