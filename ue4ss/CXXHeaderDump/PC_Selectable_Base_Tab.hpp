#ifndef UE4SS_SDK_PC_Selectable_Base_Tab_HPP
#define UE4SS_SDK_PC_Selectable_Base_Tab_HPP

class UPC_Selectable_Base_Tab_C : public UPcBaseTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWrapBox* CardsHolder;                                                      // 0x0298 (size: 0x8)
    class UTextBlock* WarehouseLevel0Allert;                                          // 0x02A0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Left;                                           // 0x02A8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Right;                                          // 0x02B0 (size: 0x8)
    TArray<FPCSelectableCard> CardsToCreate;                                          // 0x02B8 (size: 0x10)
    int32 GamepadIndex;                                                               // 0x02C8 (size: 0x4)
    int32 GamePadPreviousIndex;                                                       // 0x02CC (size: 0x4)
    bool FromRight;                                                                   // 0x02D0 (size: 0x1)
    bool IsAnyChildEnabled;                                                           // 0x02D1 (size: 0x1)
    bool bBlockGamePadA;                                                              // 0x02D2 (size: 0x1)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void TopMenuHandle(FKeyEvent KeyEvent);
    void Construct();
    void OnClicked(TSoftClassPtr<UPcBaseTab> TabToCreate, class UPC_Base_Card* ButtonREF, bool bReplaceExistingWidget);
    void OnFadeOut();
    void unbind();
    void Destruct();
    void CustomEvent_0();
    void ExecuteUbergraph_PC_Selectable_Base_Tab(int32 EntryPoint);
}; // Size: 0x2D3

#endif
