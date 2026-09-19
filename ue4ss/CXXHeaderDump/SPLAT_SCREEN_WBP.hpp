#ifndef UE4SS_SDK_SPLAT_SCREEN_WBP_HPP
#define UE4SS_SDK_SPLAT_SCREEN_WBP_HPP

class USPLAT_SCREEN_WBP_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* Splat_Generator_Canvas;                                       // 0x0268 (size: 0x8)
    class USplat_Generator_Widget_C* Generated_Splat;                                 // 0x0270 (size: 0x8)
    int32 NumberOfSplats;                                                             // 0x0278 (size: 0x4)
    FLinearColor Color;                                                               // 0x027C (size: 0x10)

    void Construct();
    void CustomEvent_0();
    void ExecuteUbergraph_SPLAT_SCREEN_WBP(int32 EntryPoint);
}; // Size: 0x28C

#endif
