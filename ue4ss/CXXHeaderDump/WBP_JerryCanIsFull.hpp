#ifndef UE4SS_SDK_WBP_JerryCanIsFull_HPP
#define UE4SS_SDK_WBP_JerryCanIsFull_HPP

class UWBP_JerryCanIsFull_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* ConstructAnim;                                            // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0270 (size: 0x8)
    class UOverlay* PressKeyOverlay;                                                  // 0x0278 (size: 0x8)

    void Construct();
    void CustomEvent_0();
    void ExecuteUbergraph_WBP_JerryCanIsFull(int32 EntryPoint);
}; // Size: 0x280

#endif
