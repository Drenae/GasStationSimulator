#ifndef UE4SS_SDK_WBP_RedDotUiMark_HPP
#define UE4SS_SDK_WBP_RedDotUiMark_HPP

class UWBP_RedDotUiMark_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_53;                                                           // 0x0268 (size: 0x8)
    class UOverlay* Overlay_Tip;                                                      // 0x0270 (size: 0x8)
    class UImage* Pointer_IMG;                                                        // 0x0278 (size: 0x8)
    int32 ViewportX;                                                                  // 0x0280 (size: 0x4)
    int32 ViewportY;                                                                  // 0x0284 (size: 0x4)
    float RadiusTo;                                                                   // 0x0288 (size: 0x4)
    float TipPositionX;                                                               // 0x028C (size: 0x4)
    float TipPositionY;                                                               // 0x0290 (size: 0x4)
    class UWidget* Widget;                                                            // 0x0298 (size: 0x8)
    float Xcorrection;                                                                // 0x02A0 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_WBP_RedDotUiMark(int32 EntryPoint);
}; // Size: 0x2A4

#endif
