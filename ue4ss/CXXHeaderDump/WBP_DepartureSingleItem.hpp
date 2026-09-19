#ifndef UE4SS_SDK_WBP_DepartureSingleItem_HPP
#define UE4SS_SDK_WBP_DepartureSingleItem_HPP

class UWBP_DepartureSingleItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* ActionButton_ForHover;                                             // 0x0268 (size: 0x8)
    class UImage* ItemIcon_IMG;                                                       // 0x0270 (size: 0x8)
    FGeneratedLootInfo ItemToPass;                                                    // 0x0278 (size: 0x80)
    bool IsPlayerCargo;                                                               // 0x02F8 (size: 0x1)
    bool IsItemVisibleLocal;                                                          // 0x02F9 (size: 0x1)
    class UWBP_DepartureScreenSinglePosition_C* ParentREF;                            // 0x0300 (size: 0x8)
    bool bIsLanded;                                                                   // 0x0308 (size: 0x1)

    void Construct();
    void RefreshItemsVisible(class UTexture2D* ItemTexture, EItemIconVisibility IconVisibility);
    void BndEvt__WBP_DepartureSingleItem_ActionButton_ForHover_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_DepartureSingleItem_ActionButton_ForHover_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_DepartureSingleItem(int32 EntryPoint);
}; // Size: 0x309

#endif
