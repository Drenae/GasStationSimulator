#ifndef UE4SS_SDK_CursorWidget_HPP
#define UE4SS_SDK_CursorWidget_HPP

class UCursorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ClosedHandAnim;                                           // 0x0268 (size: 0x8)
    class UWidgetAnimation* MockMockAnim;                                             // 0x0270 (size: 0x8)
    class UImage* ClosedHand;                                                         // 0x0278 (size: 0x8)
    class UImage* CustomCursor;                                                       // 0x0280 (size: 0x8)
    class UImage* OpenedHand;                                                         // 0x0288 (size: 0x8)

    void SetOverlayReference();
    void OnHover();
    void OnUnhovered();
    void BeginCashRegister();
    void EndCashRegister();
    void Construct();
    void OnMapLoaded(const bool LoadedMaps, const bool NewVersion);
    void Destruct();
    void ExecuteUbergraph_CursorWidget(int32 EntryPoint);
}; // Size: 0x290

#endif
