#ifndef UE4SS_SDK_PC_Tools_HPP
#define UE4SS_SDK_PC_Tools_HPP

class UPC_Tools_C : public UPC_ToolsTab
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UScrollBox* ScrollBoxTools;                                                 // 0x02C8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Left;                                           // 0x02D0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Right;                                          // 0x02D8 (size: 0x8)
    FTimerHandle TimerRef;                                                            // 0x02E0 (size: 0x8)
    int32 CurrentToolIndex;                                                           // 0x02E8 (size: 0x4)

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void HintsVisibility(bool Visible);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void GamePhadHover();
    void Construct();
    void CustomEvent_0();
    void Destruct();
    void ExecuteUbergraph_PC_Tools(int32 EntryPoint);
}; // Size: 0x2EC

#endif
