#ifndef UE4SS_SDK_PC_Tool_WBP_HPP
#define UE4SS_SDK_PC_Tool_WBP_HPP

class UPC_Tool_WBP_C : public UPC_Tool
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    class UImage* BG_Locket_IMG;                                                      // 0x03C0 (size: 0x8)
    class UButton* Blocker_For_Demo;                                                  // 0x03C8 (size: 0x8)
    class UOverlay* FreeOverlay;                                                      // 0x03D0 (size: 0x8)
    class UImage* GamePadMarker;                                                      // 0x03D8 (size: 0x8)
    class UImage* GrayBlocking_IMG;                                                   // 0x03E0 (size: 0x8)
    class UImage* Image_100;                                                          // 0x03E8 (size: 0x8)
    class UOverlay* MainOverlay_NEW;                                                  // 0x03F0 (size: 0x8)
    class UOverlay* Overlay_owned;                                                    // 0x03F8 (size: 0x8)
    class UHorizontalBox* PriceHorizontalBox;                                         // 0x0400 (size: 0x8)
    class UTextBlock* ToolsStatusTXT;                                                 // 0x0408 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Left;                                           // 0x0410 (size: 0x8)

    void OnStateChecked(EToolItemState bIsUnlocked);
    void OnItemUnlocked(FBasketItemStruct Item);
    void GamePadHover(bool Active);
    void ExecuteUbergraph_PC_Tool_WBP(int32 EntryPoint);
}; // Size: 0x418

#endif
