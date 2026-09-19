#ifndef UE4SS_SDK_BP_IceCreamContainer_HPP
#define UE4SS_SDK_BP_IceCreamContainer_HPP

class ABP_IceCreamContainer_C : public AIceCreamContainer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0480 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0488 (size: 0x8)
    class UIce_Cream_flavour_sign_WBP_C* As Ice Cream Flavour Sign WBP;               // 0x0490 (size: 0x8)

    FName GetInteractionName();
    void ReceiveBeginPlay();
    void UI_UpdateAmountWidget();
    void UI_ShowAmountWidgets(bool bShow);
    void ExecuteUbergraph_BP_IceCreamContainer(int32 EntryPoint);
}; // Size: 0x498

#endif
