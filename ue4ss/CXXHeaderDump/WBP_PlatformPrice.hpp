#ifndef UE4SS_SDK_WBP_PlatformPrice_HPP
#define UE4SS_SDK_WBP_PlatformPrice_HPP

class UWBP_PlatformPrice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* CarPrice_TXT;                                                   // 0x0268 (size: 0x8)
    class UWBP_PlatformPanelNew_C* PlatformPanelRef;                                  // 0x0270 (size: 0x8)

    void SetPrice(float Value);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_WBP_PlatformPrice(int32 EntryPoint);
}; // Size: 0x278

#endif
