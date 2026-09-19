#ifndef UE4SS_SDK_WBP_ThiefLoot_HPP
#define UE4SS_SDK_WBP_ThiefLoot_HPP

class UWBP_ThiefLoot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnimation;                                       // 0x0268 (size: 0x8)
    class UTextBlock* Amount;                                                         // 0x0270 (size: 0x8)
    class UImage* Item_ICON;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* ItemName;                                                       // 0x0280 (size: 0x8)
    int32 Number;                                                                     // 0x0288 (size: 0x4)
    bool ThiefWidget;                                                                 // 0x028C (size: 0x1)
    TSoftObjectPtr<class UTexture2D> ItemIcon;                                        // 0x0290 (size: 0x28)
    FName Item_Name;                                                                  // 0x02B8 (size: 0x8)

    void StartAnimation();
    void OnLoaded_155276644F3D6E6DDEA6D996FD91AEE1(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_WBP_ThiefLoot(int32 EntryPoint);
}; // Size: 0x2C0

#endif
