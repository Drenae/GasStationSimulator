#ifndef UE4SS_SDK_GSS_RadialInventory_WBP_HPP
#define UE4SS_SDK_GSS_RadialInventory_WBP_HPP

class UGSS_RadialInventory_WBP_C : public URadialInventory
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UImage* Hand_Ico;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_74;                                                           // 0x0290 (size: 0x8)
    class UUMG_RadialMenu_C* UMG_RadialMenu;                                          // 0x0298 (size: 0x8)
    bool bControllerInitialized;                                                      // 0x02A0 (size: 0x1)
    TArray<ECircularMenuChoice> ECircularAvaliableOptions;                            // 0x02A8 (size: 0x10)
    ECircularMenuChoice ECircularSelectedItem;                                        // 0x02B8 (size: 0x1)
    FGameplayTag Red Dot Tag;                                                         // 0x02BC (size: 0x8)

    void Add Radial Option(class UTexture2D* Icon, FGameplayTag RedDotTag, bool ItemLocked);
    void Create Radial Options(TArray<ECircularMenuChoice>& ECircularAvaliableOptions);
    void ShowMouseCursor(bool bControllerInitialized);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Event Exit();
    void BndEvt__UMG_RadialMenu_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
    void Event Exit Circular();
    void ExecuteUbergraph_GSS_RadialInventory_WBP(int32 EntryPoint);
}; // Size: 0x2C4

#endif
