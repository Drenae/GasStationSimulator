#ifndef UE4SS_SDK_WBP_OptionAccept_HPP
#define UE4SS_SDK_WBP_OptionAccept_HPP

class UWBP_OptionAccept_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Cancel_ICON;                                                        // 0x0268 (size: 0x8)
    class UOverlay* Cancel_Overlay;                                                   // 0x0270 (size: 0x8)
    class UCanvasPanel* Canvas_Panel_Area;                                            // 0x0278 (size: 0x8)
    class UImage* Confirm_ICON;                                                       // 0x0280 (size: 0x8)
    class UOverlay* Confirm_Overlay;                                                  // 0x0288 (size: 0x8)
    class UImage* Image;                                                              // 0x0290 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_279;                                                          // 0x02A0 (size: 0x8)
    class UImage* Image_827;                                                          // 0x02A8 (size: 0x8)
    class UDragoButton* No;                                                           // 0x02B0 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm;                                        // 0x02B8 (size: 0x8)
    class UWBP_KeyHint_C* WBP_KeyHint_Confirm_1;                                      // 0x02C0 (size: 0x8)
    class UDragoButton* Yes;                                                          // 0x02C8 (size: 0x8)
    class UTexture2D* Face;                                                           // 0x02D0 (size: 0x8)

    void OnGamepadConnected(bool IsGamepadConnected);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_OptionAccept(int32 EntryPoint);
}; // Size: 0x2D8

#endif
