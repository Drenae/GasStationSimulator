#ifndef UE4SS_SDK_WBP_DepartureItemDisplay_HPP
#define UE4SS_SDK_WBP_DepartureItemDisplay_HPP

class UWBP_DepartureItemDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* OnHovAll;                                                 // 0x0268 (size: 0x8)
    class UWidgetAnimation* OnHov10;                                                  // 0x0270 (size: 0x8)
    class UWidgetAnimation* OnHov5;                                                   // 0x0278 (size: 0x8)
    class UImage* Frame_BG_IMG;                                                       // 0x0280 (size: 0x8)
    class UImage* GraphicPillColor_IMG;                                               // 0x0288 (size: 0x8)
    class UImage* Hovering_IMG;                                                       // 0x0290 (size: 0x8)
    class UImage* Item_ICON;                                                          // 0x0298 (size: 0x8)
    class UTextBlock* NAME_TXT;                                                       // 0x02A0 (size: 0x8)
    class UTextBlock* PilotOrPlayer_TXT;                                              // 0x02A8 (size: 0x8)
    class UTextBlock* Place5_TXT_1;                                                   // 0x02B0 (size: 0x8)
    class UTextBlock* upgrade_text;                                                   // 0x02B8 (size: 0x8)
    TSubclassOf<class AItem> ItemClass;                                               // 0x02C0 (size: 0x8)
    int32 AmountItemToPut;                                                            // 0x02C8 (size: 0x4)
    class UUserWidget* UserWidget;                                                    // 0x02D0 (size: 0x8)
    class UWidgetAnimation* OnHover;                                                  // 0x02D8 (size: 0x8)
    bool IsUnHover;                                                                   // 0x02E0 (size: 0x1)
    TArray<UDragoButton*> ButtonArray;                                                // 0x02E8 (size: 0x10)
    bool IsPlayerItems;                                                               // 0x02F8 (size: 0x1)
    TMap<int32, int32> ButtonMap;                                                     // 0x0300 (size: 0x50)
    int32 selectRowButton;                                                            // 0x0350 (size: 0x4)
    int32 KeySelectedButton;                                                          // 0x0354 (size: 0x4)
    bool ItemVisible;                                                                 // 0x0358 (size: 0x1)
    FGeneratedLootInfo Item;                                                          // 0x0360 (size: 0x80)

    void SetHovered(bool Condition);
    void GetActualIndex(int32& newIndex);
    void decrementsKey(bool& IsChanged);
    void incrementsKey(bool& IsChanged);
    void Decrement Row(bool& IsChanged);
    void IncrementRow(bool& IsChanged);
    void Click();
    void On Hover(bool IsHovered);
    void RefreshSlot();
    void Construct();
    void ExecuteUbergraph_WBP_DepartureItemDisplay(int32 EntryPoint);
}; // Size: 0x3E0

#endif
