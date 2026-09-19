#ifndef UE4SS_SDK_Achievement_Slot_HPP
#define UE4SS_SDK_Achievement_Slot_HPP

class UAchievement_Slot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* AchiIcon;                                                           // 0x0268 (size: 0x8)
    class UImage* Image_147;                                                          // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_description;                                          // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_Name;                                                 // 0x0280 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0288 (size: 0x8)
    FText AchiName;                                                                   // 0x0290 (size: 0x18)
    FText AchiDescription;                                                            // 0x02A8 (size: 0x18)
    bool bIsHidden;                                                                   // 0x02C0 (size: 0x1)
    bool bIsAchieved;                                                                 // 0x02C1 (size: 0x1)
    class UTexture2D* LockedIcon;                                                     // 0x02C8 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_Achievement_Slot(int32 EntryPoint);
}; // Size: 0x2D0

#endif
