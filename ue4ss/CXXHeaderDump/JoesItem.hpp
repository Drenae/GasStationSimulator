#ifndef UE4SS_SDK_JoesItem_HPP
#define UE4SS_SDK_JoesItem_HPP

class UJoesItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* BlueprintAnim;                                            // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_45;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_118;                                                          // 0x0288 (size: 0x8)
    class UImage* Image_cogency;                                                      // 0x0290 (size: 0x8)
    class UImage* Item_Image;                                                         // 0x0298 (size: 0x8)
    class UTextBlock* ItemAmount_TXT;                                                 // 0x02A0 (size: 0x8)
    class UTextBlock* Money_Amount;                                                   // 0x02A8 (size: 0x8)
    class UOverlay* Overlay_joe;                                                      // 0x02B0 (size: 0x8)
    class UTextBlock* popularity_amount;                                              // 0x02B8 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x02C0 (size: 0x8)
    class UVerticalBox* VerticalBox_money_popularity;                                 // 0x02C8 (size: 0x8)
    bool bIsJoesItem;                                                                 // 0x02D0 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_JoesItem(int32 EntryPoint);
}; // Size: 0x2D1

#endif
