#ifndef UE4SS_SDK_UMG_BasicRadialIcon_HPP
#define UE4SS_SDK_UMG_BasicRadialIcon_HPP

class UUMG_BasicRadialIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Shake;                                                    // 0x0268 (size: 0x8)
    class UWidgetAnimation* Grow;                                                     // 0x0270 (size: 0x8)
    class UImage* BG_Image;                                                           // 0x0278 (size: 0x8)
    class UImage* Frame;                                                              // 0x0280 (size: 0x8)
    class UGSSButton* GSSButton_58;                                                   // 0x0288 (size: 0x8)
    class UImage* Icon;                                                               // 0x0290 (size: 0x8)
    class UImage* Icon_Blocked;                                                       // 0x0298 (size: 0x8)
    class USizeBox* Sizer;                                                            // 0x02A0 (size: 0x8)
    class UNamedSlot* TaskName_NamedSlot;                                             // 0x02A8 (size: 0x8)
    class UTexture2D* IconImage;                                                      // 0x02B0 (size: 0x8)
    float IconSize;                                                                   // 0x02B8 (size: 0x4)
    FFBasicIconSettings Settings;                                                     // 0x02BC (size: 0x48)
    FLinearColor CurrentColor;                                                        // 0x0304 (size: 0x10)
    bool highlighted;                                                                 // 0x0314 (size: 0x1)
    float alpha;                                                                      // 0x0318 (size: 0x4)
    FGameplayTag Tag;                                                                 // 0x031C (size: 0x8)
    bool ItemLocked;                                                                  // 0x0324 (size: 0x1)

    void CanBeHighlighted(bool& CanBeHighlighted);
    FLinearColor Get_Icon_ColorAndOpacity_0();
    void PreConstruct(bool IsDesignTime);
    void OnHighlight();
    void OnUnhighlight();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_UMG_BasicRadialIcon(int32 EntryPoint);
}; // Size: 0x325

#endif
