#ifndef UE4SS_SDK_WBP_CardLootInfo_HPP
#define UE4SS_SDK_WBP_CardLootInfo_HPP

class UWBP_CardLootInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0268 (size: 0x8)
    class UTextBlock* Amount;                                                         // 0x0270 (size: 0x8)
    class UImage* Item_ICON;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* ItemName;                                                       // 0x0280 (size: 0x8)
    class UImage* Purchased_IMG;                                                      // 0x0288 (size: 0x8)
    int32 Number;                                                                     // 0x0290 (size: 0x4)
    FCollectibleCardStruct ClassItem;                                                 // 0x0298 (size: 0x98)
    bool ThiefWidget;                                                                 // 0x0330 (size: 0x1)

    void StartAnimation();
    void Construct();
    void ExecuteUbergraph_WBP_CardLootInfo(int32 EntryPoint);
}; // Size: 0x331

#endif
